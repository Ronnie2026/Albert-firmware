/* Firmware entry: 0x48145f18 */

int FUN_ram_48145f18(undefined4 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48145a08(param_1,2,0);
  if (-1 < iVar1) {
    if ((&DAT_ram_4ff6cf5c)[iVar1 * 0x18] == '\x05') {
      FUN_ram_48145980();
      iVar1 = 0;
    }
    else {
      iVar1 = -0x10;
    }
    return iVar1;
  }
  return (int)(char)iVar1;
}


