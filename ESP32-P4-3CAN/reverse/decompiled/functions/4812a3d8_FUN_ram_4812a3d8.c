/* Firmware entry: 0x4812a3d8 */

undefined4 FUN_ram_4812a3d8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < (int)param_1) {
    uVar4 = param_1 - 0x20;
    if ((int)uVar4 < 0) {
      uVar3 = -0x1000000 << (0x1f - param_1 & 0x1f);
    }
    else {
      uVar3 = -0x800000 >> (uVar4 & 0x1f);
    }
    if ((uVar3 & 1) == 0) {
      if (5 < param_2) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                         "gpio_set_intr_type",0xa2,"GPIO interrupt type error");
        return 0x102;
      }
      FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
      iVar2 = *(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + param_1 * 4;
      *(uint *)(iVar2 + 0x74) = *(uint *)(iVar2 + 0x74) & 0xfffffc7f | (param_2 & 7) << 7;
      if ((int)uVar4 < 0) {
        uVar3 = 1 << (param_1 & 0x1f);
        uVar4 = 0;
      }
      else {
        uVar4 = 1 << (uVar4 & 0x1f);
        uVar3 = 0;
      }
      if (param_2 - 1 < 3) {
        DAT_ram_4ff4b990 = DAT_ram_4ff4b990 | uVar3;
        DAT_ram_4ff4b994 = uVar4 | DAT_ram_4ff4b994;
      }
      else {
        DAT_ram_4ff4b990 = DAT_ram_4ff4b990 & ~uVar3;
        DAT_ram_4ff4b994 = ~uVar4 & DAT_ram_4ff4b994;
      }
      FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
      return 0;
    }
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_set_intr_type",0xa1,"GPIO number error");
  return 0x102;
}


