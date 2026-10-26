/* Firmware entry: 0x48122164 */

char FUN_ram_48122164(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(param_1 + 1);
  if (((cVar1 != '\0') && (param_2 != 0)) && (*(char *)((int)param_1 + 5) == '\0')) {
    uVar2 = FUN_ram_4815a0b6(*param_1);
    if (uVar2 == 0) {
      uVar2 = FUN_ram_4815a1c4(*param_1);
      if (uVar2 == 0) {
        return cVar1;
      }
      uVar6 = FUN_ram_4ff21a0a();
      uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      uVar4 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      puVar5 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
      if (0x1100 < (int)uVar2) {
        puVar5 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar2 & 0xffffeeff];
      }
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_commit fail: %s %s\r\n",uVar3,uVar4,0x62,"remove",
                       param_2,puVar5);
    }
    else {
      uVar6 = FUN_ram_4ff21a0a();
      uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      uVar4 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      puVar5 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
      if (0x1100 < (int)uVar2) {
        puVar5 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar2 & 0xffffeeff];
      }
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_erase_key fail: %s %s\r\n",uVar3,uVar4,0x5d,
                       "remove",param_2,puVar5);
    }
  }
  return '\0';
}


