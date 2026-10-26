/* Firmware entry: 0x48011b9a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48011b9a(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: NULL app_req\n",uVar1,"rpc_core");
    if (_DAT_ram_00000128 != 0) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x128) != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"rpc_core","W (%lu) %s: ASYNC Timeout for req [0x%x]\n",uVar1,"rpc_core",
                     *(undefined2 *)(param_1 + 2));
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x128);
    puVar2 = (undefined1 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,400);
    if (puVar2 == (undefined1 *)0x0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: %s, Failed to allocate memory\n",uVar1,"rpc_core",
                       "rpc_async_timeout_handler");
      return;
    }
    *(short *)(puVar2 + 2) = *(short *)(param_1 + 2) + 0x100;
    *puVar2 = 2;
    *(undefined4 *)(puVar2 + 8) = 0x2f0d;
                    /* WARNING: Could not recover jumptable at 0x48011c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: NULL app_req->resp_cb\n",uVar1,"rpc_core");
  return;
}


