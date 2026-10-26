/* Firmware entry: 0x48121fee */

undefined4 FUN_ram_48121fee(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 4) != '\0') {
    return 0;
  }
  *(char *)(param_1 + 5) = (char)param_3;
  if (param_4 == 0) {
    uVar1 = FUN_ram_4815a012(param_2,param_3 ^ 1,param_1);
  }
  else {
    uVar1 = FUN_ram_48159f50(param_4);
    if (uVar1 != 0) {
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      puVar4 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
      if (0x1100 < (int)uVar1) {
        puVar4 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar1 & 0xffffeeff];
      }
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_flash_init_partition failed: %s\r\n",uVar2,uVar3,
                       0x27,"begin",puVar4);
      return 0;
    }
    uVar1 = FUN_ram_48159fd2(param_4,param_2,param_3 ^ 1,param_1);
  }
  if (uVar1 != 0) {
    uVar5 = FUN_ram_4ff21a0a();
    uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                            );
    puVar4 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
    if (0x1100 < (int)uVar1) {
      puVar4 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar1 & 0xffffeeff];
    }
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_open failed: %s\r\n",uVar2,uVar3,0x2f,"begin",puVar4
                    );
    return 0;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return 1;
}


