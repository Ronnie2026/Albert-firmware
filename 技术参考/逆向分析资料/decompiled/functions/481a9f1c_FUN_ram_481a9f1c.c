/* Firmware entry: 0x481a9f1c */

undefined4 FUN_ram_481a9f1c(int param_1)

{
  DAT_ram_4ff5311c = DAT_ram_48235f58;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff53120 = 0;
  DAT_ram_4ff53124 = 0;
  DAT_ram_4ff53128 = 0;
  DAT_ram_4ff5312c = 0;
  *(undefined4 **)(param_1 + 0xc) = &DAT_ram_4ff5311c;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_ram_4ff2c8aa_ram_4ff530f4;
  return 0;
}


