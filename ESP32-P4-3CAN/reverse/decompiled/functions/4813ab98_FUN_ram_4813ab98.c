/* Firmware entry: 0x4813ab98 */

undefined4 FUN_ram_4813ab98(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x24e,"pbuf_remove_header",
                     "p != NULL");
  }
  if (0xffff < param_2) {
    return 1;
  }
  if (param_2 != 0) {
    if ((uint)*(ushort *)(param_1 + 10) < (param_2 & 0xffff)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) - (short)param_2;
    *(uint *)(param_1 + 4) = param_2 + *(int *)(param_1 + 4);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - (short)param_2;
  }
  return 0;
}


