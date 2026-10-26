/* Firmware entry: 0x4ff20d60 */

undefined4 FUN_ram_4ff20d60(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  uVar1 = mstatus;
  puVar5 = (uint *)param_1[1];
  puVar2 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    iVar4 = (int)(short)puVar2[1];
  }
  else {
    uVar3 = *puVar5;
    *puVar5 = uVar3 | 1;
    puVar5 = (uint *)puVar2[2];
    iVar4 = (int)((uVar3 | 1) << 0xf) >> 0x10;
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("intr_alloc.c",0x3a2,"esp_intr_disable","svd != NULL");
    }
    do {
      if ((iVar4 == (int)(*puVar5 << 0xf) >> 0x10) && ((*puVar5 & 1) == 0)) {
        if (iVar4 < 0) goto LAB_ram_4ff20db4;
        goto LAB_ram_4ff20dde;
      }
      puVar5 = (uint *)puVar5[5];
    } while (puVar5 != (uint *)0x0);
  }
  if (iVar4 < 0) {
LAB_ram_4ff20db4:
    if ((*puVar2 >> 0x10 & 1) != mhartid) {
      FUN_ram_4ff3eb8c();
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
      return 0x102;
    }
    mstatus = mstatus & 0xfffffff7;
    esprv_intc_int_disable(1 << (*puVar2 >> 0x11 & 0x1f));
    mstatus = mstatus | uVar1 & 8;
  }
  else {
    intr_matrix_set(*(ushort *)((int)puVar2 + 2) & 1,iVar4,6);
  }
LAB_ram_4ff20dde:
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
  return 0;
}


