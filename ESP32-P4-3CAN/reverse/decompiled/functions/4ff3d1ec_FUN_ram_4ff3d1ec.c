/* Firmware entry: 0x4ff3d1ec */

undefined4 FUN_ram_4ff3d1ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar1 = mhartid;
  if (*param_1 != 0) {
    iVar3 = *(int *)(param_1[3] + 0xc);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0xf36,"xTaskRemoveFromEventList","pxUnblockedTCB");
    }
    piVar7 = *(int **)(iVar3 + 0x28);
    iVar4 = iVar3 + 0x18;
    *(undefined4 *)(*(int *)(iVar3 + 0x1c) + 8) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(*(int *)(iVar3 + 0x20) + 4) = *(undefined4 *)(iVar3 + 0x1c);
    if (piVar7[1] == iVar4) {
      piVar7[1] = *(int *)(iVar3 + 0x20);
    }
    *(undefined4 *)(iVar3 + 0x28) = 0;
    iVar6 = *(int *)(iVar3 + 0x44);
    *piVar7 = *piVar7 + -1;
    if (iVar6 == 0x7fffffff) {
      if ((DAT_ram_4ff6d9f8 != 0) && (iVar6 = mhartid, DAT_ram_4ff6d9fc != 0))
      goto LAB_ram_4ff3d306;
LAB_ram_4ff3d25a:
      piVar7 = *(int **)(iVar3 + 0x14);
      iVar4 = iVar3 + 4;
      *(undefined4 *)(*(int *)(iVar3 + 8) + 8) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(*(int *)(iVar3 + 0xc) + 4) = *(undefined4 *)(iVar3 + 8);
      if (piVar7[1] == iVar4) {
        piVar7[1] = *(int *)(iVar3 + 0xc);
      }
      *(undefined4 *)(iVar3 + 0x14) = 0;
      uVar5 = *(uint *)(iVar3 + 0x2c);
      *piVar7 = *piVar7 + -1;
      if (DAT_ram_4ff6da24 < uVar5) {
        DAT_ram_4ff6da24 = uVar5;
      }
      piVar7 = (int *)(&DAT_ram_4ff58c24 + uVar5 * 0x14);
      iVar6 = *(int *)(&DAT_ram_4ff58c28 + uVar5 * 0x14);
      *(int *)(iVar3 + 8) = iVar6;
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 8);
      *(int *)(*(int *)(iVar6 + 8) + 4) = iVar4;
      *(int *)(iVar6 + 8) = iVar4;
      *(int **)(iVar3 + 0x14) = piVar7;
      *piVar7 = *piVar7 + 1;
      FUN_ram_4ff2ad84(iVar3,iVar3 + 0x34,uVar5,DAT_ram_4ff6da28);
      iVar3 = FUN_ram_4ff3bb04(iVar3,*(undefined4 *)(iVar3 + 0x2c),0);
    }
    else {
      if ((&DAT_ram_4ff6d9f8)[iVar6] == 0) goto LAB_ram_4ff3d25a;
LAB_ram_4ff3d306:
      if ((&DAT_ram_4ff6d9f8)[iVar6] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("tasks.c",0xf59,"xTaskRemoveFromEventList",
                         "uxSchedulerSuspended[ uxPendCore ] != ( UBaseType_t ) 0U");
      }
      piVar7 = (int *)(&DAT_ram_4ff58bd4 + iVar6 * 0x14);
      iVar6 = *(int *)(&DAT_ram_4ff58bd8 + iVar6 * 0x14);
      *(int *)(iVar3 + 0x1c) = iVar6;
      *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar6 + 8);
      *(int *)(*(int *)(iVar6 + 8) + 4) = iVar4;
      *(int *)(iVar6 + 8) = iVar4;
      *(int **)(iVar3 + 0x28) = piVar7;
      uVar2 = *(undefined4 *)(iVar3 + 0x2c);
      *piVar7 = *piVar7 + 1;
      iVar3 = FUN_ram_4ff3bb04(iVar3,uVar2,0);
    }
    if (iVar3 == 1) {
      (&DAT_ram_4ff6da14)[iVar1] = 1;
      uVar2 = 1;
      goto LAB_ram_4ff3d348;
    }
  }
  uVar2 = 0;
LAB_ram_4ff3d348:
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar2;
}


