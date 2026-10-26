/* Firmware entry: 0x48129444 */

int * FUN_ram_48129444(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return (int *)0x0;
  }
  uVar2 = param_1[2];
  uVar1 = param_1[1];
  if (uVar1 <= uVar2) {
    return param_1;
  }
  do {
    if (0x20 < *(byte *)(*param_1 + uVar2)) {
      if (uVar1 != uVar2) {
        return param_1;
      }
      break;
    }
    uVar2 = uVar2 + 1;
    param_1[2] = uVar2;
  } while (uVar1 != uVar2);
  param_1[2] = uVar1 - 1;
  return param_1;
}


