/* Firmware entry: 0x48141ae6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48141ae6(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  ushort uVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x4e5,"tcp_output",
                     "tcp_output: invalid pcb");
  }
  if (param_1[0xf] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x4e7,"tcp_output",
                     "don\'t call tcp_output for listen-pcbs");
  }
  if (DAT_ram_4ff6e1d4 == param_1) {
    return 0;
  }
  piVar21 = (int *)param_1[0x2e];
  if (piVar21 == (int *)0x0) {
    uVar13 = *(ushort *)((int)param_1 + 0x46);
    if ((uVar13 & 2) != 0) {
      iVar4 = FUN_ram_48141942();
      return iVar4;
    }
    goto LAB_ram_48141bc4;
  }
  piVar18 = param_1 + 6;
  uVar13 = *(ushort *)(param_1 + 0x25);
  uVar2 = *(ushort *)(param_1 + 0x2b);
  iVar4 = FUN_ram_48140a3a(param_1,param_1,piVar18);
  if (iVar4 == 0) {
    return -4;
  }
  iVar10 = *param_1;
  if ((char)param_1[5] == '\x06') {
    if (((iVar10 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) {
      iVar10 = param_1[3];
      goto joined_r0x48141fec;
    }
  }
  else {
joined_r0x48141fec:
    if (iVar10 == 0) {
      piVar7 = (int *)(iVar4 + 4);
      if (((char)param_1[0xb] == '\x06') &&
         (piVar7 = (int *)FUN_ram_481482f0(iVar4,piVar18), piVar7 == (int *)0x0)) {
        return -4;
      }
      iVar10 = piVar7[5];
      *(char *)(param_1 + 5) = (char)iVar10;
      if ((char)iVar10 == '\x06') {
        iVar17 = piVar7[1];
        iVar9 = piVar7[2];
        iVar12 = piVar7[3];
        iVar10 = piVar7[4];
        *param_1 = *piVar7;
        param_1[1] = iVar17;
        param_1[2] = iVar9;
        param_1[3] = iVar12;
        *(char *)(param_1 + 4) = (char)iVar10;
      }
      else {
        *param_1 = *piVar7;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
  }
  uVar16 = (uint)uVar13;
  if ((uint)uVar2 < (uint)uVar13) {
    uVar16 = (uint)uVar2;
  }
  iVar10 = FUN_ram_48137fd6(*(undefined4 *)(piVar21[3] + 4));
  if (uVar16 < ((uint)*(ushort *)(piVar21 + 2) - param_1[0x24]) + iVar10) {
    if (((*(ushort *)(param_1 + 0x2b) == uVar16) && (param_1[0x2f] == 0)) &&
       (*(char *)((int)param_1 + 0xed) == '\0')) {
      *(undefined1 *)((int)param_1 + 0xee) = 0;
      *(undefined2 *)(param_1 + 0x3b) = 0x100;
    }
    if ((*(ushort *)((int)param_1 + 0x46) & 2) == 0) {
      *(ushort *)((int)param_1 + 0x46) = *(ushort *)((int)param_1 + 0x46) & 0xff7f;
      return 0;
    }
    iVar4 = FUN_ram_48141942(param_1);
    return iVar4;
  }
  *(undefined1 *)((int)param_1 + 0xed) = 0;
  piVar11 = (int *)param_1[0x2f];
  piVar7 = (int *)0x0;
  while (piVar15 = piVar11, piVar15 != (int *)0x0) {
    piVar7 = piVar15;
    piVar11 = (int *)*piVar15;
  }
  do {
    iVar10 = FUN_ram_48137fd6(*(undefined4 *)(piVar21[3] + 4));
    if (uVar16 < (iVar10 - param_1[0x24]) + (uint)*(ushort *)(piVar21 + 2)) {
      piVar11 = (int *)param_1[0x2e];
      uVar13 = *(ushort *)((int)param_1 + 0x46);
LAB_ram_48141f52:
      if (piVar11 != (int *)0x0) goto LAB_ram_48141bc4;
      goto LAB_ram_48141eac;
    }
    uVar5 = FUN_ram_48137fc8(*(undefined2 *)(piVar21[3] + 0xc));
    if ((uVar5 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x53a,"tcp_output",
                       "RST not expected here!");
    }
    if ((((param_1[0x2f] != 0) && (uVar13 = *(ushort *)((int)param_1 + 0x46), (uVar13 & 0x44) == 0))
        && (((piVar11 = (int *)param_1[0x2e], piVar11 == (int *)0x0 ||
             ((*piVar11 == 0 && (*(ushort *)(piVar11 + 2) < *(ushort *)((int)param_1 + 0x7e))))) &&
            ((short)param_1[0x2c] != 0)))) &&
       ((*(ushort *)((int)param_1 + 0xb2) < 0xb7 && ((uVar13 & 0xa0) == 0)))) goto LAB_ram_48141f52;
    iVar10 = piVar21[3];
    if (param_1[0xf] != 2) {
      uVar13 = *(ushort *)(iVar10 + 0xc);
      uVar5 = FUN_ram_48137fc8(0x10);
      uVar5 = uVar13 | uVar5;
      iVar10 = piVar21[3];
      *(char *)(iVar10 + 0xd) = (char)(uVar5 >> 8);
      *(char *)(iVar10 + 0xc) = (char)uVar5;
    }
    if (*(char *)(piVar21[1] + 0xe) == '\x01') {
      uVar6 = FUN_ram_48137fd6(param_1[0x14]);
      uVar3 = *(undefined2 *)((int)param_1 + 0x56);
      *(char *)(iVar10 + 8) = (char)uVar6;
      *(char *)(iVar10 + 10) = (char)((uint)uVar6 >> 0x10);
      *(char *)(iVar10 + 0xb) = (char)((uint)uVar6 >> 0x18);
      *(char *)(iVar10 + 9) = (char)((uint)uVar6 >> 8);
      iVar17 = piVar21[3];
      uVar3 = FUN_ram_48137fc8(uVar3);
      uVar13 = *(ushort *)((int)param_1 + 0x56);
      iVar10 = param_1[0x14];
      *(char *)(iVar17 + 0xe) = (char)uVar3;
      *(char *)(iVar17 + 0xf) = (char)((ushort)uVar3 >> 8);
      param_1[0x16] = iVar10 + (uint)uVar13;
      bVar1 = *(byte *)((int)piVar21 + 10);
      iVar10 = piVar21[3];
      puVar19 = (undefined4 *)(iVar10 + 0x14);
      if ((bVar1 & 1) != 0) {
        uVar5 = FUN_ram_4813c942(0x5a0,iVar4,piVar18);
        uVar6 = FUN_ram_48137fd6(uVar5 | 0x2040000);
        *(undefined4 *)(iVar10 + 0x14) = uVar6;
        puVar19 = (undefined4 *)(iVar10 + 0x18);
        bVar1 = *(byte *)((int)piVar21 + 10);
        iVar10 = piVar21[3];
      }
      puVar20 = puVar19;
      if ((bVar1 & 0x10) != 0) {
        puVar20 = puVar19 + 1;
        *puVar19 = 0x2040101;
      }
      if ((short)param_1[0x1f] < 0) {
        *(undefined2 *)(param_1 + 0x1f) = 0;
      }
      if (param_1[0x20] == 0) {
        param_1[0x20] = _DAT_ram_4ff6e1d0;
        iVar10 = FUN_ram_48137fd6(*(undefined4 *)(iVar10 + 4));
        param_1[0x21] = iVar10;
        bVar1 = *(byte *)((int)piVar21 + 10);
        iVar10 = piVar21[3];
      }
      iVar17 = piVar21[1];
      uVar5 = iVar10 - *(int *)(iVar17 + 4);
      uVar8 = (uint)*(ushort *)(iVar17 + 8) - (uVar5 & 0xffff);
      *(int *)(iVar17 + 4) = iVar10;
      *(short *)(iVar17 + 10) = *(short *)(iVar17 + 10) - (short)(uVar5 * 0x10000 >> 0x10);
      *(short *)(iVar17 + 8) = (short)(uVar8 * 0x10000 >> 0x10);
      *(undefined1 *)(iVar10 + 0x10) = 0;
      *(undefined1 *)(iVar10 + 0x11) = 0;
      if (puVar20 !=
          (undefined4 *)
          (((int)(uint)bVar1 >> 2 & 4U) + ((bVar1 & 1) - 1 & 0xfffffffc) + 0x18 + iVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x620,"tcp_output_segment",
                         "options not filled");
      }
      uVar3 = FUN_ram_48151a52(iVar17,6,uVar8 & 0xffff,param_1,piVar18);
      *(char *)(iVar10 + 0x10) = (char)uVar3;
      *(char *)(iVar10 + 0x11) = (char)((ushort)uVar3 >> 8);
      if ((char)param_1[0xb] == '\x06') {
        iVar10 = FUN_ram_48149080(piVar21[1],param_1,piVar18,*(undefined1 *)((int)param_1 + 0x33),
                                  *(undefined1 *)((int)param_1 + 0x32),6,iVar4);
      }
      else {
        iVar10 = FUN_ram_48147772(piVar21[1],param_1,piVar18,*(undefined1 *)((int)param_1 + 0x33),
                                  *(undefined1 *)((int)param_1 + 0x32),6);
      }
      if (iVar10 != 0) {
        *(ushort *)((int)param_1 + 0x46) = *(ushort *)((int)param_1 + 0x46) | 0x80;
        return iVar10;
      }
      iVar10 = piVar21[3];
    }
    param_1[0x2e] = *piVar21;
    if (param_1[0xf] != 2) {
      *(ushort *)((int)param_1 + 0x46) = *(ushort *)((int)param_1 + 0x46) & 0xfffc;
    }
    iVar10 = FUN_ram_48137fd6(*(undefined4 *)(iVar10 + 4));
    uVar13 = *(ushort *)(piVar21 + 2);
    uVar5 = FUN_ram_48137fc8(*(undefined2 *)(piVar21[3] + 0xc));
    iVar10 = (uint)((uVar5 & 3) != 0) + iVar10 + (uint)uVar13;
    if (param_1[0x27] - iVar10 < 0) {
      param_1[0x27] = iVar10;
    }
    iVar10 = piVar21[2];
    uVar5 = FUN_ram_48137fc8(*(undefined2 *)(piVar21[3] + 0xc));
    if (((uVar5 & 3) == 0) && ((short)iVar10 == 0)) {
      FUN_ram_4813c78a(piVar21);
      piVar21 = piVar7;
    }
    else {
      iVar10 = param_1[0x2f];
      *piVar21 = 0;
      if (iVar10 == 0) {
        param_1[0x2f] = (int)piVar21;
      }
      else {
        iVar10 = FUN_ram_48137fd6(*(undefined4 *)(piVar21[3] + 4));
        iVar17 = FUN_ram_48137fd6(*(undefined4 *)(piVar7[3] + 4));
        if (iVar10 - iVar17 < 0) {
          iVar10 = param_1[0x2f];
          piVar11 = param_1 + 0x2f;
          if (iVar10 == 0) {
            piVar15 = (int *)0x0;
          }
          else {
            do {
              iVar10 = FUN_ram_48137fd6(*(undefined4 *)(*(int *)(iVar10 + 0xc) + 4));
              iVar17 = FUN_ram_48137fd6(*(undefined4 *)(piVar21[3] + 4));
              piVar14 = (int *)*piVar11;
              piVar15 = piVar14;
              if (-1 < iVar10 - iVar17) break;
              iVar10 = *piVar14;
              piVar15 = (int *)0x0;
              piVar11 = piVar14;
            } while (iVar10 != 0);
          }
          *piVar21 = (int)piVar15;
          *piVar11 = (int)piVar21;
          piVar21 = piVar7;
        }
        else {
          *piVar7 = (int)piVar21;
        }
      }
    }
    piVar7 = piVar21;
    piVar21 = (int *)param_1[0x2e];
  } while ((int *)param_1[0x2e] != (int *)0x0);
  uVar13 = *(ushort *)((int)param_1 + 0x46);
LAB_ram_48141eac:
  *(undefined2 *)(param_1 + 0x2d) = 0;
LAB_ram_48141bc4:
  *(ushort *)((int)param_1 + 0x46) = uVar13 & 0xff7f;
  return 0;
}


