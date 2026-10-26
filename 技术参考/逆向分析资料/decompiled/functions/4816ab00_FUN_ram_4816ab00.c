/* Firmware entry: 0x4816ab00 */

int FUN_ram_4816ab00(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x7100;
  }
  if (*param_1 != 0) {
    iVar1 = param_1[1];
    if (*(char *)(*param_1 + 8) == '\x01') {
      if (0x1a < iVar1) {
        param_1[2] = 3;
        if (param_1[0x2f] != 0) {
          iVar1 = FUN_ram_4817069a();
          return iVar1;
        }
        param_1[0x2e] = 4;
        param_1[0x2d] = 0x16;
        *(undefined1 *)param_1[0x2c] = 0;
        iVar1 = FUN_ram_48170976(param_1,1);
        return iVar1;
      }
    }
    else {
      if (param_1[2] == 1) {
        while( true ) {
          if (iVar1 == 0x1b) {
            return 0;
          }
          iVar1 = FUN_ram_4816a73c(param_1);
          if (iVar1 != 0) break;
          iVar1 = param_1[1];
        }
        return iVar1;
      }
      if (0x1a < iVar1) {
        iVar1 = FUN_ram_4816a88a();
        if (iVar1 != 0) {
          return iVar1;
        }
        param_1[1] = 0;
        param_1[2] = 1;
        if (*param_1 != 0) {
          do {
            iVar1 = FUN_ram_4816a73c(param_1);
            if (iVar1 != 0) {
              return iVar1;
            }
          } while (param_1[1] != 0x1b);
          return 0;
        }
      }
    }
  }
  return -0x7100;
}


