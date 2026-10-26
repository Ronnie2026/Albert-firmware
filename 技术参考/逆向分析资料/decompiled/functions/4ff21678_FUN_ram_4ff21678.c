/* Firmware entry: 0x4ff21678 */

void FUN_ram_4ff21678(int *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dfc,0xffffffff);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4ff3ae5a(iVar1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("locks.c",0x70,"_lock_close","xQueueGetMutexHolder( ( h ) ) == ((void *)0)");
    }
    FUN_ram_4ff3ba8e(iVar1);
    *param_1 = 0;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dfc);
  return;
}


