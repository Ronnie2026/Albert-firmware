/* Firmware entry: 0x4800020e */

undefined4 FUN_ram_4800020e(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < DAT_ram_4ff47dac) {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Min chip rev:     v%d.%d\n",uVar3,"efuse_init",3,1);
    if (2 < DAT_ram_4ff47dac) {
      uVar3 = FUN_ram_4ff44d14();
      iVar2 = FUN_ram_4ff20664();
      if (iVar2 == 0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = "(constraint ignored)";
      }
      ets_printf("I (%lu) %s: Max chip rev:     v%d.%d %s\n",uVar3,"efuse_init",3,99,pcVar4);
      uVar1 = FUN_ram_4ff20626();
      goto joined_r0x480002be;
    }
  }
  uVar1 = FUN_ram_4ff20626();
joined_r0x480002be:
  if (2 < DAT_ram_4ff47dac) {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Chip rev:         v%d.%d\n",uVar3,"efuse_init",uVar1 / 100,uVar1 % 100);
    return 0;
  }
  return 0;
}


