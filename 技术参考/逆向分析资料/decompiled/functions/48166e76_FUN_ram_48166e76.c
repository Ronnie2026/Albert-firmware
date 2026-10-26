/* Firmware entry: 0x48166e76 */

undefined4 FUN_ram_48166e76(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    uVar1 = FUN_ram_4819339e(*(undefined4 *)(param_1 + 0x1c));
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Invalid client handle\n",uVar1,"HTTP_CLIENT");
  return 0xffffffff;
}


