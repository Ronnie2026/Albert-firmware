/* Firmware entry: 0x48012930 */

undefined4 FUN_ram_48012930(undefined4 param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(2,"rpc_core","W (%lu) %s: Could not identify event[0x%x]\n",uVar1,"rpc_core",
                   param_1);
  return 0xfffffffe;
}


