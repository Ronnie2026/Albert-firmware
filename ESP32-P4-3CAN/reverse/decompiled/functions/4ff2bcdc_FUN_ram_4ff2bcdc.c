/* Firmware entry: 0x4ff2bcdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2bcdc(void)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar2 = &DAT_ram_4ff51e30;
  do {
    uVar3 = (uint)*pbVar2;
    iVar4 = (uVar3 + 0x154) * 4;
    uVar1 = 1 << (uVar3 - 0x20 & 0x1f);
    iVar5 = 1 << (uVar3 & 0x1f);
    if (uVar3 < 0x20) {
      _DAT_ram_500e0008 = iVar5;
      *(undefined4 *)(&DAT_ram_500e0008 + iVar4) = 0x100;
      *(uint *)(&DAT_ram_500e0008 + iVar4) = *(uint *)(&DAT_ram_500e0008 + iVar4) & 0xfffff7ff;
      *(uint *)(&DAT_ram_500e0008 + iVar4) = *(uint *)(&DAT_ram_500e0008 + iVar4) | 0x400;
      _DAT_ram_500e0024 = iVar5;
    }
    else {
      _DAT_ram_500e0014 = uVar1;
      *(undefined4 *)(&DAT_ram_500e0008 + iVar4) = 0x100;
      *(uint *)(&DAT_ram_500e0008 + iVar4) = *(uint *)(&DAT_ram_500e0008 + iVar4) & 0xfffff7ff;
      *(uint *)(&DAT_ram_500e0008 + iVar4) = *(uint *)(&DAT_ram_500e0008 + iVar4) | 0x400;
      _DAT_ram_500e0030 = _DAT_ram_500e0030 & 0xfe000000 | uVar1 & 0x1ffffff;
    }
    pbVar2 = pbVar2 + 1;
  } while (pbVar2 != (byte *)0x4ff51e33);
  return;
}


