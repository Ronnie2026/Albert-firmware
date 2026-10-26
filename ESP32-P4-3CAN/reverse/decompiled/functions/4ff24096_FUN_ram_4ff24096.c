/* Firmware entry: 0x4ff24096 */

undefined2 *
FUN_ram_4ff24096(undefined2 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6
                ,uint param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_9c;
  int iStack_98;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_80 [8];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar11 = *(undefined1 *)((int)param_3 + 0x3d);
  *param_1 = 0x800;
  *(undefined1 *)(param_1 + 4) = uVar11;
  *(undefined4 *)(param_1 + 2) = 0;
  memset(auStack_80,0,0x40);
  iStack_84 = param_3[0xd];
  iStack_88 = param_3[0xc];
  auStack_80[0] = (undefined1)param_3[0xf];
  iStack_78 = param_3[0x10];
  iStack_74 = param_3[0x11];
  iStack_70 = param_3[0x12];
  iStack_6c = param_3[0x13];
  iStack_68 = param_3[8];
  uStack_48 = 0xff;
  iStack_64 = param_3[0xb];
  iVar3 = param_6;
  if ((code *)param_2[1] != (code *)0x0) {
    iVar3 = (*(code *)param_2[1])();
  }
  iVar4 = (**(code **)(*param_4 + 0xdc))
                    (param_4,param_3,&iStack_88,(undefined1 *)((int)param_1 + 1),param_1 + 2,
                     *(code **)(*param_4 + 0xdc));
  cVar2 = (char)param_5[3];
  iVar14 = *param_5;
  iStack_a8 = param_5[2];
  iStack_a4 = param_5[1];
  if (iVar4 == 0) {
    if ((byte)(*(char *)((int)param_1 + 1) - 3U) < 3) {
      if (param_7 != 0) goto LAB_ram_4ff24178;
LAB_ram_4ff243ee:
      if ((code *)param_2[1] != (code *)0x0) {
        param_6 = (*(code *)param_2[1])();
        iStack_ac = 2;
        bVar1 = false;
        iStack_98 = 0;
        iStack_9c = 0;
        goto LAB_ram_4ff24218;
      }
      iStack_ac = 2;
    }
    else {
      param_7 = param_7 & *(char *)((int)param_1 + 1) == '\a';
      if (param_7 == 0) goto LAB_ram_4ff243ee;
LAB_ram_4ff24178:
      cVar2 = *(char *)((int)param_3 + 0xd);
      iVar14 = *param_4;
      uVar15 = *(byte *)((int)param_3 + 5) & 7;
      if (cVar2 == '\x01') {
        iVar14 = (**(code **)(iVar14 + 0x84))(param_4,uVar15);
        iVar12 = 0;
      }
      else {
        iVar14 = (**(code **)(iVar14 + 0x88))
                           (param_4,cVar2,uVar15,2,iVar14,*(code **)(iVar14 + 0x88));
        iVar12 = 0;
        if (cVar2 == '\x02') {
          iVar12 = 3;
        }
      }
      if ((iVar14 == 0) && (uVar15 < 3)) {
        iVar14 = param_2[iVar12 + uVar15 + 0xf37];
        fence();
      }
      iStack_a8 = (**(code **)(*param_4 + 0x154))(param_4,cVar2);
      iStack_a4 = param_5[1];
      cVar2 = (char)param_5[3];
      iStack_ac = 1;
      if ((code *)param_2[1] != (code *)0x0) {
        param_6 = (*(code *)param_2[1])();
      }
    }
    bVar1 = false;
    iStack_98 = 0;
    iStack_9c = 0;
  }
  else {
    if ((code *)param_2[1] != (code *)0x0) {
      param_6 = (*(code *)param_2[1])();
    }
    bVar1 = true;
    iStack_9c = 1;
    iStack_98 = *(int *)(param_1 + 2);
    param_7 = 0;
    iStack_ac = 0;
  }
LAB_ram_4ff24218:
  piStack_b0 = param_2 + 2;
  uVar15 = param_3[0x12];
  iVar12 = param_3[0x10];
  iVar16 = param_3[0x11];
  piVar13 = param_2 + 3;
  uVar17 = (uint)*(ushort *)(param_3 + 0x13);
  FUN_ram_4ff3ec14(piVar13,0xffffffff);
  if ((((iVar12 != 0 || iVar16 != 0) && (uVar15 != 0)) && (uVar17 < 0xce)) &&
     (piVar5 = piStack_b0 + uVar17 * 0x12 + 4,
     (*(ushort *)((int)param_2 + uVar17 * 0x48 + 0x5e) & 1) != 0)) {
    iVar7 = param_2[uVar17 * 0x12 + 6];
    if ((((iVar7 != 0 || param_2[uVar17 * 0x12 + 7] != 0) &&
         (uVar9 = (uint)*(ushort *)(param_2 + uVar17 * 0x12 + 0x15), uVar9 < 0x1ff)) &&
        ((iVar12 == iVar7 &&
         ((iVar16 == param_2[uVar17 * 0x12 + 7] && (uVar15 == (iVar7 << 9 | uVar9 + 1))))))) &&
       ((uVar17 == uVar9 &&
        ((param_2[uVar17 * 0x12 + 0x17] << 0xe < 0 &&
         ((char)param_2[uVar17 * 0x12 + 0x16] == '\x02')))))) {
      if (iStack_ac == 0) {
        if (iStack_9c != 0) {
          if (param_2[uVar17 * 0x12 + 0x14] == 0) {
            if (param_2[uVar17 * 0x12 + 0x17] << 0xc < 0) goto LAB_ram_4ff24240;
            param_2[uVar17 * 0x12 + 0x14] = iStack_9c;
            param_2[uVar17 * 0x12 + 0x11] = iStack_98;
            bVar10 = *(byte *)((int)param_2 + uVar17 * 0x48 + 0x5d);
            if (bVar1) {
              bVar10 = bVar10 & 0xfe | 3;
            }
            else {
              bVar10 = bVar10 & 0xfc;
            }
            param_2[uVar17 * 0x12 + 0x10] = iStack_98;
            *(byte *)((int)param_2 + uVar17 * 0x48 + 0x5d) = bVar10;
          }
          *(byte *)((int)param_2 + uVar17 * 0x48 + 0x5e) =
               *(byte *)((int)param_2 + uVar17 * 0x48 + 0x5e) & 0xfd;
          *(short *)((int)param_2 + 0x3bfe) = *(short *)((int)param_2 + 0x3bfe) + -1;
          FUN_ram_48044d4c(piStack_b0);
          iVar14 = param_2[0xf00];
          *(undefined1 *)(param_2 + uVar17 * 0x12 + 0x16) = 3;
          *(short *)(param_2 + 0xf00) = (short)iVar14 + 1;
          if (param_2[uVar17 * 0x12 + 0x17] << 0xd < 0) {
            FUN_ram_480375b2(piStack_b0,piVar5,*(undefined1 *)((int)param_2 + uVar17 * 0x48 + 0x5b),
                             param_6,1);
          }
        }
      }
      else {
        *(byte *)((int)param_2 + uVar17 * 0x48 + 0x5e) =
             *(byte *)((int)param_2 + uVar17 * 0x48 + 0x5e) & 0xfd;
        iVar12 = param_2[uVar17 * 0x12 + 0x14];
        *(short *)((int)param_2 + 0x3bfe) = *(short *)((int)param_2 + 0x3bfe) + -1;
        if ((iVar12 == 0) && (-1 < param_2[uVar17 * 0x12 + 0x17] << 0xd)) {
          if (iStack_ac == 2) {
            FUN_ram_480375b2(piStack_b0,piVar5,9,param_6,1);
          }
          else {
            cVar6 = *(char *)((int)param_2 + uVar17 * 0x48 + 0x5a);
            if (cVar6 == '\0') {
              if (iStack_a8 != param_2[uVar17 * 0x12 + 10]) {
                cVar6 = '\x04';
                goto LAB_ram_4ff247a8;
              }
              if (param_2[uVar17 * 0x12 + 9] != iStack_a4) {
                cVar6 = '\x03';
                goto LAB_ram_4ff247a8;
              }
              if (iVar14 != param_2[uVar17 * 0x12 + 8]) {
                cVar6 = '\x02';
                goto LAB_ram_4ff247a8;
              }
              if (cVar2 == '\0') {
                cVar6 = '\x05';
                goto LAB_ram_4ff247a8;
              }
              if (((char)param_2[uVar17 * 0x12 + 0xf] != '\0') &&
                 (cVar6 = '\x06', 0 < param_6 - param_2[uVar17 * 0x12 + 0xb]))
              goto LAB_ram_4ff247a8;
              *(bool *)(param_2 + uVar17 * 0x12 + 0x16) =
                   *(char *)((int)param_2 + uVar17 * 0x48 + 0x59) == '\x01';
            }
            else {
LAB_ram_4ff247a8:
              FUN_ram_480375b2(piStack_b0,piVar5,cVar6,param_6,1);
            }
            uVar15 = (uint)*(byte *)((int)param_2 + uVar17 * 0x48 + 0x3d);
            iVar14 = 0;
            if (*(char *)((int)param_2 + uVar17 * 0x48 + 0x3e) == '\x02') {
              iVar14 = 3;
            }
            uVar15 = iVar14 + (uVar15 - (((uint)((ulonglong)uVar15 * 0xaaaaaaab >> 0x20) & 0xfe) +
                                        uVar15 / 3));
            piStack_b0 = piStack_b0 + (uVar15 & 0xff) * 0x14 + 0xe80;
            bVar10 = (byte)(1 << (uVar15 & 0x1f));
            if ((((*piStack_b0 != 0 || piStack_b0[1] != 0) && (piStack_b0[2] != 0)) &&
                (uVar15 = (uint)*(ushort *)(piStack_b0 + 3), uVar15 < 0xce)) &&
               ((*(ushort *)((int)param_2 + uVar15 * 0x48 + 0x5e) & 1) != 0)) {
              iVar14 = param_2[uVar15 * 0x12 + 6];
              if (((((iVar14 != 0 || param_2[uVar15 * 0x12 + 7] != 0) &&
                    (uVar17 = (uint)*(ushort *)(param_2 + uVar15 * 0x12 + 0x15), uVar17 < 0x1ff)) &&
                   ((*piStack_b0 == iVar14 &&
                    ((piStack_b0[1] == param_2[uVar15 * 0x12 + 7] &&
                     (piStack_b0[2] == (iVar14 << 9 | uVar17 + 1))))))) && (uVar15 == uVar17)) &&
                 ((-1 < param_2[uVar15 * 0x12 + 0x17] << 0xc &&
                  (*(byte *)(param_2 + uVar15 * 0x12 + 0x16) < 2)))) {
                *(byte *)((int)param_2 + 0x3bf6) = bVar10 | *(byte *)((int)param_2 + 0x3bf6);
                goto LAB_ram_4ff24240;
              }
            }
            *(byte *)((int)param_2 + 0x3bf6) = *(byte *)((int)param_2 + 0x3bf6) & ~bVar10;
          }
        }
        else {
          FUN_ram_48044d4c(piStack_b0);
          iVar14 = param_2[0xf00];
          *(undefined1 *)(param_2 + uVar17 * 0x12 + 0x16) = 3;
          *(short *)(param_2 + 0xf00) = (short)iVar14 + 1;
          if (param_2[uVar17 * 0x12 + 0x17] << 0xd < 0) {
            FUN_ram_480375b2(piStack_b0,piVar5,*(undefined1 *)((int)param_2 + uVar17 * 0x48 + 0x5b),
                             param_6,1);
          }
        }
      }
    }
  }
LAB_ram_4ff24240:
  FUN_ram_4ff3ee10(piVar13);
  if (iVar4 != 0) {
    cVar2 = *(char *)((int)param_3 + 0xd);
    *(undefined1 *)param_1 = 2;
    if (cVar2 == '\x01') {
      iVar14 = *param_2;
      iVar12 = param_3[4];
      iVar4 = *(int *)(param_1 + 2);
      uVar15 = *(byte *)((int)param_3 + 5) & 7;
      if (*(char *)((int)param_3 + 0xe) == '\0') {
        if (2 < uVar15) {
          return param_1;
        }
        piVar13 = (int *)(iVar14 + 4 + (uVar15 + 0x1b) * 4);
        *piVar13 = *piVar13 + 1;
        piVar13[-0xf] = iVar3;
        piVar13[-0xc] = iVar4;
        if (iVar12 == 0) {
          return param_1;
        }
      }
      else {
        if (2 < uVar15) {
          return param_1;
        }
        piVar13 = (int *)(iVar14 + 4 + (uVar15 + 0x1b) * 4);
        *piVar13 = *piVar13 + 1;
        piVar13[-0xf] = iVar3;
        piVar13[-0xc] = iVar4;
      }
      uVar17 = iVar4 - iVar12;
      *(uint *)(iVar14 + 0xc4) = uVar17;
      puVar8 = (uint *)(iVar14 + 200);
      uVar15 = *puVar8;
      do {
        if (uVar17 <= uVar15) {
          return param_1;
        }
        bVar1 = *puVar8 != uVar15;
        uVar15 = *puVar8;
      } while (bVar1);
      *puVar8 = uVar17;
      return param_1;
    }
    if (cVar2 != '\x02') {
      return param_1;
    }
    if (*param_3 != 0x3fd) {
      return param_1;
    }
    if ((char)param_3[1] != '\b') {
      return param_1;
    }
    if ((*(byte *)((int)param_3 + 5) & 7) != 0) {
      return param_1;
    }
    iVar14 = param_3[4];
    iVar4 = *(int *)(param_1 + 2);
    if (*(char *)((int)param_3 + 0xe) == '\0') {
      param_2[0xf1d] = param_2[0xf1d] + 1;
      param_2[0xf0e] = iVar3;
      param_2[0xf11] = iVar4;
      if (iVar14 == 0) {
        return param_1;
      }
    }
    else {
      param_2[0xf1d] = param_2[0xf1d] + 1;
      param_2[0xf0e] = iVar3;
      param_2[0xf11] = iVar4;
    }
    uVar17 = iVar4 - iVar14;
    param_2[0xf32] = uVar17;
    puVar8 = (uint *)(param_2 + 0xf33);
    uVar15 = *puVar8;
    do {
      if (uVar17 <= uVar15) {
        return param_1;
      }
      bVar1 = *puVar8 != uVar15;
      uVar15 = *puVar8;
    } while (bVar1);
    *puVar8 = uVar17;
    return param_1;
  }
  if (param_7 == 0) {
    cVar2 = *(char *)((int)param_3 + 0xd);
    *(undefined1 *)param_1 = 3;
    if (cVar2 == '\x01') {
      uVar15 = *(byte *)((int)param_3 + 5) & 7;
      if (2 < uVar15) {
        return param_1;
      }
      piVar13 = (int *)((uVar15 + 0x1e) * 4 + *param_2 + 4);
      *piVar13 = *piVar13 + 1;
      piVar13[-0x12] = iVar3;
      return param_1;
    }
    if (cVar2 != '\x02') {
      return param_1;
    }
    if (*param_3 != 0x3fd) {
      return param_1;
    }
    if ((char)param_3[1] != '\b') {
      return param_1;
    }
    if ((*(byte *)((int)param_3 + 5) & 7) != 0) {
      return param_1;
    }
    param_2[0xf20] = param_2[0xf20] + 1;
    param_2[0xf0e] = iVar3;
    return param_1;
  }
  iVar14 = param_3[0x10];
  iVar3 = param_3[0x11];
  uVar17 = param_3[0x12];
  uVar15 = (uint)*(ushort *)(param_3 + 0x13);
  FUN_ram_4ff3ec14(piVar13,0xffffffff);
  if ((((iVar14 != 0 || iVar3 != 0) && (uVar17 != 0)) && (uVar15 < 0xce)) &&
     ((*(ushort *)((int)param_2 + uVar15 * 0x48 + 0x5e) & 1) != 0)) {
    iVar4 = param_2[uVar15 * 0x12 + 6];
    if ((((iVar4 != 0 || param_2[uVar15 * 0x12 + 7] != 0) &&
         (uVar9 = (uint)*(ushort *)(param_2 + uVar15 * 0x12 + 0x15), uVar9 < 0x1ff)) &&
        ((iVar14 == iVar4 &&
         ((iVar3 == param_2[uVar15 * 0x12 + 7] && (uVar17 == (iVar4 << 9 | uVar9 + 1))))))) &&
       (uVar15 == uVar9)) {
      bVar10 = *(byte *)(param_2 + uVar15 * 0x12 + 0x16);
      FUN_ram_4ff3ee10(piVar13);
      uVar11 = 1;
      if (1 < bVar10) {
        uVar11 = 3;
      }
      goto LAB_ram_4ff24468;
    }
  }
  FUN_ram_4ff3ee10(piVar13);
  uVar11 = 3;
LAB_ram_4ff24468:
  *(undefined1 *)param_1 = uVar11;
  return param_1;
}


