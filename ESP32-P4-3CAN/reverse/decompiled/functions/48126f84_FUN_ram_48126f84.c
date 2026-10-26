/* Firmware entry: 0x48126f84 */

undefined4 FUN_ram_48126f84(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 4) != 0) && (param_2 < 6)) {
    *(int *)(param_1 + 0x18) = param_2;
    uVar1 = FUN_ram_48159652(*(int *)(param_1 + 4),1);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_ram_48159652(*(undefined4 *)(param_1 + 4),2);
    iVar3 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    (&DAT_ram_4ff6c18c)[*(int *)(param_1 + 0x18)] = param_1;
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4ff3fbfa();
      *(int *)(param_1 + 8) = iVar3;
      if (iVar3 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar1 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                                );
        uVar2 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Interface Event Group Create Failed!\r\n",uVar2,
                         uVar1,299,"initNetif");
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      FUN_ram_4ff3fe68(iVar3,*(undefined4 *)(param_1 + 0xc));
    }
    if ((DAT_ram_4ff6e07c != 0) ||
       (iVar3 = FUN_ram_481a3b24(PTR_s_IP_EVENT_ram_481da530_ram_48237730,0xffffffff,
                                 &LAB_ram_48126c0a,0,&DAT_ram_4ff6e07c), iVar3 == 0)) {
      return 1;
    }
    uVar4 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkInterface.cpp"
                            );
    uVar2 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): event_handler_instance_register for IP_EVENT Failed!\r\n"
                     ,uVar2,uVar1,0x132,"initNetif");
  }
  return 0;
}


