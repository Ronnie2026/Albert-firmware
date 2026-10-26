/* Firmware entry: 0x4812b054 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4812b054(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    uVar5 = param_1 - 0x20;
    if ((int)uVar5 < 0) {
      uVar4 = 0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar4 = 0x7fffff >> (uVar5 & 0x1f);
    }
    if ((uVar4 & 1) != 0) {
      FUN_ram_4812a618(param_1);
      FUN_ram_4812a082(param_1);
      FUN_ram_4812a314(param_1);
      FUN_ram_4812a004(param_1);
      FUN_ram_4812a72e(param_1);
      iVar1 = FUN_ram_4812c13a(param_1);
      if (iVar1 != 0) {
        FUN_ram_4812c3fe(param_1);
      }
      if (((param_1 & 0xff) - 0x18 & 0xff) < 2) {
        _DAT_ram_500d2018 = _DAT_ram_500d2018 & 0xffffbfff;
      }
      else if (((param_1 & 0xff) - 0x1a & 0xff) < 2) {
        _DAT_ram_50080000 = _DAT_ram_50080000 & 0xfffbffff;
      }
      iVar1 = (param_1 & 0xff) * 4;
      *(uint *)(iVar1 + 0x500e1004) = *(uint *)(iVar1 + 0x500e1004) & 0xffff8fff | 0x1000;
      if ((int)uVar5 < 0) {
        iVar2 = 1 << (param_1 & 0x1f);
        iVar1 = 0;
      }
      else {
        iVar1 = 1 << (uVar5 & 0x1f);
        iVar2 = 0;
      }
      FUN_ram_481333d4(iVar2,iVar1);
      return uVar4 & 1 ^ 1;
    }
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar3,&DAT_ram_481d385c,
                   "gpio_reset_pin",0x1d0,"GPIO number error");
  return 0x102;
}


