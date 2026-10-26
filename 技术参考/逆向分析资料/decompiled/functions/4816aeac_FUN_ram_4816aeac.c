/* Firmware entry: 0x4816aeac */

bool FUN_ram_4816aeac(int param_1)

{
  undefined1 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 9) {
    return (bool)4;
  }
  if (param_1 < 10) {
    uVar1 = 2;
    if ((param_1 != 5) && (uVar1 = 3, param_1 != 8)) {
      return param_1 == 3;
    }
  }
  else {
    uVar1 = 5;
    if ((param_1 != 10) && (uVar1 = 6, param_1 != 0xb)) {
      return false;
    }
  }
  return (bool)uVar1;
}


