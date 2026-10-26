/* Firmware entry: 0x48133b10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48133b10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = *param_1;
  FUN_ram_4ff216d6(&DAT_ram_4ff6c600);
  iVar2 = iVar4 * 4;
  iVar3 = *(int *)(&DAT_ram_4ff6c60c + iVar2);
  *(int *)(&DAT_ram_4ff6c60c + iVar2) = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    FUN_ram_4ff216e2(&DAT_ram_4ff6c600);
    return;
  }
  if (*(int *)(&DAT_ram_4ff6c604 + iVar2) != 0) {
    *(undefined4 *)(&DAT_ram_4ff6c604 + iVar2) = 0;
    FUN_ram_4ff216e2(&DAT_ram_4ff6c600);
    uVar1 = *(undefined4 *)(&DAT_ram_4823a6fc + iVar4 * 0xc);
    iVar2 = FUN_ram_4ff31254(uVar1);
    if (iVar2 == 0) {
      if (iVar4 == 0) {
        _DAT_ram_500e601c = _DAT_ram_500e601c & 0xffdfffff;
      }
      else {
        _DAT_ram_500e601c = _DAT_ram_500e601c & 0xffbfffff;
      }
    }
    FUN_ram_4ff31288(uVar1,iVar2);
    thunk_FUN_ram_4ff209c6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("gptimer_common.c",0x47,"gptimer_release_group_handle",
                   "s_platform.groups[group_id]");
}


