/* Firmware entry: 0x4812b8fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812b8fa(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    uVar4 = param_1 - 0x20;
    if ((int)uVar4 < 0) {
      uVar1 = -0x1000000 << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar1 = -0x800000 >> (uVar4 & 0x1f);
    }
    if ((uVar1 & 1) == 0) {
      iVar2 = FUN_ram_4812c13a(param_1);
      if (iVar2 != 0) {
        uVar3 = FUN_ram_4812c8a0(param_1);
        return uVar3;
      }
      if (*(int *)(&DAT_ram_48235cbc + param_1 * 4) == 0) {
        return 0x106;
      }
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
      if (param_1 < 0x20) {
        _DAT_ram_501101c4 = ~(1 << (param_1 & 0x1f)) & _DAT_ram_501101c4;
      }
      else {
        _DAT_ram_501101c8 =
             _DAT_ram_501101c8 & 0x1ffffff & ~(1 << (uVar4 & 0x1f)) | _DAT_ram_501101c8 & 0xfe000000
        ;
      }
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
      return 0;
    }
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar3,&DAT_ram_481d385c,
                   "gpio_hold_dis",0x2fe,"Only output-capable GPIO support this function");
  return 0x106;
}


