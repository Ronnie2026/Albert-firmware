/* Firmware entry: 0x4813ad9a */

undefined4 * FUN_ram_4813ad9a(uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0x182) {
    if (param_3 < 0x183) {
      if ((param_3 & 0xffffffbf) == 1) {
        puVar2 = (undefined4 *)FUN_ram_4813aa02(0);
        return puVar2;
      }
    }
    else if (param_3 == 0x280) {
      puVar2 = (undefined4 *)
               FUN_ram_48139392(((param_1 & 0xffff) + 3 & 0xfffffffc) +
                                (param_2 + 3 & 0xfffffffc) + 0x10);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = (int)puVar2 + (param_1 & 0xffff) + 0x13 & 0xfffffffc;
        *puVar2 = 0;
        puVar2[2] = param_2 | param_2 << 0x10;
        puVar2[3] = 0x10080;
      }
      return puVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x127,"pbuf_alloc",
                     "pbuf_alloc: erroneous type");
  }
  param_1 = param_1 & 0xffff;
  puVar2 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)0x0;
  while( true ) {
    puVar3 = (undefined4 *)FUN_ram_4813956e(0x11);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_ram_4814e762();
      cVar1 = DAT_ram_4ff6e1b4;
      DAT_ram_4ff6e1b4 = '\x01';
      FUN_ram_4814e79e();
      if ((cVar1 == '\0') && (iVar4 = FUN_ram_48137856(&LAB_ram_4813a97a,0), iVar4 != 0)) {
        FUN_ram_4814e762();
        DAT_ram_4ff6e1b4 = '\0';
        FUN_ram_4814e79e();
      }
      if (puVar2 != (undefined4 *)0x0) {
        FUN_ram_4813ac74(puVar2);
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (undefined4 *)0x0;
    }
    uVar6 = 0x5ec - (param_1 + 3 & 0xfffffffc);
    if (param_2 < (uVar6 & 0xffff)) {
      uVar6 = param_2;
    }
    *(short *)((int)puVar3 + 10) = (short)uVar6;
    puVar3[1] = (int)puVar3 + param_1 + 0x13 & 0xfffffffc;
    *puVar3 = 0;
    *(short *)(puVar3 + 2) = (short)param_2;
    puVar3[3] = 0x10082;
    if ((param_1 + 3 & 0xfffffffc) == 0x5ec) break;
    if (puVar2 == (undefined4 *)0x0) {
      param_2 = param_2 - (uVar6 & 0xffff) & 0xffff;
      param_1 = 0;
      puVar2 = puVar3;
      puVar5 = puVar3;
      if (param_2 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return puVar3;
      }
    }
    else {
      *puVar5 = puVar3;
      param_2 = param_2 - (uVar6 & 0xffff) & 0xffff;
      param_1 = 0;
      puVar5 = puVar3;
      if (param_2 == 0) {
        return puVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x102,"pbuf_alloc",
                   "PBUF_POOL_BUFSIZE must be bigger than MEM_ALIGNMENT");
}


