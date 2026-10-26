/* Firmware entry: 0x4ff32b9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff32b9c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = _DAT_ram_50111040 & 3;
  if ((uVar1 != 1) && (uVar1 != 2)) {
    uVar1 = (-(uint)(uVar1 == 0) & 0xfffffffd) + 3;
  }
  iVar2 = FUN_ram_4ff32a4c(uVar1);
  uVar3 = (_DAT_ram_500e6004 >> 5 & 0xff) + 1;
  uVar1 = _DAT_ram_500e6004 >> 0x15 & 0xff;
  if (uVar1 != 0) {
    iVar2 = iVar2 * uVar1;
    uVar3 = uVar3 * uVar1 + (_DAT_ram_500e6004 >> 0xd & 0xff);
  }
  return ((((uint)(iVar2 * 1000000) / uVar3) / ((_DAT_ram_500e6008 & 0xff) + 1)) /
         ((_DAT_ram_500e6008 >> 0x18) + 1)) / ((_DAT_ram_500e600c >> 0x10 & 0xff) + 1);
}


