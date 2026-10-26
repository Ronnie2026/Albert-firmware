/* Firmware entry: 0x4813af5e */

void FUN_ram_4813af5e(int *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x198,"pbuf_realloc",
                     "pbuf_realloc: p != NULL");
  }
  uVar1 = *(ushort *)(param_1 + 2);
  if (param_2 < uVar1) {
    sVar2 = (short)param_2;
    while (uVar4 = (uint)*(ushort *)((int)param_1 + 10), uVar4 < param_2) {
      *(ushort *)(param_1 + 2) = (short)param_1[2] + (sVar2 - uVar1);
      param_1 = (int *)*param_1;
      param_2 = param_2 - uVar4 & 0xffff;
      if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x1af,"pbuf_realloc",
                         "pbuf_realloc: q != NULL");
      }
    }
    if ((((*(byte *)(param_1 + 3) & 0xf) == 0) && (uVar4 != param_2)) &&
       ((*(byte *)((int)param_1 + 0xd) & 2) == 0)) {
      piVar3 = (int *)FUN_ram_48139390(param_1,param_2 + (param_1[1] - (int)param_1));
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x1bd,"pbuf_realloc",
                         "mem_trim returned r == NULL");
      }
      if (param_1 != piVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x1bf,"pbuf_realloc",
                         "mem_trim returned r != q");
      }
    }
    param_1[2] = param_2 << 0x10 | param_2;
    if (*param_1 != 0) {
      FUN_ram_4813ac74();
    }
    *param_1 = 0;
  }
  return;
}


