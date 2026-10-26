/* Firmware entry: 0x4812527a */

int FUN_ram_4812527a(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48124534(&DAT_ram_4ff6c118,1);
  if (iVar1 == 0) {
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA enable failed!\r\n",uVar4,uVar3,0x12e,"begin");
  }
  else {
    iVar2 = FUN_ram_48126e48(param_1,1,1000);
    if (iVar2 != 0) {
      if (param_2 == 0) {
        return iVar1;
      }
      iVar1 = FUN_ram_48125064(param_1);
      return iVar1;
    }
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to start STA!\r\n",uVar4,uVar3,0x132,"begin");
  }
  return 0;
}


