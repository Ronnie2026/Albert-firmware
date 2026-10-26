/* Firmware entry: 0x48012896 */

void FUN_ram_48012896(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Ctrl msg rx Q is not created\n",uVar1,"rpc_core");
  FUN_ram_48012890();
  return;
}


