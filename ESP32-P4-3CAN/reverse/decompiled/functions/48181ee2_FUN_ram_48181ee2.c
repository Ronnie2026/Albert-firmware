/* Firmware entry: 0x48181ee2 */

int FUN_ram_48181ee2(undefined4 *param_1,uint param_2,uint param_3,code *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = (uint)((param_3 & 3) != 0) + (param_3 >> 2);
  __n = uVar7 * 4 - param_3;
  if (param_2 < uVar7) {
    iVar4 = -4;
  }
  else {
    memset(param_1,0,__n);
    memset(param_1 + uVar7,0,(param_2 - uVar7) * 4);
    iVar4 = (*param_4)(param_5,(int)param_1 + __n,param_3);
    if (((iVar4 == 0) && (uVar7 != 0)) &&
       (puVar2 = param_1 + (uVar7 - 1), param_1 <= param_1 + (uVar7 - 1))) {
      do {
        puVar3 = puVar2 + -1;
        puVar1 = param_1 + 1;
        uVar5 = __bswapsi2(*param_1);
        uVar6 = __bswapsi2(*puVar2);
        *param_1 = uVar6;
        *puVar2 = uVar5;
        param_1 = puVar1;
        puVar2 = puVar3;
      } while (puVar1 <= puVar3);
    }
  }
  return iVar4;
}


