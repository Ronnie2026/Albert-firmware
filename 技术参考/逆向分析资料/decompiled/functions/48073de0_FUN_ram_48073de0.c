/* Firmware entry: 0x48073de0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48073de0(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint *puVar17;
  char *pcVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  uint *puVar23;
  undefined4 *puVar24;
  char cVar25;
  uint *puVar26;
  uint uVar27;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte abStack_108 [12];
  undefined4 uStack_fc;
  uint local_f8 [12];
  undefined1 auStack_c8 [36];
  uint local_a4 [4];
  uint local_94;
  char acStack_90 [4];
  char acStack_8c [4];
  char acStack_88 [4];
  char acStack_84 [2];
  undefined2 local_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  char cStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  uint auStack_64 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dcc8 == (void *)0x0) {
    pvVar14 = (void *)FUN_ram_4ff206d8(0x6418,0x404);
    if (pvVar14 == (void *)0x0) {
      return;
    }
    memset(pvVar14,0,0x6418);
    *(undefined4 *)((int)pvVar14 + 0x284) = 1;
    *(undefined1 *)((int)pvVar14 + 0x514) = 1;
    *(undefined1 *)((int)pvVar14 + 0x524) = 1;
    *(undefined4 *)((int)pvVar14 + 0x288) = 0x1001e;
    *(undefined4 *)((int)pvVar14 + 0x518) = 0x1001e;
    *(undefined1 *)((int)pvVar14 + 0xa64) = 1;
    *(undefined1 *)((int)pvVar14 + 0xa49) = 0xff;
    *(undefined1 *)((int)pvVar14 + 0xf89) = 0xff;
    memset((void *)((int)pvVar14 + 0xf90),0,0x70);
    *(undefined4 *)((int)pvVar14 + 0x1000) = 1;
    *(undefined2 *)((int)pvVar14 + 0x190e) = 0x1bb;
    memset((void *)((int)pvVar14 + 0x1910),0,0x690);
    *(undefined4 *)((int)pvVar14 + 0x1fa0) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fa4) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fa8) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fac) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fb0) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fb4) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fb8) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fbc) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fc0) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fc4) = 0;
    *(undefined4 *)((int)pvVar14 + 0x1fc8) = 0;
    *(undefined2 *)((int)pvVar14 + 0x1fcc) = 0;
    memset((void *)((int)pvVar14 + 0x1fce),0,0x4000);
    memset((void *)((int)pvVar14 + 0x5fce),0,0x401);
    memset((void *)((int)pvVar14 + 0x63cf),0,0x11);
    DAT_ram_4ff6dcc8 = pvVar14;
    *(char **)((int)pvVar14 + 0x6404) = "unconfigured";
    *(undefined **)((int)pvVar14 + 0x640c) = &DAT_ram_481c3e20;
    *(undefined1 **)((int)pvVar14 + 0x6408) = &DAT_ram_481df390;
    *(undefined1 **)((int)pvVar14 + 0x6410) = &DAT_ram_481df390;
  }
  DAT_ram_4ff6dcc4 = FUN_ram_4ff3b144(1);
  if (DAT_ram_4ff6dcc4 == 0) {
    *(char **)((int)DAT_ram_4ff6dcc8 + 0x6404) = "resource_error";
    return;
  }
  bVar11 = FUN_ram_480734d8();
  DAT_ram_4ff47e54 = DAT_ram_4ff47e64 & bVar11;
  FUN_ram_4817b4f8(auStack_c8);
  iVar12 = FUN_ram_4817b524(auStack_c8,&DAT_ram_48222c14,0x80);
  pvVar14 = DAT_ram_4ff6dcc8;
  pcVar18 = _DAT_ram_4ff5c870;
  if (iVar12 == 0) {
    if (DAT_ram_4ff5c87f < '\0') {
      pcVar18 = &DAT_ram_4ff5c870;
      *(undefined1 *)((int)DAT_ram_4ff6dcc8 + 0x63cf) = 0;
    }
    else {
      *(undefined1 *)((int)DAT_ram_4ff6dcc8 + 0x63cf) = 0;
      if (pcVar18 == (char *)0x0) goto LAB_ram_48073eaa;
    }
    pcVar9 = (char *)((int)pvVar14 + 0x63cf);
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    pbVar15 = (byte *)&local_118;
    pcVar22 = pcVar18;
    do {
      cVar25 = *pcVar22;
      bVar11 = cVar25 - 0x30;
      if (9 < bVar11) {
        if (5 < (byte)(cVar25 + 0x9fU)) goto LAB_ram_48073eaa;
        bVar11 = cVar25 + 0xa9;
      }
      *pbVar15 = bVar11;
      pbVar15 = pbVar15 + 1;
      pcVar22 = pcVar22 + 1;
    } while (abStack_108 != pbVar15);
    if (pcVar18[0x10] == '\0') {
      abStack_108[0] = 1;
      abStack_108[1] = 2;
      abStack_108[2] = 1;
      abStack_108[3] = 0;
      abStack_108[4] = 0;
      abStack_108[5] = 0x10;
      abStack_108[6] = 10;
      abStack_108[7] = 8;
      abStack_108[8] = 0;
      abStack_108[9] = 0;
      abStack_108[10] = 0;
      abStack_108[0xb] = 0x10;
      uStack_fc = 0x12000000;
      local_138 = local_118;
      uStack_134 = uStack_114;
      local_130 = uStack_110;
      uStack_12c = uStack_10c;
      memset(local_a4,0,100);
      uVar6 = s_chip_id_encryption_ram_48222c00._12_4_;
      uVar4 = s_chip_id_encryption_ram_48222c00._8_4_;
      uVar13 = s_chip_id_encryption_ram_48222c00._4_4_;
      uVar10 = s_chip_id_encryption_ram_48222c00._0_4_;
      local_a4[0] = 0x10201;
      local_a4[1] = 0x80a1000;
      local_a4[2] = 0x10000000;
      uStack_128 = 0;
      uStack_124 = 0;
      local_a4[3] = uStack_fc;
      cVar25 = '\0';
      do {
        uVar7 = s_chip_id_encryption_ram_48222c00._12_4_;
        uVar5 = s_chip_id_encryption_ram_48222c00._8_4_;
        uVar3 = s_chip_id_encryption_ram_48222c00._4_4_;
        uVar2 = s_chip_id_encryption_ram_48222c00._0_4_;
        s_chip_id_encryption_ram_48222c00[4] = (char)uVar13;
        s_chip_id_encryption_ram_48222c00[5] = SUB41(uVar13,1);
        s_chip_id_encryption_ram_48222c00[6] = SUB41(uVar13,2);
        s_chip_id_encryption_ram_48222c00[7] = SUB41(uVar13,3);
        acStack_90[0] = s_chip_id_encryption_ram_48222c00[4];
        acStack_90[1] = s_chip_id_encryption_ram_48222c00[5];
        acStack_90[2] = s_chip_id_encryption_ram_48222c00[6];
        acStack_90[3] = s_chip_id_encryption_ram_48222c00[7];
        s_chip_id_encryption_ram_48222c00[8] = (char)uVar4;
        s_chip_id_encryption_ram_48222c00[9] = SUB41(uVar4,1);
        s_chip_id_encryption_ram_48222c00[10] = SUB41(uVar4,2);
        s_chip_id_encryption_ram_48222c00[0xb] = SUB41(uVar4,3);
        acStack_8c[0] = s_chip_id_encryption_ram_48222c00[8];
        acStack_8c[1] = s_chip_id_encryption_ram_48222c00[9];
        acStack_8c[2] = s_chip_id_encryption_ram_48222c00[10];
        acStack_8c[3] = s_chip_id_encryption_ram_48222c00[0xb];
        acStack_84[0] = s_chip_id_encryption_ram_48222c00[0x10];
        acStack_84[1] = s_chip_id_encryption_ram_48222c00[0x11];
        s_chip_id_encryption_ram_48222c00[0xc] = (char)uVar6;
        s_chip_id_encryption_ram_48222c00[0xd] = SUB41(uVar6,1);
        s_chip_id_encryption_ram_48222c00[0xe] = SUB41(uVar6,2);
        s_chip_id_encryption_ram_48222c00[0xf] = SUB41(uVar6,3);
        acStack_88[0] = s_chip_id_encryption_ram_48222c00[0xc];
        acStack_88[1] = s_chip_id_encryption_ram_48222c00[0xd];
        acStack_88[2] = s_chip_id_encryption_ram_48222c00[0xe];
        acStack_88[3] = s_chip_id_encryption_ram_48222c00[0xf];
        bStack_78 = (byte)local_130 << 4 | local_130._1_1_;
        uStack_80 = 0;
        uStack_7e = 0;
        uStack_7c = 0;
        uStack_7a = 0;
        s_chip_id_encryption_ram_48222c00[0] = (char)uVar10;
        s_chip_id_encryption_ram_48222c00[1] = SUB41(uVar10,1);
        s_chip_id_encryption_ram_48222c00[2] = SUB41(uVar10,2);
        s_chip_id_encryption_ram_48222c00[3] = SUB41(uVar10,3);
        local_94._0_1_ = s_chip_id_encryption_ram_48222c00[0];
        local_94._1_1_ = s_chip_id_encryption_ram_48222c00[1];
        local_94._2_1_ = s_chip_id_encryption_ram_48222c00[2];
        local_94._3_1_ = s_chip_id_encryption_ram_48222c00[3];
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_f8[2] = 0;
        local_f8[3] = 0;
        local_f8[4] = 0;
        local_f8[5] = 0;
        local_f8[6] = 0;
        local_f8[7] = 0;
        local_82 = 0;
        cStack_79 = cVar25;
        bStack_77 = local_130._2_1_ << 4 | local_130._3_1_;
        bStack_76 = (char)uStack_12c << 4 | uStack_12c._1_1_;
        bStack_75 = uStack_12c._2_1_ << 4 | uStack_12c._3_1_;
        local_f8[8] = 0;
        local_f8[9] = 0;
        local_f8[10] = 0;
        local_f8[0xb] = 0;
        puVar23 = &local_94;
        s_chip_id_encryption_ram_48222c00._0_4_ = uVar2;
        s_chip_id_encryption_ram_48222c00._4_4_ = uVar3;
        s_chip_id_encryption_ram_48222c00._8_4_ = uVar5;
        s_chip_id_encryption_ram_48222c00._12_4_ = uVar7;
        do {
          local_f8[3] = local_f8[0xb];
          local_f8[2] = local_f8[10];
          local_f8[1] = local_f8[9];
          local_f8[0] = local_f8[8];
          puVar17 = local_f8 + 4;
          puVar19 = local_f8;
          puVar8 = puVar23 + -4;
          do {
            puVar26 = puVar8;
            uVar20 = *puVar19;
            puVar19 = puVar19 + 1;
            *puVar17 = uVar20 ^ *puVar26;
            puVar17 = puVar17 + 1;
            puVar8 = puVar26 + 1;
          } while (puVar26 + 1 != puVar23);
          iVar12 = FUN_ram_4802e63c(auStack_c8,local_f8 + 4,local_f8 + 8);
          uVar2 = uStack_12c;
          if (iVar12 == 0) goto LAB_ram_48073eaa;
          puVar23 = puVar26 + 5;
          local_f8[0] = local_f8[8];
          local_f8[1] = local_f8[9];
          local_f8[2] = local_f8[10];
          local_f8[3] = local_f8[0xb];
        } while (auStack_64 != puVar23);
        pbVar16 = (byte *)&local_138;
        uStack_124 = local_f8[9];
        uStack_128 = local_f8[8];
        uStack_120 = 0;
        uStack_11c = 0;
        puVar24 = &uStack_120;
        uVar27 = 0;
        uVar20 = 7;
        pbVar15 = pbVar16;
        do {
          bVar1 = *(byte *)((int)&uStack_124 + (uVar20 >> 1));
          bVar11 = pbVar15[7];
          while( true ) {
            if ((uVar20 & 1) == 0) break;
            uVar21 = (uint)bVar11 + (bVar1 & 0xf) + uVar27;
            uVar20 = uVar20 - 1;
            uVar27 = (uVar21 & 0xff) >> 4;
            *(byte *)((int)puVar24 + 7) = (byte)uVar21 & 0xf;
            bVar1 = *(byte *)((int)&uStack_124 + (uVar20 >> 1));
            puVar24 = (undefined4 *)((int)puVar24 + -1);
            bVar11 = pbVar15[6];
            pbVar15 = pbVar15 + -1;
          }
          uVar27 = (uint)bVar11 + (uint)(bVar1 >> 4) + uVar27;
          *(byte *)((int)puVar24 + 7) = (byte)uVar27 & 0xf;
          uVar20 = uVar20 - 1;
          pbVar15 = pbVar15 + -1;
          uVar27 = (uVar27 & 0xff) >> 4;
          puVar24 = (undefined4 *)((int)puVar24 + -1);
        } while (uVar20 != 0xffffffff);
        local_138 = local_130;
        cVar25 = cVar25 + '\x01';
        uStack_12c = 0;
        uStack_134 = uVar2;
        local_130 = 0;
      } while (cVar25 != '\n');
      pbVar15 = (byte *)&local_130;
      do {
        cVar25 = 'W';
        if (*pbVar16 < 10) {
          cVar25 = '0';
        }
        bVar11 = *pbVar15;
        *pcVar9 = *pbVar16 + cVar25;
        cVar25 = '0';
        if (9 < bVar11) {
          cVar25 = 'W';
        }
        pcVar9[8] = bVar11 + cVar25;
        pbVar16 = pbVar16 + 1;
        pcVar9 = pcVar9 + 1;
        pbVar15 = pbVar15 + 1;
      } while (pbVar16 != (byte *)&local_130);
      *(undefined1 *)((int)pvVar14 + 0x63df) = 0;
    }
  }
LAB_ram_48073eaa:
  FUN_ram_4817b512(auStack_c8);
  pvVar14 = DAT_ram_4ff6dcc8;
  DAT_ram_4ff47e58 = *(undefined4 *)((int)DAT_ram_4ff6dcc8 + 0x284);
  fence();
  fence();
  uVar10 = *(undefined4 *)((int)DAT_ram_4ff6dcc8 + 0x284);
  uVar13 = FUN_ram_48025ba6();
  *(undefined4 *)((int)pvVar14 + 0xf90) = uVar10;
  *(undefined4 *)((int)pvVar14 + 0xff8) = 0;
  *(undefined1 *)((int)pvVar14 + 0xffe) = 0;
  *(undefined4 *)((int)pvVar14 + 0xff4) = 0;
  *(undefined4 *)((int)pvVar14 + 0xf94) = uVar13;
  *(undefined2 *)((int)pvVar14 + 0xffc) = 0x100;
  return;
}


