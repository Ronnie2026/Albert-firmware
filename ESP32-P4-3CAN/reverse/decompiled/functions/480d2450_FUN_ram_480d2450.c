/* Firmware entry: 0x480d2450 */

int FUN_ram_480d2450(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  undefined1 uVar15;
  uint uVar16;
  uint local_a80 [10];
  uint uStack_a58;
  uint uStack_a50;
  uint uStack_a4c;
  uint uStack_a48;
  uint uStack_a44;
  uint uStack_a40;
  uint uStack_a3c;
  undefined1 uStack_a38;
  byte bStack_9f8;
  undefined4 local_9f0 [282];
  uint uStack_588;
  uint uStack_584;
  undefined1 uStack_580;
  undefined1 uStack_57f;
  undefined1 uStack_57e;
  undefined1 uStack_57d;
  undefined1 uStack_57c;
  undefined1 uStack_57b;
  undefined1 uStack_57a;
  undefined1 uStack_579;
  undefined1 uStack_578;
  undefined1 uStack_577;
  undefined1 uStack_576;
  undefined1 uStack_575;
  uint local_558 [332];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar13 = local_a80;
  memset(local_a80,0,0x528);
  local_a80[1] = 1;
  fence();
  DAT_ram_4ff6df84 = 1;
  if ((DAT_ram_4ff6df88 == 0) ||
     (iVar1 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), puVar9 = DAT_ram_4ff6df8c, iVar1 != 1)) {
    fence();
    DAT_ram_4ff6df84 = 0;
    fence();
    *(undefined1 *)(param_1 + 0x5b7) = 1;
    *(char **)(param_1 + 0x5c0) = "subtotal_reset_begin_failed";
    return 0;
  }
  iVar1 = FUN_ram_48025ba6();
  local_558[10] = DAT_ram_4ff6df44;
  if (DAT_ram_4ff6df44 != 0) {
    local_558[10] = DAT_ram_4ff6df44 + (iVar1 - DAT_ram_4ff6df40) / 1000;
  }
  puVar8 = local_558;
  puVar12 = puVar9;
  do {
    uVar16 = puVar12[1];
    uVar2 = puVar12[2];
    uVar6 = puVar12[3];
    uVar7 = puVar12[4];
    *puVar8 = *puVar12;
    puVar8[1] = uVar16;
    puVar8[2] = uVar2;
    puVar8[3] = uVar6;
    puVar8[4] = uVar7;
    puVar12 = puVar12 + 5;
    puVar8 = puVar8 + 5;
  } while (puVar12 != puVar9 + 0x14a);
  local_558[0x13e] = 0;
  local_558[0x13f] = 0;
  local_558[0x11] = puVar9[9];
  local_558[0] = *puVar9 + 1;
  local_558[0xc] = puVar9[4];
  local_558[0xd] = puVar9[5];
  local_558[0xe] = puVar9[6];
  local_558[0xf] = puVar9[7];
  local_558[0x10] = puVar9[8];
  puVar9 = local_558;
  do {
    uVar2 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    *puVar13 = *puVar9;
    puVar13[1] = uVar2;
    puVar13[2] = uVar6;
    puVar13[3] = uVar7;
    puVar9 = puVar9 + 4;
    puVar13 = puVar13 + 4;
  } while (puVar9 != local_558 + 0x148);
  *puVar13 = *puVar9;
  FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
  if (*(char *)(param_1 + 0x5b5) == '\0') {
    *(undefined1 *)(param_1 + 0x5b7) = 1;
  }
  else {
    iVar1 = FUN_ram_480d175e(param_1,local_a80);
    if ((iVar1 != 0) && (iVar1 = FUN_ram_480d18ce(param_1 + 4,local_a80), iVar1 != 0)) {
      FUN_ram_4ff45158(param_1 + 0x18,local_a80,0x524);
      *(undefined1 *)(param_1 + 0x5bb) = 1;
      iVar3 = FUN_ram_480b063e();
      iVar10 = DAT_ram_4ff6dcdc;
      if (iVar3 != 0) {
        FUN_ram_4ff45158(DAT_ram_4ff6dcdc + 0x22540,local_a80,0x524);
        *(undefined1 *)(iVar10 + 0x41112) = 1;
        local_558[0] = local_558[0] & 0xffffff00;
        iVar3 = FUN_ram_480b1222(iVar10 + 0x30,local_a80,FUN_ram_480b356e,local_558);
        if (iVar3 == 0) {
          *(undefined1 *)(iVar10 + 0x41111) = 0;
          *(char **)(iVar10 + 0x41114) = "outbox_full_or_invalid";
        }
        else if ((local_558[0] & 0xff) != 0) {
          FUN_ram_480b0ed4();
        }
      }
      FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0xffffffff);
      puVar13 = DAT_ram_4ff6df8c;
      uVar6 = FUN_ram_48025ba6();
      puVar13[0xd] = uStack_a4c;
      puVar13[0xc] = uStack_a50;
      puVar13[0xf] = uStack_a44;
      puVar13[0xe] = uStack_a48;
      puVar13[0x10] = uStack_a40;
      puVar13[0x11] = uStack_a3c;
      puVar13[0x13e] = uStack_588;
      puVar13[0x13f] = uStack_584;
      puVar13[0x15a] = 0;
      puVar13[0x15b] = 0;
      puVar13[10] = uStack_a58;
      *(undefined1 *)(puVar13 + 0x177) = 1;
      *puVar13 = local_a80[0];
      iVar3 = DAT_ram_4ff6df88;
      iVar10 = 0;
      uVar2 = uVar6;
      if ((byte)puVar13[0x174] == 0) {
LAB_ram_480d2726:
        bVar5 = (byte)puVar13[0x174] ^ 1;
        uVar7 = puVar13[0x161];
        uVar15 = 1;
      }
      else {
        uVar7 = uVar6 - puVar13[0x160];
        if ((int)uVar7 < 0) {
          uVar2 = puVar13[0x160] - uVar6;
          if (uVar2 < 0x240c8401) {
            uVar7 = puVar13[0x15e];
            if ((puVar13[0x15f] != 0) || (uVar2 <= uVar7)) {
              uVar2 = uVar7 - uVar2;
              iVar10 = puVar13[0x15f] - (uint)(uVar7 < uVar2);
              goto LAB_ram_480d2726;
            }
          }
        }
        else if (uVar7 < 0x240c8401) {
          uVar2 = puVar13[0x15e] + uVar7;
          iVar10 = (uint)(uVar2 < uVar7) + puVar13[0x15f];
          goto LAB_ram_480d2726;
        }
        bVar5 = 0;
        uVar15 = 0;
        uVar6 = 0;
        uVar7 = 0;
        uVar2 = 0;
        iVar10 = 0;
      }
      *(char *)(puVar13 + 0x184) = (char)uVar2;
      *(char *)(puVar13 + 0x185) = (char)iVar10;
      *(char *)(puVar13 + 0x186) = (char)uVar7;
      *(char *)(puVar13 + 0x187) = (char)uVar6;
      *(undefined1 *)(puVar13 + 0x188) = uVar15;
      *(byte *)((int)puVar13 + 0x621) = bVar5;
      *(char *)((int)puVar13 + 0x61b) = (char)(uVar7 >> 0x18);
      *(char *)((int)puVar13 + 0x61d) = (char)(uVar6 >> 8);
      *(char *)((int)puVar13 + 0x61e) = (char)(uVar6 >> 0x10);
      *(char *)((int)puVar13 + 0x611) = (char)(uVar2 >> 8);
      *(char *)((int)puVar13 + 0x612) = (char)(uVar2 >> 0x10);
      *(char *)((int)puVar13 + 0x613) = (char)(uVar2 >> 0x18);
      *(char *)((int)puVar13 + 0x615) = (char)((uint)iVar10 >> 8);
      *(char *)((int)puVar13 + 0x616) = (char)((uint)iVar10 >> 0x10);
      *(char *)((int)puVar13 + 0x617) = (char)((uint)iVar10 >> 0x18);
      *(char *)((int)puVar13 + 0x619) = (char)(uVar7 >> 8);
      *(char *)((int)puVar13 + 0x61a) = (char)(uVar7 >> 0x10);
      *(char *)((int)puVar13 + 0x61f) = (char)(uVar6 >> 0x18);
      FUN_ram_4ff3afa2(iVar3,0,0,0);
      fence();
      DAT_ram_4ff6df84 = 0;
      *(undefined2 *)(param_1 + 0x5b6) = 0;
      *(undefined1 *)(param_1 + 0x5b8) = 0;
      *(undefined4 *)(param_1 + 0x548) = 0;
      *(uint *)(param_1 + 0x544) = local_a80[0];
      *(undefined1 **)(param_1 + 0x5c0) = &DAT_ram_481df390;
      *(undefined2 *)(param_1 + 0x5bc) = 0x100;
      *(undefined1 *)(param_1 + 0x5be) = uStack_a38;
      if (bStack_9f8 == 0) {
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
        if (*(char *)(param_1 + 0x10) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1;
        }
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined1 *)(param_1 + 0x558) = uStack_580;
        *(undefined1 *)(param_1 + 0x559) = uStack_57f;
        *(undefined1 *)(param_1 + 0x55a) = uStack_57e;
        *(undefined1 *)(param_1 + 0x55b) = uStack_57d;
        *(undefined1 *)(param_1 + 0x55c) = uStack_57c;
        *(undefined1 *)(param_1 + 0x55d) = uStack_57b;
        *(undefined1 *)(param_1 + 0x55e) = uStack_57a;
        *(undefined1 *)(param_1 + 0x55f) = uStack_579;
        *(undefined1 *)(param_1 + 0x560) = uStack_578;
        *(undefined1 *)(param_1 + 0x561) = uStack_577;
        *(undefined1 *)(param_1 + 0x562) = uStack_576;
        *(undefined1 *)(param_1 + 0x563) = uStack_575;
      }
      else {
        *(undefined1 *)(param_1 + 0x5ba) = 0;
        *(undefined1 *)(param_1 + 0x5b4) = 0;
        *(undefined4 *)(param_1 + 0x554) = local_9f0[0];
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
        puVar4 = memset((void *)(param_1 + 0x564),0,0x50);
        if (*(char *)(param_1 + 0x10) == '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return iVar1;
        }
        *(undefined1 *)(param_1 + 0x561) = uStack_577;
        *(undefined1 *)(param_1 + 0x563) = uStack_575;
        *(undefined1 *)(param_1 + 0x558) = uStack_580;
        *(undefined1 *)(param_1 + 0x559) = uStack_57f;
        *(undefined1 *)(param_1 + 0x55a) = uStack_57e;
        *(undefined1 *)(param_1 + 0x55b) = uStack_57d;
        *(undefined1 *)(param_1 + 0x55c) = uStack_57c;
        *(undefined1 *)(param_1 + 0x55d) = uStack_57b;
        *(undefined1 *)(param_1 + 0x55e) = uStack_57a;
        *(undefined1 *)(param_1 + 0x55f) = uStack_579;
        *(undefined1 *)(param_1 + 0x560) = uStack_578;
        *(undefined1 *)(param_1 + 0x562) = uStack_576;
        if (0x14 < bStack_9f8) {
          bStack_9f8 = 0x14;
        }
        *(byte *)(param_1 + 0x5b4) = bStack_9f8;
        puVar11 = local_9f0;
        bVar5 = 0;
        do {
          bVar5 = bVar5 + 1;
          *puVar4 = *puVar11;
          puVar11 = puVar11 + 0xe;
          puVar4 = puVar4 + 1;
        } while (bVar5 < bStack_9f8);
      }
      *(undefined1 *)(param_1 + 0x5ba) = 1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x5b7) = 1;
    if (*(char *)(param_1 + 0x5b5) != '\0') {
      pcVar14 = "write_failed";
      goto LAB_ram_480d2620;
    }
  }
  if (*(char *)(param_1 + 0x13) == '\x05') {
    pcVar14 = "load_io";
  }
  else {
    pcVar14 = "load_corrupt";
  }
LAB_ram_480d2620:
  iVar1 = DAT_ram_4ff6df88;
  *(char **)(param_1 + 0x5c0) = pcVar14;
  FUN_ram_4ff3b5f0(iVar1,0xffffffff);
  FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
  fence();
  DAT_ram_4ff6df84 = 0;
  return 0;
}


