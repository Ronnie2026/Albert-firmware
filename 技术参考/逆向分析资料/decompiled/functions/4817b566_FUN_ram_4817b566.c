/* Firmware entry: 0x4817b566 */

undefined4 FUN_ram_4817b566(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No AES context supplied\n",uVar1,"esp-aes");
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No input supplied\n",uVar1,"esp-aes");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if (param_3 == 0) {
      uVar1 = FUN_ram_4ff44d14(0);
      FUN_ram_4ff44bf0(1,"esp-aes","E (%lu) %s: No output supplied\n",uVar1,"esp-aes");
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


