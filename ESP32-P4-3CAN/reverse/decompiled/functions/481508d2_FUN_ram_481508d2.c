/* Firmware entry: 0x481508d2 */

uint * FUN_ram_481508d2(uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)FUN_ram_4813956e(7);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    puVar1[6] = 0;
    param_1 = param_1 & 0xf0;
    uVar3 = 0x40;
    if (param_1 == 0x40) {
      uVar3 = 6;
    }
    else if ((0x40 < param_1) || ((param_1 - 0x10 & 0xffffffef) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x301,"netconn_alloc",
                       "netconn_alloc: undefined netconn_type");
    }
    iVar2 = FUN_ram_4814e4a8(puVar1 + 4,uVar3);
    if (iVar2 == 0) {
      puVar1[5] = 0;
      puVar1[1] = 0;
      puVar1[0xe] = param_2;
      puVar1[0xd] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      *(undefined1 *)(puVar1 + 0xc) = 0;
      puVar1[10] = 0x7fffffff;
      puVar1[7] = 0xffffffff;
      return puVar1;
    }
    FUN_ram_48139604(7,puVar1);
  }
  return (uint *)0x0;
}


