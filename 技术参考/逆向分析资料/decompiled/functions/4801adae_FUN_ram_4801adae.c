/* Firmware entry: 0x4801adae */

undefined4 FUN_ram_4801adae(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("rpc_slave_if.c",0x13b,"rpc_slaveif_wifi_set_protocol","req");
  }
  *(undefined2 *)(param_1 + 2) = 0x129;
  iVar1 = FUN_ram_48012c42();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x128) == 0) {
      uVar2 = FUN_ram_480129c2(param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_api","E (%lu) %s: Failed to send control req 0x%x\n\n",uVar2,"rpc_api",
                     *(undefined2 *)(param_1 + 2));
  }
  return 0;
}


