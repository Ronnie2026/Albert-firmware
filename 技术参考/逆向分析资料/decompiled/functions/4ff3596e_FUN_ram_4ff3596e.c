/* Firmware entry: 0x4ff3596e */

int * FUN_ram_4ff3596e(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar4 = *(int **)(param_1 + 0x20);
  if (((uint)piVar4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x149,"prvAcquireItemNoSplit",
                     "( ( ( UBaseType_t ) ( pxRingbuffer->pucAcquire ) & (0x03) ) == 0 )");
  }
  piVar5 = *(int **)(param_1 + 0x30);
  if ((piVar4 < piVar5) || (piVar1 = *(int **)(param_1 + 0x34), piVar1 <= piVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x14a,"prvAcquireItemNoSplit",
                     "pxRingbuffer->pucAcquire >= pxRingbuffer->pucHead && pxRingbuffer->pucAcquire < pxRingbuffer->pucTail"
                    );
  }
  if ((int)piVar1 - (int)piVar4 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x14b,"prvAcquireItemNoSplit","xRemLen >= sizeof(ItemHeader_t)");
  }
  uVar2 = (param_2 + 3U & 0xfffffffc) + 8;
  if ((uint)((int)piVar1 - (int)piVar4) < uVar2) {
    *piVar4 = 0;
    piVar4[1] = 2;
    piVar4 = piVar5;
  }
  piVar3 = (int *)(uVar2 + (int)piVar4);
  *piVar4 = param_2;
  piVar4[1] = 0;
  if ((uint)((int)piVar1 - (int)piVar3) < 8) {
    piVar3 = piVar5;
  }
  *(int **)(param_1 + 0x20) = piVar3;
  if (piVar3 != *(int **)(param_1 + 0x2c)) {
    return piVar4 + 2;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  return piVar4 + 2;
}


