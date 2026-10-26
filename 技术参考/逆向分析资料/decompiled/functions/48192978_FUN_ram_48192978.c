/* Firmware entry: 0x48192978 */

void FUN_ram_48192978(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  FUN_ram_481928a4();
  if ((*(char *)(param_1 + 0x6d8) != '\0') && (*(int *)(param_1 + 0x378) != -1)) {
    FUN_ram_48194286(param_1 + 0x378);
    *(undefined4 *)(param_1 + 0x6b8) = 0xffffffff;
    return;
  }
  return;
}


