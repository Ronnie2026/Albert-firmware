/* Firmware entry: 0x4ff3c9fa */

undefined4 FUN_ram_4ff3c9fa(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebfe();
  if (DAT_ram_4ff6da20 == 0) {
    FUN_ram_4ff3ec08();
LAB_ram_4ff3ca18:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0xa25,"xTaskResumeAll",
                     "( ( xTaskGetSchedulerState() == ( ( BaseType_t ) 0 ) ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) == ( ( BaseType_t ) 1 )"
                    );
  }
  if ((&DAT_ram_4ff6d9f8)[mhartid] == 0) {
    FUN_ram_4ff3ec08();
    goto LAB_ram_4ff3ca18;
  }
  FUN_ram_4ff3ec08();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar1 = mhartid;
  piVar8 = &DAT_ram_4ff6d9f8 + mhartid;
  *piVar8 = *piVar8 + -1;
  if ((*piVar8 == 0) && (DAT_ram_4ff6da2c != 0)) {
    iVar7 = mhartid * 0x14;
    iVar2 = DAT_ram_4ff6da1c;
    if (*(int *)(&DAT_ram_4ff58bd4 + iVar7) != 0) {
      puVar9 = &DAT_ram_4ff6da14 + mhartid;
      do {
        iVar2 = *(int *)(*(int *)(&DAT_ram_4ff58be0 + iVar7) + 0xc);
        piVar8 = *(int **)(iVar2 + 0x28);
        *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8) = *(undefined4 *)(iVar2 + 0x20);
        *(undefined4 *)(*(int *)(iVar2 + 0x20) + 4) = *(undefined4 *)(iVar2 + 0x1c);
        if (piVar8[1] == iVar2 + 0x18) {
          piVar8[1] = *(int *)(iVar2 + 0x20);
        }
        *(undefined4 *)(iVar2 + 0x28) = 0;
        iVar5 = iVar2 + 4;
        *piVar8 = *piVar8 + -1;
        piVar8 = *(int **)(iVar2 + 0x14);
        *(undefined4 *)(*(int *)(iVar2 + 8) + 8) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + 4) = *(undefined4 *)(iVar2 + 8);
        if (piVar8[1] == iVar5) {
          piVar8[1] = *(int *)(iVar2 + 0xc);
        }
        *(undefined4 *)(iVar2 + 0x14) = 0;
        uVar4 = *(uint *)(iVar2 + 0x2c);
        *piVar8 = *piVar8 + -1;
        if (DAT_ram_4ff6da24 < uVar4) {
          DAT_ram_4ff6da24 = uVar4;
        }
        piVar8 = (int *)(&DAT_ram_4ff58c24 + uVar4 * 0x14);
        iVar6 = *(int *)(&DAT_ram_4ff58c28 + uVar4 * 0x14);
        *(int *)(iVar2 + 8) = iVar6;
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + 8);
        *(int *)(*(int *)(iVar6 + 8) + 4) = iVar5;
        *(int *)(iVar6 + 8) = iVar5;
        *(int **)(iVar2 + 0x14) = piVar8;
        *piVar8 = *piVar8 + 1;
        FUN_ram_4ff2ad84(iVar2,iVar2 + 0x34,uVar4,DAT_ram_4ff6da28);
        iVar2 = FUN_ram_4ff3bb04(iVar2,*(undefined4 *)(iVar2 + 0x2c),1);
        if (iVar2 == 1) {
          *puVar9 = 1;
        }
      } while (*(int *)(&DAT_ram_4ff58bd4 + iVar7) != 0);
      iVar2 = DAT_ram_4ff6da1c;
      if (*DAT_ram_4ff6da38 == 0) {
        DAT_ram_4ff6da08 = 0xffffffff;
      }
      else {
        DAT_ram_4ff6da08 = *(undefined4 *)DAT_ram_4ff6da38[3];
      }
    }
    DAT_ram_4ff6da1c = iVar2;
    if ((iVar1 == 0) && (iVar2 != 0)) {
      do {
        iVar7 = FUN_ram_4ff3c712();
        if (iVar7 != 0) {
          DAT_ram_4ff6da14 = 1;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_ram_4ff6da1c = 0;
    }
    if ((&DAT_ram_4ff6da14)[iVar1] != 0) {
      FUN_ram_4ff3ef0e();
      uVar3 = 1;
      goto LAB_ram_4ff3cbca;
    }
  }
  uVar3 = 0;
LAB_ram_4ff3cbca:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar3;
}


