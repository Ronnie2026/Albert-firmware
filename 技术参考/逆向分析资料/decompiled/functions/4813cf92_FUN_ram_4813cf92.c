/* Firmware entry: 0x4813cf92 */

void FUN_ram_4813cf92(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x246,"tcp_abandon",
                     "don\'t call tcp_abort/tcp_abandon for listen-pcbs");
  }
  if (iVar2 == 10) {
    FUN_ram_4813cdde(&DAT_ram_4ff6e1c0,param_1);
    if (*(int *)(param_1 + 0x3c) != 1) {
      FUN_ram_48139604(2,param_1);
      return;
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x9c);
    uVar7 = *(undefined4 *)(param_1 + 0x50);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xdc);
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    sVar4 = *(short *)(param_1 + 0x42);
    if (iVar2 == 0) {
      if (sVar4 != 0) {
        iVar2 = DAT_ram_4ff6e1cc;
        if (DAT_ram_4ff6e1cc == param_1) {
          DAT_ram_4ff6e1cc = *(int *)(param_1 + 0x34);
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        else {
          do {
            iVar3 = iVar2;
            if (iVar3 == 0) goto LAB_ram_4813d0b8;
            iVar2 = *(int *)(iVar3 + 0x34);
          } while (*(int *)(iVar3 + 0x34) != param_1);
          *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
LAB_ram_4813d0b8:
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
      }
      sVar4 = 0;
      param_2 = 0;
    }
    else {
      FUN_ram_4813cdde(&DAT_ram_4ff6e1c4,param_1);
      DAT_ram_4ff6e1be = 1;
    }
    piVar1 = (int *)*(int *)(param_1 + 0xbc);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (piVar1[1] != 0) {
        FUN_ram_4813ac74();
      }
      FUN_ram_48139604(4,piVar1);
      piVar1 = (int *)iVar2;
    }
    piVar1 = (int *)*(int *)(param_1 + 0xb8);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (piVar1[1] != 0) {
        FUN_ram_4813ac74();
      }
      FUN_ram_48139604(4,piVar1);
      piVar1 = (int *)iVar2;
    }
    piVar1 = (int *)*(int *)(param_1 + 0xc0);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      if (piVar1[1] != 0) {
        FUN_ram_4813ac74();
      }
      FUN_ram_48139604(4,piVar1);
      piVar1 = (int *)iVar2;
    }
    FUN_ram_4813c052(param_1);
    if (param_2 != 0) {
      FUN_ram_481418a4(param_1,uVar6,uVar7,param_1,param_1 + 0x18,sVar4,
                       *(undefined2 *)(param_1 + 0x44));
    }
    if (*(int *)(param_1 + 0x3c) != 1) {
      FUN_ram_48139604(2,param_1);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4813d06a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar5,0xfffffff3);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4813bf7c();
}


