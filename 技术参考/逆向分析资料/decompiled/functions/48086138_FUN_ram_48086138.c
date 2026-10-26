/* Firmware entry: 0x48086138 */

bool FUN_ram_48086138(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  byte *pbVar20;
  uint *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  uint local_29c;
  int iStack_298;
  undefined1 auStack_294 [28];
  byte bStack_278;
  byte local_26a [154];
  uint auStack_1d0 [27];
  uint uStack_164;
  undefined4 local_160 [11];
  undefined2 uStack_134;
  undefined1 uStack_12b;
  undefined1 uStack_128;
  undefined2 uStack_122;
  undefined1 uStack_114;
  undefined4 auStack_70 [20];
  undefined4 uStack_20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0x16c) {
    if (((*(int *)param_1 == 0x43455850) && (*(int *)(param_1 + 4) == 0x1440002)) &&
       ((byte)(param_1[0x24] - 1) < 4)) {
      puVar21 = (uint *)(param_1 + 0x168);
      pbVar20 = param_1 + 0x168;
      uVar22 = 0x811c9dc5;
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar22 = (uVar22 ^ bVar1) * 0x1000193;
      } while (pbVar20 != param_1);
      return *puVar21 == uVar22;
    }
  }
  else if (param_2 == 0x13c) {
    puVar16 = &local_29c;
    puVar21 = puVar16;
    do {
      *(byte *)(puVar21 + 0x1b) = 1;
      *(undefined2 *)(puVar21 + 0x26) = 100;
      *(byte *)((int)puVar21 + 0xa1) = 1;
      *(byte *)(puVar21 + 0x29) = 0xff;
      ((byte *)((int)puVar21 + 0xaa))[0] = 0x1d;
      ((byte *)((int)puVar21 + 0xaa))[1] = 0xff;
      puVar21 = puVar21 + 0x11;
    } while (puVar21 != auStack_1d0);
    FUN_ram_4ff45158(&local_29c,param_1,0x13c);
    if (((local_29c == 0x43455850) && (iStack_298 == 0x1140001)) && ((bStack_278 - 1 & 0xff) < 4)) {
      uVar22 = 0x811c9dc5;
      do {
        uVar15 = *puVar16;
        puVar16 = (uint *)((int)puVar16 + 1);
        uVar22 = (uVar22 ^ (byte)uVar15) * 0x1000193;
      } while (puVar16 != &uStack_164);
      if (uStack_164 == uVar22) {
        memset(local_160,0,0x140);
        puVar23 = local_160;
        do {
          *(undefined1 *)(puVar23 + 0x14) = 1;
          *(undefined2 *)(puVar23 + 0x1f) = 100;
          *(undefined1 *)((int)puVar23 + 0x85) = 1;
          *(undefined1 *)(puVar23 + 0x22) = 0xff;
          *(undefined2 *)((int)puVar23 + 0x8e) = 0xff1d;
          *(undefined1 *)(puVar23 + 0x27) = 0xff;
          puVar23 = puVar23 + 0x14;
        } while (puVar23 != auStack_70);
        memset(param_1,0,0x16c);
        puVar23 = local_160;
        local_160[0]._0_1_ = 1;
        uStack_134 = 100;
        uStack_12b = 1;
        uStack_128 = 0xff;
        uStack_122 = 0xff1d;
        uStack_114 = 0xff;
        pbVar20 = param_1 + 0x28;
        do {
          uVar17 = *puVar23;
          uVar18 = puVar23[1];
          uVar19 = puVar23[2];
          *(undefined4 *)(pbVar20 + 0xc) = puVar23[3];
          *(undefined4 *)pbVar20 = uVar17;
          *(undefined4 *)(pbVar20 + 4) = uVar18;
          *(undefined4 *)(pbVar20 + 8) = uVar19;
          puVar23 = puVar23 + 4;
          pbVar20 = pbVar20 + 0x10;
        } while (puVar23 != &uStack_20);
        param_1[0] = 0x50;
        param_1[1] = 0x58;
        param_1[2] = 0x45;
        param_1[3] = 0x43;
        param_1[4] = 2;
        param_1[5] = 0;
        param_1[6] = 0x44;
        param_1[7] = 1;
        FUN_ram_4ff45158(param_1 + 8,auStack_294,0x19);
        param_1[0x24] = bStack_278;
        pbVar24 = local_26a;
        pbVar20 = param_1 + 0x3a;
        do {
          uVar18 = *(undefined4 *)(pbVar24 + -6);
          uVar11 = *(undefined2 *)(pbVar24 + -2);
          bVar1 = pbVar24[0x20];
          bVar2 = pbVar24[0x26];
          bVar3 = pbVar24[0x27];
          bVar4 = pbVar24[0x28];
          bVar5 = pbVar24[0x29];
          bVar6 = pbVar24[0x2a];
          bVar7 = pbVar24[0x2b];
          uVar17 = *(undefined4 *)(pbVar24 + 0x22);
          pbVar20[-0x12] = pbVar24[-10];
          *(undefined4 *)(pbVar20 + -0xe) = uVar18;
          bVar8 = pbVar24[0x2c];
          bVar9 = pbVar24[0x2d];
          *(undefined2 *)(pbVar20 + -10) = uVar11;
          pbVar20[0x18] = bVar1;
          bVar1 = pbVar24[0x2e];
          bVar10 = pbVar24[0x2f];
          pbVar20[0x1e] = bVar2;
          pbVar20[0x1f] = bVar3;
          pbVar20[0x20] = bVar4;
          pbVar20[0x21] = bVar5;
          pbVar20[0x22] = bVar6;
          pbVar20[0x23] = bVar7;
          pbVar20[0x24] = bVar8;
          pbVar20[0x25] = bVar9;
          uVar11 = *(undefined2 *)(pbVar24 + 0x30);
          uVar12 = *(undefined2 *)(pbVar24 + 0x32);
          pbVar20[0x27] = bVar10;
          *(undefined4 *)(pbVar20 + 0x1a) = uVar17;
          pbVar20[0x26] = bVar1;
          uVar13 = *(undefined2 *)(pbVar24 + 0x34);
          uVar14 = *(undefined2 *)(pbVar24 + 0x36);
          bVar1 = pbVar24[4];
          *(undefined2 *)(pbVar20 + 0x28) = uVar11;
          *(undefined2 *)(pbVar20 + 0x2a) = uVar12;
          bVar2 = pbVar24[5];
          bVar3 = pbVar24[6];
          *(undefined2 *)(pbVar20 + 0x2c) = uVar13;
          bVar4 = pbVar24[7];
          uVar11 = *(undefined2 *)(pbVar24 + 0x38);
          bVar5 = *pbVar24;
          bVar6 = pbVar24[1];
          bVar7 = pbVar24[2];
          bVar8 = pbVar24[3];
          *(undefined2 *)(pbVar20 + 0x2e) = uVar14;
          pbVar20[-4] = bVar1;
          bVar1 = pbVar24[8];
          bVar9 = pbVar24[9];
          pbVar20[-3] = bVar2;
          pbVar20[-2] = bVar3;
          bVar2 = pbVar24[10];
          bVar3 = pbVar24[0xb];
          pbVar20[-1] = bVar4;
          bVar4 = pbVar24[0xc];
          *(undefined2 *)(pbVar20 + 0x30) = uVar11;
          pbVar20[-8] = bVar5;
          bVar5 = pbVar24[0xd];
          pbVar20[-7] = bVar6;
          pbVar20[-6] = bVar7;
          bVar6 = pbVar24[0xe];
          pbVar20[-5] = bVar8;
          bVar7 = pbVar24[0xf];
          *pbVar20 = bVar1;
          bVar1 = pbVar24[0x11];
          bVar8 = pbVar24[0x12];
          pbVar20[1] = bVar9;
          pbVar20[2] = bVar2;
          bVar2 = pbVar24[0x13];
          bVar9 = pbVar24[0x14];
          pbVar20[3] = bVar3;
          pbVar20[4] = bVar4;
          bVar3 = pbVar24[0x15];
          bVar4 = pbVar24[0x16];
          bVar10 = pbVar24[0x10];
          pbVar20[5] = bVar5;
          pbVar20[6] = bVar6;
          bVar5 = pbVar24[0x17];
          bVar6 = pbVar24[0x18];
          pbVar20[7] = bVar7;
          pbVar20[9] = bVar1;
          pbVar20[10] = bVar8;
          bVar1 = pbVar24[0x1a];
          bVar7 = pbVar24[0x1b];
          pbVar20[0xb] = bVar2;
          pbVar20[0xc] = bVar9;
          bVar2 = pbVar24[0x1c];
          bVar8 = pbVar24[0x1d];
          pbVar20[0xd] = bVar3;
          pbVar20[0xe] = bVar4;
          bVar3 = pbVar24[0x1e];
          bVar4 = pbVar24[0x1f];
          bVar9 = pbVar24[0x19];
          pbVar20[8] = bVar10;
          pbVar20[0xf] = bVar5;
          pbVar20[0x10] = bVar6;
          pbVar20[0x11] = bVar9;
          pbVar20[0x12] = bVar1;
          pbVar20[0x13] = bVar7;
          pbVar20[0x14] = bVar2;
          pbVar20[0x15] = bVar8;
          pbVar20[0x16] = bVar3;
          pbVar20[0x17] = bVar4;
          pbVar20[0x32] = 0;
          pbVar20[0x36] = 0;
          pbVar20[0x37] = 0;
          pbVar20[0x38] = 0;
          pbVar20[0x39] = 0;
          pbVar20 = pbVar20 + 0x50;
          pbVar24 = pbVar24 + 0x44;
        } while (pbVar20 != param_1 + (uint)bStack_278 * 0x50 + 0x3a);
        uVar22 = 0x811c9dc5;
        pbVar20 = param_1;
        do {
          bVar1 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          uVar22 = (uVar22 ^ bVar1) * 0x1000193;
        } while (param_1 + 0x168 != pbVar20);
        *(uint *)(param_1 + 0x168) = uVar22;
        return true;
      }
    }
  }
  return false;
}


