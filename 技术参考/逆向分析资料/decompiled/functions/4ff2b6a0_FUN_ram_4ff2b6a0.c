/* Firmware entry: 0x4ff2b6a0 */

/* WARNING: Removing unreachable block (ram,0x4ff2b878) */
/* WARNING: Removing unreachable block (ram,0x4ff2b87c) */
/* WARNING: Removing unreachable block (ram,0x4ff2b862) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2b6a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[0x26] = DAT_csreg_07e1;
  param_1[0x27] = DAT_csreg_0be0;
  param_1[0x28] = DAT_csreg_0be8;
  param_1[0x29] = DAT_csreg_0bf0;
  param_1[0x2a] = DAT_csreg_0bf8;
  if (mhartid == 0) {
    puVar16 = (undefined4 *)&DAT_ram_3ff06040;
    uVar17 = _DAT_ram_3ff06004;
  }
  else {
    puVar16 = (undefined4 *)&DAT_ram_3ff060c0;
    uVar17 = _DAT_ram_3ff06084;
  }
  param_1[0x2b] = (uint)((uVar17 & 0x300) != 0);
  param_1[0x2c] = *puVar16;
  param_1[0x23] = mcause;
  param_1[0x24] = mepc;
  uVar12 = _DAT_ram_500e2060;
  uVar11 = _DAT_ram_500e205c;
  uVar10 = _DAT_ram_500e204c;
  uVar9 = _DAT_ram_500e2048;
  uVar8 = _DAT_ram_500e2044;
  uVar7 = _DAT_ram_500e2040;
  uVar6 = _DAT_ram_500e2018;
  uVar5 = _DAT_ram_500e2014;
  uVar4 = _DAT_ram_500e2010;
  uVar3 = _DAT_ram_500e200c;
  uVar17 = _DAT_ram_500e2008;
  uVar2 = _DAT_ram_500e2004;
  uVar1 = _DAT_ram_500e2000;
  param_1[0x25] = mstatus;
  param_1[2] = uVar17;
  param_1[6] = uVar6;
  param_1[0xc] = uVar10;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[3] = uVar3;
  param_1[5] = uVar4;
  param_1[7] = uVar11;
  param_1[9] = uVar7;
  param_1[0xb] = uVar8;
  param_1[4] = uVar5;
  param_1[8] = uVar12;
  param_1[10] = uVar9;
  iVar13 = 0;
  puVar16 = param_1 + 0xd;
  do {
    iVar14 = (iVar13 + 2) * 8;
    *puVar16 = *(undefined4 *)(&DAT_ram_500e2004 + (iVar13 + 0xc) * 4);
    iVar15 = (iVar13 + 0xe) * 8;
    puVar16[3] = *(undefined4 *)(&DAT_ram_500e200c + iVar14);
    iVar13 = iVar13 + 1;
    puVar16[6] = *(undefined4 *)(&DAT_ram_500e2010 + iVar14);
    puVar16[9] = *(undefined4 *)(&DAT_ram_500e2008 + iVar15);
    puVar16[0xc] = *(undefined4 *)(&DAT_ram_500e2004 + iVar15);
    uVar6 = _DAT_ram_500e60c4;
    uVar5 = _DAT_ram_500e6098;
    uVar4 = _DAT_ram_500e601c;
    uVar3 = _DAT_ram_500e20fc;
    uVar2 = _DAT_ram_500e2070;
    uVar1 = _DAT_ram_500e2068;
    puVar16 = puVar16 + 1;
  } while (iVar13 != 3);
  param_1[0x1c] = _DAT_ram_500e2064;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar5;
  param_1[0x22] = uVar6;
  iVar13 = 0x1000;
  while (iVar14 = DAT_ram_4ff4c620, DAT_ram_4ff4c620 = 1, iVar14 != 0) {
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) {
      DAT_ram_4ff4c620 = 1;
      return;
    }
  }
  iVar13 = param_1[0x32] + 1;
  do {
    iVar14 = iVar13;
    if ((int)(_DAT_ram_500e2008 << 2) < 0) {
      _DAT_ram_500e2008 = _DAT_ram_500e2008 | 0x40000000;
      param_1[0x32] = iVar14;
      param_1[0x30] = 1;
      goto LAB_ram_4ff2b850;
    }
    iVar13 = iVar14 + 1;
  } while (param_1[0x32] + 0x41 != iVar14 + 1);
  _DAT_ram_500e2008 = _DAT_ram_500e2008 | 0x40000000;
  param_1[0x32] = iVar14;
  if (param_1[0x30] != 0) {
LAB_ram_4ff2b850:
    uVar1 = _DAT_ram_500e204c;
    uVar17 = _DAT_ram_500e2048 & 0xfffff;
    param_1[0x33] = param_1[0x33] + 1;
    param_1[0x2d] = uVar1;
    param_1[0x2e] = uVar17;
    param_1[0x2f] = uVar1;
    param_1[0x31] = 1;
  }
  fence();
  DAT_ram_4ff4c620 = 0;
  return;
}


