/* Firmware entry: 0x4802c732 */

bool FUN_ram_4802c732(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if ((*(char *)(param_1 + 0x18c6b) != '\0') && (iVar1 = FUN_ram_4ff2bcc4(), iVar1 == 0)) {
    fence();
    return *(char *)(param_1 + 0x18c6c) == '\0';
  }
  return false;
}


