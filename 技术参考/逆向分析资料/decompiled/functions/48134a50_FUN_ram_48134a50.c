/* Firmware entry: 0x48134a50 */

void FUN_ram_48134a50(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x1a7,"done_socket",
                     "sock != NULL");
  }
  FUN_ram_4814e762();
  cVar1 = *(char *)((int)param_1 + 0xf);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x1aa,"done_socket",
                     "sock->fd_used > 0");
  }
  *(char *)((int)param_1 + 0xf) = cVar1 + -1;
  if (cVar1 != '\x01') {
    FUN_ram_4814e79e();
    return;
  }
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 == 0) {
    FUN_ram_4814e79e();
    return;
  }
  iVar4 = param_1[1];
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  iVar3 = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_ram_4814e79e();
  if (iVar4 != 0) {
    if ((bVar2 & 1) == 0) {
      FUN_ram_481517f0(iVar4);
    }
    else {
      FUN_ram_4813ac74();
    }
  }
  if (iVar3 != 0) {
    FUN_ram_4814f028(iVar3);
    return;
  }
  return;
}


