/* Firmware entry: 0x4813ab24 */

undefined4 FUN_ram_4813ab24(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x1e2,"pbuf_add_header_impl",
                     "p != NULL");
  }
  uVar1 = 1;
  if (0xffff < param_2) {
    return uVar1;
  }
  if (param_2 != 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 8) + (param_2 & 0xffff);
    if ((uVar3 & 0xffff) < (param_2 & 0xffff)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar1;
    }
    uVar2 = *(int *)(param_1 + 4) - param_2;
    if ((*(char *)(param_1 + 0xc) < '\0') && (uVar2 < param_1 + 0x10U)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar1;
    }
    *(uint *)(param_1 + 4) = uVar2;
    *(short *)(param_1 + 8) = (short)(uVar3 * 0x10000 >> 0x10);
    *(short *)(param_1 + 10) = (short)param_2 + *(short *)(param_1 + 10);
  }
  return 0;
}


