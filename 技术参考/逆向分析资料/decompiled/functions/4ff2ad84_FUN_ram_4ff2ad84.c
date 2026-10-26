/* Firmware entry: 0x4ff2ad84 */

/* WARNING: Removing unreachable block (ram,0x4ff2ae82) */

void FUN_ram_4ff2ad84(int param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebfe();
  uVar8 = DAT_ram_4ff50f74;
  if (param_1 == 0) goto LAB_ram_4ff2ae86;
  fence();
  uVar1 = 1;
  if (DAT_ram_4ff50edc != param_1) {
    fence();
    if (DAT_ram_4ff50ee0 != param_1) goto LAB_ram_4ff2ae86;
    uVar1 = 2;
  }
  if (mhartid == 1) {
    uVar7 = 0;
    iVar4 = DAT_ram_4ff50f74 * 0x24;
    (&DAT_ram_4ff50fba)[iVar4] = uVar1;
    (&DAT_ram_4ff50fb9)[iVar4] = 5;
    *(int *)(&DAT_ram_4ff50fac + iVar4) = param_1;
    *(undefined4 *)(&DAT_ram_4ff50fa8 + iVar4) = cycle;
    *(undefined4 *)(&DAT_ram_4ff50fb0 + iVar4) = 0;
    *(undefined4 *)(&DAT_ram_4ff50fb4 + iVar4) = 0;
    (&DAT_ram_4ff50fb8)[iVar4] = param_3;
    (&DAT_ram_4ff50fbb)[iVar4] = 0;
    pcVar2 = &DAT_ram_4ff50fbc + iVar4;
    pcVar3 = pcVar2;
    if (param_2 != 0) {
      do {
        pcVar3 = pcVar2 + uVar7;
        if (*(char *)(param_2 + uVar7) == '\0') goto LAB_ram_4ff2ae26;
        pcVar2[uVar7] = *(char *)(param_2 + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0xf);
      pcVar3 = &DAT_ram_4ff50fcb + iVar4;
    }
LAB_ram_4ff2ae26:
    do {
      if (((uint)pcVar3 & 3) == 0) {
        uVar9 = uVar7 + 4;
        uVar6 = uVar9;
        if (uVar9 < 0x11) goto LAB_ram_4ff2af64;
        goto LAB_ram_4ff2af84;
      }
      *pcVar3 = '\0';
      uVar7 = uVar7 + 1;
      pcVar3 = pcVar3 + 1;
    } while (uVar7 != 0x10);
    goto joined_r0x4ff2ae4c;
  }
  fence();
  if (0xf < DAT_ram_4ff507a8 - DAT_ram_4ff507a4) {
    if (DAT_ram_4ff507a0 != -1) {
      DAT_ram_4ff507a0 = DAT_ram_4ff507a0 + 1;
    }
    goto LAB_ram_4ff2ae86;
  }
  iVar4 = (DAT_ram_4ff507a8 & 0xf) * 0x24;
  *(undefined4 *)(&DAT_ram_4ff507ac + iVar4) = 0;
  (&DAT_ram_4ff507bf)[iVar4] = 0;
  *(int *)(&DAT_ram_4ff507b0 + iVar4) = param_1;
  *(undefined4 *)(&DAT_ram_4ff507b4 + iVar4) = param_4;
  (&DAT_ram_4ff507bc)[iVar4] = param_3;
  (&DAT_ram_4ff507be)[iVar4] = uVar1;
  (&DAT_ram_4ff507bd)[iVar4] = 6;
  *(int *)(&DAT_ram_4ff507b8 + iVar4) = mhartid;
  pcVar2 = &DAT_ram_4ff507c0 + iVar4;
  uVar8 = 0;
  pcVar3 = pcVar2;
  if (param_2 != 0) {
    do {
      pcVar3 = pcVar2 + uVar8;
      if (*(char *)(param_2 + uVar8) == '\0') goto LAB_ram_4ff2af34;
      pcVar2[uVar8] = *(char *)(param_2 + uVar8);
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0xf);
    pcVar3 = &DAT_ram_4ff507cf + iVar4;
  }
LAB_ram_4ff2af34:
  do {
    if (((uint)pcVar3 & 3) == 0) {
      uVar6 = uVar8 + 4;
      uVar7 = uVar6;
      if (uVar6 < 0x11) goto LAB_ram_4ff2afd2;
      goto LAB_ram_4ff2aff2;
    }
    *pcVar3 = '\0';
    uVar8 = uVar8 + 1;
    pcVar3 = pcVar3 + 1;
  } while (uVar8 != 0x10);
  goto LAB_ram_4ff2af46;
LAB_ram_4ff2af64:
  do {
    uVar5 = uVar6;
    pcVar3 = pcVar2 + uVar7;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    uVar6 = uVar5 + 4;
    uVar7 = uVar5;
  } while (uVar6 < 0x11);
  uVar7 = (0x10 - uVar9 & 0xfffffffc) + uVar9;
  if (uVar7 != 0x10) {
LAB_ram_4ff2af84:
    pcVar2 = pcVar2 + uVar7;
    do {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
    } while (pcVar2 != &DAT_ram_4ff50fcc + iVar4);
  }
joined_r0x4ff2ae4c:
  DAT_ram_4ff50f74 = DAT_ram_4ff50f74 + 1 & 0xf;
  if (DAT_ram_4ff50f78 < 0x10) {
    DAT_ram_4ff50f78 = DAT_ram_4ff50f78 + 1;
  }
  DAT_ram_4ff50f7c = DAT_ram_4ff50f7c + 1;
  *(undefined4 *)(&DAT_ram_4ff50fb0 + uVar8 * 0x24) = param_4;
  goto LAB_ram_4ff2ae86;
LAB_ram_4ff2afd2:
  do {
    uVar9 = uVar7;
    pcVar3 = pcVar2 + uVar8;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    uVar7 = uVar9 + 4;
    uVar8 = uVar9;
  } while (uVar7 < 0x11);
  uVar8 = (0x10 - uVar6 & 0xfffffffc) + uVar6;
  if (uVar8 != 0x10) {
LAB_ram_4ff2aff2:
    pcVar2 = pcVar2 + uVar8;
    do {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
    } while (&DAT_ram_4ff507d0 + iVar4 != pcVar2);
  }
LAB_ram_4ff2af46:
  DAT_ram_4ff507a8 = DAT_ram_4ff507a8 + 1;
  fence();
LAB_ram_4ff2ae86:
  FUN_ram_4ff3ec08();
  return;
}


