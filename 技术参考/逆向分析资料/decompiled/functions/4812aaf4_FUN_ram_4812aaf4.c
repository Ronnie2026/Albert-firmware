/* Firmware entry: 0x4812aaf4 */

undefined4 FUN_ram_4812aaf4(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar1,&DAT_ram_481d385c,
                   "gpio_set_level",0xf7,"GPIO output gpio_num error");
  return 0x102;
}


