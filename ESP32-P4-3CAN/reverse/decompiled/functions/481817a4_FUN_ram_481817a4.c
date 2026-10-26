/* Firmware entry: 0x481817a4 */

undefined4 FUN_ram_481817a4(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,param_2 * 4);
  if (param_4 != 0) {
    FUN_ram_4ff45158((param_2 * 4 - param_4) + (int)param_1,param_3,param_4);
  }
  puVar1 = param_1 + param_2 + -1;
  if (param_1 <= param_1 + param_2 + -1) {
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


