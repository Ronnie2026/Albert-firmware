/* Firmware entry: 0x480e6b84 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_480e6b84(int *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  uint *puVar7;
  char cVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *extraout_a1;
  undefined4 *puVar15;
  undefined4 *extraout_a1_00;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  char cVar21;
  ushort uVar22;
  uint *puVar23;
  int *piVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  ushort *puVar30;
  short *psVar31;
  uint uVar32;
  int iVar33;
  undefined8 uVar34;
  char cStack_3a1;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  int iStack_398;
  uint uStack_394;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined1 uStack_37c;
  undefined4 local_378;
  uint auStack_374 [13];
  undefined4 uStack_340;
  int aiStack_33c [3];
  uint local_330 [94];
  char acStack_1b7 [3];
  uint auStack_1b4 [96];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar29 = *param_1;
  puVar30 = *(ushort **)(iVar29 + 0x33ec);
  uStack_388 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_38c = 0x180;
  if (puVar30 == (ushort *)0x0) {
    puVar30 = (ushort *)&uStack_38c;
  }
  uVar17 = (uint)*(byte *)(param_1 + 0x187);
  uVar28 = uVar17 + 1;
  *(byte *)(param_1 + 0x187) =
       (char)uVar28 - (((byte)((ulonglong)uVar28 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar28 / 3))
  ;
  psVar31 = *(short **)(iVar29 + 0x33ec);
  uVar10 = uVar17;
LAB_ram_480e6c28:
  puVar14 = (undefined4 *)
            (uVar10 - (((uint)((ulonglong)uVar10 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar10 / 3));
  cVar8 = *(char *)(puVar14 + 0x1207d530);
  if ((psVar31 == (short *)0x0) || ((char)psVar31[8] == '\0')) {
    puVar23 = &DAT_ram_48222eb8;
    puVar7 = local_330 + 0x5c;
    do {
      puVar20 = puVar7;
      uVar27 = *puVar23;
      uVar10 = puVar23[1];
      uVar16 = puVar23[2];
      puVar20[3] = puVar23[3];
      *puVar20 = uVar27;
      puVar20[1] = uVar10;
      puVar20[2] = uVar16;
      puVar23 = puVar23 + 4;
      puVar7 = puVar20 + 4;
    } while (puVar23 != &DAT_ram_48222ee8);
    puVar20[4] = DAT_ram_48222ee8;
    puVar20[5] = DAT_ram_48222eec;
    do {
      if (psVar31 != (short *)0x0) {
        sVar9 = *psVar31;
        if (sVar9 == 0) goto LAB_ram_480e6cdc;
        if (*(code **)(psVar31 + 2) != (code *)0x0) {
          iVar11 = (**(code **)(psVar31 + 2))();
          if (*(uint *)(psVar31 + 6) <= (uint)(iVar11 - *(int *)(psVar31 + 4)))
          goto LAB_ram_480e6cdc;
          sVar9 = *psVar31;
        }
        *psVar31 = sVar9 + -1;
      }
      iVar11 = FUN_ram_4804628e(iVar29 + 0x3a40,cVar8,local_330 + 0x5c);
      if (iVar11 == 0) goto LAB_ram_480e6cdc;
      FUN_ram_480dc4f2(iVar29,local_330 + 0x5c);
      psVar31 = *(short **)(iVar29 + 0x33ec);
    } while( true );
  }
  goto LAB_ram_480e6ce2;
LAB_ram_480e6cdc:
  iVar29 = *param_1;
LAB_ram_480e6ce2:
  uStack_39c = *(undefined4 *)(iVar29 + 0x82fc);
  uStack_3a0 = *(uint *)(iVar29 + 0x82f8);
  iStack_398 = *(int *)(iVar29 + 0x8300);
  uStack_394 = *(uint *)(iVar29 + 0x8304);
  if (((cVar8 == '\x02') && (iStack_398 != 0 || uStack_394 != 0)) &&
     (uVar10 = uStack_3a0 >> 8 & 0xff, uVar10 != 0xff)) {
    uVar16 = uStack_3a0 & 0xff;
    if (uVar16 == 2) {
      iVar11 = 1;
    }
    else if (uVar16 == 4) {
      iVar11 = 2;
    }
    else {
      iVar11 = 0;
      if (uVar16 != 1) goto LAB_ram_480e6d2c;
    }
    if (uVar10 < 0x18) {
      if (uVar10 < 0x10) {
        iVar11 = uVar10 * 0xe8 + iVar11 * 0x1228 + 0x3a40;
      }
      else {
        iVar11 = (uVar10 - 0x10) * 0x120;
        iVar12 = iVar29 + iVar11;
        if ((*(char *)(iVar12 + 0x70d6) == '\0') || (*(byte *)(iVar12 + 0x70b8) != uVar16))
        goto LAB_ram_480e6d2c;
        iVar11 = iVar11 + 0x70f0;
      }
      iVar11 = iVar11 + iVar29;
      if (((*(int *)(iVar11 + 0xd8) == iStack_398) && (*(uint *)(iVar11 + 0xdc) == uStack_394)) &&
         ((*(uint *)(iVar11 + 0xe4) & 0xff00ff) == 0x100ff)) goto LAB_ram_480e6d3e;
    }
  }
LAB_ram_480e6d2c:
  iVar11 = 2;
  if (cVar8 == '\x02') {
    iVar11 = 1;
  }
  else if (cVar8 != '\x04') {
    if (cVar8 != '\x01') {
LAB_ram_480e6d3e:
      psVar31 = *(short **)(iVar29 + 0x33ec);
joined_r0x480e6e18:
      if (uVar17 + 3 == uVar28) {
        if (psVar31 == (short *)0x0) {
          cVar8 = '\x10';
        }
        else {
          cVar8 = '\x10';
          if ((char)psVar31[8] != '\0') {
            return;
          }
        }
        do {
          cVar8 = cVar8 + -1;
          iVar29 = FUN_ram_480d88ca(param_1);
          if (iVar29 == 0) {
            return;
          }
        } while (cVar8 != '\0');
        return;
      }
      uVar10 = uVar28;
      uVar28 = uVar28 + 1;
      goto LAB_ram_480e6c28;
    }
    iVar11 = 0;
  }
  piVar18 = param_1 + (int)puVar14 * 0x82 + 1;
  cVar21 = '\x04';
  puVar15 = puVar14;
LAB_ram_480e6d7c:
  uVar10 = *(uint *)(iVar29 + iVar11 * 0x1228 + 0x4c5c);
  if (uVar10 != 0) {
    sVar9 = __popcountsi2(uVar10,puVar15);
    uVar22 = *puVar30;
    if ((ushort)(sVar9 * 4 + 1U) <= uVar22) {
      puVar7 = local_330 + 0x5c;
      memset(puVar7,0,0x180);
      aiStack_33c[1] = 0;
      aiStack_33c[2] = 0;
      uStack_340._0_2_ = 0xff00;
      puVar23 = local_330;
      do {
        *(undefined2 *)puVar23 = 0xff00;
        puVar23[2] = 0;
        puVar23[3] = 0;
        puVar23 = puVar23 + 4;
      } while (puVar7 != puVar23);
      uVar16 = 0;
      bVar6 = false;
LAB_ram_480e6df0:
      if (*(code **)(puVar30 + 2) != (code *)0x0) {
        iVar29 = (**(code **)(puVar30 + 2))();
        if ((uint)(iVar29 - *(int *)(puVar30 + 4)) < *(uint *)(puVar30 + 6)) {
          uVar22 = *puVar30;
          goto LAB_ram_480e6e76;
        }
        iVar29 = *param_1;
        goto LAB_ram_480e6e0a;
      }
LAB_ram_480e6e76:
      uVar22 = uVar22 - 1;
      local_378._0_2_ = CONCAT11(0xff,(undefined1)local_378);
      *puVar30 = uVar22;
      uVar27 = uVar10 - 1 & uVar10;
      iVar11 = 1;
      if (cVar8 != '\x02') {
        iVar11 = (uint)(cVar8 == '\x04') << 1;
      }
      iVar29 = *param_1;
      iVar12 = __ctzsi2(uVar10);
      if (iVar12 < 0x18) {
        if (iVar12 < 0x10) {
          iVar11 = iVar11 * 0x1228 + iVar12 * 0xe8 + 0x3a40;
        }
        else {
          iVar11 = (iVar12 + -0x10) * 0x120;
          iVar19 = iVar29 + iVar11;
          if ((*(char *)(iVar19 + 0x70d6) == '\0') || (*(char *)(iVar19 + 0x70b8) != cVar8))
          goto LAB_ram_480e6fac;
          iVar11 = iVar11 + 0x70f0;
        }
        iVar11 = iVar11 + iVar29;
        if ((*(uint *)(iVar11 + 0xe4) & 0xff00ff) == 0x100ff) {
          local_378 = CONCAT31(CONCAT21(local_378._2_2_,(char)iVar12),cVar8);
          iVar19 = *(int *)(iVar11 + 0xd8);
          uVar10 = *(uint *)(iVar11 + 0xdc);
          cVar1 = *(char *)(iVar11 + 0x37);
          uVar32 = *(uint *)(iVar11 + 0x3c);
          bVar2 = *(byte *)(iVar11 + 0x50);
          uVar3 = *(undefined1 *)(iVar11 + 0x51);
          if ((((iStack_398 == 0 && uStack_394 == 0) || (uStack_3a0._1_1_ == -1)) ||
              (((local_378 ^ uStack_3a0) & 0xffff) != 0)) ||
             ((iStack_398 != iVar19 || (uStack_394 != uVar10)))) {
            iVar33 = uVar16 * 0x10;
            puVar7[uVar16 * 4] = (uint)*(uint3 *)(iVar11 + 8);
            auStack_374[1] = iVar19;
            auStack_374[2] = uVar10;
            local_330[uVar16 * 4 + 0x5d] = uVar32;
            *(char *)(auStack_1b4 + uVar16 * 4 + -1) = (char)iVar12;
            *(char *)((int)auStack_1b4 + iVar33 + -3) = cVar1;
            *(undefined1 *)(auStack_1b4 + uVar16 * 4) = uVar3;
            *(uint *)((int)&uStack_340 + uVar16 * 8 * 2) = local_378;
            aiStack_33c[uVar16 * 4 + 1] = iVar19;
            local_330[uVar16 * 4 + -1] = uVar10;
            *(byte *)((int)auStack_1b4 + iVar33 + -1) = bVar2 | uVar32 != 0;
            aiStack_33c[uVar16 * 4] = auStack_374[0];
            *(bool *)((int)auStack_1b4 + iVar33 + -2) = cVar1 == '\x03';
            bVar6 = (bool)(bVar6 | cVar1 != '\x03');
            uVar16 = uVar16 + 1 & 0xff;
          }
        }
      }
LAB_ram_480e6fac:
      if (uVar27 != 0) goto code_r0x480e6fae;
      if (uVar16 == 0) {
        psVar31 = *(short **)(iVar29 + 0x33ec);
      }
      else {
        iVar29 = FUN_ram_480475ac(piVar18,puVar7,uVar16,puVar30);
        if ((iVar29 == -1) || (uVar22 = *puVar30, uVar22 == 0)) {
LAB_ram_480e7130:
          iVar29 = *param_1;
          psVar31 = *(short **)(iVar29 + 0x33ec);
        }
        else {
          if (*(code **)(puVar30 + 2) != (code *)0x0) {
            iVar11 = (**(code **)(puVar30 + 2))();
            if (*(uint *)(puVar30 + 6) <= (uint)(iVar11 - *(int *)(puVar30 + 4)))
            goto LAB_ram_480e7130;
            uVar22 = *puVar30;
          }
          iVar11 = *param_1;
          *puVar30 = uVar22 - 1;
          cStack_3a1 = '\0';
          uVar13 = FUN_ram_48025b94();
          FUN_ram_4804723a(iVar11 + 0x3a40,*(undefined1 *)((int)&uStack_340 + iVar29 * 8 * 2),
                           *(undefined1 *)((int)&uStack_340 + iVar29 * 0x10 + 1),
                           aiStack_33c[iVar29 * 4 + 1],local_330[iVar29 * 4 + -1],uVar13,
                           *param_1 + 0x1e08,&cStack_3a1);
          cVar1 = cStack_3a1;
          if (cStack_3a1 == '\0') {
            iVar29 = *param_1;
            psVar31 = *(short **)(iVar29 + 0x33ec);
            if ((psVar31 == (short *)0x0) || (puVar15 = extraout_a1, (char)psVar31[8] == '\0'))
            goto LAB_ram_480e707e;
            goto LAB_ram_480e7110;
          }
          bVar2 = *(byte *)(param_1 + (int)puVar14 * 0x82 + 0x81);
          if (bVar2 != 0) {
            piVar24 = param_1 + (int)puVar14 * 0x82;
            uVar10 = 0;
LAB_ram_480e716c:
            puVar7 = (uint *)(piVar24 + 1);
            piVar24 = piVar24 + 2;
            if (local_330[iVar29 * 4 + 0x5c] != *puVar7) goto LAB_ram_480e7166;
            cVar4 = *(char *)((int)auStack_1b4 + iVar29 * 0x10 + -2);
            bVar5 = *(byte *)(param_1 + ((int)puVar14 * 0x41 + uVar10) * 2 + 2);
            pbVar25 = (byte *)(piVar18 + 1);
            do {
              if ((pbVar25[1] != 0) && (bVar5 < *pbVar25)) {
                *pbVar25 = *pbVar25 - 1;
              }
              pbVar25 = pbVar25 + 8;
            } while ((byte *)(piVar18 + 0x81) != pbVar25);
            iVar29 = (int)puVar14 * 0x41 + uVar10;
            *(byte *)(param_1 + iVar29 * 2 + 2) = bVar2 - 1;
            if (cVar4 == '\0') {
              *(undefined1 *)((int)param_1 + (int)puVar14 * 0x208 + 0x205) = 0;
              if ((*(char *)((int)param_1 + iVar29 * 8 + 0xb) == '\x02') &&
                 (*(char *)((int)param_1 + (int)puVar14 * 0x208 + 0x207) != '\0')) {
                bVar2 = *(byte *)((int)param_1 + (int)puVar14 * 0x208 + 0x206);
                if (bVar2 < 2) {
                  *(byte *)((int)param_1 + (int)puVar14 * 0x208 + 0x206) = bVar2 + 1;
                }
              }
              else {
                *(undefined1 *)((int)param_1 + (int)puVar14 * 0x208 + 0x206) = 0;
              }
            }
            else if (bVar6) {
              bVar2 = *(byte *)((int)param_1 + (int)puVar14 * 0x208 + 0x205);
              if (bVar2 < 2) {
                *(byte *)((int)param_1 + (int)puVar14 * 0x208 + 0x205) = bVar2 + 1;
              }
            }
            else {
              *(undefined1 *)((int)param_1 + (int)puVar14 * 0x208 + 0x205) = 0;
            }
            puVar26 = (undefined1 *)((int)piVar18 + 6);
            do {
              *puVar26 = 0;
              puVar26 = puVar26 + 8;
            } while (puVar26 != (undefined1 *)((int)piVar18 + 0x206));
          }
LAB_ram_480e71fa:
          iVar29 = *param_1;
          psVar31 = *(short **)(iVar29 + 0x33ec);
          if ((psVar31 == (short *)0x0) || ((char)psVar31[8] == '\0')) {
LAB_ram_480e707e:
            puVar23 = &DAT_ram_48222eb8;
            puVar7 = &local_378;
            do {
              puVar20 = puVar7;
              puVar15 = (undefined4 *)puVar23[1];
              uVar10 = puVar23[2];
              *puVar20 = *puVar23;
              uVar16 = puVar23[3];
              puVar20[1] = (uint)puVar15;
              puVar20[2] = uVar10;
              puVar20[3] = uVar16;
              puVar23 = puVar23 + 4;
              puVar7 = puVar20 + 4;
            } while (puVar23 != &DAT_ram_48222ee8);
            puVar20[4] = DAT_ram_48222ee8;
            puVar20[5] = DAT_ram_48222eec;
            do {
              if (psVar31 != (short *)0x0) {
                sVar9 = *psVar31;
                if (sVar9 == 0) goto LAB_ram_480e7108;
                if (*(code **)(psVar31 + 2) != (code *)0x0) {
                  uVar34 = (**(code **)(psVar31 + 2))();
                  puVar15 = (undefined4 *)((ulonglong)uVar34 >> 0x20);
                  if (*(uint *)(psVar31 + 6) <= (uint)((int)uVar34 - *(int *)(psVar31 + 4)))
                  goto LAB_ram_480e7108;
                  sVar9 = *psVar31;
                }
                *psVar31 = sVar9 + -1;
              }
              iVar11 = FUN_ram_4804628e(iVar29 + 0x3a40,cVar8,&local_378);
              puVar15 = &local_378;
              if (iVar11 == 0) goto LAB_ram_480e7108;
              FUN_ram_480dc4f2(iVar29);
              psVar31 = *(short **)(iVar29 + 0x33ec);
              puVar15 = extraout_a1_00;
            } while( true );
          }
        }
      }
      goto joined_r0x480e6e18;
    }
  }
  goto LAB_ram_480e6d3e;
code_r0x480e6fae:
  uVar10 = uVar27;
  if (uVar22 == 0) {
LAB_ram_480e6e0a:
    psVar31 = *(short **)(iVar29 + 0x33ec);
    goto joined_r0x480e6e18;
  }
  goto LAB_ram_480e6df0;
LAB_ram_480e7166:
  uVar10 = uVar10 + 1;
  if (uVar10 == bVar2) goto LAB_ram_480e71fa;
  goto LAB_ram_480e716c;
LAB_ram_480e7108:
  iVar29 = *param_1;
  if (cVar1 != '\0') goto LAB_ram_480e6d3e;
LAB_ram_480e7110:
  cVar21 = cVar21 + -1;
  if (cVar21 == '\0') goto LAB_ram_480e6d3e;
  iVar11 = 1;
  if (cVar8 != '\x02') {
    iVar11 = (uint)(cVar8 == '\x04') << 1;
  }
  goto LAB_ram_480e6d7c;
}


