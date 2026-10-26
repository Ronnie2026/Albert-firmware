/* Firmware entry: 0x48140a3a */

void FUN_ram_48140a3a(int param_1,undefined4 param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x30) != '\0')) {
    FUN_ram_4813a81c(*(char *)(param_1 + 0x30));
    return;
  }
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x14) == '\x06') {
      FUN_ram_48148070(param_2);
      return;
    }
  }
  FUN_ram_481470f4();
  return;
}


