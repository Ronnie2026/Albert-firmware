/* Firmware entry: 0x48006808 */

undefined4 FUN_ram_48006808(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)thunk_FUN_ram_4ff2070c(0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xc;
  }
  else {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e0c,0xffffffff);
    iVar3 = 1;
    if (DAT_ram_4ff6daa8 != (int *)0x0) {
      iVar3 = *DAT_ram_4ff6daa8 + 1;
    }
    *param_1 = iVar3;
    *piVar1 = iVar3;
    piVar1[1] = param_2;
    piVar1[2] = (int)DAT_ram_4ff6daa8;
    DAT_ram_4ff6daa8 = piVar1;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e0c);
    uVar2 = 0;
  }
  return uVar2;
}


