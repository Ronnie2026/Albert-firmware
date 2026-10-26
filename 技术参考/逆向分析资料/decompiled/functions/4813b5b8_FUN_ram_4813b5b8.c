/* Firmware entry: 0x4813b5b8 */

int FUN_ram_4813b5b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4813ad9a(param_1,*(undefined2 *)(param_3 + 8),param_2);
  if ((iVar1 != 0) &&
     (iVar2 = FUN_ram_4813b1ae(iVar1,param_3,*(undefined2 *)(param_3 + 8),0), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4813a9da();
  }
  return iVar1;
}


