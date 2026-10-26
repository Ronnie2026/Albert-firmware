/* Firmware entry: 0x4818154a */

void FUN_ram_4818154a(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      uVar1 = *param_1;
      *param_1 = ~param_4 & uVar1 | *param_2 & param_4;
      *param_2 = ~param_4 & *param_2 | uVar1 & param_4;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 != param_3);
  }
  return;
}


