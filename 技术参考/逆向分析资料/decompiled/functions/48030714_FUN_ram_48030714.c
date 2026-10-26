/* Firmware entry: 0x48030714 */

void FUN_ram_48030714(undefined4 param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff48d82 != '\0') {
    if (DAT_ram_4ff48d74 != -1) {
      DAT_ram_4ff48d74 = DAT_ram_4ff48d74 + 1;
    }
    DAT_ram_4ff48d78 = DAT_ram_4ff48d88;
    DAT_ram_4ff48d80 = 0x100;
    DAT_ram_4ff48d7c = param_2;
  }
  DAT_ram_4ff48d82 = 1;
  DAT_ram_4ff48d88 = param_1;
  if (DAT_ram_4ff48d6c != -1) {
    DAT_ram_4ff48d6c = DAT_ram_4ff48d6c + 1;
  }
  return;
}


