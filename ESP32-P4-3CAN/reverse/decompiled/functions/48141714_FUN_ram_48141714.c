/* Firmware entry: 0x48141714 */

undefined4 FUN_ram_48141714(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x6c5,"tcp_rexmit",
                     "tcp_rexmit: invalid pcb");
  }
  piVar2 = *(int **)(param_1 + 0xbc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffa;
    if (*(char *)(piVar2[1] + 0xe) == '\x01') {
      iVar5 = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0xbc) = *piVar2;
      piVar1 = (int *)(param_1 + 0xb8);
      while (piVar6 = (int *)0x0, iVar5 != 0) {
        iVar5 = FUN_ram_48137fd6(*(undefined4 *)(*(int *)(iVar5 + 0xc) + 4));
        iVar4 = FUN_ram_48137fd6(*(undefined4 *)(piVar2[3] + 4));
        piVar6 = (int *)*piVar1;
        if (-1 < iVar5 - iVar4) break;
        piVar1 = piVar6;
        iVar5 = *piVar6;
      }
      *piVar2 = (int)piVar6;
      *piVar1 = (int)piVar2;
      if (*piVar2 == 0) {
        *(undefined2 *)(param_1 + 0xb4) = 0;
      }
      if (*(char *)(param_1 + 0x8e) != -1) {
        *(char *)(param_1 + 0x8e) = *(char *)(param_1 + 0x8e) + '\x01';
      }
      *(undefined4 *)(param_1 + 0x80) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}


