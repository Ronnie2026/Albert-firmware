/* Firmware entry: 0x48141118 */

undefined4 FUN_ram_48141118(int param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int *piVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x34e,"tcp_split_unsent_seg",
                     "tcp_split_unsent_seg: invalid pcb");
  }
  piVar3 = *(int **)(param_1 + 0xb8);
  if (piVar3 != (int *)0x0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x356,"tcp_split_unsent_seg",
                       "Can\'t split segment into length 0");
    }
    uVar12 = (uint)*(ushort *)(piVar3 + 2);
    if (uVar12 <= param_2) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x7e) < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x35e,"tcp_split_unsent_seg",
                       "split <= mss");
    }
    uVar13 = (uint)*(byte *)((int)piVar3 + 10);
    iVar9 = (uVar13 & 1) * 4 + ((int)uVar13 >> 2 & 4U);
    uVar10 = uVar12 - param_2 & 0xffff;
    iVar6 = FUN_ram_4813ad9a(0x4a,iVar9 + uVar10 & 0xffff,0x280);
    if (iVar6 != 0) {
      uVar7 = FUN_ram_4813b38c(piVar3[1],*(int *)(iVar6 + 4) + iVar9,uVar10,
                               ((uint)*(ushort *)(piVar3[1] + 8) - (uint)*(ushort *)(piVar3 + 2)) +
                               param_2 & 0xffff);
      if (uVar7 == uVar10) {
        uVar7 = FUN_ram_48137fc8(*(undefined2 *)(piVar3[3] + 0xc));
        uVar10 = uVar7 & 0x3f;
        if ((uVar7 & 8) == 0) {
          uVar11 = 0;
        }
        else {
          uVar10 = uVar7 & 0x37;
          uVar11 = 8;
        }
        if ((uVar7 & 1) != 0) {
          uVar10 = uVar10 & 0xfe;
          uVar11 = uVar11 | 1;
        }
        iVar9 = FUN_ram_48137fd6(*(undefined4 *)(piVar3[3] + 4));
        piVar8 = (int *)FUN_ram_481407b2(param_1,iVar6,uVar11,param_2 + iVar9,uVar13);
        if (piVar8 != (int *)0x0) {
          sVar4 = FUN_ram_4813b0d2(piVar3[1]);
          iVar6 = piVar3[1];
          uVar1 = *(ushort *)(iVar6 + 8);
          *(short *)(param_1 + 0xb2) = *(short *)(param_1 + 0xb2) - sVar4;
          FUN_ram_4813af5e(iVar6,(uint)uVar1 + (param_2 - uVar12 & 0xffff) & 0xffff);
          *(short *)(piVar3 + 2) = (short)((param_2 - uVar12) * 0x10000 >> 0x10) + (short)piVar3[2];
          uVar2 = *(undefined2 *)(piVar3[3] + 0xc);
          uVar5 = FUN_ram_48137fc8(uVar10);
          iVar9 = piVar3[3];
          iVar6 = piVar3[1];
          *(byte *)(iVar9 + 0xd) = (byte)((ushort)uVar2 >> 8) | (byte)((ushort)uVar5 >> 8);
          *(byte *)(iVar9 + 0xc) = (byte)uVar2 | (byte)uVar5;
          sVar4 = FUN_ram_4813b0d2(iVar6);
          iVar6 = piVar8[1];
          *(short *)(param_1 + 0xb2) = sVar4 + *(short *)(param_1 + 0xb2);
          sVar4 = FUN_ram_4813b0d2(iVar6);
          iVar6 = *piVar3;
          *(short *)(param_1 + 0xb2) = sVar4 + *(short *)(param_1 + 0xb2);
          *piVar8 = iVar6;
          *piVar3 = (int)piVar8;
          if (*piVar8 != 0) {
            return 0;
          }
          *(undefined2 *)(param_1 + 0xb4) = 0;
          return 0;
        }
      }
      else {
        FUN_ram_4813ac74(iVar6);
      }
    }
  }
  return 0xffffffff;
}


