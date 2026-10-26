/* Firmware entry: 0x4811f626 */

/* WARNING: Removing unreachable block (ram,0x4811f79a) */

void FUN_ram_4811f626(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint local_314 [192];
  uint uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebfe();
  if ((DAT_ram_4ff50ec8 != 0) && (DAT_ram_4ff50eb8 == 0)) {
    puVar5 = &DAT_ram_4ff509f4;
    puVar3 = local_314;
    do {
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    } while (puVar5 != (uint *)&DAT_ram_4ff50cf8);
    DAT_ram_4ff50ec8 = 0;
    DAT_ram_4ff50ea8 = 0;
    FUN_ram_4ff3ec08();
    iVar2 = DAT_ram_4ff50ea0;
    puVar3 = local_314;
    local_314[0xbf] = 0x811c9dc5;
    do {
      uVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      local_314[0xbf] =
           ((uVar4 >> 0x10 & 0xff ^
            (uVar4 >> 8 & 0xff ^ (uVar4 & 0xff ^ local_314[0xbf]) * 0x1000193) * 0x1000193) *
            0x1000193 ^ uVar4 >> 0x18) * 0x1000193;
    } while (puVar3 != local_314 + 0xbf);
    iVar1 = DAT_ram_4ff50ea0 * 0xc1;
    *(undefined4 *)(&DAT_ram_501095a4 + DAT_ram_4ff50ea0 * 0x304) = 0;
    fence();
    puVar5 = local_314;
    puVar3 = &DAT_ram_501092a4 + iVar1;
    do {
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    } while (puVar5 != &uStack_14);
    fence();
    FUN_ram_4ff3ebfe();
    iVar1 = DAT_ram_4ff50ed8;
    if (DAT_ram_4ff50eb8 == 0) {
      DAT_ram_4ff50ea8 = 1;
      DAT_ram_4ff50ed4 = local_314[2];
      *(undefined4 *)(&DAT_ram_501095a4 + iVar2 * 0x304) = 0x43414e31;
      if (iVar1 != -1) {
        DAT_ram_4ff50ed8 = iVar1 + 1;
      }
    }
    else if (DAT_ram_4ff50ed0 != -1) {
      DAT_ram_4ff50ed0 = DAT_ram_4ff50ed0 + 1;
    }
  }
  FUN_ram_4ff3ec08();
  return;
}


