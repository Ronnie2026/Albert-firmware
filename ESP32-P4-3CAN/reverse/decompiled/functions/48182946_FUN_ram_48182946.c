/* Firmware entry: 0x48182946 */

undefined4 FUN_ram_48182946(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_4 != 2) && (param_4 < 0x11)) && ((param_4 & 1) == 0)) && (param_2 < 0xff00)) {
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(uint *)(param_1 + 0x24) = param_2;
    *(uint *)(param_1 + 0x28) = param_4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 2;
    uVar1 = FUN_ram_48182522();
    return uVar1;
  }
  return 0xfffffff3;
}


