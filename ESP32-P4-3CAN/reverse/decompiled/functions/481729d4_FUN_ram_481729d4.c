/* Firmware entry: 0x481729d4 */

int FUN_ram_481729d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int aiStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) == 1) {
    aiStack_14[0] = param_2;
    iVar1 = FUN_ram_481744d6(param_1 + 0xc,param_1 + 0x8c,aiStack_14,param_3);
    if ((iVar1 == 0) && (aiStack_14[0] - param_2 != param_3)) {
      iVar1 = -0x4f80;
    }
    return iVar1;
  }
  return -0x4f80;
}


