/* Firmware entry: 0x4ff3add0 */

int * FUN_ram_4ff3add0(uint param_1,uint param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0)) {
    if (param_1 * param_2 < 0xffffffa4) {
      piVar1 = (int *)FUN_ram_4ff3f268(param_1 * param_2 + 0x5c);
      if (piVar1 != (int *)0x0) {
        *(undefined1 *)(piVar1 + 0x11) = 0;
        piVar2 = piVar1;
        if (param_2 != 0) {
          piVar2 = piVar1 + 0x17;
        }
        *piVar1 = (int)piVar2;
        piVar1[0xf] = param_1;
        piVar1[0x10] = param_2;
        FUN_ram_4ff3abd4(piVar1,1);
        *(undefined1 *)(piVar1 + 0x14) = param_3;
        piVar1[0x12] = 0;
      }
      return piVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x23d,"xQueueGenericCreate","pxNewQueue");
}


