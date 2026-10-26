/* Firmware entry: 0x48002170 */

void FUN_ram_48002170(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = DAT_ram_4ff6d9b0;
  do {
    while( true ) {
      if (iVar1 == 0) {
        DAT_ram_4ff47dbc = 0;
        return;
      }
      if (*(int *)(iVar1 + 0x1c) == 0) break;
LAB_ram_48002188:
      iVar1 = *(int *)(iVar1 + 0x20);
    }
    if (0x4000000 < (uint)(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc))) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("heap_caps_init.c",0x4a,"register_heap","heap_size <= HEAP_SIZE_MAX");
    }
    iVar2 = FUN_ram_481a9622();
    *(int *)(iVar1 + 0x1c) = iVar2;
    if (iVar2 == 0) goto LAB_ram_48002188;
    FUN_ram_4ff43474(iVar2,iVar1 + 0x14);
    iVar1 = *(int *)(iVar1 + 0x20);
  } while( true );
}


