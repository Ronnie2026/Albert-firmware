/* Firmware entry: 0x48023af6 */

int FUN_ram_48023af6(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int iStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if ((int)(param_2 - 0x20) < 0) {
    local_40 = 1 << (param_2 & 0x1f);
    iStack_3c = 0;
  }
  else {
    iStack_3c = 1 << (param_2 - 0x20 & 0x1f);
    local_40 = 0;
  }
  uStack_30 = (uint)(param_3 == 2);
  uStack_34 = (uint)(param_3 != 2);
  uStack_38 = 1;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"os_wrapper_esp","I (%lu) %s: GPIO [%d] configuring as Interrupt\n",uVar1,
                   "os_wrapper_esp",param_2);
  iVar2 = FUN_ram_4812ad88(&local_40);
  if (iVar2 != 0) {
    FUN_ram_4ff36df4(iVar2,"./build-p164-v32/p4_overlays/port_esp_hosted_host_os.c",0x2f1,
                     "hosted_setup_gpio_interrupt","gpio_config(&new_gpio_io_conf)");
  }
  if (DAT_ram_4ff6dbdc == '\0') {
    FUN_ram_4812b58e(0);
    DAT_ram_4ff6dbdc = '\x01';
  }
  FUN_ram_4812b2e4(param_2);
  iVar2 = FUN_ram_4812b19c(param_2,param_4,param_5);
  if (iVar2 != 0) {
    FUN_ram_4ff36df4(iVar2,"./build-p164-v32/p4_overlays/port_esp_hosted_host_os.c",0x2f9,
                     "hosted_setup_gpio_interrupt","gpio_isr_handler_add(gpio_num, fn, arg)");
  }
  iVar2 = FUN_ram_4812a3d8(param_2,param_3);
  if (iVar2 == 0) {
    iVar3 = FUN_ram_4812a542();
    if (iVar3 != 0) {
      FUN_ram_4ff36df4(iVar3,"./build-p164-v32/p4_overlays/port_esp_hosted_host_os.c",0x301,
                       "hosted_setup_gpio_interrupt","gpio_intr_enable(gpio_num)");
    }
  }
  else {
    FUN_ram_4812b2e4(param_2);
  }
  return iVar2;
}


