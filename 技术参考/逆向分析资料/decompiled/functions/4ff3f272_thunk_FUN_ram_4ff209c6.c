/* Firmware entry: 0x4ff3f272 */

void thunk_FUN_ram_4ff209c6(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = DAT_ram_4ff6d9b0;
  if (param_1 == 0) {
    return;
  }
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("heap_caps_base.c",0x50,"heap_caps_free",
                       "heap != NULL && \"free() target pointer is outside heap areas\"");
    }
    if (((*(int *)(iVar1 + 0x1c) != 0) && (*(int *)(iVar1 + 0xc) <= param_1)) &&
       (param_1 < *(int *)(iVar1 + 0x10))) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  FUN_ram_4ff432c4();
  return;
}


