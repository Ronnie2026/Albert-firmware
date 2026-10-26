/* Firmware entry: 0x4817a526 */

int FUN_ram_4817a526(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                    int param_6,void *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_4 == 0 && param_5 == 0) || (param_6 != 0)) && (*(int *)(param_1 + 0x70) == 0)) &&
     (iVar1 = FUN_ram_48178e98(param_4,param_5,param_6,*(undefined4 *)(param_1 + 4),param_7),
     iVar1 == 0)) {
    iVar1 = thunk_FUN_ram_4817b126(1,*(undefined4 *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar2 = thunk_FUN_ram_4817b126(1,*(undefined4 *)(param_1 + 4));
      if (iVar2 != 0) {
        iVar3 = FUN_ram_481796e2(param_1,param_2,param_3,param_7,iVar1);
        if ((iVar3 == 0) && (iVar3 = FUN_ram_48179632(param_1,iVar1,iVar2), iVar3 == 0)) {
          iVar3 = FUN_ram_481723ca(iVar2,param_7,*(undefined4 *)(param_1 + 4));
          if (iVar3 == 0) {
            FUN_ram_4ff45158(param_7,iVar1,*(undefined4 *)(param_1 + 4));
            FUN_ram_48178b14(iVar1,*(undefined4 *)(param_1 + 4));
            FUN_ram_48178b14(iVar2,*(undefined4 *)(param_1 + 4));
            return 0;
          }
          iVar3 = -0x4300;
        }
        FUN_ram_48178b14(iVar1,*(undefined4 *)(param_1 + 4));
        FUN_ram_48178b14(iVar2,*(undefined4 *)(param_1 + 4));
        memset(param_7,0x21,*(size_t *)(param_1 + 4));
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar3;
      }
      thunk_FUN_ram_4ff209c6(iVar1);
    }
    iVar1 = -0x10;
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}


