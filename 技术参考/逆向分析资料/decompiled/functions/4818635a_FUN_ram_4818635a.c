/* Firmware entry: 0x4818635a */

undefined4 FUN_ram_4818635a(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (iVar1 = FUN_ram_4ff3b5f0(DAT_ram_4ff6e2a0,2000), iVar1 != 0)) {
    FUN_ram_4818b898();
    do {
      iVar1 = thunk_FUN_ram_481888c4(param_2);
    } while (iVar1 == 0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: Timed out waiting for completion of AES Interrupt\n",
                     uVar2,"esp-aes");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


