/* Firmware entry: 0x4813c3d8 */

int * FUN_ram_4813c3d8(int *param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    piVar5 = (int *)0x0;
    uVar9 = 0xf0;
  }
  else if (param_1[0xf] == 0) {
    if (((*(byte *)((int)param_1 + 0x31) & 4) != 0) && (DAT_ram_4ff6e1c8 != (int *)0x0)) {
      piVar5 = DAT_ram_4ff6e1c8;
      do {
        if ((*(short *)((int)piVar5 + 0x42) == *(short *)((int)param_1 + 0x42)) &&
           ((char)param_1[5] == (char)piVar5[5])) {
          if ((char)param_1[5] == '\x06') {
            if ((((*piVar5 == *param_1) && (piVar5[1] == param_1[1])) && (piVar5[2] == param_1[2]))
               && ((piVar5[3] == param_1[3] && ((char)piVar5[4] == (char)param_1[4]))))
            goto LAB_ram_4813c432;
          }
          else if (*piVar5 == *param_1) {
LAB_ram_4813c432:
            uVar9 = 0xf8;
            piVar5 = (int *)0x0;
            goto LAB_ram_4813c43a;
          }
        }
        piVar5 = (int *)piVar5[0xd];
      } while (piVar5 != (int *)0x0);
    }
    piVar5 = (int *)FUN_ram_4813956e(3);
    if (piVar5 == (int *)0x0) {
      uVar9 = 0xff;
    }
    else {
      sVar2 = *(short *)((int)param_1 + 0x42);
      piVar5[0xe] = param_1[0xe];
      *(short *)((int)piVar5 + 0x42) = sVar2;
      piVar5[0xf] = 1;
      *(char *)(piVar5 + 0x10) = (char)param_1[0x10];
      piVar5[0xc] = param_1[0xc];
      cVar1 = (char)param_1[5];
      *(char *)(piVar5 + 0xb) = cVar1;
      *(char *)(piVar5 + 5) = cVar1;
      iVar7 = *param_1;
      if (cVar1 == '\x06') {
        iVar6 = param_1[1];
        iVar8 = param_1[2];
        piVar5[3] = param_1[3];
        *piVar5 = iVar7;
        uVar9 = (undefined1)param_1[4];
        piVar5[1] = iVar6;
        piVar5[2] = iVar8;
      }
      else {
        *piVar5 = iVar7;
        piVar5[3] = 0;
        piVar5[2] = 0;
        piVar5[1] = 0;
        uVar9 = 0;
      }
      *(undefined1 *)(piVar5 + 4) = uVar9;
      if (sVar2 != 0) {
        piVar4 = DAT_ram_4ff6e1cc;
        if (DAT_ram_4ff6e1cc == param_1) {
          DAT_ram_4ff6e1cc = (int *)param_1[0xd];
          param_1[0xd] = 0;
        }
        else {
          do {
            piVar3 = piVar4;
            if (piVar3 == (int *)0x0) {
              param_1[0xd] = 0;
              goto LAB_ram_4813c4be;
            }
            piVar4 = (int *)piVar3[0xd];
          } while ((int *)piVar3[0xd] != param_1);
          piVar3[0xd] = param_1[0xd];
          param_1[0xd] = 0;
        }
      }
LAB_ram_4813c4be:
      if (param_1[0xf] == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4813bf7c();
      }
      FUN_ram_48139604(2,param_1);
      *(undefined1 *)((int)piVar5 + 0x49) = 0;
      piVar5[0x11] = (int)FUN_ram_4813d14e;
      if (piVar5[0xf] != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x39a,
                         "tcp_listen_with_backlog_and_err",
                         "pcb->state == LISTEN (called for wrong pcb?)");
      }
      if (param_2 == 0) {
        param_2 = 1;
      }
      *(char *)(piVar5 + 0x12) = (char)param_2;
      piVar4 = piVar5;
      piVar5[0xd] = (int)DAT_ram_4ff6e1c8;
      DAT_ram_4ff6e1c8 = piVar4;
      FUN_ram_4814257c();
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0xf1;
    piVar5 = (int *)0x0;
  }
LAB_ram_4813c43a:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar9;
  }
  return piVar5;
}


