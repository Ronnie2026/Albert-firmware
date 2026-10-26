/* Firmware entry: 0x4818178c */

undefined4 FUN_ram_4818178c(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < (uint)((param_4 & 3) != 0) + (param_4 >> 2)) {
    return 0xfffffff8;
  }
  if (param_2 == 0) {
    return 0;
  }
  memset(param_1,0,param_2 * 4);
  if (param_4 != 0) {
    FUN_ram_4ff45158((param_2 * 4 - param_4) + (int)param_1,param_3,param_4);
  }
  puVar1 = param_1 + (param_2 - 1);
  if (param_1 <= param_1 + (param_2 - 1)) {
    do {
      puVar2 = puVar1 + -1;
      puVar3 = param_1 + 1;
      uVar4 = __bswapsi2(*param_1);
      uVar5 = __bswapsi2(*puVar1);
      *param_1 = uVar5;
      *puVar1 = uVar4;
      puVar1 = puVar2;
      param_1 = puVar3;
    } while (puVar3 <= puVar2);
  }
  return 0;
}


