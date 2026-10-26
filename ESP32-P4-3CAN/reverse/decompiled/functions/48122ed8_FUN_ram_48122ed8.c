/* Firmware entry: 0x48122ed8 */

void FUN_ram_48122ed8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte local_24 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte abStack_10 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar4 = (byte *)FUN_ram_4ff45158(param_3,*(undefined4 *)(param_1 + 4),0x20);
  if (*(char *)(param_1 + 0xc4) != '\0') {
    uVar12 = (uint)*pbVar4;
    local_20 = DAT_ram_481d2070;
    uStack_18 = DAT_ram_481d2078;
    uStack_1c = DAT_ram_481d2074;
    uStack_14 = DAT_ram_481d207c;
    pbVar14 = (byte *)&local_20;
    uVar6 = 0;
    iVar13 = 0;
    pbVar11 = pbVar4;
    do {
      uVar8 = 8 - uVar6;
      uVar2 = uVar6 + 0x18;
      uVar5 = ((param_2 & 0xffffe0) << 8) << (0x17 - *pbVar14 & 0x1f);
      uVar6 = uVar6 + (*pbVar14 - 4);
      uVar2 = uVar5 << (uVar8 & 0x1f) | uVar5 >> (uVar2 & 0x1f);
      if (7 < (int)uVar6) {
        iVar3 = (uVar6 >> 3) - 1;
        do {
          *pbVar11 = (byte)uVar2 ^ *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar2 = uVar2 >> 0x18 | uVar2 << 8;
        } while (pbVar11 != pbVar4 + iVar3 + iVar13 + 1);
        iVar13 = iVar13 + 1 + iVar3;
        pbVar11 = pbVar4 + iVar13;
        uVar12 = (uint)*pbVar11;
        uVar6 = (uVar6 - 8) + iVar3 * -8;
      }
      uVar2 = uVar12 ^ uVar2;
      uVar12 = uVar2 & 0xff;
      *pbVar11 = (byte)uVar2;
      pbVar14 = pbVar14 + 1;
    } while (pbVar14 != abStack_10);
    uVar12 = (uint)*(byte *)(param_1 + 0xc4);
    if (uVar12 != 0xf) {
      local_24[0] = 0x43;
      local_24[1] = 0x41;
      local_24[2] = 0x3f;
      local_24[3] = 0x3d;
      pbVar11 = local_24;
      iVar13 = 0;
      uVar2 = 0;
LAB_ram_48122fd8:
      uVar5 = (int)uVar12 >> (uVar2 & 0x1f);
      uVar6 = uVar6 + *pbVar11;
      do {
        if ((uVar5 & 1) == 0) {
          if ((int)uVar6 < 1) goto LAB_ram_481230e0;
          uVar12 = uVar6;
          uVar8 = uVar6 - 8;
          while ((pbVar14 = pbVar4 + iVar13, 7 < (int)uVar12 ||
                 (((uint)*(byte *)(param_1 + 0xc4) & 2 << (uVar2 & 0x1f)) == 0))) {
            pbVar10 = (byte *)(*(int *)(param_1 + 4) + iVar13);
            iVar13 = iVar13 + 1;
            *pbVar14 = *pbVar10;
            if (uVar8 == (uVar6 - 8) - (uVar6 - 1 & 0xfffffff8)) goto joined_r0x4812304a;
            uVar12 = uVar8;
            uVar8 = uVar8 - 8;
          }
          pbVar14 = pbVar4 + iVar13;
          bVar7 = *pbVar14 & (byte)(0xff >> (uVar12 & 0x1f));
          *pbVar14 = bVar7;
          pbVar10 = (byte *)(*(int *)(param_1 + 4) + iVar13);
          iVar13 = iVar13 + 1;
          *pbVar14 = bVar7 | *pbVar10 & (byte)(-0x100 >> (uVar12 & 0x1f));
        }
        else {
          if ((int)uVar6 < 1) goto LAB_ram_481230e0;
          iVar9 = iVar13 + 1;
          iVar1 = iVar9;
          uVar5 = uVar6;
          iVar3 = iVar13;
          while (iVar13 = iVar1, uVar8 = uVar5 - 8, (uVar6 | 0xfffffff8) != uVar8) {
            if ((uVar6 - 1 >> 3) + iVar9 == iVar13) goto joined_r0x4812304a;
            iVar1 = iVar13 + 1;
            uVar5 = uVar8;
            iVar3 = iVar13;
          }
          if ((2 << (uVar2 & 0x1f) & uVar12) == 0) {
            pbVar14 = pbVar4 + iVar3;
            bVar7 = *pbVar14 & (byte)(-0x100 >> (uVar5 & 0x1f));
            *pbVar14 = bVar7;
            *pbVar14 = bVar7 | (byte)(0xff >> (uVar5 & 0x1f)) &
                               *(byte *)(iVar3 + *(int *)(param_1 + 4));
          }
        }
joined_r0x4812304a:
        if (0x1f < iVar13) {
          return;
        }
        uVar12 = (uint)*(byte *)(param_1 + 0xc4);
        uVar2 = uVar2 + 1;
        pbVar14 = pbVar11 + 1;
        uVar5 = (int)uVar12 >> (uVar2 & 0x1f);
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar8 + *pbVar14;
      } while( true );
    }
  }
  return;
LAB_ram_481230e0:
  uVar2 = uVar2 + 1;
  pbVar11 = pbVar11 + 1;
  goto LAB_ram_48122fd8;
}


