/* Firmware entry: 0x48131278 */

undefined4 FUN_ram_48131278(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4fc00208();
    FUN_ram_4fc00214(param_1);
    FUN_ram_4fc0020c(param_1);
    return 0;
  }
  return 0x103;
}


