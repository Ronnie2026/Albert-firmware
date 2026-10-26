/* Firmware entry: 0x4ff35d68 */

void FUN_ram_4ff35d68(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 < *(uint *)(param_1 + 0x30)) || (*(uint *)(param_1 + 0x34) <= uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x1df,"prvCopyItemByteBuf",
                     "pxRingbuffer->pucAcquire >= pxRingbuffer->pucHead && pxRingbuffer->pucAcquire < pxRingbuffer->pucTail"
                    );
  }
  uVar3 = *(uint *)(param_1 + 0x34) - uVar1;
  if (uVar3 < param_3) {
    FUN_ram_4ff45158(uVar1,param_2,uVar3);
    uVar1 = *(uint *)(param_1 + 0x30);
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
    *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar3;
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  FUN_ram_4ff45158(uVar1,param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x20) + param_3;
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 == *(int *)(param_1 + 0x34)) {
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x20) = iVar2;
  }
  if (iVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x24) = iVar2;
    return;
  }
  *(int *)(param_1 + 0x24) = iVar2;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return;
}


