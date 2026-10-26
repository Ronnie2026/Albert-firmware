/* Firmware entry: 0x4ff42762 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff42762(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *(int *)(param_1 + 0x28);
  uVar1 = _DAT_ram_5008d098 & 0xffff | 0x50000;
  if (iVar5 == 0x78) {
    if (*(byte *)(param_1 + 0xc) == 0) {
      uVar1 = _DAT_ram_5008d098 & 0xfffd | 0x50000;
    }
    else {
      uVar1 = (*(byte *)(param_1 + 0xc) - 1 & 0x3f) << 10 | _DAT_ram_5008d098 & 0x3ff | 0x50000 | 2;
    }
  }
  _DAT_ram_5008d098 = uVar1;
  uVar1 = 4;
  uVar3 = (uint)*(byte *)(param_1 + 0x2c) * iVar5;
  if ((_DAT_ram_5008d0a4 >> 6 & 1) != 0) {
    uVar1 = 0x80;
  }
  uVar6 = 4;
  if ((_DAT_ram_5008d0a4 >> 6 & 1) != 0) {
    uVar6 = 0x80;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x2d) * iVar5;
  uVar2 = 0x1e0;
  _DAT_ram_5008d00c =
       ((uint)(uVar4 % 0x80 != 0) + uVar4 / 0x80 & 0x1ff) << 0xc |
       ((uint)(uVar3 % uVar6 != 0) + uVar3 / uVar1 & 0x3ff) << 2 | _DAT_ram_5008d00c & 0xffe00003;
  uVar1 = _DAT_ram_500e6030 & 3;
  if ((((uVar1 != 1) && (uVar2 = 400, uVar1 != 2)) && (uVar2 = 0, uVar1 == 0)) &&
     (((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10 &&
      (_DAT_ram_5011003c - 1 < 0xfffffffe)))) {
    uVar2 = _DAT_ram_5011003c & 0xfffe;
  }
  uVar3 = 0x1e0;
  uVar1 = _DAT_ram_500e6030 & 3;
  if (((uVar1 != 1) && (uVar3 = 400, uVar1 != 2)) &&
     ((uVar3 = 0, uVar1 == 0 &&
      (((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10 &&
       (_DAT_ram_5011003c - 1 < 0xfffffffe)))))) {
    uVar3 = _DAT_ram_5011003c & 0xfffe;
  }
  uVar1 = uVar3 / ((_DAT_ram_500e6030 >> 4 & 0xff) + 1) & 0xff;
  _DAT_ram_5008c010 =
       _DAT_ram_5008c010 & 0x81ffffff |
       ((uint)(0x418937 < (uVar1 * -0x70a3d70a >> 3 | uVar1 * -0x40000000)) +
       ((uVar2 / ((_DAT_ram_500e6030 >> 4 & 0xff) + 1) & 0xff) * 0x1e) / 1000) * 0x2000000;
  _DAT_ram_5008d0a4 = _DAT_ram_5008d0a4 | 0xe0;
  _DAT_ram_5008c054 = _DAT_ram_5008c054 & 0xfff8007f | 0xf80;
  _DAT_ram_5008d09c =
       ((*(byte *)(param_1 + 0x2e) ^ 1) & 1) << 3 | _DAT_ram_5008d09c & 0x1fffff7 | 4 | 0xb800020;
  return;
}


