/* Firmware entry: 0x48124918 */

undefined4 FUN_ram_48124918(undefined4 param_1,undefined4 param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6e058 != 0) && (param_3 < DAT_ram_4ff6e05c)) {
    FUN_ram_4802a8a8(param_1,DAT_ram_4ff6e058 + param_3 * 0x5c + 6);
    return param_1;
  }
  FUN_ram_4802a8a8(param_1,&DAT_ram_481df390);
  return param_1;
}


