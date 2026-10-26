/* Firmware entry: 0x4ff3562a */

void FUN_ram_4ff3562a(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((uint)param_2 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x265,"prvReturnItemDefault",
                     "( ( ( UBaseType_t ) ( pucItem ) & (0x03) ) == 0 )");
  }
  piVar3 = (int *)param_1[0xc];
  if (param_2 < piVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x266,"prvReturnItemDefault","pucItem >= pxRingbuffer->pucHead");
  }
  piVar6 = (int *)param_1[0xd];
  if (piVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x267,"prvReturnItemDefault","pucItem <= pxRingbuffer->pucTail");
  }
  if ((uint)param_2[-2] <= (uint)param_1[1]) {
    uVar4 = param_2[-1];
    if ((uVar4 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("ringbuf.c",0x26c,"prvReturnItemDefault",
                       "(pxCurHeader->uxItemFlags & ( ( UBaseType_t ) 2 )) == 0");
    }
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("ringbuf.c",0x26d,"prvReturnItemDefault",
                       "(pxCurHeader->uxItemFlags & ( ( UBaseType_t ) 1 )) == 0");
    }
    uVar1 = param_1[2];
    param_2[-1] = uVar4 & 0xfffffffb | 1;
    piVar5 = (int *)param_1[0xb];
    if ((uVar1 >> 2 & 1) == 0) {
      uVar4 = piVar5[1];
      if ((uVar4 & 3) == 0) {
        return;
      }
      piVar2 = (int *)param_1[10];
      if ((piVar2 == piVar5) && (param_1[0xe] != 0)) {
        return;
      }
    }
    else {
      uVar4 = piVar5[1];
      if ((uVar4 & 3) == 0) {
        return;
      }
      piVar2 = (int *)param_1[10];
    }
    do {
      if ((uVar4 & 2) == 0) {
        piVar5 = (int *)((int)piVar5 + (*piVar5 + 3U & 0xfffffffc) + 8);
        param_1[0xb] = (int)piVar5;
        if ((int *)((int)piVar3 + *param_1) < piVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("ringbuf.c",0x28f,"prvReturnItemDefault",
                           "pxRingbuffer->pucFree <= pxRingbuffer->pucHead + pxRingbuffer->xSize");
        }
      }
      else {
        piVar5[1] = uVar4 | 1;
        param_1[0xb] = (int)piVar3;
        piVar5 = piVar3;
      }
      if ((uint)((int)piVar6 - (int)piVar5) < 8) {
        param_1[0xb] = (int)piVar3;
        piVar5 = piVar3;
      }
      uVar4 = piVar5[1];
    } while (((uVar4 & 3) != 0) && (piVar2 != piVar5));
    if ((uVar1 & 4) != 0) {
      param_1[2] = uVar1 & 0xfffffffb;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x26b,"prvReturnItemDefault",
                   "pxCurHeader->xItemLen <= pxRingbuffer->xMaxItemSize");
}


