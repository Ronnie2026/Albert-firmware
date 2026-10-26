/* Firmware entry: 0x4813aa02 */

void FUN_ram_4813aa02(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 & 0xffffffbf) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x14a,"pbuf_alloc_reference",
                     "invalid pbuf_type");
  }
  puVar1 = (undefined4 *)FUN_ram_4813956e(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_1;
    puVar1[2] = param_2 << 0x10 | param_2;
    *(char *)(puVar1 + 3) = (char)param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 1;
  }
  return;
}


