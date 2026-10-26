/* Firmware entry: 0x4812a72e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812a72e(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    uVar3 = param_1 - 0x20;
    if ((int)uVar3 < 0) {
      uVar1 = -0x1000000 << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar1 = -0x800000 >> (uVar3 & 0x1f);
    }
    if ((uVar1 & 1) == 0) {
      iVar4 = *(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978;
      if (param_1 < 0x20) {
        *(int *)(iVar4 + 0x28) = 1 << (param_1 & 0x1f);
      }
      else {
        *(uint *)(iVar4 + 0x34) =
             *(uint *)(iVar4 + 0x34) & 0xfe000000 | (uint)(0x80 << (uVar3 & 0x1f)) >> 7;
      }
      iVar4 = iVar4 + (param_1 & 0xff) * 4;
      *(uint *)(iVar4 + 0x558) = *(uint *)(iVar4 + 0x558) & 0xfffff7ff;
      *(uint *)(iVar4 + 0x558) = *(uint *)(iVar4 + 0x558) | 0x400;
      if (((param_1 & 0xff) - 0x18 & 0xff) < 2) {
        _DAT_ram_500d2018 = _DAT_ram_500d2018 & 0xffffbfff;
      }
      else if (((param_1 & 0xff) - 0x1a & 0xff) < 2) {
        _DAT_ram_50080000 = _DAT_ram_50080000 & 0xfffbffff;
      }
      iVar4 = (param_1 & 0xff) * 4;
      *(uint *)(iVar4 + 0x500e1004) = *(uint *)(iVar4 + 0x500e1004) & 0xffff8fff | 0x1000;
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_output_disable",0xd7,"GPIO number error");
  return 0x102;
}


