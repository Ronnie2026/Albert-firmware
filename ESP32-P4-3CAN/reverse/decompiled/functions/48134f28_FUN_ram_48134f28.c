/* Firmware entry: 0x48134f28 */

void FUN_ram_48134f28(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4814e762();
  cVar1 = *(char *)((int)param_1 + 0xf);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x253,"free_socket_locked",
                     "sock->fd_used > 0");
  }
  *(char *)((int)param_1 + 0xf) = cVar1 + -1;
  if (cVar1 == '\x01') {
    iVar2 = param_1[1];
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    iVar3 = *param_1;
    param_1[1] = 0;
    *param_1 = 0;
    FUN_ram_4814e79e();
    if (iVar2 != 0) {
      if (param_2 == 0) {
        FUN_ram_481517f0(iVar2);
      }
      else {
        FUN_ram_4813ac74();
      }
    }
    if (iVar3 == 0) {
      return;
    }
    FUN_ram_4814f028(iVar3);
    return;
  }
  *(char *)(param_1 + 4) = (char)param_2 + '\x02';
  FUN_ram_4814e79e();
  return;
}


