/* Firmware entry: 0x4813aa74 */

undefined4 *
FUN_ram_4813aa74(uint param_1,uint param_2,undefined1 param_3,undefined4 *param_4,int param_5,
                uint param_6)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = (param_1 & 0xffff) + 3 & 0xfffffffc;
  if (param_2 + uVar1 <= param_6) {
    if (param_5 != 0) {
      param_5 = param_5 + uVar1;
    }
    *(undefined1 *)((int)param_4 + 0xd) = 2;
    *param_4 = 0;
    param_4[1] = param_5;
    param_4[2] = param_2 | param_2 << 0x10;
    *(undefined1 *)(param_4 + 3) = param_3;
    *(undefined2 *)((int)param_4 + 0xe) = 1;
    return param_4;
  }
  return (undefined4 *)0x0;
}


