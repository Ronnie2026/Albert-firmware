/* Firmware entry: 0x48026dc2 */

int FUN_ram_48026dc2(int *param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
      iVar1 = *param_1;
    }
  }
  FUN_ram_4800b920((char)param_1[1],aiStack_14);
  if (*(char *)((int)param_1 + 5) != '\0') {
    aiStack_14[0] = aiStack_14[0] + 1;
  }
  if (*param_1 != 0) {
    FUN_ram_4ff3afa2(*param_1,0,0,0);
  }
  return aiStack_14[0];
}


