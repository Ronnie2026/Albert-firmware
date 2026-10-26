/* Firmware entry: 0x4816f912 */

int FUN_ram_4816f912(undefined4 param_1,int param_2,byte *param_3,code *param_4,undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iStack_74;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [10];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_2 != 0) && (param_3 != (byte *)0x0)) && (*(int *)(param_3 + 0xc) != 0)) {
    if (*(uint *)(param_3 + 0x10) < *(uint *)(param_3 + 0x14)) {
      return -0x6c00;
    }
    if (*(uint *)(param_3 + 0x10) - *(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
      return -0x6c00;
    }
    uVar10 = FUN_ram_4816a474(param_2);
    iVar23 = *(int *)(param_3 + 0x14);
    uVar22 = *(uint *)(param_3 + 0x18);
    iVar17 = *(int *)(param_3 + 0x10);
    iVar20 = *(int *)(param_3 + 0xc) + iVar23;
    if (0x1000 < uVar22) {
      return -0x7100;
    }
    uVar21 = iVar17 - (iVar23 + uVar22);
    uVar9 = (undefined1)(uVar22 >> 8);
    if (uVar10 < 2) {
      if (uVar21 < *(uint *)(param_2 + 0xc)) {
        return -0x6a00;
      }
      bStack_70 = *param_3;
      bStack_6f = param_3[1];
      bStack_6a = param_3[6];
      bStack_69 = param_3[7];
      bStack_6e = param_3[2];
      bStack_6d = param_3[3];
      bStack_6c = param_3[4];
      bStack_6b = param_3[5];
      bStack_68 = param_3[8];
      bStack_67 = param_3[9];
      bStack_66 = param_3[10];
      iVar23 = param_2 + 0x34;
      uStack_65 = uVar9;
      uStack_64 = (char)uVar22;
      iVar17 = FUN_ram_48176e96(iVar23,&bStack_70,0xd);
      if (((iVar17 != 0) ||
          (iVar17 = FUN_ram_48176e96(iVar23,iVar20,*(undefined4 *)(param_3 + 0x18)), iVar17 != 0))
         || (iVar17 = FUN_ram_48176eac(iVar23,&uStack_60), iVar17 != 0)) goto LAB_ram_4816fbee;
      iVar17 = FUN_ram_48176f38(iVar23);
      uVar12 = *(undefined4 *)(param_2 + 0xc);
      if (iVar17 != 0) goto LAB_ram_4816fd68;
      bVar8 = true;
      FUN_ram_4ff45158(*(int *)(param_3 + 0x18) + iVar20,&uStack_60);
      uVar21 = uVar21 - *(int *)(param_2 + 0xc);
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + *(int *)(param_2 + 0xc);
      FUN_ram_48178af2(&uStack_60);
    }
    else {
      bVar8 = false;
      if (uVar10 == 3) {
        uVar10 = *(uint *)(param_2 + 0x10);
        if (uVar21 < uVar10) {
          return -0x6a00;
        }
        iVar18 = *(int *)(param_2 + 8);
        iVar19 = *(int *)(param_2 + 4);
        uStack_60 = 0;
        uStack_5c = 0;
        auStack_58[0] = 0;
        puVar11 = (undefined4 *)FUN_ram_4ff45158(&uStack_60,param_2 + 0x14,iVar18);
        pbVar13 = param_3;
        puVar15 = puVar11;
        do {
          bVar1 = *pbVar13;
          puVar16 = (undefined4 *)((int)puVar15 + 1);
          pbVar13 = pbVar13 + 1;
          *(byte *)(puVar15 + 1) = *(byte *)(puVar15 + 1) ^ bVar1;
          puVar15 = puVar16;
        } while (puVar16 != auStack_58);
        bStack_70 = *param_3;
        bStack_6f = param_3[1];
        bStack_6e = param_3[2];
        bStack_6d = param_3[3];
        bStack_6c = param_3[4];
        bStack_6b = param_3[5];
        bStack_69 = param_3[7];
        bStack_6a = param_3[6];
        bStack_68 = param_3[8];
        bStack_67 = param_3[9];
        bStack_66 = param_3[10];
        uStack_65 = uVar9;
        uStack_64 = (char)uVar22;
        iVar17 = FUN_ram_481720fe(param_2 + 0x54,puVar11,iVar19,&bStack_70,0xd,iVar20,uVar22,iVar20,
                                  iVar17 - iVar23,param_3 + 0x18,uVar10);
        if (iVar17 != 0) {
          return iVar17;
        }
        if (iVar19 == iVar18) {
          return 0;
        }
        if (*(uint *)(param_3 + 0x14) < 8) {
          return -0x6a00;
        }
        bVar1 = param_3[7];
        bVar2 = param_3[1];
        bVar3 = param_3[2];
        bVar4 = param_3[3];
        bVar5 = param_3[4];
        bVar6 = param_3[5];
        bVar7 = param_3[6];
        *(byte *)(iVar20 + -8) = *param_3;
        *(byte *)(iVar20 + -7) = bVar2;
        *(byte *)(iVar20 + -6) = bVar3;
        *(byte *)(iVar20 + -5) = bVar4;
        *(byte *)(iVar20 + -4) = bVar5;
        *(byte *)(iVar20 + -3) = bVar6;
        *(byte *)(iVar20 + -2) = bVar7;
        *(byte *)(iVar20 + -1) = bVar1;
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + -8;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 8;
        return 0;
      }
    }
    uVar22 = 1;
    if (uVar10 - 1 < 2) {
      iVar17 = *(int *)(param_3 + 0x18);
      uVar14 = *(uint *)(param_2 + 4);
      uVar10 = uVar14 - (iVar17 + 1U) % uVar14;
      if (uVar14 == uVar10) {
        uVar10 = 0;
      }
      else {
        uVar22 = uVar10 + 1;
      }
      if (uVar21 < uVar22) {
        return -0x6a00;
      }
      uVar22 = 0;
      do {
        *(char *)(iVar20 + uVar22 + iVar17) = (char)uVar10;
        uVar22 = uVar22 + 1;
        iVar17 = *(int *)(param_3 + 0x18);
      } while (uVar22 <= uVar10);
      *(uint *)(param_3 + 0x18) = iVar17 + 1 + uVar10;
      if (param_4 != (code *)0x0) {
        if (*(uint *)(param_3 + 0x14) < *(uint *)(param_2 + 4)) {
          return -0x6a00;
        }
        iVar23 = param_2 + 0x14;
        iVar17 = (*param_4)(param_5,iVar23);
        if (iVar17 != 0) {
          return iVar17;
        }
        FUN_ram_4ff45158(iVar20 - *(int *)(param_2 + 4),iVar23);
        iVar17 = FUN_ram_48172078(param_2 + 0x54,iVar23,*(undefined4 *)(param_2 + 4),iVar20,
                                  *(undefined4 *)(param_3 + 0x18),iVar20,&iStack_74);
        if (iVar17 != 0) {
          return iVar17;
        }
        if (*(int *)(param_3 + 0x18) == iStack_74) {
          iVar23 = *(int *)(param_2 + 4);
          iVar17 = *(int *)(param_3 + 0x18) + iVar23;
          *(int *)(param_3 + 0x18) = iVar17;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) - iVar23;
          if (bVar8) {
            return 0;
          }
          if ((uVar21 - 1) - uVar10 < *(uint *)(param_2 + 0xc)) {
            return -0x6a00;
          }
          uStack_65 = (undefined1)((uint)iVar17 >> 8);
          bStack_70 = *param_3;
          bStack_6d = param_3[3];
          bStack_6c = param_3[4];
          bStack_6f = param_3[1];
          bStack_6e = param_3[2];
          bStack_6b = param_3[5];
          bStack_6a = param_3[6];
          bStack_69 = param_3[7];
          uStack_64 = (undefined1)((uint)(iVar17 * 0x100) >> 8);
          bStack_68 = param_3[8];
          bStack_67 = param_3[9];
          bStack_66 = param_3[10];
          iVar18 = param_2 + 0x34;
          iVar17 = FUN_ram_48176e96(iVar18,&bStack_70,0xd);
          if (iVar17 == 0) {
            iVar17 = FUN_ram_48176e96(iVar18,iVar20 - iVar23,*(undefined4 *)(param_3 + 0x18));
            if ((iVar17 == 0) && (iVar17 = FUN_ram_48176eac(iVar18,&uStack_60), iVar17 == 0)) {
              iVar17 = FUN_ram_48176f38(iVar18);
              uVar12 = *(undefined4 *)(param_2 + 0xc);
              if (iVar17 == 0) {
                FUN_ram_4ff45158(*(int *)(param_3 + 0x18) + (iVar20 - iVar23),&uStack_60);
                *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + *(int *)(param_2 + 0xc);
                FUN_ram_48178af2(&uStack_60);
                return 0;
              }
LAB_ram_4816fd68:
              FUN_ram_48178af2(&uStack_60,uVar12);
              return iVar17;
            }
          }
LAB_ram_4816fbee:
          FUN_ram_48178af2(&uStack_60,*(undefined4 *)(param_2 + 0xc));
          return iVar17;
        }
      }
      return -0x6c00;
    }
  }
  return -0x6c00;
}


