/* Firmware entry: 0x4814aa20 */

void FUN_ram_4814aa20(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((&DAT_ram_4ff6d321)[param_1 * 0x2c] == '\0') {
    if ((&DAT_ram_4ff6d31c)[param_1 * 0xb] != 0) {
      FUN_ram_4814a992();
      (&DAT_ram_4ff6d31c)[param_1 * 0xb] = 0;
    }
    iVar1 = param_1 * 0x2c;
    *(undefined2 *)(&DAT_ram_4ff6d320 + iVar1) = 0;
    (&DAT_ram_4ff6d30c)[iVar1] = 0;
    (&DAT_ram_4ff6d310)[param_1 * 0xb] = 0;
    (&DAT_ram_4ff6d324)[param_1 * 0xb] = 0;
    (&DAT_ram_4ff6d2fc)[param_1 * 0xb] = 0;
    *(undefined4 *)(&DAT_ram_4ff6d300 + iVar1) = 0;
    *(undefined4 *)(&DAT_ram_4ff6d304 + iVar1) = 0;
    *(undefined4 *)(&DAT_ram_4ff6d308 + iVar1) = 0;
  }
  return;
}


