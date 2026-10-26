/* Firmware entry: 0x4ff2a25e */

/* WARNING: Removing unreachable block (ram,0x4ff2a318) */

undefined4
FUN_ram_4ff2a25e(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                undefined1 param_5,undefined1 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid == 1) {
    FUN_ram_4ff3ebfe();
    uVar2 = cycle;
    uVar1 = DAT_ram_4ff50e7c;
    iVar3 = DAT_ram_4ff50e78 * 0x18;
    DAT_ram_4ff50e80 = DAT_ram_4ff50e80 + 1;
    DAT_ram_4ff50e78 = DAT_ram_4ff50e78 + 1 & 0xf;
    *(int *)(&DAT_ram_4ff50cf8 + iVar3) = DAT_ram_4ff50e80;
    *(undefined4 *)(&DAT_ram_4ff50d00 + iVar3) = param_2;
    *(undefined4 *)(&DAT_ram_4ff50cfc + iVar3) = cycle;
    *(undefined4 *)(&DAT_ram_4ff50d04 + iVar3) = 0;
    *(undefined4 *)(&DAT_ram_4ff50d08 + iVar3) = param_3;
    (&DAT_ram_4ff50d0c)[iVar3] = param_1;
    (&DAT_ram_4ff50d0d)[iVar3] = param_4;
    (&DAT_ram_4ff50d0e)[iVar3] = param_5;
    (&DAT_ram_4ff50d0f)[iVar3] = param_6;
    if (uVar1 < 0x10) {
      DAT_ram_4ff50e7c = uVar1 + 1;
    }
    else if (DAT_ram_4ff50e84 != -1) {
      DAT_ram_4ff50e84 = DAT_ram_4ff50e84 + 1;
    }
    FUN_ram_4ff3ec08();
    return uVar2;
  }
  DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
  return 0;
}


