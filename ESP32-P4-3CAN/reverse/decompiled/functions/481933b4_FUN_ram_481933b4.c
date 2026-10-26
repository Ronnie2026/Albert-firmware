/* Firmware entry: 0x481933b4 */

void FUN_ram_481933b4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0)) &&
     (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x38), puVar1 != (undefined4 *)0x0)) {
    if (param_2 == -1) {
      *puVar1 = 0x8008;
      return;
    }
    if (-1 < param_2) {
      if (param_2 == 0) {
        *puVar1 = 0x8006;
        return;
      }
      return;
    }
    if (param_2 != -3) {
      if (param_2 == -2) {
        *puVar1 = 0x8004;
        return;
      }
      return;
    }
    *puVar1 = 0x101;
  }
  return;
}


