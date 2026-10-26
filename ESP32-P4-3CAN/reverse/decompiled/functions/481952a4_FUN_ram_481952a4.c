/* Firmware entry: 0x481952a4 */

void FUN_ram_481952a4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48195266(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    param_4[3] = 8;
    *param_4 = param_3;
    param_4[1] = 6;
  }
  return;
}


