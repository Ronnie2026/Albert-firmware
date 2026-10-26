/* Firmware entry: 0x48000076 */

undefined4 FUN_ram_48000076(void)

{
  undefined4 uVar1;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff589e0 == 0) {
    recovered_format_original_elf_sha256();
  }
  if (2 < DAT_ram_4ff47dac) {
    uVar1 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Application information:\n",uVar1,"app_init");
    if (2 < DAT_ram_4ff47dac) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf("I (%lu) %s: Project name:     %s\n",uVar1,"app_init","albert_p4");
      if (2 < DAT_ram_4ff47dac) {
        uVar1 = FUN_ram_4ff44d14();
        ets_printf("I (%lu) %s: App version:      %s\n",uVar1,"app_init","P1.6.4");
        if (2 < DAT_ram_4ff47dac) {
          uVar1 = FUN_ram_4ff44d14();
          ets_printf("I (%lu) %s: Compile time:     %s %s\n",uVar1,"app_init","Oct  8 2026",
                     "19:06:47");
        }
      }
    }
  }
  if (DAT_ram_4ff589e0 == 0) {
    recovered_format_original_elf_sha256();
  }
  uStack_24 = 0;
  iStack_34 = DAT_ram_4ff589e0;
  uStack_30 = DAT_ram_4ff589e4;
  uStack_2c = DAT_ram_4ff589e8;
  uStack_28 = DAT_ram_4ff589ec;
  if (2 < DAT_ram_4ff47dac) {
    uVar1 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: ELF file SHA256:  %s...\n",uVar1,"app_init",&iStack_34);
    if (2 < DAT_ram_4ff47dac) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf("I (%lu) %s: ESP-IDF:          %s\n",uVar1,"app_init","v5.5.5");
      return 0;
    }
  }
  return 0;
}


