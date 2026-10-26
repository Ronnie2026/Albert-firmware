/* Firmware entry: 0x481316c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_481316c8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = _DAT_ram_50111040 & 3;
  if ((uVar3 != 1) && (uVar3 != 2)) {
    uVar3 = (-(uint)(uVar3 == 0) & 0xfffffffd) + 3;
  }
  uVar1 = (_DAT_ram_500e6004 >> 5 & 0xff) + 1;
  uVar2 = _DAT_ram_500e6004 >> 0x15 & 0xff;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    uVar1 = uVar1 * uVar2 + (_DAT_ram_500e6004 >> 0xd & 0xff);
  }
  iVar4 = FUN_ram_48131606(uVar3);
  return (iVar4 * uVar2 * 1000000) / uVar1;
}


