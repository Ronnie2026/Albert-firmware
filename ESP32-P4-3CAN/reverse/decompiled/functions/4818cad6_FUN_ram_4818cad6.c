/* Firmware entry: 0x4818cad6 */

undefined4 FUN_ram_4818cad6(int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_3 != (undefined4 *)0x0)) {
    if (param_2 == 0x32) {
      if (param_4 == 0xc) {
        *(undefined4 *)(param_1 + 0x28) = *param_3;
        *(undefined4 *)(param_1 + 0x2c) = param_3[1];
        *(undefined4 *)(param_1 + 0x30) = param_3[2];
      }
    }
    else if (param_2 < 0x33) {
      if (param_2 == 6) {
        if (param_4 == 1) {
          *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)param_3;
        }
      }
      else if (param_2 == 0x20) {
        if (param_4 == 1) {
          *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)param_3;
        }
      }
      else if ((param_2 == 1) && (param_4 == 4)) {
        *(undefined4 *)(param_1 + 0x1c) = *param_3;
      }
    }
    else if (param_2 == 0x33) {
      if (param_4 == 4) {
        *(undefined4 *)(param_1 + 0x34) = *param_3;
      }
    }
    else if (param_2 == 0x72) {
      *(undefined4 **)(param_1 + 0x3c) = param_3;
      return 0;
    }
    return 0;
  }
  return 0xfffffff0;
}


