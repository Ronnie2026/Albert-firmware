/* Firmware entry: 0x48122518 */

int FUN_ram_48122518(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*(char *)(param_1 + 1) != '\0') && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (*(char *)((int)param_1 + 5) == '\0')))) {
    uVar1 = FUN_ram_4815a218(*param_1);
    if (uVar1 == 0) {
      uVar1 = FUN_ram_4815a1c4(*param_1);
      if (uVar1 == 0) {
        return param_4;
      }
      uVar5 = FUN_ram_4ff21a0a(param_4);
      uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      puVar4 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
      if (0x1100 < (int)uVar1) {
        puVar4 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar1 & 0xffffeeff];
      }
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_commit fail: %s %s\r\n",uVar2,uVar3,0x128,
                       "putBytes",param_2,puVar4);
    }
    else {
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      puVar4 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
      if (0x1100 < (int)uVar1) {
        puVar4 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar1 & 0xffffeeff];
      }
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_set_blob fail: %s %s\r\n",uVar2,uVar3,0x123,
                       "putBytes",param_2,puVar4);
    }
  }
  return 0;
}


