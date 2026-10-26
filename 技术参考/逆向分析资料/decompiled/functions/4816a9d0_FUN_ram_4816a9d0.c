/* Firmware entry: 0x4816a9d0 */

int FUN_ram_4816a9d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_2[1];
  *param_1 = (int)param_2;
  iVar1 = -0x5e80;
  if (iVar2 == 0x303) {
    iVar1 = -0x5e80;
    if (*param_2 == 0x303) {
      if (param_2[8] != 0) {
        param_1[4] = 0x303;
        param_1[0x27] = 0;
        iVar1 = thunk_FUN_ram_4817b126(1,0x414d);
        param_1[0x18] = iVar1;
        if (iVar1 == 0) {
          iVar2 = -0x7f00;
          iVar1 = 0;
        }
        else {
          iVar1 = thunk_FUN_ram_4817b126(1,0x114d);
          param_1[0x27] = iVar1;
          if (iVar1 == 0) {
            iVar1 = param_1[0x18];
            iVar2 = -0x7f00;
          }
          else {
            FUN_ram_4817109c(param_1);
            FUN_ram_481710b6(param_1);
            iVar2 = FUN_ram_4816a88a(param_1);
            if (iVar2 == 0) {
              return 0;
            }
            iVar1 = param_1[0x18];
          }
        }
        thunk_FUN_ram_4ff209c6(iVar1);
        thunk_FUN_ram_4ff209c6(param_1[0x27]);
        *param_1 = 0;
        param_1[0x18] = 0;
        param_1[0x27] = 0;
        param_1[0x1a] = 0;
        param_1[0x19] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x29] = 0;
        param_1[0x28] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        return iVar2;
      }
      iVar1 = -0x7400;
    }
  }
  return iVar1;
}


