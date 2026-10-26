/* Firmware entry: 0x48003514 */

int FUN_ram_48003514(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  iVar1 = FUN_ram_4ff3e756(0);
  uVar2 = *(ushort *)(*param_1 + 2) & 1;
  if ((iVar1 != 0x7fffffff) && (uVar2 == mhartid)) {
    FUN_ram_4800341c(param_1);
    return 0;
  }
  iVar1 = FUN_ram_48130130(uVar2,&LAB_ram_48003512,param_1);
  return -(uint)(iVar1 != 0);
}


