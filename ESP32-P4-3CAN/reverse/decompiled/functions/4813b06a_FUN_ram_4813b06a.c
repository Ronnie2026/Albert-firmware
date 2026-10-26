/* Firmware entry: 0x4813b06a */

undefined4 * FUN_ram_4813b06a(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  while( true ) {
    if (param_2 == 0) {
      return param_1;
    }
    if (param_1 == (undefined4 *)0x0) break;
    uVar1 = *(ushort *)((int)param_1 + 10);
    if (param_2 < uVar1) {
      *(ushort *)((int)param_1 + 10) = uVar1 - (short)param_2;
      param_1[1] = param_1[1] + param_2;
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) - (short)param_2;
      return param_1;
    }
    puVar2 = (undefined4 *)*param_1;
    param_2 = param_2 - uVar1 & 0xffff;
    *param_1 = 0;
    FUN_ram_4813ac74(param_1);
    param_1 = puVar2;
  }
  return (undefined4 *)0x0;
}


