/* Firmware entry: 0x4ff2d694 */

undefined4 FUN_ram_4ff2d694(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(param_1 + 0x38,0xffffffff);
    uVar1 = FUN_ram_4ff42b62(param_1 + 0x24);
    *param_2 = uVar1;
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(param_1 + 0x38);
    return 0;
  }
  return 0x102;
}


