/* Firmware entry: 0x4ff2b3a2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2b3a2(undefined4 param_1)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  iVar5 = DAT_ram_4ff4d808;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff4d808 = 1;
  if (iVar5 != 0) {
    DAT_ram_4ff4d808 = 1;
    return;
  }
  pbVar3 = &DAT_ram_4ff4d118;
  puVar7 = (undefined4 *)&DAT_ram_4ff4d118;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  } while (puVar7 != &DAT_ram_4ff4d478);
  DAT_ram_4ff4d128 = mhartid;
  _DAT_ram_4ff4d118 = 1;
  DAT_ram_4ff4d12c = 1;
  DAT_ram_4ff4d11c = 0x360;
  DAT_ram_4ff4d13c = *(int *)(&DAT_ram_4ff50794 + mhartid * 4);
  fence();
  DAT_ram_4ff4d124 = param_1;
  if (DAT_ram_4ff4d800 != 0) {
    DAT_ram_4ff4d120 = DAT_ram_4ff4d7fc;
    puVar8 = &DAT_ram_4ff4d7dc;
    puVar7 = &DAT_ram_4ff4d14c;
    do {
      uVar6 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
    } while (puVar8 != &DAT_ram_4ff4d7fc);
    if (mhartid == 1) {
      uVar4 = FUN_ram_4ff3ebfe();
      uVar6 = cycle;
      puVar9 = &DAT_ram_4ff50cf8;
      DAT_ram_4ff50e8c = 0;
      uVar11 = 0;
      do {
        DAT_ram_4ff50e88 = *(int *)(puVar9 + 0x234) + uVar11;
        if (DAT_ram_4ff50e88 < uVar11) {
          DAT_ram_4ff50e88 = 0xffffffff;
        }
        puVar2 = (uint *)(puVar9 + 0x238);
        puVar9 = puVar9 + 0x18;
        if (DAT_ram_4ff50e8c < *puVar2) {
          DAT_ram_4ff50e8c = *puVar2;
        }
        uVar11 = DAT_ram_4ff50e88;
      } while (puVar9 != &DAT_ram_4ff50d40);
      FUN_ram_4ff29c0e();
      if ((DAT_ram_4ff50ec8 != 0) && (DAT_ram_4ff50ec8 = 0, DAT_ram_4ff50ed0 != -1)) {
        DAT_ram_4ff50ed0 = DAT_ram_4ff50ed0 + 1;
      }
      if (DAT_ram_4ff509f0 == 0) {
        if ((DAT_ram_4ff50e94 != 0) && (DAT_ram_4ff50eb8 == 0)) {
          DAT_ram_4ff50ea4 = DAT_ram_4ff50ea4 + 1;
          FUN_ram_4ff29ce8(&DAT_ram_501092a4 + DAT_ram_4ff50ea0 * 0xc1,uVar6,param_1);
          DAT_ram_4ff50ea8 = 1;
          DAT_ram_4ff50ebc = uVar6;
          if (DAT_ram_4ff50eac != -1) {
            DAT_ram_4ff50eac = DAT_ram_4ff50eac + 1;
          }
          DAT_ram_4ff50eb8 = 1;
        }
        DAT_ram_4ff50ed4 = DAT_ram_4ff50ea4;
        if (DAT_ram_4ff50ed8 != -1) {
          DAT_ram_4ff50ed8 = DAT_ram_4ff50ed8 + 1;
        }
      }
      else {
        DAT_ram_4ff50ea4 = DAT_ram_4ff50ea4 + 1;
        DAT_ram_4ff50eb8 = 1;
        DAT_ram_4ff50ebc = uVar6;
        if (DAT_ram_4ff50eac != -1) {
          DAT_ram_4ff50eac = DAT_ram_4ff50eac + 1;
        }
      }
      FUN_ram_4ff29ce8(&DAT_ram_4ff4d16c,uVar6,param_1);
      DAT_ram_4ff4d130 = 1;
      DAT_ram_4ff4d148 = 1;
      FUN_ram_4ff3ec08(uVar4);
      goto LAB_ram_4ff2b5a2;
    }
  }
  iVar5 = FUN_ram_4ff29cae();
  if (iVar5 != 2) {
    puVar8 = &DAT_ram_4ff4ecd8 + iVar5 * 0x5ee;
    puVar7 = &DAT_ram_4ff4d16c;
    do {
      uVar6 = *puVar8;
      puVar10 = puVar7 + 1;
      puVar8 = puVar8 + 1;
      *puVar7 = uVar6;
      puVar7 = puVar10;
    } while (puVar10 != &DAT_ram_4ff4d470);
    DAT_ram_4ff4d130 = 2;
    DAT_ram_4ff4d138 = (&DAT_ram_4ff4e4a0)[iVar5 * 0x5ee];
    DAT_ram_4ff4d134 = (&DAT_ram_4ff4e49c)[iVar5 * 0x5ee];
    DAT_ram_4ff4d148 = 1;
    DAT_ram_4ff4d140 =
         DAT_ram_4ff4d13c - DAT_ram_4ff4d138 & ~(DAT_ram_4ff4d13c - DAT_ram_4ff4d138) >> 0x1f;
    (&DAT_ram_4ff4d81c)[iVar5] = (&DAT_ram_4ff4d81c)[iVar5] + -1;
  }
LAB_ram_4ff2b5a2:
  DAT_ram_4ff4d470 = 0x811c9dc5;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    DAT_ram_4ff4d470 = (DAT_ram_4ff4d470 ^ bVar1) * 0x1000193;
  } while ((uint *)pbVar3 != &DAT_ram_4ff4d470);
  fence();
  puVar8 = (undefined4 *)&DAT_ram_4ff4d118;
  puVar7 = (undefined4 *)&DAT_ram_50109b38;
  do {
    uVar6 = *puVar8;
    puVar10 = puVar7 + 1;
    puVar8 = puVar8 + 1;
    *puVar7 = uVar6;
    puVar7 = puVar10;
  } while (puVar10 != (undefined4 *)&DAT_ram_50109e94);
  fence();
  fence();
  _DAT_ram_50109e94 = 0x43414631;
  DAT_ram_4ff4d804 = 1;
  return;
}


