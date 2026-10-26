/* Firmware entry: 0x480cb95c */

void FUN_ram_480cb95c(int param_1,uint *param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char cVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined1 auStack_f4 [4];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 local_d4 [2];
  char cStack_ca;
  undefined4 uStack_c8;
  undefined4 local_c4 [30];
  char cStack_4b;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_2 + 0xd) != '\x04') {
    return;
  }
  if (*param_2 != 0x30a) {
    return;
  }
  if ((char)param_2[1] != '\b') {
    return;
  }
  iVar17 = *(int *)(param_1 + 0x58);
  FUN_ram_4ff3ec14(iVar17 + 0xb18,0xffffffff);
  puVar12 = (undefined4 *)(iVar17 + 0xb38);
  puVar9 = local_d4;
  do {
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar7 = puVar12[3];
    *puVar9 = *puVar12;
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    puVar12 = puVar12 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar12 != (undefined4 *)(iVar17 + 0xbd8));
  *puVar9 = *puVar12;
  FUN_ram_4ff3ee10(iVar17 + 0xb18);
  if ((char)param_2[1] == '\b') {
    puVar10 = (uint *)((int)param_2 + 5);
    cVar11 = '\r';
    do {
      uVar21 = *puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      cVar11 = cVar11 + (char)uVar21;
    } while (param_2 + 3 != puVar10);
    if ((char)param_2[3] == cVar11) {
      bVar2 = true;
      bVar20 = *(byte *)((int)param_2 + 5) >> 3 & 3;
      bVar3 = *(byte *)((int)param_2 + 5) & 7;
      bVar19 = *(byte *)((int)param_2 + 0xb) >> 4;
      goto LAB_ram_480cba0e;
    }
  }
  bVar19 = 0;
  bVar20 = 0;
  bVar3 = 0;
  bVar2 = false;
LAB_ram_480cba0e:
  if (bVar2) {
    *(byte *)(param_1 + 0xbb4) = bVar19;
    if (cStack_4b == '\0') {
      *(undefined1 *)(param_1 + 0xbec) = 0;
      *(undefined1 *)(param_1 + 0xbb5) = 0;
      return;
    }
    if (((cStack_ca != '\0') && (uStack_c8._1_1_ != '\0')) &&
       (iVar17 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),4,0), iVar17 != 0)) {
      if (*(int *)(param_1 + 0xbbc) != 0) {
        return;
      }
      uVar21 = *(uint *)(param_1 + 3000);
      if (uVar21 != 0) {
        if ((uint)(param_3 - *(int *)(param_1 + 0xbe8)) < 0x29) {
          return;
        }
        iVar17 = *(int *)(param_1 + 0x58);
        if (uVar21 == *(uint *)(iVar17 + 0x81e8)) {
          uStack_f8 = uStack_f8 & 0xffffff00;
          uStack_f0 = uStack_f0 & 0xffff0000;
          uStack_ec = 0;
          uStack_e8 = uStack_e8 & 0xffff0000;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          auStack_f4 = (undefined1  [4])uVar21;
          FUN_ram_480cb520(iVar17 + 0x7cd0,&uStack_f8);
        }
        iVar18 = iVar17 + 0x2864;
        FUN_ram_4ff3ec14(iVar18,0xffffffff);
        if ((*(char *)((uVar21 & 0x7f) * 0x14 + iVar17 + 0x2000 + -0x1cf) == '\0') ||
           (iVar4 = (uVar21 & 0x7f) * 0x14, uVar21 != *(uint *)(iVar17 + 0x2000 + iVar4 + -0x1dc)))
        {
          FUN_ram_4ff3ee10(iVar18);
        }
        else {
          puVar15 = (undefined1 *)(iVar17 + iVar4 + 0x1e20);
          *puVar15 = 0;
          puVar15[4] = 0;
          puVar15[5] = 0;
          puVar15[6] = 0;
          puVar15[7] = 0;
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0;
          puVar15[0xc] = 0;
          puVar15[0xd] = 0;
          puVar15[0xe] = 0;
          puVar15[0xf] = 0;
          puVar15[0x10] = 0;
          puVar15[0x11] = 0;
          puVar15[0x12] = 0;
          FUN_ram_4ff3ee10(iVar18);
          uStack_e8 = CONCAT22(uStack_e8._2_2_,1);
          uStack_f8 = uStack_f8 & 0xffffff00;
          uStack_f0 = uStack_f0 & 0xffff0000;
          uStack_ec = 0;
          uStack_e4 = 0;
          uStack_dc = 0;
          auStack_f4 = (undefined1  [4])uVar21;
          uStack_e0 = FUN_ram_48025b94();
          FUN_ram_4805d48e(iVar17,&uStack_f8);
        }
        *(undefined4 *)(param_1 + 3000) = 0;
        *(undefined4 *)(param_1 + 0xbe8) = 0;
        *(undefined1 *)(param_1 + 0xbec) = 0;
        *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xbf8) + 1;
      }
      if ((bVar3 == 1) && (bVar20 == 1)) {
        return;
      }
      if ((*(char *)(param_1 + 0xbb5) != '\0') && (*(byte *)(param_1 + 0xbb6) == bVar19)) {
        return;
      }
      uStack_d8 = param_2[8];
      uStack_f8 = *param_2;
      uVar16 = param_2[2];
      uVar21 = param_2[3];
      uStack_e8 = param_2[4];
      uStack_e4 = param_2[5];
      uStack_e0 = param_2[6];
      uStack_dc = param_2[7];
      uStack_f0 = uVar16;
      if ((param_2[1] & 0xff) == 8) {
        puVar8 = &uStack_f8;
        uVar13 = 0xd;
        puVar10 = puVar8;
        do {
          pbVar1 = (byte *)((int)puVar10 + 5);
          puVar10 = (uint *)((int)puVar10 + 1);
          uVar14 = uVar13 + *pbVar1;
          uVar13 = uVar14 & 0xffff;
        } while ((uint *)(auStack_f4 + 3) != puVar10);
        if ((uVar21 & 0xff) == (uVar14 & 0xff)) {
          uStack_f0._3_1_ = (byte)(uVar16 >> 0x18);
          uVar13 = 0xd;
          bVar3 = (uStack_f0._3_1_ & 0xf0) + 0x10;
          uStack_f0 = CONCAT13(bVar3 | uStack_f0._3_1_ & 0xf,(int3)uVar16);
          auStack_f4 = (undefined1  [4])(param_2[1] & 0xffffe0ff | 0x900);
          do {
            pbVar1 = (byte *)((int)puVar8 + 5);
            puVar8 = (uint *)((int)puVar8 + 1);
            uVar16 = uVar13 + *pbVar1;
            uVar13 = uVar16 & 0xffff;
          } while ((uint *)(auStack_f4 + 3) != puVar8);
          *(byte *)(param_1 + 0xbb6) = bVar19;
          *(undefined1 *)(param_1 + 0xbb5) = 1;
          uStack_ec = CONCAT31((int3)(uVar21 >> 8),(char)(uVar16 * 0x10000 >> 0x10));
          uStack_fc = 0;
          uVar16 = FUN_ram_48025b94();
          uVar21 = uStack_e8;
          if ((uStack_ec._2_1_ == '\0') && (uStack_e8 == 0)) {
            uVar21 = uVar16;
          }
          iVar17 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&uStack_f8,0,0xb,3,0,
                                    uVar21 + 5000,10,&uStack_fc,0,0,1,0,0);
          if (iVar17 != 0) {
            *(byte *)(param_1 + 0xbe4) = bVar3 >> 4;
            *(undefined4 *)(param_1 + 0xbbc) = uStack_fc;
            *(uint *)(param_1 + 0xbc0) = uStack_f8;
            *(undefined1 (*) [4])(param_1 + 0xbc4) = auStack_f4;
            *(uint *)(param_1 + 0xbc8) = uStack_f0;
            *(undefined4 *)(param_1 + 0xbcc) = uStack_ec;
            *(uint *)(param_1 + 0xbd0) = uStack_e8;
            *(uint *)(param_1 + 0xbd4) = uStack_e4;
            *(uint *)(param_1 + 0xbd8) = uStack_e0;
            *(uint *)(param_1 + 0xbdc) = uStack_dc;
            *(uint *)(param_1 + 0xbe0) = uStack_d8;
            return;
          }
          *(undefined1 *)(param_1 + 0xbec) = 0;
          *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xbf8) + 1;
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xbec) = 0;
  return;
}


