/* Firmware entry: 0x4812616c */

int FUN_ram_4812616c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812458e(&DAT_ram_4ff6c118,1);
  if (iVar1 == 0) {
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): AP enable failed!\r\n",uVar4,uVar3,0xbe,"begin");
  }
  else {
    iVar2 = FUN_ram_48126e48(param_1,1,1000);
    if (iVar2 != 0) {
      return iVar1;
    }
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to start AP!\r\n",uVar4,uVar3,0xc2,"begin");
  }
  return 0;
}


