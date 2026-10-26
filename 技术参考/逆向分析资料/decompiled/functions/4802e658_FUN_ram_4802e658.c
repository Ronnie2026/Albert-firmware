/* Firmware entry: 0x4802e658 */

undefined4 FUN_ram_4802e658(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (*(char *)(param_1 + 0x3ff9) == '\0') {
    iVar1 = FUN_ram_48025ba6();
    if (iVar1 - *(int *)(param_1 + 0x2ecc) < 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    FUN_ram_4ff45158(param_1 + 0xe9c,"download_timeout",0x11);
    fence();
    *(char *)(param_1 + 0x3ff9) = '\x01';
  }
  else {
    iVar1 = FUN_ram_4ff453ae(param_1 + 0xe9c,"download_timeout");
    if (iVar1 != 0) {
      FUN_ram_4ff45158(param_1 + 0xe9c,"download_cancelled",0x13);
    }
  }
  return 0;
}


