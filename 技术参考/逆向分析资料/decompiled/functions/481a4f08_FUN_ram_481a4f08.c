/* Firmware entry: 0x481a4f08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481a4f08(int *param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(&DAT_ram_4ff4bad0,0xffffffff);
  iVar1 = *(int *)(&DAT_ram_4ff4bad0 + (iVar2 + 4) * 4) + -1;
  *(int *)(&DAT_ram_4ff4bad0 + (iVar2 + 4) * 4) = iVar1;
  if (iVar1 != 0) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff4bad0);
    return;
  }
  if (*(int *)(&DAT_ram_4ff4bad8 + iVar2 * 4) != 0) {
    *(undefined4 *)(&DAT_ram_4ff4bad8 + iVar2 * 4) = 0;
    FUN_ram_4ff3ee10(&DAT_ram_4ff4bad0);
    FUN_ram_481a8ea2(param_1 + 2);
    FUN_ram_4ff3122a();
    if (iVar2 == 0) {
      _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xfffffff7;
    }
    else {
      _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xffffffef;
    }
    FUN_ram_4ff31240();
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("gdma.c",0x28c,"gdma_release_group_handle","s_platform.groups[group_id]");
}


