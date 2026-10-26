/* Firmware entry: 0x4814e762 */

void FUN_ram_4814e762(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e244 == 0) {
    DAT_ram_4ff6e244 = FUN_ram_4ff3b144(1);
  }
  iVar1 = FUN_ram_4ff3b5f0(DAT_ram_4ff6e244,0xffffffff);
  if (iVar1 == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4814e2be();
}


