/* Firmware entry: 0x48138036 */

bool FUN_ram_48138036(int param_1)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return false;
  }
  bVar1 = false;
  if (*(byte *)(param_1 + 0x21) < 2) {
    iVar2 = *(byte *)(param_1 + 0x21) + 1;
    bVar1 = (&DAT_ram_4ff6c88c)[iVar2 * 6] != 0;
    if (((((&DAT_ram_4ff6c8a0)[iVar2 * 0x18] == '\x06') &&
         (bVar1 = true, (&DAT_ram_4ff6c88c)[iVar2 * 6] == 0)) &&
        (bVar1 = true, (&DAT_ram_4ff6c890)[iVar2 * 6] == 0)) &&
       ((&DAT_ram_4ff6c894)[iVar2 * 6] == 0)) {
      return (&DAT_ram_4ff6c898)[iVar2 * 6] != 0;
    }
  }
  return bVar1;
}


