/* Firmware entry: 0x4819334c */

undefined4
FUN_ram_4819334c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = param_6;
    *(undefined4 *)(param_1 + 0x20) = param_7;
    *(undefined4 *)(param_1 + 0x24) = param_8;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)(param_1 + 0x2c) = &DAT_ram_48193106;
    return 0;
  }
  return 0xffffffff;
}


