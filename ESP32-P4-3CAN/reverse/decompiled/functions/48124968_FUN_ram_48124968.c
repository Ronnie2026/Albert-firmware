/* Firmware entry: 0x48124968 */

undefined4 FUN_ram_48124968(undefined4 param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6e058 != 0) && (param_2 < DAT_ram_4ff6e05c)) {
    return *(undefined4 *)(DAT_ram_4ff6e058 + param_2 * 0x5c + 0x30);
  }
  return 0;
}


