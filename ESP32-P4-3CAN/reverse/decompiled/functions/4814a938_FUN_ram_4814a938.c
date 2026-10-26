/* Firmware entry: 0x4814a938 */

void FUN_ram_4814a938(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4813a504(param_1,param_2,0x40);
  if (param_2 == 0) {
    if ((*(char *)(param_1 + 0x95) != '\0') && (*(int *)(param_1 + 0x9c) != 0)) {
      FUN_ram_4813a504(param_1,1,0x40);
    }
    if ((*(char *)(param_1 + 0x96) != '\0') && (*(int *)(param_1 + 0xa0) != 0)) {
      FUN_ram_4813a504(param_1,2,0x40);
      return;
    }
  }
  return;
}


