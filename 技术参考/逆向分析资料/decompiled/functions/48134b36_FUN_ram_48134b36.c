/* Firmware entry: 0x48134b36 */

undefined4 * FUN_ram_48134b36(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_1 - 0x36;
  if (uVar2 < 10) {
    FUN_ram_4814e762();
    iVar3 = uVar2 * 0x14;
    if ((&DAT_ram_4ff6c624)[iVar3] == '\0') {
      cVar1 = (&DAT_ram_4ff6c623)[iVar3];
      (&DAT_ram_4ff6c623)[iVar3] = cVar1 + '\x01';
      if (cVar1 != -1) {
        FUN_ram_4814e79e();
        return &DAT_ram_4ff6c614 + uVar2 * 5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x184,"sock_inc_used",
                       "sock->fd_used != 0");
    }
    FUN_ram_4814e79e();
  }
  return (undefined4 *)0x0;
}


