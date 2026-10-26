/* Firmware entry: 0x4ff40362 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff40362(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = mhartid;
  uVar1 = DAT_csreg_07f2;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = 0;
  if (((&DAT_ram_4ff6da7c)[mhartid] != 0) &&
     (iVar7 = *(int *)(&DAT_ram_4ff6da74 + mhartid * 4),
     *(int *)(&DAT_ram_4ff6da74 + mhartid * 4) = iVar7 + 1, iVar7 == 0)) {
    DAT_csreg_07f2 = 0;
    uVar8 = 0;
    if ((uVar1 & 3) != 0) {
      uVar8 = 4;
    }
    mstatus = mstatus & 0xffff9fff;
    if (mhartid == 0) {
      _DAT_ram_3ff06000 = _DAT_ram_3ff06000 & 0xfffffcff;
    }
    else {
      _DAT_ram_3ff06080 = _DAT_ram_3ff06080 & 0xfffffcff;
    }
    uVar4 = (&DAT_ram_4ff6da3c)[mhartid];
    *(BADSPACEBASE **)uVar4 = register0x00002008;
    puVar3 = (undefined1 *)(&DAT_ram_4ff6da4c)[mhartid];
    if (DAT_csreg_07f1 == 3) {
      uVar8 = uVar8 | 2;
      puVar5 = (uint *)FUN_ram_4ff3f158(uVar4,1,1);
      *puVar5 = *puVar5 | 2;
      puVar6 = (undefined4 *)puVar5[4];
      *puVar6 = DAT_csreg_07c6;
      puVar6[1] = DAT_csreg_07c7;
      puVar6[2] = DAT_csreg_07c8;
      puVar6[3] = DAT_csreg_07c9;
      puVar6[4] = DAT_csreg_07ca;
      puVar6[5] = DAT_csreg_07cb;
    }
    if (mhartid == 0) {
      _DAT_ram_3ff06000 = _DAT_ram_3ff06000 | 0x300;
      _DAT_ram_3ff06038 = (&DAT_ram_4ff6da44)[iVar2];
      _DAT_ram_3ff0603c = puVar3;
    }
    else {
      _DAT_ram_3ff06080 = _DAT_ram_3ff06080 | 0x300;
      _DAT_ram_3ff060b8 = (&DAT_ram_4ff6da44)[iVar2];
      _DAT_ram_3ff060bc = puVar3;
    }
  }
  DAT_csreg_07f1 = 0;
  return uVar8;
}


