/* Firmware entry: 0x4814e3e8 */

bool FUN_ram_4814e3e8(undefined4 *param_1)

{
  int aiStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_14[0] = 0;
  FUN_ram_4ff3b3d2(*param_1,aiStack_14);
  return aiStack_14[0] == 1;
}


