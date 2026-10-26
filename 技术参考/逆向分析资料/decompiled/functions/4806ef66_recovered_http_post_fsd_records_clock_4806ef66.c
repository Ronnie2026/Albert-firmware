/* Firmware entry: 0x4806ef66 */

/* WARNING: Removing unreachable block (ram,0x4806f5c0) */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_fsd_records_clock_4806ef66(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *****pppppbVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *******pppppppbVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 auStack_70 [4];
  byte ******local_60 [3];
  char cStack_51;
  byte ****appppbStack_50 [4];
  byte ******local_40;
  undefined1 *puStack_3c;
  char cStack_31;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(appppbStack_50,"Cache-Control");
  FUN_ram_4802a8a8(&local_40,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,appppbStack_50,&local_40);
  FUN_ram_4802a59e(&local_40);
  FUN_ram_4802a59e(appppbStack_50);
  iVar5 = DAT_ram_4ff5cbe8;
  iVar10 = DAT_ram_4ff5cbdc;
  if (DAT_ram_4ff6dcd5 == '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"records_unavailable\"}",0x2a);
    return;
  }
  fence();
  fence();
  if (((DAT_ram_4ff6df30 != '\0') || (DAT_ram_4ff5c5c0 != '\0')) || (DAT_ram_4ff5c5ca != '\0')) {
    local_60[0] = (byte ******)0x481c791c;
    auStack_70[0] = 0x199;
    appppbStack_50[0] = (byte ****)0x1f;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      pppppbVar4 = (byte *****)0x1f;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(auStack_70,local_60,appppbStack_50);
        DAT_ram_4ff5cbc8 = '\0';
        pppppbVar4 = (byte *****)appppbStack_50[0];
        if ((byte *****)appppbStack_50[0] == (byte *****)0x0) {
          pppppbVar4 = (byte *****)0x1;
        }
      }
      pppppbVar4 = (byte *****)FUN_ram_4ff206d8(pppppbVar4,0x404);
      iVar12 = iVar5 + iVar10 * 0x1d40;
      *(byte ******)(iVar12 + 0x1cdc) = pppppbVar4;
      if (pppppbVar4 == (byte *****)0x0) {
        if (*(char *)(iVar12 + 0x44c) == '\0') {
          return;
        }
        FUN_ram_48065e9c(iVar5 + iVar10 * 0x1d40 + 0x1c,7);
      }
      else {
        if ((byte *****)appppbStack_50[0] != (byte *****)0x0) {
          FUN_ram_4ff45158(pppppbVar4,local_60[0],appppbStack_50[0]);
          pppppbVar4 = *(byte ******)(iVar12 + 0x1cdc);
        }
        local_40 = (byte ******)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40);
        if ((*(char *)(local_40 + 0x113) == '\0') || (*(char *)(local_40 + 0x113) == '\x06')) {
          return;
        }
        local_40[0x738] = pppppbVar4;
        local_40[0x739] = (byte *****)appppbStack_50[0];
        local_40[0x73a] = (byte *****)0x0;
        puStack_3c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,auStack_70[0],"application/json",local_40,
                         &LAB_ram_4802d3f2);
      }
    }
    return;
  }
  FUN_ram_4802a8a8(auStack_a0,"bootId");
  iVar10 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar10 + 0x1cc4) != 0) {
    puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar15 = 0;
    do {
      uVar15 = uVar15 + 1;
      iVar5 = FUN_ram_4802b18e(auStack_a0,*puVar3);
      if (iVar5 != 0) {
        FUN_ram_4802a8a8(auStack_90,"unixMs");
        iVar10 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if (*(int *)(iVar10 + 0x1cc4) == 0) goto LAB_ram_4806f2b2;
        puVar3 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
        uVar15 = 0;
        goto LAB_ram_4806f190;
      }
      puVar3 = puVar3 + 2;
    } while (uVar15 < *(uint *)(iVar10 + 0x1cc4));
  }
  FUN_ram_4802a59e(auStack_a0);
  goto LAB_ram_4806f2c4;
  while (puVar3 = puVar3 + 2, uVar15 < *(uint *)(iVar10 + 0x1cc4)) {
LAB_ram_4806f190:
    uVar15 = uVar15 + 1;
    iVar5 = FUN_ram_4802b18e(auStack_90,*puVar3);
    if (iVar5 != 0) {
      FUN_ram_4802a8a8(auStack_80,"uptimeMs");
      iVar10 = FUN_ram_48030d52(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_80);
      if (iVar10 == 0) goto LAB_ram_4806f2ac;
      FUN_ram_4802a8a8(auStack_70,"unixMs");
      FUN_ram_4806562c(local_60,&DAT_ram_4ff5cb9c,auStack_70);
      if (cStack_51 < '\0') {
        local_60[0] = (byte ******)local_60;
      }
      else if ((byte *******)local_60[0] == (byte *******)0x0) goto LAB_ram_4806f2a0;
      uVar15 = (uint)*(byte *)local_60[0];
      if (uVar15 == 0) goto LAB_ram_4806f2a0;
      pppppppbVar18 = (byte *******)(local_60[0] + 5);
      uVar8 = 0;
      uVar16 = 0;
      goto LAB_ram_4806f1fe;
    }
  }
LAB_ram_4806f2b2:
  FUN_ram_4802a59e(auStack_90);
  FUN_ram_4802a59e(auStack_a0);
  goto LAB_ram_4806f2c4;
LAB_ram_4806f1fe:
  uVar15 = uVar15 - 0x30;
  uVar20 = ~uVar15;
  uVar11 = ~((int)uVar15 >> 0x1f);
  uVar2 = uVar16 * 10 + uVar15;
  uVar13 = uVar20 + uVar11;
  local_60[0] = (byte ******)((int)local_60[0] + 1);
  uVar13 = uVar13 + (uVar13 < uVar20);
  uVar17 = (uint)(uVar2 < uVar15) +
           ((int)uVar15 >> 0x1f) +
           (((uint)(uVar16 * 5 < uVar16 * 4) + (uVar8 << 2 | uVar16 >> 0x1e) + uVar8) * 2 |
           uVar16 * 5 >> 0x1f);
  if (9 < (uVar15 & 0xff)) goto LAB_ram_4806f2a0;
  uVar13 = uVar20 - (uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                              uVar13 / 5));
  uVar15 = (uVar11 - (uVar20 < uVar13)) * -0x33333333 + uVar13 * -0x33333334 +
           (int)((ulonglong)uVar13 * 0xcccccccd >> 0x20);
  uVar11 = uVar15 >> 1;
  if ((uVar11 < uVar8) ||
     ((uVar8 == uVar11 && ((uVar13 * -0x33333333 >> 1 | uVar15 * -0x80000000) < uVar16))))
  goto LAB_ram_4806f2a0;
  uVar15 = (uint)*(byte *)local_60[0];
  if (uVar15 == 0) {
    FUN_ram_4802a8a8(appppbStack_50,"uptimeMs");
    FUN_ram_4806562c(&local_40,&DAT_ram_4ff5cb9c,appppbStack_50);
    if (cStack_31 < '\0') {
      local_40 = (byte ******)&local_40;
    }
    else if ((byte *******)local_40 == (byte *******)0x0) goto LAB_ram_4806f42a;
    uVar15 = (uint)*(byte *)local_40;
    if (uVar15 == 0) goto LAB_ram_4806f42a;
    pppppppbVar18 = (byte *******)(local_40 + 5);
    uVar16 = 0;
    uVar8 = 0;
    goto LAB_ram_4806f37c;
  }
  uVar8 = uVar17;
  uVar16 = uVar2;
  if (pppppppbVar18 == (byte *******)local_60[0]) goto LAB_ram_4806f2a0;
  goto LAB_ram_4806f1fe;
LAB_ram_4806f37c:
  uVar19 = uVar15 - 0x30;
  uVar15 = ~((int)uVar19 >> 0x1f);
  uVar20 = ~uVar19;
  uVar13 = uVar20 + uVar15;
  uVar11 = uVar8 * 10 + uVar19;
  local_40 = (byte ******)((int)local_40 + 1);
  uVar13 = uVar13 + (uVar13 < uVar20);
  if (9 < (uVar19 & 0xff)) goto LAB_ram_4806f42a;
  uVar14 = uVar20 - (uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                              uVar13 / 5));
  uVar15 = (uVar15 - (uVar20 < uVar14)) * -0x33333333 + uVar14 * -0x33333334 +
           (int)((ulonglong)uVar14 * 0xcccccccd >> 0x20);
  uVar13 = uVar15 >> 1;
  if ((uVar13 < uVar16) ||
     ((uVar16 == uVar13 && ((uVar15 * -0x80000000 | uVar14 * -0x33333333 >> 1) < uVar8))))
  goto LAB_ram_4806f42a;
  uVar15 = (uint)*(byte *)local_40;
  uVar16 = (uint)(uVar11 < uVar19) +
           (uVar8 * 5 >> 0x1f |
           ((uint)(uVar8 * 5 < uVar8 * 4) + (uVar8 >> 0x1e | uVar16 << 2) + uVar16) * 2) +
           ((int)uVar19 >> 0x1f);
  if (uVar15 == 0) {
    iVar5 = 0;
    goto LAB_ram_4806f42e;
  }
  uVar8 = uVar11;
  if ((byte *******)local_40 == pppppppbVar18) goto LAB_ram_4806f42a;
  goto LAB_ram_4806f37c;
LAB_ram_4806f2a0:
  FUN_ram_4802a59e(local_60);
  FUN_ram_4802a59e(auStack_70);
LAB_ram_4806f2ac:
  FUN_ram_4802a59e(auStack_80);
  goto LAB_ram_4806f2b2;
LAB_ram_4806f42a:
  uVar11 = 0;
  uVar16 = 0;
LAB_ram_4806f42e:
  FUN_ram_4802a59e(&local_40);
  FUN_ram_4802a59e(appppbStack_50);
  FUN_ram_4802a59e(local_60);
  FUN_ram_4802a59e(auStack_70);
  FUN_ram_4802a59e(auStack_80);
  FUN_ram_4802a59e(auStack_90);
  FUN_ram_4802a59e(auStack_a0);
  if (iVar5 == 0) {
    FUN_ram_4802a8a8(appppbStack_50,"bootId");
    FUN_ram_4806562c(&local_40,&DAT_ram_4ff5cb9c,appppbStack_50);
    iVar10 = FUN_ram_4802b13e(&local_40,&DAT_ram_4ff5c830);
    FUN_ram_4802a59e(&local_40);
    FUN_ram_4802a59e(appppbStack_50);
    if (iVar10 == 0) {
      pcVar9 = "{\"ok\":false,\"error\":\"stale_boot\"}";
      uVar7 = 0x199;
      goto LAB_ram_4806f2e2;
    }
    if (DAT_ram_4ff6dcd5 != '\0') {
      FUN_ram_480612e0();
    }
    uVar21 = FUN_ram_4ff21a0a();
    uVar22 = __udivdi3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),1000,0);
    uVar15 = (uint)(uVar2 + 0x3dae0c00 < uVar2) + (uVar17 - 0x18d);
    if ((uVar15 < 0x22f) && ((uVar15 != 0x22e || (uVar2 + 0x3dae0c00 < 0x6a71e400)))) {
      if (CONCAT44(uVar16,uVar11) <= uVar22) {
        uVar13 = (uint)uVar22 - uVar11;
        uVar8 = (int)(uVar22 >> 0x20) - uVar16;
        uVar15 = (uint)((uint)uVar22 < uVar13);
        if ((uVar8 == uVar15) && (uVar13 < 0x3a99)) {
          if (DAT_ram_4ff5be20 == '\x02') goto LAB_ram_4806f574;
          if (DAT_ram_4ff5be20 == '\x01') {
            if (uVar16 < DAT_ram_4ff5be1c) goto LAB_ram_4806f5c4;
            if ((DAT_ram_4ff5be1c == uVar16) && (uVar11 < DAT_ram_4ff5be18)) {
              uVar7 = 0x199;
              goto LAB_ram_4806f59e;
            }
          }
          if ((uVar8 - uVar15 != (0x3bb - uVar17) - (uint)(0x2cc3d7ff < 0x2cc3d7ff - uVar2)) ||
             (uVar7 = 0, uVar13 <= 0x2cc3d7ff - uVar2)) {
            uVar7 = __udivdi3(uVar2 + uVar13,(uVar2 + uVar13 < uVar2) + uVar17,1000,0);
          }
          uVar6 = FUN_ram_48025ba6();
          iVar10 = FUN_ram_4806124c(uVar7,uVar6,1);
          if (iVar10 != 0) {
            DAT_ram_4ff5be20 = '\x01';
            DAT_ram_4ff5be10 = uVar2;
            DAT_ram_4ff5be14 = uVar17;
            DAT_ram_4ff5be18 = uVar11;
            DAT_ram_4ff5be1c = uVar16;
LAB_ram_4806f574:
            FUN_ram_4806b32e();
            return;
          }
          pcVar9 = "{\"ok\":false,\"error\":\"records_busy\"}";
          uVar7 = 0x1f7;
          goto LAB_ram_4806f2e2;
        }
      }
LAB_ram_4806f5c4:
      uVar7 = 0x199;
    }
    else {
      uVar7 = 400;
    }
LAB_ram_4806f59e:
    pcVar9 = "{\"ok\":false,\"error\":\"invalid_clock_sample\"}";
    goto LAB_ram_4806f2e2;
  }
LAB_ram_4806f2c4:
  pcVar9 = "{\"ok\":false,\"error\":\"invalid_clock\"}";
  uVar7 = 400;
LAB_ram_4806f2e2:
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,uVar7,"application/json",pcVar9);
  return;
}


