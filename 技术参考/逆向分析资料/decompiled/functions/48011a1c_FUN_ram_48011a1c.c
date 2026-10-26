/* Firmware entry: 0x48011a1c */

undefined4 FUN_ram_48011a1c(int *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Invalid parameter in close \n\r\n",uVar1,"serial");
    uVar1 = 0xfffffffe;
  }
  else if (*param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Invalid parameter in close \n\r\n",uVar1,"serial");
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
    uVar1 = 0xfffffffe;
  }
  else {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))();
    *param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}


