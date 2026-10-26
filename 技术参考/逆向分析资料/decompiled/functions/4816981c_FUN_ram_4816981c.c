/* Firmware entry: 0x4816981c */

undefined4 FUN_ram_4816981c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48169d32();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_48158a6e(param_2,iVar1);
    return uVar2;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"wifi_init_default","E (%lu) %s: Failed to create wifi interface handle\n",
                   uVar2,"wifi_init_default");
  return 0xffffffff;
}


