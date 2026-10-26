/* Firmware entry: 0x48040f0a */

undefined4 FUN_ram_48040f0a(int *param_1,int param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xd) == '\x02') {
    if (((*param_1 == 0x3a1) && ((char)param_1[1] == '\b')) &&
       ((*(byte *)((int)param_1 + 0xb) & 0xf) == 2)) {
      return 0;
    }
  }
  else if (((*(char *)((int)param_1 + 0xd) == '\x01') && (*param_1 == 0x3f8)) &&
          ((byte)((char)param_1[1] - 6U) < 3)) {
    return 0;
  }
  uVar1 = FUN_ram_480409ae(param_1,0,0);
  if (uVar1 == 8) {
    return 0;
  }
  if (uVar1 < 9) {
    if (uVar1 == 5) {
      return 0;
    }
    if (5 < uVar1) {
      if (uVar1 != 7) {
        return 0;
      }
      return 20000;
    }
    if (uVar1 == 4) {
      return 0;
    }
    if (uVar1 != 0) {
      return 20000;
    }
  }
  else {
    if (uVar1 == 0x13) {
      return 0;
    }
    if (uVar1 == 0x15) {
      return 10000;
    }
    if (uVar1 == 0x12) {
      return 20000;
    }
    if (uVar1 == 9) {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 20000;
  }
  return 2000;
}


