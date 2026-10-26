/* Firmware entry: 0x48024d82 */

undefined4 FUN_ram_48024d82(int *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_ram_48160848();
    return uVar1;
  }
  return 0xffffffff;
}


