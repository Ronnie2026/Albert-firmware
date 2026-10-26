/* Firmware entry: 0x480450a0 */

ushort FUN_ram_480450a0(int param_1,uint param_2,byte *param_3,int *param_4,int param_5,
                       undefined4 *param_6,undefined1 *param_7,int param_8)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  ushort uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_2 - (((uint)((ulonglong)param_2 * 0xaaaaaaab >> 0x20) & 0xfe) + param_2 / 3) & 0xff;
  if (param_8 == 1) {
    iVar4 = (**(code **)(*param_4 + 0x84))(param_4);
LAB_ram_480451f8:
    if ((iVar4 == 0) && (param_2 < 3)) {
      iVar20 = 0;
LAB_ram_4804511a:
      iVar4 = *(int *)((uVar2 + 0xf37) * 4 + param_1);
      fence();
      iVar21 = *(int *)(param_3 + 0x24);
      iVar5 = (**(code **)(*param_4 + 0x154))(param_4,param_8);
      if (param_8 == 2) goto LAB_ram_48045276;
    }
    else {
      iVar21 = *(int *)(param_3 + 0x24);
      iVar20 = 0;
      iVar5 = (**(code **)(*param_4 + 0x154))(param_4,param_8);
    }
    bVar11 = *param_3;
  }
  else {
    pcVar14 = *(code **)(*param_4 + 0x88);
    iVar4 = (*pcVar14)(param_4,param_8,param_2,1,param_5,pcVar14);
    if (param_8 != 2) goto LAB_ram_480451f8;
    if ((iVar4 == 0) && (param_2 < 3)) {
      uVar2 = uVar2 + 3 & 0xff;
      iVar20 = 3;
      goto LAB_ram_4804511a;
    }
    iVar21 = *(int *)(param_3 + 0x24);
    iVar20 = 3;
    iVar5 = (**(code **)(*param_4 + 0x154))(param_4,2);
LAB_ram_48045276:
    bVar11 = param_3[2];
  }
  memset(param_6,0,0x27);
  FUN_ram_4ff3ec14(param_1 + 0xc,0xffffffff);
  iVar19 = param_1 + 8;
  uVar18 = 0;
  if (2 < param_2) goto LAB_ram_480451b4;
  param_2 = iVar20 + param_2;
  piVar3 = (int *)((param_2 & 0xff) * 0x50 + 0x3a00 + iVar19);
  iVar7 = *piVar3;
  iVar20 = piVar3[1];
  if (((iVar7 == 0 && iVar20 == 0) || (uVar2 = piVar3[2], uVar2 == 0)) ||
     (uVar15 = (uint)*(ushort *)(piVar3 + 3), 0xcd < uVar15)) {
LAB_ram_4804519c:
    bVar11 = (byte)(1 << (param_2 & 0x1f));
  }
  else {
    iVar10 = uVar15 * 8;
    iVar12 = uVar15 * 0x48 + param_1;
    uVar18 = *(ushort *)(iVar12 + 0x5e) & 1;
    if ((*(ushort *)(iVar12 + 0x5e) & 1) == 0) goto LAB_ram_4804519c;
    iVar17 = *(int *)(iVar12 + 0x18);
    if (iVar17 == 0 && *(int *)(iVar12 + 0x1c) == 0) {
      bVar11 = (byte)(1 << (param_2 & 0x1f));
      uVar18 = 0;
    }
    else {
      uVar13 = (uint)*(ushort *)(iVar12 + 0x54);
      if (((((uVar13 < 0x1ff) && (iVar7 == iVar17)) &&
           ((iVar20 == *(int *)(iVar12 + 0x1c) &&
            ((uVar2 == (iVar17 << 9 | uVar13 + 1) && (uVar15 == uVar13)))))) &&
          (iVar12 = uVar15 * 0x48 + param_1, -1 < *(int *)(iVar12 + 0x5c) << 0xc)) &&
         (*(byte *)(iVar12 + 0x58) < 2)) {
        if (*(int *)(iVar12 + 0x28) == iVar5) {
          if (*(int *)(iVar12 + 0x24) != iVar21) {
            uVar9 = 3;
            goto LAB_ram_4804544e;
          }
          if (*(int *)(iVar12 + 0x20) != iVar4) {
            uVar9 = 2;
            goto LAB_ram_4804544e;
          }
          if (bVar11 == 0) {
            uVar9 = 5;
            goto LAB_ram_4804544e;
          }
          if ((*(char *)(iVar12 + 0x3c) != '\0') && (0 < param_5 - *(int *)(iVar12 + 0x2c))) {
            uVar9 = 6;
            goto LAB_ram_4804544e;
          }
          iVar20 = (param_2 & 0xff) * 0x50 + param_1;
          uVar16 = *(undefined4 *)(iVar20 + 0x3a0c);
          uVar6 = *(undefined4 *)(iVar20 + 0x3a10);
          uVar8 = *(undefined4 *)(iVar20 + 0x3a14);
          *param_6 = *(undefined4 *)(iVar20 + 0x3a08);
          *(char *)(param_6 + 6) = (char)iVar5;
          *(char *)((int)param_6 + 0x11) = (char)((uint)iVar4 >> 8);
          *(char *)((int)param_6 + 0x12) = (char)((uint)iVar4 >> 0x10);
          param_6[1] = uVar16;
          param_6[2] = uVar6;
          param_6[3] = uVar8;
          *(char *)(param_6 + 4) = (char)iVar4;
          *(char *)(param_6 + 5) = (char)iVar21;
          *(char *)((int)param_6 + 0x13) = (char)((uint)iVar4 >> 0x18);
          *(char *)((int)param_6 + 0x15) = (char)((uint)iVar21 >> 8);
          *(char *)((int)param_6 + 0x16) = (char)((uint)iVar21 >> 0x10);
          *(char *)((int)param_6 + 0x17) = (char)((uint)iVar21 >> 0x18);
          *(char *)((int)param_6 + 0x19) = (char)((uint)iVar5 >> 8);
          *(char *)((int)param_6 + 0x1a) = (char)((uint)iVar5 >> 0x10);
          *(char *)((int)param_6 + 0x1b) = (char)((uint)iVar5 >> 0x18);
          *(undefined1 *)(param_6 + 7) = 1;
          uVar6 = *(undefined4 *)(iVar20 + 0x3a4c);
          *(char *)(param_6 + 9) = (char)param_2;
          uVar9 = *(undefined1 *)(iVar20 + 0x3a54);
          param_6[8] = uVar6;
          *(undefined1 *)((int)param_6 + 0x25) = uVar9;
          *(byte *)((int)param_6 + 0x26) = (byte)((uint)*(undefined4 *)(iVar20 + 0x3a30) >> 8) & 1;
          uVar18 = (ushort)bVar11;
        }
        else {
          uVar9 = 4;
LAB_ram_4804544e:
          iVar4 = param_1 + uVar15 * 0x48;
          if (*(int *)(iVar4 + 0x5c) << 0xe < 0) {
            if (*(char *)(iVar4 + 0x5a) == '\0') {
              *(undefined1 *)(iVar4 + 0x5a) = uVar9;
            }
            FUN_ram_48044d4c(iVar19);
            uVar18 = 0;
          }
          else {
            FUN_ram_480375b2(iVar19,iVar19 + uVar15 * 0x48 + 0x10,uVar9,param_5,1);
            uVar18 = 0;
          }
        }
        iVar7 = *piVar3;
        iVar20 = piVar3[1];
        uVar2 = piVar3[2];
        if ((iVar7 == 0 && iVar20 == 0) || (uVar2 == 0)) goto LAB_ram_4804519c;
        uVar15 = (uint)*(ushort *)(piVar3 + 3);
        bVar11 = (byte)(1 << (param_2 & 0x1f));
        if ((0xcd < uVar15) ||
           (bVar1 = *(byte *)(param_1 + 0x3bf6),
           (*(ushort *)(uVar15 * 0x48 + param_1 + 0x5e) & 1) == 0)) goto LAB_ram_480451a2;
        iVar10 = uVar15 << 3;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x3bf6);
        bVar11 = (byte)(1 << (param_2 & 0x1f));
        uVar18 = 0;
      }
      iVar5 = (iVar10 + uVar15) * 8 + param_1;
      iVar4 = *(int *)(iVar5 + 0x18);
      if (((((iVar4 != 0 || *(int *)(iVar5 + 0x1c) != 0) &&
            (uVar13 = (uint)*(ushort *)(iVar5 + 0x54), uVar13 < 0x1ff)) && (iVar4 == iVar7)) &&
          ((*(int *)(iVar5 + 0x1c) == iVar20 && (uVar2 == (iVar4 << 9 | uVar13 + 1))))) &&
         ((uVar15 == uVar13 &&
          ((-1 < *(int *)(iVar5 + 0x5c) << 0xc && (*(byte *)(iVar5 + 0x58) < 2)))))) {
        *(byte *)(param_1 + 0x3bf6) = bVar1 | bVar11;
        goto LAB_ram_480451b4;
      }
    }
  }
LAB_ram_480451a2:
  *(byte *)(param_1 + 0x3bf6) = ~bVar11 & *(byte *)(param_1 + 0x3bf6);
LAB_ram_480451b4:
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = *(undefined1 *)(param_1 + 0x3bf6);
  }
  FUN_ram_4ff3ee10(param_1 + 0xc);
  return uVar18;
}


