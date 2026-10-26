/* Firmware entry: 0x4812c062 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812c062(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    if ((int)(param_1 - 0x20) < 0) {
      uVar1 = -0x1000000 << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar1 = -0x800000 >> (param_1 - 0x20 & 0x1f);
    }
    if ((uVar1 & 1) == 0) {
      if (((param_1 & 0xff) - 0x18 & 0xff) < 2) {
        _DAT_ram_500d2018 = _DAT_ram_500d2018 & 0xffffbfff;
      }
      else if (((param_1 & 0xff) - 0x1a & 0xff) < 2) {
        _DAT_ram_50080000 = _DAT_ram_50080000 & 0xfffbffff;
      }
      iVar3 = (param_1 & 0xff) * 4;
      *(uint *)(iVar3 + 0x500e1004) =
           *(uint *)(iVar3 + 0x500e1004) & 0xffff8fff | (param_2 & 7) << 0xc;
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_func_sel",0x47e,"GPIO number error");
  return 0x102;
}


