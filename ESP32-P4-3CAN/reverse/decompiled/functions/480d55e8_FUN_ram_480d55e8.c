/* Firmware entry: 0x480d55e8 */

undefined4 FUN_ram_480d55e8(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  byte bVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  byte bVar21;
  byte bVar22;
  char cStack_561;
  uint auStack_560 [18];
  undefined1 uStack_518;
  byte bStack_4d8;
  undefined4 local_4d0 [284];
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_37;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if ((DAT_ram_4ff6df84 == '\0') || (DAT_ram_4ff6b738 != DAT_ram_4ff6df64)) {
    FUN_ram_48060b84(param_2,0);
    *(char **)(param_1 + 0x5c0) = "recovery_ingress_retry";
    return 2;
  }
  iVar14 = FUN_ram_480d175e(param_1,param_3);
  if (iVar14 != 0) {
    iVar14 = FUN_ram_480d18ce(param_1 + 4,param_3);
    if (iVar14 != 0) {
      FUN_ram_4ff45158(param_1 + 0x18,param_3,0x524);
      *(undefined1 *)(param_1 + 0x5bb) = 1;
      iVar15 = FUN_ram_480b063e();
      iVar14 = DAT_ram_4ff6dcdc;
      if (iVar15 != 0) {
        FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,param_3,0x524);
        *(undefined1 *)(iVar14 + 0x41112) = 1;
        auStack_560[0] = auStack_560[0] & 0xffffff00;
        iVar15 = FUN_ram_480b1222(iVar14 + 0x30,param_3,FUN_ram_480b356e,auStack_560);
        if (iVar15 == 0) {
          *(undefined1 *)(iVar14 + 0x41111) = 0;
          *(char **)(iVar14 + 0x41114) = "outbox_full_or_invalid";
        }
        else if ((auStack_560[0] & 0xff) != 0) {
          FUN_ram_480b0ed4();
        }
      }
      iVar14 = FUN_ram_48060b84(param_3,1);
      if (iVar14 == 0) {
        uVar19 = *param_3;
        *(undefined2 *)(param_1 + 0x5bc) = 0x100;
        *(undefined2 *)(param_1 + 0x5b6) = 0;
        *(undefined2 *)(param_1 + 0x5b8) = 0;
        uVar2 = *(undefined1 *)(param_3 + 0x12);
        *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
        *(undefined4 *)(param_1 + 0x544) = uVar19;
        *(undefined4 *)(param_1 + 0x548) = param_4;
        *(undefined1 *)(param_1 + 0x5be) = uVar2;
        uVar19 = 0;
        if (*(char *)(param_3 + 0x22) != '\0') {
          uVar19 = param_3[0x24];
        }
        *(undefined4 *)(param_1 + 0x554) = uVar19;
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = 0;
        *(undefined1 *)(param_1 + 0x559) = 0;
        *(undefined1 *)(param_1 + 0x55a) = 0;
        *(undefined1 *)(param_1 + 0x55b) = 0;
        *(undefined1 *)(param_1 + 0x55c) = 0;
        *(undefined1 *)(param_1 + 0x55d) = 0;
        *(undefined1 *)(param_1 + 0x55e) = 0;
        *(undefined1 *)(param_1 + 0x55f) = 0;
        *(undefined1 *)(param_1 + 0x560) = 0;
        *(undefined1 *)(param_1 + 0x561) = 0;
        *(undefined1 *)(param_1 + 0x562) = 0;
        *(undefined1 *)(param_1 + 0x563) = 0;
        puVar17 = memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) != '\0') {
          uVar2 = *(undefined1 *)((int)param_3 + 0x509);
          uVar3 = *(undefined1 *)((int)param_3 + 0x50a);
          uVar4 = *(undefined1 *)((int)param_3 + 0x50b);
          uVar5 = *(undefined1 *)((int)param_3 + 0x501);
          uVar6 = *(undefined1 *)((int)param_3 + 0x502);
          uVar7 = *(undefined1 *)((int)param_3 + 0x503);
          uVar8 = *(undefined1 *)(param_3 + 0x141);
          uVar9 = *(undefined1 *)((int)param_3 + 0x505);
          uVar10 = *(undefined1 *)((int)param_3 + 0x506);
          uVar11 = *(undefined1 *)((int)param_3 + 0x507);
          uVar12 = *(undefined1 *)(param_3 + 0x142);
          *(undefined1 *)(param_1 + 0x558) = *(undefined1 *)(param_3 + 0x140);
          *(undefined1 *)(param_1 + 0x561) = uVar2;
          *(undefined1 *)(param_1 + 0x562) = uVar3;
          *(undefined1 *)(param_1 + 0x559) = uVar5;
          *(undefined1 *)(param_1 + 0x55a) = uVar6;
          *(undefined1 *)(param_1 + 0x55b) = uVar7;
          *(undefined1 *)(param_1 + 0x55c) = uVar8;
          *(undefined1 *)(param_1 + 0x55d) = uVar9;
          *(undefined1 *)(param_1 + 0x55e) = uVar10;
          *(undefined1 *)(param_1 + 0x55f) = uVar11;
          *(undefined1 *)(param_1 + 0x560) = uVar12;
          *(undefined1 *)(param_1 + 0x563) = uVar4;
          bVar22 = *(byte *)(param_3 + 0x22);
          bVar18 = bVar22;
          if (0x14 < bVar22) {
            bVar18 = 0x14;
          }
          *(byte *)(param_1 + 0x5b4) = bVar18;
          param_3 = param_3 + 0x24;
          bVar21 = 0;
          if (bVar22 != 0) {
            do {
              bVar21 = bVar21 + 1;
              *puVar17 = *param_3;
              param_3 = param_3 + 0xe;
              puVar17 = puVar17 + 1;
            } while (bVar21 < bVar18);
          }
          *(undefined1 *)(param_1 + 0x5ba) = 1;
        }
        return 0;
      }
      iVar14 = 2;
      while ((DAT_ram_4ff6df88 != 0 &&
             (iVar15 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar15 == 1))) {
        fence();
        if ((DAT_ram_4ff6df84 == '\0') && (DAT_ram_4ff6df7c == 0)) {
          fence();
          fence();
          if (DAT_ram_4ff6b730 != DAT_ram_4ff6b734) goto LAB_ram_480d58fe;
          FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
        }
        else {
LAB_ram_480d58fe:
          FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
          iVar15 = FUN_ram_4802d2dc(0);
          if (iVar15 == 0) break;
          fence();
          DAT_ram_4ff6df5c = 0;
        }
        memset(auStack_560,0,0x530);
        uStack_37 = 0xff;
        auStack_560[1] = 1;
        iVar15 = FUN_ram_4802d110(auStack_560);
        if (((iVar15 == 0) || (iVar15 = FUN_ram_480d175e(param_1,auStack_560), iVar15 == 0)) ||
           (iVar15 = FUN_ram_480d18ce(param_1 + 4,auStack_560), iVar15 == 0)) break;
        FUN_ram_4ff45158(param_1 + 0x18,auStack_560,0x524);
        *(undefined1 *)(param_1 + 0x5bb) = 1;
        iVar16 = FUN_ram_480b063e();
        iVar15 = DAT_ram_4ff6dcdc;
        if (iVar16 != 0) {
          FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,auStack_560,0x524);
          *(undefined1 *)(iVar15 + 0x41112) = 1;
          cStack_561 = '\0';
          iVar16 = FUN_ram_480b1222(iVar15 + 0x30,auStack_560,FUN_ram_480b356e,&cStack_561);
          if (iVar16 == 0) {
            *(undefined1 *)(iVar15 + 0x41111) = 0;
            *(char **)(iVar15 + 0x41114) = "outbox_full_or_invalid";
          }
          else if (cStack_561 != '\0') {
            FUN_ram_480b0ed4();
          }
        }
        iVar15 = iStack_34;
        uVar13 = auStack_560[0];
        if ((DAT_ram_4ff6df88 != 0) &&
           (iVar16 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar16 == 1)) {
          if ((iVar15 == DAT_ram_4ff6b738) && (uVar13 == *DAT_ram_4ff6df8c)) {
            FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
            *(undefined2 *)(param_1 + 0x5b6) = 0;
            *(undefined2 *)(param_1 + 0x5b8) = 0;
            *(undefined4 *)(param_1 + 0x548) = param_4;
            *(uint *)(param_1 + 0x544) = auStack_560[0];
            *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
            *(undefined2 *)(param_1 + 0x5bc) = 0x100;
            *(undefined1 *)(param_1 + 0x5be) = uStack_518;
            if (bStack_4d8 == 0) {
              *(undefined4 *)(param_1 + 0x554) = 0;
              *(undefined1 *)(param_1 + 0x5ba) = 0;
              *(undefined1 *)(param_1 + 0x5b4) = 0;
              *(undefined1 *)(param_1 + 0x558) = 0;
              *(undefined1 *)(param_1 + 0x559) = 0;
              *(undefined1 *)(param_1 + 0x55a) = 0;
              *(undefined1 *)(param_1 + 0x55b) = 0;
              *(undefined1 *)(param_1 + 0x55c) = 0;
              *(undefined1 *)(param_1 + 0x55d) = 0;
              *(undefined1 *)(param_1 + 0x55e) = 0;
              *(undefined1 *)(param_1 + 0x55f) = 0;
              *(undefined1 *)(param_1 + 0x560) = 0;
              *(undefined1 *)(param_1 + 0x561) = 0;
              *(undefined1 *)(param_1 + 0x562) = 0;
              *(undefined1 *)(param_1 + 0x563) = 0;
              memset((void *)(param_1 + 0x564),0,0x50);
              if (*(char *)(param_1 + 0x10) != '\0') {
                *(undefined1 *)(param_1 + 0x5b4) = 0;
                *(undefined1 *)(param_1 + 0x558) = uStack_60;
                *(undefined1 *)(param_1 + 0x559) = uStack_5f;
                *(undefined1 *)(param_1 + 0x55a) = uStack_5e;
                *(undefined1 *)(param_1 + 0x55b) = uStack_5d;
                *(undefined1 *)(param_1 + 0x55c) = uStack_5c;
                *(undefined1 *)(param_1 + 0x55d) = uStack_5b;
                *(undefined1 *)(param_1 + 0x55e) = uStack_5a;
                *(undefined1 *)(param_1 + 0x55f) = uStack_59;
                *(undefined1 *)(param_1 + 0x560) = uStack_58;
                *(undefined1 *)(param_1 + 0x561) = uStack_57;
                *(undefined1 *)(param_1 + 0x562) = uStack_56;
                *(undefined1 *)(param_1 + 0x563) = uStack_55;
                goto LAB_ram_480d5bac;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x5ba) = 0;
              *(undefined1 *)(param_1 + 0x5b4) = 0;
              *(undefined4 *)(param_1 + 0x554) = local_4d0[0];
              *(undefined1 *)(param_1 + 0x558) = 0;
              *(undefined1 *)(param_1 + 0x559) = 0;
              *(undefined1 *)(param_1 + 0x55a) = 0;
              *(undefined1 *)(param_1 + 0x55b) = 0;
              *(undefined1 *)(param_1 + 0x55c) = 0;
              *(undefined1 *)(param_1 + 0x55d) = 0;
              *(undefined1 *)(param_1 + 0x55e) = 0;
              *(undefined1 *)(param_1 + 0x55f) = 0;
              *(undefined1 *)(param_1 + 0x560) = 0;
              *(undefined1 *)(param_1 + 0x561) = 0;
              *(undefined1 *)(param_1 + 0x562) = 0;
              *(undefined1 *)(param_1 + 0x563) = 0;
              puVar17 = memset((void *)(param_1 + 0x564),0,0x50);
              if (*(char *)(param_1 + 0x10) != '\0') {
                *(undefined1 *)(param_1 + 0x561) = uStack_57;
                *(undefined1 *)(param_1 + 0x563) = uStack_55;
                *(undefined1 *)(param_1 + 0x558) = uStack_60;
                *(undefined1 *)(param_1 + 0x559) = uStack_5f;
                *(undefined1 *)(param_1 + 0x55a) = uStack_5e;
                *(undefined1 *)(param_1 + 0x55b) = uStack_5d;
                *(undefined1 *)(param_1 + 0x55c) = uStack_5c;
                *(undefined1 *)(param_1 + 0x55d) = uStack_5b;
                *(undefined1 *)(param_1 + 0x55e) = uStack_5a;
                *(undefined1 *)(param_1 + 0x55f) = uStack_59;
                *(undefined1 *)(param_1 + 0x560) = uStack_58;
                *(undefined1 *)(param_1 + 0x562) = uStack_56;
                if (0x14 < bStack_4d8) {
                  bStack_4d8 = 0x14;
                }
                *(byte *)(param_1 + 0x5b4) = bStack_4d8;
                puVar20 = local_4d0;
                bVar22 = 0;
                do {
                  bVar22 = bVar22 + 1;
                  *puVar17 = *puVar20;
                  puVar20 = puVar20 + 0xe;
                  puVar17 = puVar17 + 1;
                } while (bVar22 < bStack_4d8);
LAB_ram_480d5bac:
                *(undefined1 *)(param_1 + 0x5ba) = 1;
                return 0;
              }
            }
            return 0;
          }
          FUN_ram_4ff3afa2();
        }
        bVar1 = iVar14 == 1;
        iVar14 = 1;
        if (bVar1) break;
      }
      *(undefined1 *)(param_1 + 0x5b7) = 1;
      iVar14 = -0xe4;
      goto LAB_ram_480d5704;
    }
  }
  FUN_ram_48060b84(param_2,0);
  iVar14 = -0xcc;
LAB_ram_480d5704:
  *(char **)(param_1 + 0x5c0) = "[FATAL] Online OTA owner PSRAM workspace unavailable" + iVar14 + 4;
  *(undefined4 *)(param_1 + 0x54c) = param_4;
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  return 10;
}


