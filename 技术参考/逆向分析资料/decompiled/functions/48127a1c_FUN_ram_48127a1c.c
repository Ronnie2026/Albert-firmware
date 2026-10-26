/* Firmware entry: 0x48127a1c */

int FUN_ram_48127a1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_2 != 0) && (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 0x18) != 2)) {
    iVar1 = FUN_ram_48158b6e();
    if (iVar1 == 0) {
      return param_2;
    }
    uVar5 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    uVar3 = FUN_ram_480018de(iVar1);
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to get netif mac: 0x%04x %s\r\n",uVar4,uVar2,
                     0x297,"macAddress",iVar1,uVar3);
  }
  return 0;
}


