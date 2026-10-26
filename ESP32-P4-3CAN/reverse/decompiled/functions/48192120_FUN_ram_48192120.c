/* Firmware entry: 0x48192120 */

undefined4 FUN_ram_48192120(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1[1];
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_1[2];
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    return uVar1;
  }
  return 0x103;
}


