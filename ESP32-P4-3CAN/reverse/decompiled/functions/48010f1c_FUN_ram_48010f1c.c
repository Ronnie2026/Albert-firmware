/* Firmware entry: 0x48010f1c */

undefined4 FUN_ram_48010f1c(int *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 3) = 2;
  if (*param_1 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"serial_ll","I (%lu) %s: Clean-up serial queue\n",uVar1,"serial_ll");
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x48))(*param_1);
    *param_1 = 0;
  }
  if (DAT_ram_4ff6db5c != 0) {
    DAT_ram_4ff6db5c = DAT_ram_4ff6db5c - 1;
    *(undefined4 *)(&DAT_ram_4ff6db60 + (uint)DAT_ram_4ff6db5c * 4) = 0;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
  return 0;
}


