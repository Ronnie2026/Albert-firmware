/* Firmware entry: 0x48139372 */

undefined4 FUN_ram_48139372(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffffa;
  }
  if (**(byte **)(param_1 + 4) >> 4 != 6) {
    uVar1 = FUN_ram_48147118();
    return uVar1;
  }
  uVar1 = FUN_ram_481484f0();
  return uVar1;
}


