/* Firmware entry: 0x4813444a */

int FUN_ram_4813444a(uint *param_1,ushort param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = &DAT_ram_4ff6c614;
  iVar3 = 0;
  while ((FUN_ram_4814e762(), *piVar2 != 0 || (*(char *)((int)piVar2 + 0xf) != '\0'))) {
    iVar3 = iVar3 + 1;
    FUN_ram_4814e79e();
    piVar2 = piVar2 + 5;
    if (iVar3 == 10) {
      return -1;
    }
  }
  iVar4 = iVar3 * 0x14;
  (&DAT_ram_4ff6c623)[iVar4] = 1;
  (&DAT_ram_4ff6c624)[iVar4] = 0;
  (&DAT_ram_4ff6c614)[iVar3 * 5] = param_1;
  FUN_ram_4814e79e();
  cVar1 = (&DAT_ram_4ff6c622)[iVar4];
  *(undefined4 *)(iVar4 + 0x4ff6c618) = 0;
  if (cVar1 == '\0') {
    uVar5 = *param_1;
    *(undefined2 *)(iVar4 + 0x4ff6c61c) = 0;
    *(undefined2 *)(iVar4 + 0x4ff6c620) = 0;
    *(ushort *)(iVar4 + 0x4ff6c61e) = (uVar5 & 0xf0) != 0x10 | param_2;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar3 + 0x36;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/sockets.c",0x239,"alloc_socket",
                   "sockets[i].select_waiting == 0");
}


