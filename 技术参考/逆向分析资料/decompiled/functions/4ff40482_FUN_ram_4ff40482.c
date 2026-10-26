/* Firmware entry: 0x4ff40482 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff40482(undefined4 param_1,uint param_2)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = mhartid * 4;
  if ((&DAT_ram_4ff6da7c)[mhartid] == 0) {
    return param_1;
  }
  iVar1 = *(int *)(&DAT_ram_4ff6da74 + iVar5);
  if ((iVar1 != 0) && (iVar1 = iVar1 + -1, *(int *)(&DAT_ram_4ff6da74 + iVar5) = iVar1, iVar1 != 0))
  {
    return param_1;
  }
  iVar1 = FUN_ram_4ff4034e();
  if (*(int *)(&DAT_ram_4ff6da5c + iVar5) != 0) {
    FUN_ram_4ff3cc34();
    *(int *)(&DAT_ram_4ff6da5c + iVar5) = 0;
    iVar5 = FUN_ram_4ff4034e();
    if (iVar5 != iVar1) {
      FUN_ram_4ff40098();
      goto LAB_ram_4ff404f0;
    }
  }
  DAT_csreg_07f1 = 2;
  if ((param_2 & 2) != 0) {
    DAT_csreg_07f1 = 3;
  }
  if ((param_2 & 4) != 0) {
    DAT_csreg_07f2 = 1;
  }
LAB_ram_4ff404f0:
  if (mhartid == 0) {
    _DAT_ram_3ff06000 = _DAT_ram_3ff06000 & 0xfffffcff;
  }
  else {
    _DAT_ram_3ff06080 = _DAT_ram_3ff06080 & 0xfffffcff;
  }
  iVar2 = (&DAT_ram_4ff6da3c)[iVar2];
  *(undefined4 *)((int)&DAT_ram_4ff6da54 + unaff_s0) = 1;
  uVar4 = *(undefined4 *)(iVar2 + 0x48);
  uVar3 = *(undefined4 *)(iVar2 + 0x30);
  if (mhartid == 0) {
    _DAT_ram_3ff06000 = _DAT_ram_3ff06000 | 0x300;
    _DAT_ram_3ff06038 = uVar3;
    _DAT_ram_3ff0603c = uVar4;
  }
  else {
    _DAT_ram_3ff06080 = _DAT_ram_3ff06080 | 0x300;
    _DAT_ram_3ff060b8 = uVar3;
    _DAT_ram_3ff060bc = uVar4;
  }
  return param_1;
}


