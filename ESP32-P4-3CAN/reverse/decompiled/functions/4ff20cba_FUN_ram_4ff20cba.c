/* Firmware entry: 0x4ff20cba */

undefined4 FUN_ram_4ff20cba(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  uVar1 = mstatus;
  puVar5 = (uint *)param_1[1];
  puVar4 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    iVar2 = (int)(short)puVar4[1];
  }
  else {
    uVar6 = *puVar5;
    *puVar5 = uVar6 & 0xfffffffe;
    iVar2 = (int)((uVar6 & 0xfffffffe) << 0xf) >> 0x10;
  }
  uVar3 = *puVar4;
  uVar6 = uVar3 >> 0x10 & 1;
  if (iVar2 < 0) {
    if (mhartid != uVar6) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
      return 0x102;
    }
    mstatus = mstatus & 0xfffffff7;
    esprv_intc_int_enable(1 << (uVar3 >> 0x11 & 0x1f));
    mstatus = mstatus | uVar1 & 8;
  }
  else {
    intr_matrix_set(uVar6,iVar2,uVar3 >> 0x11 & 0x1f);
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
  return 0;
}


