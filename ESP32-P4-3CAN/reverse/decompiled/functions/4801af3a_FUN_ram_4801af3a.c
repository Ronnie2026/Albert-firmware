/* Firmware entry: 0x4801af3a */

void FUN_ram_4801af3a(void)

{
  undefined1 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined1 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,400);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 0x128) = 0;
    *(undefined4 *)(puVar1 + 300) = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("rpc_wrap.c",0x31,"RPC_DEFAULT_REQ","new_req");
}


