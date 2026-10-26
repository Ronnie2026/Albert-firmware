/* Firmware entry: 0x4ff20e50 */

void FUN_ram_4ff20e50(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  iVar2 = mhartid;
  uVar1 = mstatus;
  iVar7 = mhartid * 4;
  uVar6 = *(uint *)(&DAT_ram_4ff6d9c0 + iVar7);
  if ((&DAT_ram_4ff6d9b4)[mhartid] == '\0') {
    (&DAT_ram_4ff6d9b4)[mhartid] = '\x01';
    puVar4 = (uint *)&DAT_ram_20801040;
    uVar3 = 0;
    uVar5 = 0;
    do {
      if ((*puVar4 & 0x100) != 0) {
        uVar3 = uVar3 | 1 << (uVar5 & 0x1f);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0x20);
    mstatus = mstatus & 0xfffffff7;
    esprv_intc_int_disable(uVar6);
    mstatus = mstatus | uVar1 & 8;
    FUN_ram_4ff20fc8(iVar2);
    *(uint *)(&DAT_ram_4ff6d9b8 + iVar7) = uVar6 & uVar3;
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


