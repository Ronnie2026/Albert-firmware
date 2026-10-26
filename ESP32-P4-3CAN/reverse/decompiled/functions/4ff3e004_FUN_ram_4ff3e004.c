/* Firmware entry: 0x4ff3e004 */

undefined4 FUN_ram_4ff3e004(int param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1711,"xTaskGenericNotify","uxIndexToNotify < 1");
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1712,"xTaskGenericNotify","xTaskToNotify");
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0x158);
  }
  cVar1 = *(char *)(param_1 + 0x15c);
  *(undefined1 *)(param_1 + 0x15c) = 2;
  if (param_4 == 2) {
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  }
  else if (param_4 < 3) {
    if (param_4 != 0) {
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | param_3;
    }
  }
  else {
    if (param_4 != 3) {
      if (param_4 != 4) {
        if (DAT_ram_4ff6da28 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("tasks.c",0x1747,"xTaskGenericNotify","xTickCount == ( TickType_t ) 0");
        }
        goto joined_r0x4ff3e168;
      }
      if (cVar1 == '\x02') {
        uVar2 = 0;
        goto LAB_ram_4ff3e06a;
      }
    }
    *(uint *)(param_1 + 0x158) = param_3;
  }
joined_r0x4ff3e168:
  if (cVar1 == '\x01') {
    piVar6 = *(int **)(param_1 + 0x14);
    iVar4 = param_1 + 4;
    *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 8);
    if (piVar6[1] == iVar4) {
      piVar6[1] = *(int *)(param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar3 = *(uint *)(param_1 + 0x2c);
    *piVar6 = *piVar6 + -1;
    if (DAT_ram_4ff6da24 < uVar3) {
      DAT_ram_4ff6da24 = uVar3;
    }
    piVar6 = (int *)(&DAT_ram_4ff58c24 + uVar3 * 0x14);
    iVar5 = *(int *)(&DAT_ram_4ff58c28 + uVar3 * 0x14);
    *(int *)(param_1 + 8) = iVar5;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar5 + 8);
    *(int *)(*(int *)(iVar5 + 8) + 4) = iVar4;
    *(int *)(iVar5 + 8) = iVar4;
    *(int **)(param_1 + 0x14) = piVar6;
    *piVar6 = *piVar6 + 1;
    FUN_ram_4ff2ad84(param_1,param_1 + 0x34,uVar3,DAT_ram_4ff6da28);
    if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0x1756,"xTaskGenericNotify",
                       "( ( &( pxTCB->xEventListItem ) )->pxContainer ) == ((void *)0)");
    }
    iVar4 = FUN_ram_4ff3bb04(param_1,*(undefined4 *)(param_1 + 0x2c),0);
    if (iVar4 == 1) {
      FUN_ram_4ff3ef0e();
    }
  }
  uVar2 = 1;
LAB_ram_4ff3e06a:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar2;
}


