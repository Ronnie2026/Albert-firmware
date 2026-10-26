/* Firmware entry: 0x4802f888 */

void FUN_ram_4802f888(undefined4 param_1)

{
  char *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6c068 != 0) {
    FUN_ram_48122e7c(&DAT_ram_4ff6c050);
  }
  pcVar1 = DAT_ram_4ff5c5a8;
  if (DAT_ram_4ff5c548 != '\x04') {
    DAT_ram_4ff5c548 = '\x04';
    DAT_ram_4ff5c5a8 = "failed";
    DAT_ram_4ff5c5ac = pcVar1;
    FUN_ram_4802ad02(&DAT_ram_4ff5c55c,param_1);
    DAT_ram_4ff5c5c4 = FUN_ram_48025ba6();
  }
  return;
}


