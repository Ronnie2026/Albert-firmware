/* Firmware entry: 0x4814f3c0 */

undefined4 FUN_ram_4814f3c0(uint *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xf0) == 0x10)) {
    uVar1 = FUN_ram_4814edaa();
    return uVar1;
  }
  return 0xfffffff0;
}


