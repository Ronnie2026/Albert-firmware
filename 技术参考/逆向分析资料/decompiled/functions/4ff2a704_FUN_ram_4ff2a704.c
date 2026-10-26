/* Firmware entry: 0x4ff2a704 */

void FUN_ram_4ff2a704(undefined4 param_1,int param_2,undefined1 param_3,int param_4,
                     undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar2 = cycle;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(&DAT_ram_4ff50794 + mhartid * 4) = param_5;
  if (mhartid != 1) {
    return;
  }
  uVar4 = FUN_ram_4ff3ebfe();
  iVar3 = cycle;
  FUN_ram_4ff29c0e();
  iVar1 = DAT_ram_4ff50f74;
  uVar6 = 2;
  if (param_4 != 0) {
    uVar6 = 1;
  }
  iVar10 = DAT_ram_4ff50f74 * 0x24;
  *(undefined4 *)(&DAT_ram_4ff50fb4 + iVar10) = 0;
  (&DAT_ram_4ff50fb9)[iVar10] = uVar6;
  *(int *)(&DAT_ram_4ff50fa8 + iVar10) = iVar3;
  *(undefined4 *)(&DAT_ram_4ff50fac + iVar10) = param_1;
  *(undefined4 *)(&DAT_ram_4ff50fb0 + iVar10) = 0;
  (&DAT_ram_4ff50fb8)[iVar10] = param_3;
  *(undefined2 *)(&DAT_ram_4ff50fba + iVar10) = 0;
  pcVar7 = &DAT_ram_4ff50fbc + iVar10;
  uVar11 = 0;
  pcVar5 = pcVar7;
  if (param_2 != 0) {
    do {
      pcVar5 = pcVar7 + uVar11;
      if (*(char *)(param_2 + uVar11) == '\0') goto LAB_ram_4ff2a7d2;
      pcVar7[uVar11] = *(char *)(param_2 + uVar11);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0xf);
    pcVar5 = &DAT_ram_4ff50fcb + iVar10;
  }
LAB_ram_4ff2a7d2:
  do {
    if (((uint)pcVar5 & 3) == 0) {
      uVar12 = uVar11 + 4;
      uVar9 = uVar12;
      if (uVar12 < 0x11) goto LAB_ram_4ff2a868;
      goto LAB_ram_4ff2a888;
    }
    *pcVar5 = '\0';
    uVar11 = uVar11 + 1;
    pcVar5 = pcVar5 + 1;
  } while (uVar11 != 0x10);
joined_r0x4ff2a7f6:
  DAT_ram_4ff50f74 = DAT_ram_4ff50f74 + 1 & 0xf;
  if (DAT_ram_4ff50f78 < 0x10) {
    DAT_ram_4ff50f78 = DAT_ram_4ff50f78 + 1;
  }
  DAT_ram_4ff50f7c = DAT_ram_4ff50f7c + 1;
  *(undefined4 *)(&DAT_ram_4ff50fb0 + iVar1 * 0x24) = param_5;
  uVar11 = cycle - iVar3;
  if (DAT_ram_4ff50f98 < uVar11) {
    DAT_ram_4ff50f98 = uVar11;
  }
  if (DAT_ram_4ff50f8c < (uint)(cycle - iVar2)) {
    DAT_ram_4ff50f8c = cycle - iVar2;
  }
  FUN_ram_4ff3ec08(uVar4);
  return;
LAB_ram_4ff2a868:
  do {
    uVar8 = uVar9;
    pcVar5 = pcVar7 + uVar11;
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    uVar9 = uVar8 + 4;
    uVar11 = uVar8;
  } while (uVar9 < 0x11);
  uVar11 = (0x10 - uVar12 & 0xfffffffc) + uVar12;
  if (uVar11 != 0x10) {
LAB_ram_4ff2a888:
    pcVar7 = pcVar7 + uVar11;
    do {
      *pcVar7 = '\0';
      pcVar7 = pcVar7 + 1;
    } while (&DAT_ram_4ff50fcc + iVar10 != pcVar7);
  }
  goto joined_r0x4ff2a7f6;
}


