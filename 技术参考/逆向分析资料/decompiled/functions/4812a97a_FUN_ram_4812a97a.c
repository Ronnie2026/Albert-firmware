/* Firmware entry: 0x4812a97a */

undefined4 FUN_ram_4812a97a(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < param_1) {
    if ((int)(param_1 - 0x20U) < 0) {
      uVar1 = -0x1000000 << (0x1fU - param_1 & 0x1f);
    }
    else {
      uVar1 = -0x800000 >> (param_1 - 0x20U & 0x1f);
    }
    if ((uVar1 & 1) == 0) {
      iVar3 = param_1 * 4 + *(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978;
      *(uint *)(iVar3 + 0x74) = *(uint *)(iVar3 + 0x74) & 0xfffffffb;
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar2,&DAT_ram_481d385c,
                   "gpio_od_disable",0xe9,"GPIO number error");
  return 0x102;
}


