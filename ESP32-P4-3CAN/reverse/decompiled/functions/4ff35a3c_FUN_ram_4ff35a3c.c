/* Firmware entry: 0x4ff35a3c */

void FUN_ram_4ff35a3c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((uint)param_2 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x16e,"prvSendItemDoneNoSplit",
                     "( ( ( UBaseType_t ) ( pucItem ) & (0x03) ) == 0 )");
  }
  piVar1 = (int *)param_1[0xc];
  if (param_2 < piVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x16f,"prvSendItemDoneNoSplit","pucItem >= pxRingbuffer->pucHead");
  }
  piVar5 = (int *)param_1[0xd];
  if (piVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x170,"prvSendItemDoneNoSplit","pucItem <= pxRingbuffer->pucTail");
  }
  if ((uint)param_2[-2] <= (uint)param_1[1]) {
    uVar3 = param_2[-1];
    if ((uVar3 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("ringbuf.c",0x175,"prvSendItemDoneNoSplit",
                       "(pxCurHeader->uxItemFlags & ( ( UBaseType_t ) 2 )) == 0");
    }
    if ((uVar3 & 8) == 0) {
      iVar2 = param_1[0xe];
      param_2[-1] = uVar3 & 0xfffffffb | 8;
      param_1[0xe] = iVar2 + 1;
      piVar4 = (int *)param_1[9];
      do {
        uVar3 = piVar4[1];
        if ((uVar3 & 10) == 0) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        if ((uVar3 & 2) == 0) {
          piVar4 = (int *)(param_1[9] + (*piVar4 + 3U & 0xfffffffc) + 8);
          param_1[9] = (int)piVar4;
          if ((int *)((int)piVar1 + *param_1) < piVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("ringbuf.c",0x18e,"prvSendItemDoneNoSplit",
                             "pxRingbuffer->pucWrite <= pxRingbuffer->pucHead + pxRingbuffer->xSize"
                            );
          }
        }
        else {
          piVar4[1] = uVar3 | 8;
          param_1[9] = (int)piVar1;
          piVar4 = piVar1;
        }
        if ((uint)((int)piVar5 - (int)piVar4) < 8) {
          param_1[9] = (int)piVar1;
          piVar4 = piVar1;
        }
      } while (piVar4 != (int *)param_1[8]);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x176,"prvSendItemDoneNoSplit",
                     "(pxCurHeader->uxItemFlags & ( ( UBaseType_t ) 8 )) == 0");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x174,"prvSendItemDoneNoSplit",
                   "pxCurHeader->xItemLen <= pxRingbuffer->xMaxItemSize");
}


