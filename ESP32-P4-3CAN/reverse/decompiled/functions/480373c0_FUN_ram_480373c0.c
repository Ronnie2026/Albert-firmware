/* Firmware entry: 0x480373c0 */

void FUN_ram_480373c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int aiStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_14[0] = 0;
  iVar1 = FUN_ram_480371ce(param_1,1,aiStack_14);
  if (iVar1 != 0) {
    *(bool *)param_2 = aiStack_14[0] != 0;
  }
  return;
}


