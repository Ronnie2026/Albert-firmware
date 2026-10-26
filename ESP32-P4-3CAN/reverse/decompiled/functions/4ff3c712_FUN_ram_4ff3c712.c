/* Firmware entry: 0x4ff3c712 */

byte FUN_ram_4ff3c712(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0xc87,"xTaskIncrementTick","xPortGetCoreID() == 0");
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  piVar3 = DAT_ram_4ff6da38;
  piVar6 = DAT_ram_4ff6da34;
  if (DAT_ram_4ff6d9f8 != 0) {
    bVar7 = 0;
    DAT_ram_4ff6da1c = DAT_ram_4ff6da1c + 1;
    goto LAB_ram_4ff3c894;
  }
  uVar8 = DAT_ram_4ff6da28 + 1;
  DAT_ram_4ff6da28 = uVar8;
  if (uVar8 == 0) {
    if (*DAT_ram_4ff6da38 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0xca7,"xTaskIncrementTick",
                       "( ( ( ( pxDelayedTaskList )->uxNumberOfItems == ( UBaseType_t ) 0 ) ? ( ( BaseType_t ) 1 ) : ( ( BaseType_t ) 0 ) ) )"
                      );
    }
    DAT_ram_4ff6da38 = DAT_ram_4ff6da34;
    DAT_ram_4ff6da34 = piVar3;
    DAT_ram_4ff6da10 = DAT_ram_4ff6da10 + 1;
    if (*piVar6 != 0) {
      DAT_ram_4ff6da08 = *(uint *)piVar6[3];
      DAT_ram_4ff6da34 = piVar3;
      goto LAB_ram_4ff3c762;
    }
    DAT_ram_4ff6da08 = 0xffffffff;
LAB_ram_4ff3c90e:
    bVar7 = 0;
    uVar2 = DAT_ram_4ff6da08;
  }
  else {
LAB_ram_4ff3c762:
    if (uVar8 < DAT_ram_4ff6da08) goto LAB_ram_4ff3c90e;
    if (*DAT_ram_4ff6da38 == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = 0;
      do {
        while( true ) {
          iVar1 = *(int *)(DAT_ram_4ff6da38[3] + 0xc);
          uVar2 = *(uint *)(iVar1 + 4);
          if (uVar8 < *(uint *)(iVar1 + 4)) goto LAB_ram_4ff3c928;
          piVar6 = *(int **)(iVar1 + 0x14);
          iVar4 = iVar1 + 4;
          *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(*(int *)(iVar1 + 0xc) + 4) = *(undefined4 *)(iVar1 + 8);
          if (piVar6[1] == iVar4) {
            piVar6[1] = *(int *)(iVar1 + 0xc);
          }
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *piVar6 = *piVar6 + -1;
          if (*(int *)(iVar1 + 0x28) != 0) {
            piVar6 = *(int **)(iVar1 + 0x28);
            *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8) = *(undefined4 *)(iVar1 + 0x20);
            *(undefined4 *)(*(int *)(iVar1 + 0x20) + 4) = *(undefined4 *)(iVar1 + 0x1c);
            if (piVar6[1] == iVar1 + 0x18) {
              piVar6[1] = *(int *)(iVar1 + 0x20);
            }
            *(undefined4 *)(iVar1 + 0x28) = 0;
            *piVar6 = *piVar6 + -1;
          }
          uVar2 = *(uint *)(iVar1 + 0x2c);
          if (DAT_ram_4ff6da24 < uVar2) {
            DAT_ram_4ff6da24 = uVar2;
          }
          piVar6 = (int *)(&DAT_ram_4ff58c24 + uVar2 * 0x14);
          iVar5 = *(int *)(&DAT_ram_4ff58c28 + uVar2 * 0x14);
          *(int *)(iVar1 + 8) = iVar5;
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + 8);
          *(int *)(*(int *)(iVar5 + 8) + 4) = iVar4;
          *(int *)(iVar5 + 8) = iVar4;
          *(int **)(iVar1 + 0x14) = piVar6;
          *piVar6 = *piVar6 + 1;
          FUN_ram_4ff2ad84(iVar1,iVar1 + 0x34,uVar2,DAT_ram_4ff6da28);
          uVar2 = *(uint *)(iVar1 + 0x2c);
          if (*(int *)(iVar1 + 0x44) != 0) break;
          bVar7 = bVar7 | *(uint *)(DAT_ram_4ff6da3c + 0x2c) < uVar2;
          if (*DAT_ram_4ff6da38 == 0) goto LAB_ram_4ff3c87a;
        }
        if ((*(int *)(iVar1 + 0x44) == 0x7fffffff) && (*(uint *)(DAT_ram_4ff6da3c + 0x2c) < uVar2))
        {
          bVar7 = 1;
        }
        else if (*(uint *)(DAT_ram_4ff6da40 + 0x2c) < uVar2) {
          DAT_ram_4ff6da18 = 1;
        }
      } while (*DAT_ram_4ff6da38 != 0);
    }
LAB_ram_4ff3c87a:
    DAT_ram_4ff6da08 = 0xffffffff;
    uVar2 = DAT_ram_4ff6da08;
  }
LAB_ram_4ff3c928:
  DAT_ram_4ff6da08 = uVar2;
  bVar7 = (DAT_ram_4ff6da14 != 0 ||
          1 < *(uint *)(&DAT_ram_4ff58c24 + *(int *)(DAT_ram_4ff6da3c + 0x2c) * 0x14)) | bVar7;
LAB_ram_4ff3c894:
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return bVar7;
}


