/* Firmware entry: 0x4812aa8c */

undefined4 FUN_ram_4812aa8c(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    uVar2 = param_1 - 0x20;
    if ((int)uVar2 < 0) {
      uVar3 = -0x1000000 << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar3 = -0x800000 >> (uVar2 & 0x1f);
    }
    if ((uVar3 & 1) == 0) {
      iVar4 = *(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978;
      if (param_2 == 0) {
        if (param_1 < 0x20) {
          *(int *)(iVar4 + 0xc) = 1 << (param_1 & 0x1f);
          return 0;
        }
        *(int *)(iVar4 + 0x18) = 1 << (uVar2 & 0x1f);
        return 0;
      }
      if (param_1 < 0x20) {
        *(int *)(iVar4 + 8) = 1 << (param_1 & 0x1f);
        return 0;
      }
      *(int *)(iVar4 + 0x14) = 1 << (uVar2 & 0x1f);
      return 0;
    }
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_set_level",0xf7,"GPIO output gpio_num error");
  return 0x102;
}


