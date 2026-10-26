/* Firmware entry: 0x4815d276 */

void FUN_ram_4815d276(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e270 != (undefined4 *)0x0) {
    return;
  }
  DAT_ram_4ff6e270 = (undefined4 *)FUN_ram_4ff20824(0x28,2,0x1400,0x1800);
  if (DAT_ram_4ff6e270 != (undefined4 *)0x0) {
    DAT_ram_4ff6e270[1] = 0;
    DAT_ram_4ff6e270[2] = 0;
    DAT_ram_4ff6e270[3] = 0;
    DAT_ram_4ff6e270[4] = 0;
    DAT_ram_4ff6e270[5] = 0;
    DAT_ram_4ff6e270[6] = 0;
    DAT_ram_4ff6e270[7] = 0;
    DAT_ram_4ff6e270[8] = 0;
    DAT_ram_4ff6e270[9] = 0;
    *DAT_ram_4ff6e270 = &PTR_LAB_ram_4815d26c_ram_48237880;
  }
  return;
}


