/* Firmware entry: 0x481227c4 */

undefined4 FUN_ram_481227c4(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [12];
  int local_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_24[0] = 0;
  if ((*(char *)(param_2 + 1) != '\0') && (param_3 != 0)) {
    uVar2 = FUN_ram_4815a546(*param_2,param_3,0,local_24);
    if (uVar2 == 0) {
      iVar1 = -(local_24[0] + 0xfU & 0xfffffff0);
      uVar2 = FUN_ram_4815a546(*param_2,param_3,auStack_30 + iVar1,local_24);
      if (uVar2 != 0) {
        uVar6 = FUN_ram_4ff21a0a();
        uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
        uVar4 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                                );
        puVar5 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
        if (0x1100 < (int)uVar2) {
          puVar5 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar2 & 0xffffeeff];
        }
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_get_str fail: %s %s\r\n",uVar3,uVar4,0x201,
                         "getString",param_3,puVar5);
        FUN_ram_4802a8ec(param_1,param_4);
        return param_1;
      }
      FUN_ram_4802a8a8(param_1,auStack_30 + iVar1);
      return param_1;
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
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_get_str len fail: %s %s\r\n",uVar3,uVar4,0x1fa,
                     "getString",param_3,puVar5);
  }
  FUN_ram_4802a8ec(param_1,param_4);
  return param_1;
}


