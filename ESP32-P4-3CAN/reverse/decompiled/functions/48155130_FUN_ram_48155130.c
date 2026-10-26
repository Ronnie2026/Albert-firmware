/* Firmware entry: 0x48155130 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_48155130(int *param_1,byte *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  ushort uVar16;
  char cVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  undefined4 uVar24;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_64;
  undefined4 uStack_58;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar8 = *param_1;
  uVar11 = *(uint *)(iVar8 + 100);
  uVar10 = *(uint *)(iVar8 + 0x68);
  uVar15 = *(undefined4 *)(iVar8 + 0x84);
  uVar18 = *(undefined4 *)(iVar8 + 0x74);
  uVar7 = *(undefined4 *)(iVar8 + 0x78);
  uVar5 = *(undefined4 *)(iVar8 + 0x7c);
  uVar24 = *(undefined4 *)(iVar8 + 0x80);
  uVar19 = *(undefined4 *)(iVar8 + 0x70);
  uStack_a4 = *(undefined4 *)(iVar8 + 0x6c);
  uStack_b8 = uVar11 >> 2 & 1;
  uVar4 = 0;
  uVar16 = *(ushort *)(iVar8 + 100);
  uStack_ac = uVar11 >> 5 & 1;
  uStack_b4 = uVar11 >> 6 & 1;
  cVar1 = *(char *)(iVar8 + 0x70);
  uStack_b0 = uVar11 >> 7 & 1;
  uStack_a8 = uVar11 >> 9 & 1;
  uVar20 = *(ushort *)(iVar8 + 0x66);
  uVar9 = uVar11 >> 8 & 1;
  if (((uVar16 & 4) == 0) || (uVar20 == 0x5dc)) {
LAB_ram_48155208:
    if ((uVar16 & 8) == 0) {
LAB_ram_481552bc:
      if ((uVar16 & 0x80) == 0) {
LAB_ram_481552c0:
        if ((uVar16 & 0x10) != 0) {
LAB_ram_481552c6:
          if (5 < param_3) goto LAB_ram_481552cc;
        }
        goto LAB_ram_48155304;
      }
LAB_ram_48155414:
      uVar2 = false;
      if (param_3 < 3) goto LAB_ram_48155306;
LAB_ram_4815541c:
      bVar6 = param_2[1];
LAB_ram_48155420:
      if (bVar6 != 3) goto LAB_ram_48155426;
LAB_ram_481555ec:
      if (*param_2 == 0xd) {
        param_3 = param_3 + -3;
        param_2 = param_2 + 3;
        uStack_b0 = 0;
        goto LAB_ram_481552c0;
      }
      if ((uVar16 & 0x10) == 0) {
        if ((uVar16 & 0x20) != 0) goto LAB_ram_481556f4;
        goto LAB_ram_48155604;
      }
      if (5 < param_3) goto LAB_ram_481552d6;
      uVar21 = uVar16 & 0x20;
      if ((uVar16 & 0x20) != 0) goto LAB_ram_4815543c;
      uVar22 = uVar16 & 0x40;
      if ((uVar16 & 0x40) != 0) goto LAB_ram_481552e6;
      uVar23 = uVar16 & 0x100;
      if ((uVar16 & 0x100) != 0) goto LAB_ram_48155892;
      uVar21 = uVar16 & 0x200;
      if ((uVar16 & 0x200) != 0) {
        uVar21 = 0;
        uVar2 = false;
        goto LAB_ram_48155476;
      }
      bVar3 = false;
      uVar2 = false;
    }
    else {
LAB_ram_4815520a:
      if (uVar10 == 0xffffffff) goto LAB_ram_481552bc;
      if (param_3 < 6) goto LAB_ram_48155300;
LAB_ram_48155216:
      bVar6 = param_2[1];
      if (bVar6 != 6) {
        if ((uVar16 & 0x80) != 0) {
          if (bVar6 != 3) goto LAB_ram_4815522a;
          goto LAB_ram_481555ec;
        }
        if ((uVar16 & 0x10) != 0) goto LAB_ram_481552d6;
        if ((uVar16 & 0x20) == 0) goto LAB_ram_4815576c;
LAB_ram_4815523e:
        uVar2 = false;
        goto joined_r0x48155240;
      }
      bVar6 = *param_2;
      if (bVar6 == 2) {
        param_3 = param_3 + -6;
        uVar10 = (((uint)param_2[3] | (*(ushort *)(param_2 + 2) & 0xff) << 8) << 8 |
                 (uint)param_2[4]) << 8 | param_2[5] | uVar10;
        param_2 = param_2 + 6;
        uVar4 = uVar4 | 8;
        goto LAB_ram_481552bc;
      }
      if ((uVar16 & 0x80) != 0) {
LAB_ram_4815522a:
        if ((uVar16 & 0x10) != 0) goto LAB_ram_481552cc;
        goto LAB_ram_48155230;
      }
      if ((uVar16 & 0x10) != 0) goto LAB_ram_481556da;
      if ((uVar16 & 0x20) == 0) goto LAB_ram_4815576c;
LAB_ram_481556f4:
      uVar2 = false;
LAB_ram_48155244:
      if ((uVar16 & 0x40) == 0) {
        if ((uVar16 & 0x100) != 0) {
          uVar21 = 0x20;
          uVar22 = 0;
          goto LAB_ram_4815558a;
        }
        if ((uVar16 & 0x200) == 0) {
LAB_ram_4815585c:
          uVar22 = 0;
          uVar23 = 0;
          bVar3 = false;
          uVar21 = 0x20;
          goto LAB_ram_4815533c;
        }
        uVar22 = 0;
        uVar21 = 0x20;
joined_r0x48155264:
        uVar23 = 0;
      }
      else {
        uVar21 = 0x20;
LAB_ram_481552f2:
        if ((uVar16 & 0x100) == 0) {
LAB_ram_4815568e:
          if ((uVar16 & 0x200) != 0) {
            uVar22 = 0x40;
            goto joined_r0x48155264;
          }
          bVar3 = false;
          uVar22 = 0x40;
          uVar23 = 0;
          goto LAB_ram_4815533c;
        }
        uVar22 = 0x40;
LAB_ram_4815558a:
        if ((uVar16 & 0x200) == 0) goto LAB_ram_481556a4;
        uVar23 = 0x100;
      }
      if (param_3 != 2) goto LAB_ram_48155476;
      bVar3 = true;
    }
  }
  else {
    if (param_3 < 4) {
LAB_ram_48155300:
      if ((uVar16 & 0x80) != 0) goto LAB_ram_48155414;
LAB_ram_48155304:
      uVar2 = false;
LAB_ram_48155306:
      uVar21 = 0;
      if ((uVar16 & 0x20) == 0) {
LAB_ram_481554a8:
        uVar22 = 0;
        if ((uVar16 & 0x40) == 0) {
LAB_ram_48155568:
          uVar23 = 0;
          if ((uVar16 & 0x100) != 0) {
            if (param_3 < 2) goto LAB_ram_481554b6;
            goto LAB_ram_48155576;
          }
        }
        else {
          if (param_3 < 2) goto LAB_ram_481554b6;
LAB_ram_481552e8:
          if (param_2[1] != 2) goto LAB_ram_481552f2;
          bVar6 = *param_2;
LAB_ram_48155680:
          if (bVar6 == 8) {
            param_3 = param_3 + -2;
            param_2 = param_2 + 2;
            uVar4 = uVar4 | 0x40;
            uVar22 = 0x40;
            uStack_b4 = 0;
            goto LAB_ram_48155568;
          }
          if ((uVar16 & 0x100) == 0) goto LAB_ram_4815568e;
          uVar22 = 0x40;
LAB_ram_48155584:
          if (bVar6 != 0x12) goto LAB_ram_4815558a;
          param_3 = param_3 + -2;
          param_2 = param_2 + 2;
          uVar4 = uVar4 | 0x100;
          uVar23 = 0x100;
          uVar9 = 0;
        }
LAB_ram_481555b4:
        bVar3 = false;
        if ((uVar16 & 0x200) == 0) goto LAB_ram_4815532e;
LAB_ram_48155470:
        if (2 < param_3) goto LAB_ram_48155476;
      }
      else {
        if (1 < param_3) {
LAB_ram_4815543e:
          bVar6 = param_2[1];
joined_r0x48155240:
          if (bVar6 != 2) goto LAB_ram_48155244;
          bVar6 = *param_2;
          if (bVar6 == 7) {
            param_3 = param_3 + -2;
            param_2 = param_2 + 2;
            uVar4 = uVar4 | 0x20;
            uVar21 = 0x20;
            uStack_ac = 0;
            goto LAB_ram_481554a8;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar21 = 0x20;
            goto LAB_ram_48155680;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar21 = 0x20;
            uVar22 = 0;
            goto LAB_ram_48155584;
          }
          if ((uVar16 & 0x200) == 0) goto LAB_ram_4815585c;
          uVar22 = 0;
          uVar21 = 0x20;
          uVar23 = 0;
          goto LAB_ram_48155470;
        }
        if (((uVar16 & 0x140) != 0) || ((uVar16 & 0x200) == 0)) goto LAB_ram_481554b6;
        uVar23 = 0;
        uVar21 = 0x20;
        uVar22 = 0;
      }
      bVar3 = true;
    }
    else {
      bVar6 = param_2[1];
      if (bVar6 != 4) {
        if ((uVar16 & 8) != 0) {
LAB_ram_481556f8:
          if (uVar10 == 0xffffffff) {
            if ((uVar16 & 0x80) != 0) goto LAB_ram_4815541c;
            goto LAB_ram_481552c0;
          }
          if (5 < param_3) goto LAB_ram_48155216;
          if ((uVar16 & 0x80) == 0) goto LAB_ram_48155304;
          goto LAB_ram_4815541c;
        }
        if ((uVar16 & 0x80) != 0) goto LAB_ram_48155420;
LAB_ram_4815572a:
        if ((uVar16 & 0x10) != 0) goto LAB_ram_481552c6;
        uVar21 = uVar16 & 0x20;
        uVar2 = false;
        if ((uVar16 & 0x20) != 0) {
          bVar6 = param_2[1];
          goto joined_r0x48155240;
        }
        goto LAB_ram_481554a8;
      }
      if (*param_2 == 1) {
        uVar4 = 4;
        uVar21 = (ushort)param_2[3] | *(short *)(param_2 + 2) << 8;
        param_3 = param_3 + -4;
        param_2 = param_2 + 4;
        if ((*(ushort *)(iVar8 + 0x42) < uVar21) && (0x5dc < uVar21)) goto LAB_ram_48155208;
        uVar20 = uVar21;
        if ((uVar16 & 8) != 0) goto LAB_ram_4815520a;
        goto LAB_ram_481552bc;
      }
      if ((uVar16 & 8) != 0) goto LAB_ram_481556f8;
      if ((uVar16 & 0x80) == 0) goto LAB_ram_4815572a;
LAB_ram_48155426:
      if ((uVar16 & 0x10) == 0) {
LAB_ram_48155230:
        if ((uVar16 & 0x20) != 0) {
LAB_ram_48155238:
          bVar6 = param_2[1];
          goto LAB_ram_4815523e;
        }
LAB_ram_48155604:
        if ((uVar16 & 0x40) != 0) {
LAB_ram_4815560c:
          uVar2 = false;
          uVar21 = 0;
          goto LAB_ram_481552e8;
        }
        uVar22 = uVar16 & 0x100;
        if ((uVar16 & 0x100) == 0) {
          uVar21 = uVar16 & 0x200;
          if ((uVar16 & 0x200) == 0) {
LAB_ram_48155880:
            bVar3 = false;
            uVar23 = 0;
            uVar2 = false;
            goto LAB_ram_4815533c;
          }
          uVar23 = 0;
          uVar21 = 0;
          uVar2 = false;
          goto LAB_ram_48155476;
        }
LAB_ram_48155890:
        uVar21 = uVar16 & 0x40;
        uVar22 = 0;
LAB_ram_48155892:
        uVar2 = false;
LAB_ram_48155576:
        if (param_2[1] == 2) {
LAB_ram_48155580:
          bVar6 = *param_2;
          goto LAB_ram_48155584;
        }
        if ((uVar16 & 0x200) != 0) {
          uVar23 = 0x100;
          goto LAB_ram_48155470;
        }
LAB_ram_481556a4:
        bVar3 = false;
        uVar23 = 0x100;
        goto LAB_ram_4815533c;
      }
      if (param_3 < 6) {
        if ((uVar16 & 0x20) != 0) {
LAB_ram_4815543c:
          uVar2 = false;
          goto LAB_ram_4815543e;
        }
LAB_ram_4815576c:
        uVar21 = uVar16 & 0x40;
        if ((uVar16 & 0x40) != 0) goto LAB_ram_4815560c;
        uVar22 = uVar16 & 0x100;
        if ((uVar16 & 0x100) != 0) goto LAB_ram_48155890;
        uVar23 = 0;
        uVar2 = false;
        goto LAB_ram_481555b4;
      }
LAB_ram_481552cc:
      if (param_2[1] == 6) {
        bVar6 = *param_2;
LAB_ram_481556da:
        if (bVar6 == 5) {
          param_3 = param_3 + -6;
          param_2 = param_2 + 6;
          uVar4 = uVar4 | 0x10;
          uStack_a4 = FUN_ram_48155c22();
          uVar16 = *(ushort *)(iVar8 + 100);
          uVar2 = true;
          goto LAB_ram_48155306;
        }
        uVar21 = uVar16 & 0x20;
        if ((uVar16 & 0x20) != 0) goto LAB_ram_481556f4;
        if ((uVar16 & 0x40) == 0) goto LAB_ram_481555be;
        uVar2 = false;
        goto LAB_ram_481552f2;
      }
LAB_ram_481552d6:
      if ((uVar16 & 0x20) != 0) goto LAB_ram_48155238;
      if ((uVar16 & 0x40) != 0) {
LAB_ram_481552e6:
        uVar21 = uVar16 & 0x20;
        uVar2 = false;
        goto LAB_ram_481552e8;
      }
LAB_ram_481555be:
      uVar21 = uVar16 & 0x100;
      if ((uVar16 & 0x100) == 0) {
        uVar22 = uVar16 & 0x200;
        if ((uVar16 & 0x200) == 0) goto LAB_ram_48155880;
        uVar23 = 0;
        uVar22 = 0;
        uVar2 = false;
      }
      else {
        if (param_2[1] == 2) {
          uVar2 = false;
          uVar22 = 0;
          uVar21 = 0;
          goto LAB_ram_48155580;
        }
        uVar21 = uVar16 & 0x200;
        if ((uVar16 & 0x200) == 0) {
          bVar3 = false;
          uVar22 = 0;
          uVar2 = false;
          uVar23 = 0x100;
          goto LAB_ram_4815533c;
        }
        uVar2 = false;
        uVar23 = 0x100;
        uVar22 = 0;
        uVar21 = 0;
      }
LAB_ram_48155476:
      bVar6 = *param_2;
      uVar14 = (uint)param_2[1];
      bVar3 = true;
      if ((bVar6 != 0x13) || (uVar14 < 3)) goto LAB_ram_48155344;
      if (param_3 < (int)uVar14) goto LAB_ram_4815533c;
      param_3 = param_3 - uVar14;
      param_2 = param_2 + uVar14;
      uVar4 = uVar4 | 0x200;
      uStack_a8 = 0;
    }
LAB_ram_4815532e:
    if (param_3 < 2) {
LAB_ram_481554b6:
      if ((char)param_1[4] != '\t') {
        cVar17 = '\0';
        if (((bool)uVar2) && (cVar17 = cVar1 + '\x01', *(byte *)(iVar8 + 8) <= (byte)(cVar1 + 1U)))
        {
          *(undefined1 *)(iVar8 + 0x21) = 0xc;
          FUN_ram_481550ac(*param_1,"Loopback detected");
        }
        uStack_64._0_2_ = (ushort)uVar11;
        uStack_58 = CONCAT31((int3)((uint)uVar19 >> 8),cVar17);
        uStack_64 = CONCAT22(uVar20,(ushort)(uStack_ac << 5) | (ushort)(uStack_b8 << 2) |
                                    (ushort)(uStack_b4 << 6) | (ushort)(uStack_b0 << 7) |
                                    (ushort)(uVar9 << 8) | (ushort)(uStack_a8 << 9) |
                                    (ushort)uStack_64 & 0xfc1b);
        *(uint *)(iVar8 + 0x68) = uVar10;
        *(undefined4 *)(iVar8 + 100) = uStack_64;
        *(undefined4 *)(iVar8 + 0x70) = uStack_58;
        *(undefined4 *)(iVar8 + 0x6c) = uStack_a4;
        *(undefined4 *)(iVar8 + 0x74) = uVar18;
        *(undefined4 *)(iVar8 + 0x78) = uVar7;
        *(undefined4 *)(iVar8 + 0x7c) = uVar5;
        *(undefined4 *)(iVar8 + 0x80) = uVar24;
        *(undefined4 *)(iVar8 + 0x84) = uVar15;
      }
      return 1;
    }
  }
LAB_ram_4815533c:
  bVar6 = *param_2;
  uVar14 = (uint)param_2[1];
LAB_ram_48155344:
  do {
    if ((uVar14 < 2) || (param_3 = param_3 - uVar14, param_3 < 0)) {
      return 0;
    }
    pbVar12 = param_2 + uVar14;
    if (bVar6 == 7) {
      if (uVar21 != 0 || (uVar4 & 0x20) != 0) {
        return 0;
      }
joined_r0x48155676:
      if (uVar14 != 2) {
        return 0;
      }
    }
    else if (bVar6 < 8) {
      if (bVar6 == 2) {
        uVar13 = uVar4 & 8;
        if (((uVar16 & 8) != 0) && (*(int *)(iVar8 + 0x68) != -1)) {
          return 0;
        }
      }
      else {
        uVar13 = (uVar4 | uVar16) & 0x10;
        if (bVar6 != 5) {
          if (bVar6 == 1) {
            if (((uVar16 & 4) != 0) && (*(short *)(iVar8 + 0x66) != 0x5dc)) {
              return 0;
            }
            if ((uVar4 & 4) != 0) {
              return 0;
            }
            if (uVar14 != 4) {
              return 0;
            }
            uVar13 = (ushort)param_2[3] | *(short *)(param_2 + 2) << 8;
            if (uVar13 < 0x5dc) {
              uStack_b8 = 1;
              uVar20 = uVar13;
            }
          }
          goto joined_r0x48155626;
        }
      }
      if (uVar13 != 0) {
        return 0;
      }
      if (uVar14 != 6) {
        return 0;
      }
    }
    else if (bVar6 == 0x12) {
      if (uVar23 != 0 || (uVar4 & 0x100) != 0) {
        return 0;
      }
      if (uVar14 != 2) {
        return 0;
      }
      uVar9 = 1;
    }
    else if (bVar6 == 0x13) {
      if (bVar3 || (uVar4 & 0x200) != 0) {
        return 0;
      }
      if (uVar14 == 2) {
        return 0;
      }
    }
    else if (bVar6 == 8) {
      if (uVar22 != 0 || (uVar4 & 0x40) != 0) {
        return 0;
      }
      goto joined_r0x48155676;
    }
joined_r0x48155626:
    if (param_3 < 2) goto LAB_ram_481554b6;
    uVar14 = (uint)pbVar12[1];
    bVar6 = *pbVar12;
    param_2 = pbVar12;
  } while( true );
}


