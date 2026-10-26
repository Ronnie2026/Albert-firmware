/* Firmware entry: 0x4812e16a */

undefined4 FUN_ram_4812e16a(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((DAT_ram_4ff6e0a4 != 0) || (iVar3 = FUN_ram_4812de6e(), iVar3 == 0)) &&
      ((param_1 != 0xff || (param_2 == 0xff)))) &&
     (piVar1 = (int *)thunk_FUN_ram_4ff2070c(0x14), iVar3 = DAT_ram_4ff6e0a4, piVar1 != (int *)0x0))
  {
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = iVar3;
    piVar1[4] = 0;
    uVar2 = FUN_ram_4812e094();
    return uVar2;
  }
  return 0;
}


