/* Firmware entry: 0x480d9a8c */

/* WARNING: Removing unreachable block (ram,0x480da214) */
/* WARNING: Removing unreachable block (ram,0x480da21a) */

void FUN_ram_480d9a8c(int *param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  byte *pbVar2;
  bool bVar3;
  undefined1 auVar4 [4];
  bool bVar5;
  undefined1 auVar6 [4];
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  char cVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint *puVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined4 uStack_114;
  byte bStack_10f;
  byte bStack_10e;
  byte bStack_10d;
  byte bStack_10c;
  int iStack_108;
  undefined1 auStack_104 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  char cStack_da;
  byte bStack_d9;
  undefined4 auStack_d8 [6];
  char cStack_bd;
  byte bStack_bc;
  char cStack_bb;
  byte bStack_ba;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar21 = (uint *)param_1[3];
  fence();
  uVar20 = *puVar21;
  do {
    uVar10 = uVar20 + 1;
    if ((int)uVar20 < 0) {
      return;
    }
    if ((uVar20 & 0xffff) == 0xffff) {
      return;
    }
    bVar1 = *puVar21 != uVar20;
    uVar20 = *puVar21;
  } while (bVar1);
  *puVar21 = uVar10;
  iVar24 = *param_1;
  FUN_ram_4ff3ec14(iVar24 + 0xb18,0xffffffff);
  puVar19 = (undefined4 *)(iVar24 + 0xb38);
  puVar16 = &local_e4;
  do {
    uVar9 = puVar19[1];
    uVar11 = puVar19[2];
    uVar12 = puVar19[3];
    *puVar16 = *puVar19;
    puVar16[1] = uVar9;
    puVar16[2] = uVar11;
    puVar16[3] = uVar12;
    puVar19 = puVar19 + 4;
    puVar16 = puVar16 + 4;
  } while (puVar19 != (undefined4 *)(iVar24 + 0xbd8));
  *puVar16 = *puVar19;
  FUN_ram_4ff3ee10(iVar24 + 0xb18);
  uVar20 = uStack_114;
  if ((cStack_da == '\0') || (bStack_d9 == 0)) {
    fence();
    uVar20 = *puVar21;
    while( true ) {
      uVar10 = uVar20 - 1;
      if ((int)uVar20 < 0) {
        return;
      }
      if ((uVar20 & 0xffff) == 0) break;
      bVar1 = *puVar21 == uVar20;
      uVar20 = *puVar21;
      if (bVar1) {
        *puVar21 = uVar10;
        return;
      }
    }
    return;
  }
  iStack_108 = *param_2;
  auVar6 = (undefined1  [4])param_2[1];
  uVar10 = param_2[2];
  iVar24 = param_2[3];
  iStack_f8 = param_2[4];
  iStack_f4 = param_2[5];
  iStack_f0 = param_2[6];
  iStack_ec = param_2[7];
  iStack_e8 = param_2[8];
  fence();
  if ((char)param_1[0x12] == '\0') {
    piVar17 = (int *)((int)param_2 + 5);
    cVar18 = -100;
    do {
      iVar15 = *piVar17;
      piVar17 = (int *)((int)piVar17 + 1);
      cVar18 = cVar18 + (char)iVar15;
    } while (param_2 + 3 != piVar17);
    cVar8 = '\0';
    if ((char)param_2[3] == cVar18) {
      cVar8 = *(char *)((int)param_1 + 0x49);
      fence();
    }
  }
  else {
    cVar8 = '\x06';
  }
  uVar13 = (uint)auVar6 & 0xff;
  auStack_104[1] = (byte)((uint)auVar6 >> 8);
  auStack_104[2] = (byte)((uint)auVar6 >> 0x10);
  bVar22 = auStack_104[2];
  uStack_100._2_1_ = (byte)(uVar10 >> 0x10);
  uStack_100._3_1_ = (byte)(uVar10 >> 0x18);
  uStack_fc._1_3_ = (undefined3)((uint)iVar24 >> 8);
  auStack_104 = auVar6;
  uStack_100 = uVar10;
  uStack_fc = iVar24;
  if (local_e4._1_1_ == '\x0e') {
    if (cStack_bd == '\0') {
      uStack_114 = uStack_114 & 0xffffff;
      bStack_10f = 0;
      if (7 < uVar13) {
        bVar27 = 0;
        bVar23 = 0;
        goto LAB_ram_480d9fc6;
      }
      if (cVar8 == '\x02') goto LAB_ram_480da0dc;
LAB_ram_480d9d34:
      bVar7 = 0xff;
      bVar26 = 0;
      bVar25 = 0;
      bVar22 = 0;
    }
    else {
      uStack_114 = uStack_114 & 0xffffff;
      bStack_10f = 0;
      bVar27 = bStack_bc;
      bVar23 = bStack_ba;
      if (uVar13 < 8) {
        if (cVar8 != '\x02') goto LAB_ram_480d9cc0;
LAB_ram_480da0dc:
        bStack_10f = 0;
        uStack_114 = uVar20 & 0xffffff;
        bVar7 = 0xff;
        bVar25 = 0;
        bVar22 = auStack_104[1] & 0xf0 | 2;
        bVar27 = 0;
        goto LAB_ram_480d9f5a;
      }
LAB_ram_480d9fc6:
      bStack_10e = 0;
      bStack_10f = 0;
      uStack_114 = uVar20 & 0xffffff;
      bVar7 = uStack_100._2_1_ >> 2 & 0xf;
      bVar25 = (byte)((auStack_104[2] & 0x20) >> 5);
      if ((byte)((auStack_104[1] & 0xf) - 3) < 4) {
        if ((char)param_1[0xa9] == '\0') {
          param_1[0xaa] = param_3;
        }
        bVar28 = 1;
        *(undefined1 *)(param_1 + 0xa9) = 1;
        bStack_10d = bVar25;
        bStack_10c = bVar7;
        if ((cVar8 == '\x06') && ((auStack_104[1] & 0xf) != 6)) {
          auStack_104 = (undefined1  [4])((uint)auVar6 & 0xfffff0ff | 0x600);
          bStack_10f = 1;
          bStack_10e = 1;
          auVar4 = auStack_104;
          if (bVar7 != 4) {
            bVar27 = 0;
            bVar26 = 0;
            bStack_bc = 0;
            goto LAB_ram_480da00e;
          }
        }
        else {
          auVar4 = auVar6;
          if (bVar7 != 4) {
            if (cVar8 != '\x02') {
              bVar26 = 0;
              bStack_d9 = 0;
              goto LAB_ram_480d9dba;
            }
            bVar27 = 0;
            bVar22 = auStack_104[1] & 0xf0 | 2;
            goto LAB_ram_480d9f5a;
          }
        }
        auStack_104 = auVar4;
        bVar26 = bVar23;
        bVar28 = bStack_10f;
        if ((bVar27 == 0) || (11999 < (uint)(param_3 - param_1[0xaa]))) {
          bVar27 = bStack_10e;
          if (bVar23 == 0) {
            if (bStack_10e == 0) {
LAB_ram_480da28c:
              bVar27 = bStack_d9;
              if (cVar8 == '\x02') goto LAB_ram_480d9f9e;
              bVar26 = 0;
              auVar6 = auStack_104;
              goto LAB_ram_480d9dba;
            }
            bStack_bc = 0;
          }
          else {
            if (((uint)auVar6 & 0x200000) == 0) goto LAB_ram_480da0b8;
            if (bStack_10e == 0) goto LAB_ram_480da28c;
            bVar26 = 0;
            bStack_bc = 0;
          }
        }
        else {
          uStack_100 = uVar10 & 0xffc3ffff | 0x40000;
          uStack_114 = CONCAT13(1,(int3)uVar20);
          bStack_bc = bVar27;
          if (bVar23 != 0) {
            uVar10 = uStack_100;
            if (((uint)auVar6 & 0x200000) == 0) {
LAB_ram_480da0b8:
              uStack_100 = uVar10;
              auStack_104 = (undefined1  [4])
                            (CONCAT13(auStack_104[3],CONCAT12(bVar22,auStack_104._0_2_)) | 0x200000)
              ;
              bVar26 = bStack_d9;
              bVar27 = bStack_d9;
              bStack_bc = uStack_114._3_1_;
            }
            else {
              bVar26 = 0;
              bVar27 = bVar23;
              bStack_bc = 1;
            }
          }
        }
LAB_ram_480da00e:
        piVar17 = &iStack_108;
        uStack_100 = CONCAT13((uStack_100._3_1_ & 0xf0) + 0x10 | uStack_100._3_1_ & 0xf,
                              (undefined3)uStack_100);
        uVar20 = 0x9c;
        do {
          pbVar2 = (byte *)((int)piVar17 + 5);
          piVar17 = (int *)((int)piVar17 + 1);
          uVar10 = uVar20 + *pbVar2;
          uVar20 = uVar10 & 0xffff;
        } while (piVar17 != (int *)(auStack_104 + 3));
        uStack_fc = CONCAT31(uStack_fc._1_3_,(char)(uVar10 * 0x10000 >> 0x10));
        if (bStack_bc == 0) {
          bVar22 = bVar26;
          if (cVar8 == '\x02') {
            auStack_104 = (undefined1  [4])((uint)auStack_104 & 0xfffff0ff | 0x200);
            goto LAB_ram_480d9ece;
          }
          bVar1 = bStack_d9 == 0;
          bStack_d9 = bVar27;
          auVar6 = auStack_104;
          uVar10 = uStack_100;
          if (bVar1) goto LAB_ram_480d9dba;
        }
        else {
LAB_ram_480d9e28:
          bVar22 = bStack_bc;
          if (cVar8 == '\x02') goto LAB_ram_480d9ec0;
        }
LAB_ram_480d9e2c:
        if (param_4 == 0) {
          iVar15 = FUN_ram_48025b94();
          iVar24 = iStack_f8;
          if ((uStack_fc._2_1_ == '\0') && (iStack_f8 == 0)) {
            iVar24 = iVar15;
          }
        }
        else {
          iVar24 = FUN_ram_48025b94();
        }
        iVar24 = iVar24 + 5000;
        iVar15 = 0;
        if (bVar28 != 0) goto LAB_ram_480d9ef8;
        goto LAB_ram_480d9e44;
      }
      *(undefined1 *)(param_1 + 0xa9) = 0;
      if (cVar8 == '\x06') {
        auStack_104 = (undefined1  [4])((uint)auVar6 & 0xfffff0ff | 0x600);
        bVar26 = 0;
        bVar27 = 0;
        bVar28 = bStack_d9;
        bStack_bc = 0;
        goto LAB_ram_480da00e;
      }
      bStack_d9 = 0;
      bVar27 = 0;
      bVar26 = 0;
      if (cVar8 == '\x02') {
        bVar22 = auStack_104[1] & 0xf0 | 2;
        goto LAB_ram_480d9f5a;
      }
LAB_ram_480d9dba:
      uStack_100 = uVar10;
      auStack_104 = auVar6;
      bVar22 = 0;
      if (cStack_bd != '\0') goto LAB_ram_480d9cca;
    }
LAB_ram_480d9cce:
    FUN_ram_4ff3ec14(param_1[2],0xffffffff);
    iVar24 = param_1[1];
    *(byte *)(iVar24 + 0x8b1) = bVar7;
    iVar15 = param_1[1];
    *(byte *)(iVar24 + 0x8b0) = bVar22;
    *(byte *)(iVar15 + 0x8b2) = bVar25;
    if (bVar26 == 0) goto LAB_ram_480d9c10;
    *(int *)(iVar15 + 0x8b4) = *(int *)(iVar15 + 0x8b4) + 1;
LAB_ram_480d9d04:
    *(int *)(iVar15 + 0x8bc) = *(int *)(iVar15 + 0x8bc) + 1;
  }
  else {
    if (cStack_bd == '\0') {
      if (*param_2 == 0x399) {
        if (7 < uVar13) {
          bStack_bc = 0;
          bVar27 = 0;
          goto LAB_ram_480d9d4e;
        }
        if (cVar8 != '\x02') goto LAB_ram_480d9d34;
LAB_ram_480d9f46:
        bVar7 = 0xff;
        bVar25 = 0;
        bVar27 = false;
LAB_ram_480d9f4e:
        bVar22 = auStack_104[1] & 0xf0 | 2;
        goto LAB_ram_480d9f5a;
      }
      if (cVar8 != '\x02') {
        FUN_ram_4ff3ec14(param_1[2],0xffffffff);
        *(undefined2 *)(param_1[1] + 0x8b0) = 0xff00;
        *(undefined1 *)(param_1[1] + 0x8b2) = 0;
        goto LAB_ram_480d9c10;
      }
      bVar25 = 0;
      bVar7 = 0xff;
      bVar27 = 0;
LAB_ram_480d9f9e:
      bVar22 = auStack_104[1] & 0xf0 | 2;
LAB_ram_480d9f5a:
      auStack_104[1] = bVar22;
      bVar26 = 0;
      uStack_100._0_3_ = (undefined3)uVar10;
      uStack_100 = CONCAT13((uStack_100._3_1_ & 0xf0) + 0x10 | uStack_100._3_1_ & 0xf,
                            (undefined3)uStack_100);
      bVar22 = 0;
    }
    else {
      if ((*param_2 != 0x399) || (bVar27 = bStack_ba, uVar13 < 8)) {
        if (cVar8 == '\x02') goto LAB_ram_480d9f46;
LAB_ram_480d9cc0:
        bVar7 = 0xff;
        bVar26 = 0;
        bVar25 = 0;
        bStack_d9 = 0;
LAB_ram_480d9cca:
        bVar22 = bStack_d9 & bStack_ba;
        goto LAB_ram_480d9cce;
      }
LAB_ram_480d9d4e:
      bVar7 = uStack_100._2_1_ >> 2 & 0xf;
      bVar25 = auStack_104[2] >> 5 & 1;
      bVar1 = cVar8 == '\x06';
      bVar28 = bVar1;
      if (3 < (byte)((auStack_104[1] & 0xf) - 3)) goto LAB_ram_480d9dae;
      bVar3 = (auStack_104[1] & 0xf) != 6;
      bVar28 = bVar1 && bVar3;
      if (bStack_bc == 0) {
        bVar5 = bVar7 == 4;
        if (bVar27 != 0) {
          if (bVar7 != 4) goto LAB_ram_480d9dae;
          if (bVar1 && bVar3) {
            auStack_104[3] = (undefined1)(((uint)auVar6 & 0xfffff0ff) >> 0x18);
            auStack_104 = (undefined1  [4])
                          (CONCAT13(auStack_104[3],
                                    CONCAT12(auStack_104[2],(short)((uint)auVar6 & 0xfffff0ff))) |
                          0x200600);
            bVar27 = bVar28;
            bVar26 = bVar28;
          }
          else {
            auStack_104 = (undefined1  [4])((uint)auVar6 | 0x200000);
            bVar26 = bVar27;
          }
          goto LAB_ram_480d9dee;
        }
LAB_ram_480d9db0:
        bVar27 = bVar5;
        if ((bool)bVar28 != false) {
          auStack_104 = (undefined1  [4])((uint)auVar6 & 0xfffff0ff | 0x600);
          bStack_bc = 0;
          bVar26 = 0;
          goto LAB_ram_480d9dee;
        }
        bVar26 = 0;
        bStack_d9 = bVar27;
        if (cVar8 == '\x02') goto LAB_ram_480d9f4e;
        goto LAB_ram_480d9dba;
      }
      if (cStack_bb == '\x01') {
        if (2 < (byte)(bVar7 - 2)) goto LAB_ram_480d9dae;
        if (bVar27 == 0) goto LAB_ram_480da186;
LAB_ram_480da16c:
        if (bVar1 && bVar3) {
          auStack_104 = (undefined1  [4])((uint)auVar6 & 0xfffff0ff | 0x600);
          bVar28 = bStack_bc;
          if (bVar7 != 4) goto LAB_ram_480da182;
LAB_ram_480d9dd6:
          auStack_104 = (undefined1  [4])
                        (CONCAT13(auStack_104[3],CONCAT12(bVar22,auStack_104._0_2_)) | 0x200000);
          bVar26 = bStack_bc;
          bVar28 = bStack_bc;
        }
        else {
          bVar26 = 0;
          if (bVar7 == 4) goto LAB_ram_480da12a;
        }
      }
      else {
        if (cStack_bb == '\x02') {
          if (3 < (byte)(bVar7 - 2)) goto LAB_ram_480d9dae;
          if (bVar27 != 0) goto LAB_ram_480da16c;
        }
        else {
          if (bVar7 != 4) {
LAB_ram_480d9dae:
            bVar5 = false;
            goto LAB_ram_480d9db0;
          }
          if (bVar27 != 0) {
            if (bVar1 && bVar3) {
              auStack_104 = (undefined1  [4])((uint)auVar6 & 0xfffff0ff | 0x600);
              goto LAB_ram_480d9dd6;
            }
LAB_ram_480da12a:
            auStack_104 = (undefined1  [4])((uint)auVar6 | 0x200000);
            bVar28 = 0;
            bVar26 = bStack_bc;
            goto LAB_ram_480d9de2;
          }
        }
LAB_ram_480da186:
        if (bVar1 && bVar3) {
          auStack_104 = (undefined1  [4])((uint)auVar6 & 0xfffff0ff | 0x600);
          bVar28 = bStack_bc;
        }
LAB_ram_480da182:
        bVar26 = 0;
      }
LAB_ram_480d9de2:
      uStack_100 = uVar10 & 0xffc3ffff | 0x40000;
      bVar27 = bVar7 == 4;
LAB_ram_480d9dee:
      piVar17 = &iStack_108;
      uStack_100 = CONCAT13((uStack_100._3_1_ & 0xf0) + 0x10 | uStack_100._3_1_ & 0xf,
                            (undefined3)uStack_100);
      uVar20 = 0x9c;
      do {
        pbVar2 = (byte *)((int)piVar17 + 5);
        piVar17 = (int *)((int)piVar17 + 1);
        uVar10 = uVar20 + *pbVar2;
        uVar20 = uVar10 & 0xffff;
      } while (piVar17 != (int *)(auStack_104 + 3));
      uStack_fc = CONCAT31(uStack_fc._1_3_,(char)(uVar10 * 0x10000 >> 0x10));
      if (bStack_bc != 0) goto LAB_ram_480d9e28;
      bVar22 = bVar26;
      bStack_bc = bVar26;
      if (cVar8 != '\x02') goto LAB_ram_480d9e2c;
LAB_ram_480d9ec0:
      auStack_104 = (undefined1  [4])((uint)auStack_104 & 0xfffff0ff | 0x200);
      bVar22 = bStack_bc;
    }
LAB_ram_480d9ece:
    piVar17 = &iStack_108;
    uVar20 = 0x9c;
    do {
      pbVar2 = (byte *)((int)piVar17 + 5);
      piVar17 = (int *)((int)piVar17 + 1);
      uVar10 = uVar20 + *pbVar2;
      uVar20 = uVar10 & 0xffff;
    } while (piVar17 != (int *)(auStack_104 + 3));
    uStack_fc = CONCAT31(uStack_fc._1_3_,(char)(uVar10 * 0x10000 >> 0x10));
    if (param_4 == 0) {
      iVar24 = FUN_ram_48025b94();
      if ((uStack_fc._2_1_ == '\0') && (iStack_f8 == 0)) {
        iVar24 = iVar24 + 5000;
      }
      else {
        iVar24 = iStack_f8 + 5000;
      }
    }
    else {
      iVar24 = FUN_ram_48025b94();
      iVar24 = iVar24 + 5000;
    }
LAB_ram_480d9ef8:
    iVar15 = param_1[0x1f];
    fence();
LAB_ram_480d9e44:
    uStack_114 = 0;
    iVar24 = FUN_ram_4805cb5e(*param_1,&iStack_108,1,3,3,0,iVar24,1,&uStack_114,0,0,1,0,iVar15);
    bVar23 = 0;
    if (cStack_bd != '\0') {
      bVar23 = bVar27 & bStack_ba;
    }
    FUN_ram_4ff3ec14(param_1[2],0xffffffff);
    iVar14 = param_1[1];
    *(byte *)(iVar14 + 0x8b1) = bVar7;
    iVar15 = param_1[1];
    *(byte *)(iVar14 + 0x8b0) = bVar23;
    *(byte *)(iVar15 + 0x8b2) = bVar25;
    if (bVar26 == 0) goto LAB_ram_480d9c10;
    *(int *)(iVar15 + 0x8b4) = *(int *)(iVar15 + 0x8b4) + 1;
    if ((iVar24 == 0) || (bVar22 == 0)) goto LAB_ram_480d9d04;
    *(int *)(iVar15 + 0x8b8) = *(int *)(iVar15 + 0x8b8) + 1;
  }
  *(int *)(iVar15 + 0x8c0) = param_3;
LAB_ram_480d9c10:
  FUN_ram_4ff3ee10(param_1[2]);
  FUN_ram_480553f6(puVar21);
  return;
}


