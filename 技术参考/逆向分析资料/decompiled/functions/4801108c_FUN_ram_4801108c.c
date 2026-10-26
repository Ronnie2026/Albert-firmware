/* Firmware entry: 0x4801108c */

undefined4 FUN_ram_4801108c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: serial invalid hdr\n",uVar1,"serial_ll");
    uVar1 = 0xffffffff;
  }
  else {
    if (*param_1 != 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"serial_ll","W (%lu) %s: Flush existing serial queue\n",uVar1,"serial_ll");
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x48))(*param_1);
    }
    iVar2 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x3c))(10,0x18);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      FUN_ram_48010f1c(param_1);
      uVar1 = 0xffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
      uVar1 = 0;
    }
  }
  return uVar1;
}


