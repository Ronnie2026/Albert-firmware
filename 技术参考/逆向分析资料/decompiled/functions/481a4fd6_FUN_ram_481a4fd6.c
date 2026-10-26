/* Firmware entry: 0x481a4fd6 */

void FUN_ram_481a4fd6(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *param_1;
  iVar1 = param_1[1];
  iVar4 = iVar3 + 100;
  FUN_ram_4ff3ec14(iVar4,0xffffffff);
  iVar2 = iVar1 * 4 + iVar3;
  iVar1 = *(int *)(iVar2 + 0x80) + -1;
  *(int *)(iVar2 + 0x80) = iVar1;
  if (iVar1 != 0) {
    FUN_ram_4ff3ee10(iVar4);
    return;
  }
  if (*(int *)(iVar2 + 0x74) != 0) {
    *(undefined4 *)(iVar2 + 0x74) = 0;
    FUN_ram_4ff3ee10(iVar4);
    thunk_FUN_ram_4ff209c6(param_1);
    FUN_ram_481a4f08(iVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("gdma.c",0x2cf,"gdma_release_pair_handle","group->pairs[pair_id]");
}


