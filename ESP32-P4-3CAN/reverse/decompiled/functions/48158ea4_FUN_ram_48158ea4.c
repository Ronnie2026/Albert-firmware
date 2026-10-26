/* Firmware entry: 0x48158ea4 */

undefined4 FUN_ram_48158ea4(int param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && ((*(uint *)(param_1 + 0x54) & 2) == 0)) &&
     ((*(char **)(param_1 + 0x20) == (char *)0x0 || (**(char **)(param_1 + 0x20) == '\0')))) {
    *param_2 = *(undefined4 *)(param_1 + 0x3c);
    return 0;
  }
  return 0x102;
}


