/* Firmware entry: 0x4ff2480c */

undefined2 *
FUN_ram_4ff2480c(undefined2 *param_1,int param_2,int *param_3,uint param_4,char *param_5,
                int *param_6,int param_7,int param_8)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  char cStack_f4;
  int local_f0;
  undefined1 auStack_ec [4];
  int aiStack_e8 [4];
  undefined1 uStack_d6;
  int local_98 [19];
  ushort uStack_4c;
  int aiStack_48 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&local_f0,0,0x58);
  auStack_ec[0] = 8;
  uStack_d6 = 1;
  iVar10 = *param_6;
  uVar17 = param_4 - (((uint)((ulonglong)param_4 * 0xaaaaaaab >> 0x20) & 0xfe) + param_4 / 3) & 0xff
  ;
  if (param_8 == 1) {
    iVar10 = (**(code **)(iVar10 + 0x84))(param_6,param_4);
LAB_ram_4ff248ce:
    if (iVar10 == 0) {
      if (param_4 < 3) goto LAB_ram_4ff24b72;
      iVar18 = *(int *)(param_5 + 0x24);
      iStack_100 = 0;
      iStack_fc = iVar18;
      iStack_f8 = (**(code **)(*param_6 + 0x154))(param_6,param_8);
    }
    else {
      iVar18 = *(int *)(param_5 + 0x24);
      iStack_100 = iVar10;
      iStack_fc = iVar18;
      iStack_f8 = (**(code **)(*param_6 + 0x154))(param_6,param_8);
    }
LAB_ram_4ff248f0:
    cVar15 = *param_5;
  }
  else {
    iVar10 = (**(code **)(iVar10 + 0x88))
                       (param_6,param_8,param_4,param_4 / 3,iVar10,*(code **)(iVar10 + 0x88));
    if (param_8 != 2) goto LAB_ram_4ff248ce;
    if (iVar10 == 0) {
      if (2 < param_4) {
        iVar18 = *(int *)(param_5 + 0x24);
        iStack_100 = 0;
        iStack_fc = iVar18;
        iStack_f8 = (**(code **)(*param_6 + 0x154))(param_6,2);
        cVar15 = param_5[2];
        goto LAB_ram_4ff248f4;
      }
      uVar17 = uVar17 + 3 & 0xff;
LAB_ram_4ff24b72:
      iVar10 = *(int *)((uVar17 + 0xf37) * 4 + param_2);
      fence();
      iVar18 = *(int *)(param_5 + 0x24);
      iStack_100 = iVar10;
      iStack_fc = iVar18;
      iStack_f8 = (**(code **)(*param_6 + 0x154))(param_6,param_8);
      if (param_8 != 2) goto LAB_ram_4ff248f0;
      cVar15 = param_5[2];
    }
    else {
      iVar18 = *(int *)(param_5 + 0x24);
      iStack_100 = iVar10;
      iStack_fc = iVar18;
      iStack_f8 = (**(code **)(*param_6 + 0x154))(param_6,2);
      cVar15 = param_5[2];
    }
  }
LAB_ram_4ff248f4:
  iVar13 = iStack_f8;
  uVar17 = param_3[2];
  iVar19 = *param_3;
  iVar16 = param_3[1];
  iVar14 = param_2 + 0xc;
  uVar20 = (uint)*(ushort *)(param_3 + 3);
  cStack_f4 = cVar15;
  FUN_ram_4ff3ec14(iVar14,0xffffffff);
  if ((((iVar19 != 0 || iVar16 != 0) && (uVar17 != 0)) && (uVar20 < 0xce)) &&
     (iVar5 = uVar20 * 0x48 + param_2, (*(ushort *)(iVar5 + 0x5e) & 1) != 0)) {
    iVar9 = *(int *)(iVar5 + 0x1c);
    iVar7 = *(int *)(iVar5 + 0x18);
    if (iVar7 != 0 || iVar9 != 0) {
      uVar1 = *(ushort *)(iVar5 + 0x54);
      uVar4 = (uint)uVar1;
      if (((uVar4 < 0x1ff) && (uVar12 = iVar7 << 9 | uVar4 + 1, iVar7 == iVar19)) &&
         ((iVar9 == iVar16 && ((uVar12 == uVar17 && (uVar4 == uVar20)))))) {
        iVar16 = uVar20 * 0x48 + param_2;
        uVar17 = (uint)*(byte *)(iVar16 + 0x3d);
        if ((uVar17 < 3) && (*(byte *)(iVar16 + 0x58) < 2)) {
          iVar19 = 0;
          uVar3 = uVar17;
          if (*(char *)(iVar16 + 0x3e) == '\x02') {
            uVar3 = uVar17 + 3 & 0xff;
            iVar19 = 3;
          }
          iVar16 = uVar3 * 0x50 + param_2;
          if ((((*(int *)(iVar16 + 0x3a08) == iVar7) && (*(int *)(iVar16 + 0x3a0c) == iVar9)) &&
              (*(uint *)(iVar16 + 0x3a10) == uVar12)) && (*(ushort *)(iVar16 + 0x3a14) == uVar4)) {
            iVar5 = uVar20 * 0x48 + param_2;
            iVar16 = param_2 + 8;
            if (*(int *)(iVar5 + 0x28) == iVar13) {
              if (*(int *)(iVar5 + 0x24) == iVar18) {
                if (*(int *)(iVar5 + 0x20) == iVar10) {
                  if (cVar15 == '\0') {
                    uVar8 = 5;
                  }
                  else {
                    if ((*(char *)(iVar5 + 0x3c) == '\0') || (param_7 - *(int *)(iVar5 + 0x2c) < 1))
                    {
                      iVar10 = uVar20 * 0x48 + param_2;
                      *(byte *)(iVar10 + 0x5e) = *(byte *)(iVar10 + 0x5e) | 2;
                      sVar2 = *(short *)(param_2 + 0x3bfe);
                      *(undefined1 *)(iVar10 + 0x58) = 2;
                      *(short *)(param_2 + 0x3bfe) = sVar2 + 1;
                      FUN_ram_480345f4(iVar16,uVar17 + iVar19 & 0xff);
                      piVar6 = local_98;
                      iVar10 = uVar3 * 0x50 + param_2;
                      piVar11 = (int *)(iVar10 + 0x3a18);
                      do {
                        iVar16 = piVar11[1];
                        iVar13 = piVar11[2];
                        iVar18 = piVar11[3];
                        *piVar6 = *piVar11;
                        piVar6[1] = iVar16;
                        piVar6[2] = iVar13;
                        piVar6[3] = iVar18;
                        piVar11 = piVar11 + 4;
                        piVar6 = piVar6 + 4;
                      } while (piVar11 != (int *)(iVar10 + 0x3a58));
                      local_98[0x10] = iVar7;
                      aiStack_48[0] = *(int *)(uVar20 * 0x48 + param_2 + 0x50) + 1;
                      local_98[0x11] = iVar9;
                      local_98[0x12] = uVar12;
                      piVar6 = &local_f0;
                      uStack_4c = uVar1;
                      piVar11 = local_98;
                      do {
                        iVar10 = piVar11[1];
                        iVar18 = piVar11[2];
                        iVar13 = piVar11[3];
                        *piVar6 = *piVar11;
                        piVar6[1] = iVar10;
                        piVar6[2] = iVar18;
                        piVar6[3] = iVar13;
                        piVar11 = piVar11 + 4;
                        piVar6 = piVar6 + 4;
                      } while (piVar11 != aiStack_48);
                      *piVar6 = *piVar11;
                      FUN_ram_4ff3ee10(iVar14);
                      FUN_ram_4ff24096(param_1,param_2,&local_f0,param_6,&iStack_100,param_7,1);
                      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
                      return param_1;
                    }
                    uVar8 = 6;
                  }
                }
                else {
                  uVar8 = 2;
                }
              }
              else {
                uVar8 = 3;
              }
            }
            else {
              uVar8 = 4;
            }
            FUN_ram_480375b2(iVar16,uVar20 * 0x48 + 0x10 + iVar16,uVar8,param_7,1);
            FUN_ram_4ff3ee10(iVar14);
            goto LAB_ram_4ff24b0a;
          }
        }
      }
    }
  }
  FUN_ram_4ff3ee10(iVar14);
LAB_ram_4ff24b0a:
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = 0x800;
  return param_1;
}


