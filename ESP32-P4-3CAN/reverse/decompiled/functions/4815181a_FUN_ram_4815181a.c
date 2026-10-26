/* Firmware entry: 0x4815181a */

undefined4 FUN_ram_4815181a(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    FUN_ram_4813ac74();
  }
  iVar1 = FUN_ram_4813ad9a(0x4a,param_2,0x280);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    if (param_2 <= *(ushort *)(iVar1 + 10)) {
      uVar2 = *(undefined4 *)(iVar1 + 4);
      param_1[1] = iVar1;
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/netbuf.c",0x72,"netbuf_alloc",
                     "check that first pbuf can hold size");
  }
  return 0;
}


