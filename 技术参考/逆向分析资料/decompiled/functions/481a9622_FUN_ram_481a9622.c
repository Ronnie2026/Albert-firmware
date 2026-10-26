/* Firmware entry: 0x481a9622 */

undefined4 * FUN_ram_481a9622(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("multi_heap.c",0x8c,"multi_heap_register_impl","start_ptr");
  }
  if (0x13 < param_2) {
    iVar1 = param_2 - 0x14;
    iVar2 = FUN_ram_481a9c6a(param_1 + 5,iVar1,0);
    param_1[4] = iVar2;
    if (iVar2 != 0) {
      *param_1 = 0;
      iVar2 = FUN_ram_4ff44baa();
      param_1[3] = iVar1;
      param_1[1] = iVar1 - iVar2;
      param_1[2] = iVar1 - iVar2;
      return param_1;
    }
  }
  return (undefined4 *)0x0;
}


