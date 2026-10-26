/* Firmware entry: 0x481a7cec */

int FUN_ram_481a7cec(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff206d8(0x5c,param_4);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (param_3 == 1) {
      iVar2 = FUN_ram_4ff3b204(1,iVar1);
    }
    else if (param_3 == 2) {
      iVar2 = FUN_ram_4ff3aeb2(param_1,param_2,iVar1);
    }
    else if (param_3 == 3) {
      iVar2 = FUN_ram_4ff3aca6(1,0,0,iVar1,3);
    }
    else {
      iVar2 = FUN_ram_4ff3b204(4,iVar1);
    }
    if (iVar2 == 0) {
      FUN_ram_4ff209c6(iVar1);
    }
  }
  return iVar2;
}


