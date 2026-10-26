/* Firmware entry: 0x48011624 */

int FUN_ram_48011624(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Invalid parameter in open\n",uVar2,"serial");
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,4);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial","E (%lu) %s: Failed to allocate memory \n\n",uVar2,"serial");
    }
  }
  return iVar1;
}


