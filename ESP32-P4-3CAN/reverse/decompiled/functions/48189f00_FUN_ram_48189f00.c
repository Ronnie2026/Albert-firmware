/* Firmware entry: 0x48189f00 */

int FUN_ram_48189f00(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4817f8f8();
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0x2300;
  }
  return iVar1;
}


