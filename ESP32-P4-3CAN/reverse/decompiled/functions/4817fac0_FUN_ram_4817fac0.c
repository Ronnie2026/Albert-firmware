/* Firmware entry: 0x4817fac0 */

undefined4 FUN_ram_4817fac0(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if (0 < iVar1 - param_2) {
    *param_1 = iVar1 + -1;
    *(undefined1 *)(iVar1 + -1) = param_3;
    return 1;
  }
  return 0xffffff94;
}


