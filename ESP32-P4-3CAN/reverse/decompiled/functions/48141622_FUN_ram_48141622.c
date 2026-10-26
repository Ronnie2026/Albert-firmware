/* Firmware entry: 0x48141622 */

undefined4 FUN_ram_48141622(int param_1)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x667,"tcp_rexmit_rto_prepare",
                     "tcp_rexmit_rto_prepare: invalid pcb");
  }
  piVar7 = *(int **)(param_1 + 0xbc);
  if (piVar7 == (int *)0x0) {
    uVar5 = 0xfffffffa;
  }
  else {
    cVar1 = *(char *)(piVar7[1] + 0xe);
    piVar3 = piVar7;
    for (piVar4 = (int *)*piVar7; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      if (cVar1 != '\x01') {
        return 0xfffffffa;
      }
      cVar1 = *(char *)(piVar4[1] + 0xe);
      piVar3 = piVar4;
    }
    uVar5 = 0xfffffffa;
    if (cVar1 == '\x01') {
      uVar2 = *(ushort *)(param_1 + 0x46);
      iVar8 = piVar3[3];
      *piVar3 = *(int *)(param_1 + 0xb8);
      *(ushort *)(param_1 + 0x46) = uVar2 | 0x800;
      *(int **)(param_1 + 0xb8) = piVar7;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      iVar8 = FUN_ram_48137fd6(*(undefined4 *)(iVar8 + 4));
      uVar2 = *(ushort *)(piVar3 + 2);
      uVar6 = FUN_ram_48137fc8(*(undefined2 *)(piVar3[3] + 0xc));
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(uint *)(param_1 + 0x98) = (uint)((uVar6 & 3) != 0) + iVar8 + (uint)uVar2;
      uVar5 = 0;
    }
  }
  return uVar5;
}


