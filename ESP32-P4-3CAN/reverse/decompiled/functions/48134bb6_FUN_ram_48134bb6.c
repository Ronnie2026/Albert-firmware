/* Firmware entry: 0x48134bb6 */

int * FUN_ram_48134bb6(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_1 - 0x36;
  if (9 < uVar2) {
    return (int *)0x0;
  }
  iVar4 = uVar2 * 0x14;
  piVar3 = &DAT_ram_4ff6c614 + uVar2 * 5;
  if (*piVar3 == 0) {
    return (int *)0x0;
  }
  cVar1 = (&DAT_ram_4ff6c623)[iVar4];
  if ((&DAT_ram_4ff6c624)[iVar4] == '\0') {
    (&DAT_ram_4ff6c623)[iVar4] = cVar1 + '\x01';
    if (cVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x196,"sock_inc_used_locked",
                       "sock->fd_used != 0");
    }
  }
  else {
    piVar3 = (int *)0x0;
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x191,"sock_inc_used_locked",
                       "sock->fd_used != 0");
    }
  }
  return piVar3;
}


