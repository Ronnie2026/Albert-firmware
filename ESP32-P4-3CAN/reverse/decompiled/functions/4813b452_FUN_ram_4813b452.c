/* Firmware entry: 0x4813b452 */

undefined4 FUN_ram_4813b452(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xfffffff0;
  }
  if (param_2 == 0) {
    uVar2 = 0xfffffff0;
  }
  else if (*(ushort *)(param_1 + 2) < param_3) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    uVar3 = param_3;
    if (param_3 != 0) {
      while( true ) {
        uVar1 = (uint)*(ushort *)((int)param_1 + 10);
        if (uVar3 < *(ushort *)((int)param_1 + 10)) {
          uVar1 = uVar3;
        }
        FUN_ram_4ff45158(param_1[1],param_2 + uVar4,uVar1);
        uVar4 = uVar4 + uVar1;
        param_1 = (int *)*param_1;
        if (uVar3 - uVar1 == 0) break;
        uVar3 = uVar3 - uVar1;
        if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x4dc,"pbuf_take",
                           "pbuf_take: invalid pbuf");
        }
      }
      if (param_3 != uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x4e7,"pbuf_take",
                         "did not copy all data");
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


