/* Firmware entry: 0x4ff433c2 */

int FUN_ram_4ff433c2(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("multi_heap.c",0xf6,"multi_heap_realloc_impl",s_heap____NULL_ram_4ff549c4);
  }
  if (param_2 != 0) {
    FUN_ram_4ff431d4(param_1,param_2 + -8);
    iVar3 = *param_1;
    if (iVar3 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ec14(iVar3,0xffffffff);
    }
    iVar3 = FUN_ram_4ff4347c(param_2);
    iVar1 = FUN_ram_4ff445d8(param_1[4],param_2,param_3);
    if (iVar1 != 0) {
      param_1[1] = param_1[1] + iVar3;
      iVar3 = FUN_ram_4ff4347c();
      uVar2 = param_1[1] - iVar3;
      param_1[1] = uVar2;
      if (uVar2 < (uint)param_1[2]) {
        param_1[2] = uVar2;
      }
    }
    iVar3 = *param_1;
    if (iVar3 != 0) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(iVar3);
    }
    return iVar1;
  }
  iVar3 = FUN_ram_4ff43334(param_1,param_3);
  return iVar3;
}


