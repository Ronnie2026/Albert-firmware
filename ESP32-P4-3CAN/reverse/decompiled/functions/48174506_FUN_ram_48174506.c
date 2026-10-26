/* Firmware entry: 0x48174506 */

int FUN_ram_48174506(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,
                    undefined1 *param_5,int param_6)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 < 2) && (param_6 != 0)) {
    iVar1 = FUN_ram_4817414e();
    if (iVar1 == 0) {
      *param_5 = (char)*param_4;
      *param_4 = *param_4 + 1;
    }
    return iVar1;
  }
  return -0x4f80;
}


