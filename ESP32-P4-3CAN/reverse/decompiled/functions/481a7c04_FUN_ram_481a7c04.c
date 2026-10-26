/* Firmware entry: 0x481a7c04 */

int FUN_ram_481a7c04(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff206d8(0x5c,param_3);
  if (param_2 == 0) {
    iVar3 = 0;
    iVar2 = iVar1;
  }
  else {
    iVar3 = FUN_ram_4ff206d8(param_2 * param_1,param_3);
    iVar2 = iVar3;
    if (iVar1 == 0) goto LAB_ram_481a7c64;
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_ram_4ff3aca6(param_1,param_2,iVar3,iVar1,0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
LAB_ram_481a7c64:
  FUN_ram_4ff209c6(iVar3);
  FUN_ram_4ff209c6(iVar1);
  return 0;
}


