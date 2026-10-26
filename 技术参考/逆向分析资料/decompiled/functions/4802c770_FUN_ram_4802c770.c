/* Firmware entry: 0x4802c770 */

uint FUN_ram_4802c770(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff2bcc4();
  if (uVar1 != 0) {
    return uVar1;
  }
  fence();
  return (uint)(*(char *)(param_1 + 0x18c6c) != '\0');
}


