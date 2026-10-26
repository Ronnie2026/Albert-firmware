/* Firmware entry: 0x4ff3e1d8 */

void FUN_ram_4ff3e1d8(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1818,"vTaskGenericNotifyGiveFromISR","xTaskToNotify");
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1819,"vTaskGenericNotifyGiveFromISR","uxIndexToNotify < 1");
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  iVar2 = mhartid;
  cVar1 = *(char *)(param_1 + 0x15c);
  *(undefined1 *)(param_1 + 0x15c) = 2;
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  if (cVar1 != '\x01') goto LAB_ram_4ff3e276;
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1842,"vTaskGenericNotifyGiveFromISR",
                     "( ( &( pxTCB->xEventListItem ) )->pxContainer ) == ((void *)0)");
  }
  if (*(int *)(param_1 + 0x44) == 0x7fffffff) {
    if ((DAT_ram_4ff6d9f8 != 0) && (DAT_ram_4ff6d9fc != 0)) goto LAB_ram_4ff3e23a;
LAB_ram_4ff3e29a:
    piVar7 = *(int **)(param_1 + 0x14);
    iVar5 = param_1 + 4;
    *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 8);
    if (piVar7[1] == iVar5) {
      piVar7[1] = *(int *)(param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar4 = *(uint *)(param_1 + 0x2c);
    *piVar7 = *piVar7 + -1;
    if (DAT_ram_4ff6da24 < uVar4) {
      DAT_ram_4ff6da24 = uVar4;
    }
    piVar7 = (int *)(&DAT_ram_4ff58c24 + uVar4 * 0x14);
    iVar6 = *(int *)(&DAT_ram_4ff58c28 + uVar4 * 0x14);
    *(int *)(param_1 + 8) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar6 + 8);
    *(int *)(*(int *)(iVar6 + 8) + 4) = iVar5;
    *(int *)(iVar6 + 8) = iVar5;
    *(int **)(param_1 + 0x14) = piVar7;
    *piVar7 = *piVar7 + 1;
    FUN_ram_4ff2ad84(param_1,param_1 + 0x34,uVar4,DAT_ram_4ff6da28);
    iVar5 = FUN_ram_4ff3bb04(param_1,*(undefined4 *)(param_1 + 0x2c),0);
  }
  else {
    if ((&DAT_ram_4ff6d9f8)[*(int *)(param_1 + 0x44)] == 0) goto LAB_ram_4ff3e29a;
LAB_ram_4ff3e23a:
    piVar7 = (int *)(&DAT_ram_4ff58bd4 + mhartid * 0x14);
    iVar5 = *(int *)(&DAT_ram_4ff58bd8 + mhartid * 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x1c) = iVar5;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar5 + 8);
    *(int *)(*(int *)(iVar5 + 8) + 4) = param_1 + 0x18;
    *(int *)(iVar5 + 8) = param_1 + 0x18;
    *(int **)(param_1 + 0x28) = piVar7;
    *piVar7 = *piVar7 + 1;
    iVar5 = FUN_ram_4ff3bb04(param_1,uVar3,0);
  }
  if (iVar5 == 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    (&DAT_ram_4ff6da14)[iVar2] = 1;
  }
LAB_ram_4ff3e276:
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}


