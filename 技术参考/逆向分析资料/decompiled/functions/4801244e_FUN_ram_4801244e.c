/* Firmware entry: 0x4801244e */

void FUN_ram_4801244e(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Exiting thread, handle invalid\n",uVar1,"rpc_core");
  FUN_ram_48012448();
  return;
}


