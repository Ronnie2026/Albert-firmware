/* Firmware entry: 0x4ff3a740 */

int FUN_ram_4ff3a740(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff386e2(*param_1);
  if ((iVar1 != 0) && (iVar2 = FUN_ram_4ff3a626(param_1), iVar2 == 0)) {
    iVar2 = DAT_ram_4ff6db40 * 0x94;
    DAT_ram_4ff6db40 = DAT_ram_4ff6db40 + 1;
    param_1[1] = iVar2 + 0x20000000;
    param_1[2] = iVar2 + 0x20000094;
    return iVar1;
  }
  return iVar1;
}


