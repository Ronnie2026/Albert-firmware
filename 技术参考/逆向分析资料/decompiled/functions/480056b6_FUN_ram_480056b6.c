/* Firmware entry: 0x480056b6 */

void FUN_ram_480056b6(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (3 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.c",0x18a,"regdma_link_recursive_impl",
                     "entry < REGDMA_LINK_ENTRY_NUM");
  }
  if (param_1 != 0) {
    iVar1 = FUN_ram_480053ba();
    uVar9 = ~(1 << (param_2 & 0x1f)) & 0xff;
    if (iVar1 != 0) {
      iVar2 = FUN_ram_480053ba(iVar1,param_2);
      if (iVar2 != 0) {
        iVar3 = FUN_ram_480053ba(iVar2,param_2);
        if (iVar3 != 0) {
          iVar4 = FUN_ram_480053ba(iVar3,param_2);
          if (iVar4 != 0) {
            iVar5 = FUN_ram_480053ba(iVar4,param_2);
            if (iVar5 != 0) {
              iVar6 = FUN_ram_480053ba(iVar5,param_2);
              if (iVar6 != 0) {
                uVar7 = FUN_ram_480053ba(iVar6,param_2);
                FUN_ram_4800549e(uVar7,param_2,7,&LAB_ram_480055d6);
                puVar8 = (uint *)FUN_ram_4800557a(iVar6);
                *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
                if ((*puVar8 & 0xf) == 0) {
                  FUN_ram_4800551c(iVar6);
                  thunk_FUN_ram_4ff209c6();
                }
              }
              puVar8 = (uint *)FUN_ram_4800557a(iVar5);
              *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
              if ((*puVar8 & 0xf) == 0) {
                FUN_ram_4800551c(iVar5);
                thunk_FUN_ram_4ff209c6();
              }
            }
            puVar8 = (uint *)FUN_ram_4800557a(iVar4);
            *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
            if ((*puVar8 & 0xf) == 0) {
              FUN_ram_4800551c(iVar4);
              thunk_FUN_ram_4ff209c6();
            }
          }
          puVar8 = (uint *)FUN_ram_4800557a(iVar3);
          *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
          if ((*puVar8 & 0xf) == 0) {
            FUN_ram_4800551c(iVar3);
            thunk_FUN_ram_4ff209c6();
          }
        }
        puVar8 = (uint *)FUN_ram_4800557a(iVar2);
        *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
        if ((*puVar8 & 0xf) == 0) {
          FUN_ram_4800551c(iVar2);
          thunk_FUN_ram_4ff209c6();
        }
      }
      puVar8 = (uint *)FUN_ram_4800557a(iVar1);
      *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
      if ((*puVar8 & 0xf) == 0) {
        FUN_ram_4800551c(iVar1);
        thunk_FUN_ram_4ff209c6();
      }
    }
    puVar8 = (uint *)FUN_ram_4800557a(param_1);
    *puVar8 = *puVar8 & 0xfffffff0 | *puVar8 & 0xf & uVar9;
    if ((*puVar8 & 0xf) == 0) {
      FUN_ram_4800551c(param_1);
      thunk_FUN_ram_4ff209c6();
      return;
    }
  }
  return;
}


