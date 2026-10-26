/* Firmware entry: 0x4ff3cc34 */

void FUN_ram_4ff3cc34(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar2 = mhartid;
  iVar7 = mhartid * 4;
  if ((&DAT_ram_4ff6d9f8)[mhartid] != 0) {
    (&DAT_ram_4ff6da14)[mhartid] = 1;
LAB_ram_4ff3cc6c:
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
    return;
  }
  (&DAT_ram_4ff6da14)[mhartid] = 0;
  FUN_ram_4ff2a704((&DAT_ram_4ff6da3c)[mhartid],(&DAT_ram_4ff6da3c)[mhartid] + 0x34,
                   *(undefined4 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x2c),0,DAT_ram_4ff6da28);
  DAT_ram_4ff6d9ec = FUN_ram_4ff21a0a();
  if (*(uint *)(&DAT_ram_4ff6d9f0 + iVar7) < DAT_ram_4ff6d9ec) {
    *(uint *)((&DAT_ram_4ff6da3c)[iVar2] + 100) =
         (*(int *)((&DAT_ram_4ff6da3c)[iVar2] + 100) - *(uint *)(&DAT_ram_4ff6d9f0 + iVar7)) +
         DAT_ram_4ff6d9ec;
  }
  piVar3 = *(int **)((&DAT_ram_4ff6da3c)[iVar2] + 0x30);
  *(uint *)(&DAT_ram_4ff6d9f0 + iVar7) = DAT_ram_4ff6d9ec;
  if ((((*piVar3 != -0x5a5a5a5b) || (piVar3[1] != -0x5a5a5a5b)) || (piVar3[2] != -0x5a5a5a5b)) ||
     (piVar3[3] != -0x5a5a5a5b)) {
    FUN_ram_4ff3f05e((&DAT_ram_4ff6da3c)[iVar2],(&DAT_ram_4ff6da3c)[iVar2] + 0x34);
  }
  if (DAT_ram_4ff6da24 < 0) {
LAB_ram_4ff3cdf8:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0xe3a,"prvSelectHighestPriorityTaskSMP",
                     "xTaskScheduled == ( ( BaseType_t ) 1 )");
  }
  iVar5 = *(int *)(&DAT_ram_4ff58c24 + DAT_ram_4ff6da24 * 0x14);
  iVar2 = DAT_ram_4ff6da24 * 0x14 + 0x4ff58c2c;
  bVar1 = false;
  iVar7 = DAT_ram_4ff6da24;
  do {
    if (iVar5 != 0) {
      if (!bVar1) {
        DAT_ram_4ff6da24 = iVar7;
      }
      iVar5 = iVar7 * 0x14;
      *(int *)(&DAT_ram_4ff58c28 + iVar5) = iVar2;
      *(undefined4 *)(&DAT_ram_4ff58c28 + iVar5) =
           *(undefined4 *)(*(int *)(&DAT_ram_4ff58c28 + iVar5) + 4);
      if (iVar2 == *(int *)(&DAT_ram_4ff58c28 + iVar5)) {
        *(undefined4 *)(&DAT_ram_4ff58c28 + iVar5) =
             *(undefined4 *)(*(int *)(&DAT_ram_4ff58c28 + iVar5) + 4);
      }
      iVar4 = iVar7 * 0x14;
      iVar6 = *(int *)(*(int *)(&DAT_ram_4ff58c28 + iVar4) + 0xc);
      iVar5 = iVar6;
      do {
        if (mhartid == 0) {
LAB_ram_4ff3cdca:
          if (iVar5 != DAT_ram_4ff6da40) {
LAB_ram_4ff3cdd0:
            if ((mhartid == *(int *)(iVar5 + 0x44)) || (*(int *)(iVar5 + 0x44) == 0x7fffffff)) {
              (&DAT_ram_4ff6da3c)[mhartid] = iVar5;
              *(int *)(&DAT_ram_4ff58c28 + iVar7 * 0x14) = iVar2;
              piVar3 = *(int **)(iVar5 + 0x14);
              iVar4 = iVar5 + 4;
              *(undefined4 *)(*(int *)(iVar5 + 8) + 8) = *(undefined4 *)(iVar5 + 0xc);
              *(undefined4 *)(*(int *)(iVar5 + 0xc) + 4) = *(undefined4 *)(iVar5 + 8);
              if (piVar3[1] == iVar4) {
                piVar3[1] = *(int *)(iVar5 + 0xc);
              }
              *(undefined4 *)(iVar5 + 0x14) = 0;
              *piVar3 = *piVar3 + -1;
              iVar6 = *(int *)(&DAT_ram_4ff58c28 + iVar7 * 0x14);
              *(int *)(iVar5 + 8) = iVar6;
              *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar6 + 8);
              *(int *)(*(int *)(iVar6 + 8) + 4) = iVar4;
              *(int *)(iVar6 + 8) = iVar4;
              *(int *)(iVar5 + 0x14) = iVar2 + -8;
              *(int *)(&DAT_ram_4ff58c24 + iVar7 * 0x14) =
                   *(int *)(&DAT_ram_4ff58c24 + iVar7 * 0x14) + 1;
              FUN_ram_4ff2a704((&DAT_ram_4ff6da3c)[mhartid],(&DAT_ram_4ff6da3c)[mhartid] + 0x34,
                               *(undefined4 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x2c),1,
                               DAT_ram_4ff6da28);
              goto LAB_ram_4ff3cc6c;
            }
          }
        }
        else if (iVar5 != DAT_ram_4ff6da3c) {
          if (mhartid != 1) goto LAB_ram_4ff3cdca;
          goto LAB_ram_4ff3cdd0;
        }
        *(undefined4 *)(&DAT_ram_4ff58c28 + iVar4) =
             *(undefined4 *)(*(int *)(&DAT_ram_4ff58c28 + iVar4) + 4);
        if (*(int *)(&DAT_ram_4ff58c28 + iVar4) == iVar2) {
          *(undefined4 *)(&DAT_ram_4ff58c28 + iVar4) =
               *(undefined4 *)(*(int *)(&DAT_ram_4ff58c28 + iVar4) + 4);
        }
        iVar5 = *(int *)(*(int *)(&DAT_ram_4ff58c28 + iVar4) + 0xc);
      } while (iVar6 != iVar5);
      bVar1 = true;
    }
    if (iVar7 == 0) goto LAB_ram_4ff3cdf8;
    iVar7 = iVar7 + -1;
    iVar2 = iVar2 + -0x14;
    iVar5 = *(int *)(&DAT_ram_4ff58c24 + iVar7 * 0x14);
  } while( true );
}


