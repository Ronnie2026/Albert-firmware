/* Firmware entry: 0x48023d7c */

int FUN_ram_48023d7c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"os_wrapper_esp","E (%lu) %s: Uninitialized sem id 3\n\n",uVar2,
                     "os_wrapper_esp");
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_ram_4ff3afa2(*param_1,0,0,0);
    iVar1 = -(uint)(iVar1 != 1);
  }
  return iVar1;
}


