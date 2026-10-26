/* Firmware entry: 0x4813b116 */

void FUN_ram_4813b116(int *param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    while (piVar2 = piVar3, piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      *(short *)(param_1 + 2) = (short)param_1[2] + *(short *)(param_2 + 8);
      param_1 = piVar2;
    }
    if (*(short *)((int)param_1 + 10) != (short)param_1[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x364,"pbuf_cat",
                       "p->tot_len == p->len (of last pbuf in chain)");
    }
    sVar1 = *(short *)(param_2 + 8);
    *param_1 = param_2;
    *(short *)(param_1 + 2) = *(short *)((int)param_1 + 10) + sVar1;
  }
  return;
}


