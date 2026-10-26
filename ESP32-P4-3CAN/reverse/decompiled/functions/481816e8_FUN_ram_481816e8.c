/* Firmware entry: 0x481816e8 */

void FUN_ram_481816e8(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != param_2) && (param_3 != 0)) {
    iVar1 = 0;
    do {
      *param_1 = ~param_4 & *param_1 | *param_2 & param_4;
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != iVar1);
  }
  return;
}


