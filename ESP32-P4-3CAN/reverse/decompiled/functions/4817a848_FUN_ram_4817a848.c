/* Firmware entry: 0x4817a848 */

int FUN_ram_4817a848(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 != 0 || param_3 != 0) && (param_4 == 0)) {
    return -0x4080;
  }
  uVar5 = *(undefined4 *)(param_1 + 4);
  iVar1 = thunk_FUN_ram_4817b126(1,uVar5);
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_ram_4817b126(1,uVar5);
    if (iVar2 != 0) {
      iVar3 = FUN_ram_48178e98(param_2,param_3,param_4,uVar5,iVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_ram_48179632(param_1,param_5,iVar1);
        if (iVar3 == 0) {
          iVar4 = FUN_ram_481723ca(iVar1,iVar2,uVar5);
          iVar3 = 0;
          if (iVar4 != 0) {
            FUN_ram_48178b14(iVar1,uVar5);
            iVar3 = -0x4380;
            goto LAB_ram_4817a8e2;
          }
        }
        FUN_ram_48178b14(iVar1,uVar5);
      }
      else {
        FUN_ram_48178b14(iVar1,uVar5);
        iVar3 = -0x4080;
      }
LAB_ram_4817a8e2:
      FUN_ram_48178b14(iVar2,uVar5);
      return iVar3;
    }
    FUN_ram_48178b14(iVar1,uVar5);
  }
  return -0x10;
}


