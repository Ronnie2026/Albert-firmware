/* Firmware entry: 0x481339c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_481339c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216d6(&DAT_ram_4ff6c600);
  iVar2 = param_1 * 4;
  piVar4 = *(int **)(&DAT_ram_4ff6c604 + iVar2);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_ram_4ff2091a(1,0x14,0x804);
    if (piVar4 != (int *)0x0) {
      iVar3 = *(int *)(&DAT_ram_4ff6c60c + iVar2);
      *(int **)(&DAT_ram_4ff6c604 + iVar2) = piVar4;
      *piVar4 = param_1;
      piVar4[2] = 0;
      piVar4[1] = -0x4cc00001;
      *(int *)(&DAT_ram_4ff6c60c + iVar2) = iVar3 + 1;
      FUN_ram_4ff216e2(&DAT_ram_4ff6c600);
      uVar1 = *(undefined4 *)(&DAT_ram_4823a6fc + param_1 * 0xc);
      iVar2 = FUN_ram_4ff311d8(uVar1);
      if (iVar2 == 0) {
        if (param_1 == 0) {
          _DAT_ram_500e601c = _DAT_ram_500e601c | 0x200000;
          _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffffbf;
          _DAT_ram_500c2048 = _DAT_ram_500c2048 & 0xffffbfff;
        }
        else {
          _DAT_ram_500e601c = _DAT_ram_500e601c | 0x400000;
          _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffff7f;
          _DAT_ram_500c3048 = _DAT_ram_500c3048 & 0xffffbfff;
        }
      }
      FUN_ram_4ff31206(uVar1,iVar2);
      return piVar4;
    }
    FUN_ram_4ff216e2(&DAT_ram_4ff6c600);
    piVar4 = (int *)0x0;
  }
  else {
    *(int *)(&DAT_ram_4ff6c60c + iVar2) = *(int *)(&DAT_ram_4ff6c60c + iVar2) + 1;
    FUN_ram_4ff216e2(&DAT_ram_4ff6c600);
  }
  return piVar4;
}


