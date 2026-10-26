/* Firmware entry: 0x48126e70 */

void FUN_ram_48126e70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e07c != 0) {
    piVar5 = &DAT_ram_4ff6c18c;
    do {
      iVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      if ((iVar4 != 0) && (iVar4 != param_1)) goto LAB_ram_48126ec0;
    } while (piVar5 != &DAT_ram_4ff6c1a4);
    iVar4 = FUN_ram_481a3b46(PTR_s_IP_EVENT_ram_481da530_ram_48237730,0xffffffff,&LAB_ram_48126c0a);
    if (iVar4 == 0) {
      DAT_ram_4ff6e07c = 0;
    }
    else {
      uVar6 = FUN_ram_4ff21a0a();
      uVar1 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                              );
      uVar2 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to unregister event handler\r\n",uVar2,uVar1,
                       0x10a,"destroyNetif");
    }
  }
LAB_ram_48126ec0:
  piVar5 = &DAT_ram_4ff6c18c;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_ram_48158a08();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_4ff3ff7a();
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar4 = 0;
  while( true ) {
    iVar3 = *piVar5;
    piVar5 = piVar5 + 1;
    if ((iVar3 != 0) && (iVar3 == param_1)) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 6) {
      return;
    }
  }
  (&DAT_ram_4ff6c18c)[iVar4] = 0;
  return;
}


