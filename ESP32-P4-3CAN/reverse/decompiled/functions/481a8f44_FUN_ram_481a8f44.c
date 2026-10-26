/* Firmware entry: 0x481a8f44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481a8f44(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_4 * 4 + *param_1;
  *(uint *)(iVar1 + 0x158) = *(uint *)(iVar1 + 0x158) & 0xffffff7f;
  *(uint *)(param_2 * 4 + 0x500e1004) = *(uint *)(param_2 * 4 + 0x500e1004) | 0x200;
  if (((param_2 & 0xff) - 0x18 & 0xff) < 2) {
    _DAT_ram_500d2018 = _DAT_ram_500d2018 & 0xffffbfff;
  }
  else if (((param_2 & 0xff) - 0x1a & 0xff) < 2) {
    _DAT_ram_50080000 = _DAT_ram_50080000 & 0xfffbffff;
  }
  iVar1 = (param_2 & 0xff) * 4;
  *(uint *)(iVar1 + 0x500e1004) = *(uint *)(iVar1 + 0x500e1004) & 0xffff8fff | (param_3 & 7) << 0xc;
  return;
}


