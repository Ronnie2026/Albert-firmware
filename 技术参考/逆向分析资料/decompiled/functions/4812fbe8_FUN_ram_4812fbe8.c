/* Firmware entry: 0x4812fbe8 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4812fbe8(int param_1)

{
  int iVar1;
  int aiStack_18 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return -1;
  }
  aiStack_18[0] = 0;
  aiStack_18[1] = 0;
  aiStack_18[0] = FUN_ram_4ff35382();
  if (aiStack_18[0] != -1) {
    return aiStack_18[0];
  }
  iVar1 = FUN_ram_481a6a28(param_1,aiStack_18,aiStack_18 + 1);
  if (iVar1 == 0) {
    return aiStack_18[0];
  }
  return -1;
}


