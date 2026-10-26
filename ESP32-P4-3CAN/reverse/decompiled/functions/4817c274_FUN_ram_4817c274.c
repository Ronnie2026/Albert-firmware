/* Firmware entry: 0x4817c274 */

void FUN_ram_4817c274(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 << 2;
      iVar1 = iVar1 + 1;
      FUN_ram_4818b578(3,iVar2,0xffffffff);
    } while (iVar1 != param_3);
    FUN_ram_4818b58c(1);
    FUN_ram_4818b4fe(param_3 + -1);
    FUN_ram_4818b508(0,0,*param_1,*(undefined2 *)((int)param_1 + 6),param_3);
    FUN_ram_4818b508(1,0,*param_2,*(undefined2 *)((int)param_2 + 6),param_3);
    iVar1 = 1;
    FUN_ram_4818b596(1);
    if (param_3 != 1) {
      do {
        iVar2 = iVar1 << 2;
        iVar1 = iVar1 + 1;
        FUN_ram_4818b578(2,iVar2,0);
      } while (iVar1 != param_3);
    }
    FUN_ram_4818b5d4(1);
    return;
  }
  FUN_ram_4818b58c(1);
  FUN_ram_4818b4fe(0xffffffff);
  FUN_ram_4818b508(0,0,*param_1,*(undefined2 *)((int)param_1 + 6),0);
  FUN_ram_4818b508(1,0,*param_2,*(undefined2 *)((int)param_2 + 6),0);
  FUN_ram_4818b596(1);
  FUN_ram_4818b5d4(1);
  return;
}


