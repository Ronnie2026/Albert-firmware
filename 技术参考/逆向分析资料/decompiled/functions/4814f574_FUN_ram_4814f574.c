/* Firmware entry: 0x4814f574 */

int FUN_ram_4814f574(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  if (param_1 != 0) {
    FUN_ram_4814e762();
    iVar1 = (int)*(char *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_ram_4814e79e();
  }
  return iVar1;
}


