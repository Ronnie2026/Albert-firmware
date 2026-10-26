/* Firmware entry: 0x48163b52 */

void FUN_ram_48163b52(int param_1,undefined4 param_2,int param_3,int param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    if (param_1 != 0xff) {
      FUN_ram_4812a314();
      FUN_ram_4812a6a6(param_1);
      FUN_ram_4812baee(param_1,0);
      FUN_ram_4812b6ae(param_1,3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_host.c",0x23d,"configure_pin_iomux","gpio_num != (uint8_t) GPIO_NUM_NC")
    ;
  }
  if (param_1 != 0xff) {
    FUN_ram_4812b054();
    FUN_ram_4812aca0(param_1,param_3);
    FUN_ram_4812a314(param_1);
    if (param_3 == 3) {
      gpio_matrix_in(param_1,param_2,0);
    }
    gpio_matrix_out(param_1,param_2,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_host.c",0x24c,"configure_pin_gpio_matrix",
                   "gpio_num != (uint8_t) GPIO_NUM_NC");
}


