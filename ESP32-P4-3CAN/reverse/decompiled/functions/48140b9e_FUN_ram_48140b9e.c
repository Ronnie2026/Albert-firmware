/* Firmware entry: 0x48140b9e */

undefined4 FUN_ram_48140b9e(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  ushort uVar10;
  uint uVar11;
  undefined2 uVar12;
  int iVar13;
  int *piStack_50;
  uint uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  uVar11 = (uint)*(ushort *)(param_1 + 0x7e);
  uVar10 = *(ushort *)(param_1 + 0xae) >> 1;
  if (uVar11 < uVar10) {
    uVar6 = uVar11;
    if (uVar11 != 0) goto LAB_ram_48140d0e;
  }
  else {
    uVar6 = (uint)uVar10;
    if (uVar10 != 0) {
LAB_ram_48140d0e:
      uVar11 = uVar6;
    }
  }
  if (param_2 == 0) {
    return 0xfffffff0;
  }
  if ((2 < *(int *)(param_1 + 0x3c) - 2U) && (*(int *)(param_1 + 0x3c) != 7)) {
    return 0xfffffff5;
  }
  if (param_3 == 0) {
    uVar10 = *(ushort *)(param_1 + 0xb2);
    piVar9 = *(int **)(param_1 + 0xb8);
    if (*(int **)(param_1 + 0xb8) == (int *)0x0) {
      if (*(short *)(param_1 + 0xb4) != 0) goto LAB_ram_48141038;
      piVar5 = (int *)0x0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      goto LAB_ram_48140e10;
    }
LAB_ram_48140d2c:
    do {
      piVar5 = piVar9;
      piVar9 = (int *)*piVar5;
    } while ((int *)*piVar5 != (int *)0x0);
    iVar13 = ((int)(uint)*(byte *)((int)piVar5 + 10) >> 2 & 4U) +
             (*(byte *)((int)piVar5 + 10) & 1) * 4;
    if (uVar11 < (uint)*(ushort *)(piVar5 + 2) + iVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x1e9,"tcp_write",
                       "mss_local is too small");
    }
    uVar6 = (uint)*(ushort *)(param_1 + 0xb4);
    piVar9 = (int *)0x0;
    piStack_50 = piVar5;
    if (uVar6 != 0) {
      uVar7 = (uVar11 - *(ushort *)(piVar5 + 2)) - iVar13 & 0xffff;
      if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x1fb,"tcp_write",
                         "inconsistent oversize vs. space");
      }
      uStack_48 = uVar6;
      uVar8 = uVar6;
      if (param_3 < uVar6) {
        uStack_48 = param_3;
        uVar8 = param_3 & 0xffff;
      }
      if (uVar7 < uVar8) {
        uStack_48 = uVar7;
      }
      uStack_48 = uStack_48 & 0xffff;
      uVar6 = uVar6 - uStack_48;
      uVar12 = (undefined2)uVar6;
      if ((uVar6 & 0xffff) == 0) {
        if (uStack_48 < param_3) goto LAB_ram_48140c40;
      }
      else {
        if (param_3 != uStack_48) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x203,"tcp_write",
                           "inconsistent oversize vs. len");
        }
        uStack_48 = param_3;
        if (param_3 == 0) {
          *(short *)(param_1 + 0xb4) = (short)(uVar6 * 0x10000 >> 0x10);
          goto LAB_ram_48140e0a;
        }
      }
      goto LAB_ram_48140da4;
    }
    piVar5 = (int *)0x0;
    if (param_3 != 0) {
      uStack_48 = 0;
      goto LAB_ram_48140c40;
    }
  }
  else {
    if ((*(ushort *)(param_1 + 0xb0) < param_3) ||
       (uVar10 = *(ushort *)(param_1 + 0xb2), 0xb6 < uVar10)) {
      *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x80;
      return 0xffffffff;
    }
    if (uVar10 != 0) {
      piVar9 = *(int **)(param_1 + 0xb8);
      if (*(int *)(param_1 + 0xbc) == 0) {
        if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x158,"tcp_write_checks",
                           "tcp_write: pbufs on queue => at least one queue non-empty");
        }
      }
      else if (piVar9 == (int *)0x0) goto LAB_ram_48140c34;
      goto LAB_ram_48140d2c;
    }
    if ((*(int *)(param_1 + 0xbc) != 0) || (*(int *)(param_1 + 0xb8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x15b,"tcp_write_checks",
                       "tcp_write: no pbufs on queue => both queues empty");
    }
LAB_ram_48140c34:
    uStack_48 = (uint)*(ushort *)(param_1 + 0xb4);
    piStack_50 = (int *)0x0;
    if (uStack_48 != 0) {
LAB_ram_48141038:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x24d,"tcp_write",
                       "unsent_oversize mismatch (pcb->unsent is NULL)");
    }
LAB_ram_48140c40:
    piVar9 = (int *)0x0;
    uVar6 = uStack_48;
    piVar3 = (int *)0x0;
    do {
      uVar7 = param_3 - uVar6;
      if (uVar11 < (param_3 - uVar6 & 0xffff)) {
        uVar7 = uVar11;
      }
      uVar8 = uVar7 & 0xffff;
      piVar5 = (int *)FUN_ram_4813ad9a(0x4a,uVar11,0x280);
      if (piVar5 == (int *)0x0) {
LAB_ram_48140e4c:
        *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 0x80;
        if (piVar9 != (int *)0x0) {
          FUN_ram_4813c75e(piVar9);
        }
        if (*(short *)(param_1 + 0xb2) == 0) {
          return 0xffffffff;
        }
        if (*(int *)(param_1 + 0xbc) != 0) {
          return 0xffffffff;
        }
        if (*(int *)(param_1 + 0xb8) != 0) {
          return 0xffffffff;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x32a,"tcp_write",
                         "tcp_write: valid queue length");
      }
      if (*piVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x10e,"tcp_pbuf_prealloc",
                         "need unchained pbuf");
      }
      uVar1 = *(ushort *)((int)piVar5 + 10);
      piVar5[2] = uVar8 | uVar7 << 0x10;
      FUN_ram_4ff45158(piVar5[1],param_2 + uVar6,uVar8);
      sVar4 = FUN_ram_4813b0d2(piVar5);
      uVar10 = sVar4 + uVar10;
      if (0xb7 < uVar10) {
        FUN_ram_4813ac74(piVar5);
        goto LAB_ram_48140e4c;
      }
      piVar5 = (int *)FUN_ram_481407b2(param_1,piVar5,0,*(int *)(param_1 + 0xa8) + uVar6,0);
      if (piVar5 == (int *)0x0) goto LAB_ram_48140e4c;
      piVar2 = piVar5;
      if (piVar9 != (int *)0x0) {
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x2ae,"tcp_write",
                           "prev_seg != NULL");
        }
        *piVar3 = (int)piVar5;
        piVar2 = piVar9;
      }
      piVar9 = piVar2;
      uVar6 = uVar6 + uVar8 & 0xffff;
      piVar3 = piVar5;
    } while (uVar6 < param_3);
    iVar13 = uVar1 - uVar8;
    uVar12 = (undefined2)iVar13;
    if (uStack_48 == 0) {
      *(short *)(param_1 + 0xb4) = (short)((uint)(iVar13 * 0x10000) >> 0x10);
      if (piStack_50 == (int *)0x0) {
        *(int **)(param_1 + 0xb8) = piVar9;
        goto LAB_ram_48140e10;
      }
    }
    else {
LAB_ram_48140da4:
      piVar3 = (int *)piStack_50[1];
      sVar4 = (short)uStack_48;
      if (piVar3 != (int *)0x0) {
        *(short *)(piVar3 + 2) = (short)piVar3[2] + sVar4;
        piVar2 = (int *)*piVar3;
        if ((int *)*piVar3 == (int *)0x0) goto LAB_ram_48140dce;
        do {
          do {
            piVar3 = piVar2;
            *(short *)(piVar3 + 2) = (short)piVar3[2] + sVar4;
            piVar2 = (int *)*piVar3;
          } while ((int *)*piVar3 != (int *)0x0);
LAB_ram_48140dce:
          FUN_ram_4ff45158(piVar3[1] + (uint)*(ushort *)((int)piVar3 + 10),param_2,uStack_48);
          *(short *)((int)piVar3 + 10) = *(short *)((int)piVar3 + 10) + sVar4;
          piVar2 = (int *)*piVar3;
        } while ((int *)*piVar3 != (int *)0x0);
      }
      *(short *)(piStack_50 + 2) = (short)piStack_50[2] + sVar4;
      *(undefined2 *)(param_1 + 0xb4) = uVar12;
    }
  }
LAB_ram_48140e0a:
  *piStack_50 = (int)piVar9;
LAB_ram_48140e10:
  *(ushort *)(param_1 + 0xb2) = uVar10;
  *(uint *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + param_3;
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) - (short)param_3;
  if (((uVar10 != 0) && (*(int *)(param_1 + 0xbc) == 0)) && (*(int *)(param_1 + 0xb8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x315,"tcp_write",
                     "tcp_write: valid queue length");
  }
  if (((piVar5 != (int *)0x0) && (piVar5[3] != 0)) && ((param_4 & 2) == 0)) {
    uVar10 = *(ushort *)(piVar5[3] + 0xc);
    uVar11 = FUN_ram_48137fc8(8);
    uVar11 = uVar10 | uVar11;
    iVar13 = piVar5[3];
    *(char *)(iVar13 + 0xc) = (char)uVar11;
    *(char *)(iVar13 + 0xd) = (char)(uVar11 >> 8);
  }
  return 0;
}


