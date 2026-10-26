/* Firmware entry: 0x480020d8 */

void FUN_ram_480020d8(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = DAT_ram_4ff6d9b0;
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("heap_caps.c",0x1d6,"heap_caps_get_allocated_size",&DAT_ram_481b2190);
    }
    if (((*(int *)(iVar1 + 0x1c) != 0) && (*(int *)(iVar1 + 0xc) <= param_1)) &&
       (param_1 < *(int *)(iVar1 + 0x10))) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  FUN_ram_4ff43330();
  return;
}


