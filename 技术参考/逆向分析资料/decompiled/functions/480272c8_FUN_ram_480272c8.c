/* Firmware entry: 0x480272c8 */

void FUN_ram_480272c8(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc14 == 2) {
    ets_install_putc1(&LAB_ram_48026c34);
    (*(code *)&ets_install_putc2)(0);
    return;
  }
  if (DAT_ram_4ff6dc14 < 3) {
    if (DAT_ram_4ff6dc14 == 0) {
      ets_install_putc1(&LAB_ram_48026bb4);
      (*(code *)&ets_install_putc2)(0);
      return;
    }
    if (DAT_ram_4ff6dc14 == 1) {
      ets_install_putc1(&LAB_ram_48026bf4);
      (*(code *)&ets_install_putc2)(0);
      return;
    }
  }
  else {
    if (DAT_ram_4ff6dc14 == 3) {
      ets_install_putc1(&LAB_ram_48026c74);
      (*(code *)&ets_install_putc2)(0);
      return;
    }
    if (DAT_ram_4ff6dc14 == 4) {
      ets_install_putc1(&LAB_ram_48026cb4);
      (*(code *)&ets_install_putc2)(0);
      return;
    }
  }
  ets_install_putc1(0);
  (*(code *)&ets_install_putc2)(0);
  return;
}


