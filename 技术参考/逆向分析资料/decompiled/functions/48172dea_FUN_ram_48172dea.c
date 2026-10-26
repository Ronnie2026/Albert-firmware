/* Firmware entry: 0x48172dea */

int FUN_ram_48172dea(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_ram_481805c8(param_2,param_2,3);
    if (iVar1 == 0) {
      do {
        if ((-1 < *(short *)(param_2 + 4)) || (iVar1 = FUN_ram_481802e8(param_2,0), iVar1 == 0))
        goto LAB_ram_48172e32;
        iVar1 = FUN_ram_4818058e(param_2,param_2,param_1 + 4);
      } while (iVar1 == 0);
    }
  }
  else {
    iVar1 = FUN_ram_4818058e(param_2,param_2,param_1 + 0xc);
    if (iVar1 == 0) {
      do {
        iVar1 = FUN_ram_4818023e(param_2,param_1 + 4);
        if (iVar1 < 0) {
LAB_ram_48172e32:
          iVar1 = FUN_ram_4817bf84(param_2,param_2,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_ram_48172ae2(param_2,param_1);
          if (iVar1 != 0) {
            return iVar1;
          }
          DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
          iVar1 = FUN_ram_4818058e(param_2,param_2,param_1 + 0x14);
          if (iVar1 != 0) {
            return iVar1;
          }
          do {
            iVar1 = FUN_ram_4818023e(param_2,param_1 + 4);
            if (iVar1 < 0) {
              return 0;
            }
            iVar1 = FUN_ram_481803f0(param_2,param_2,param_1 + 4);
          } while (iVar1 == 0);
          return iVar1;
        }
        iVar1 = FUN_ram_481803f0(param_2,param_2,param_1 + 4);
      } while (iVar1 == 0);
    }
  }
  return iVar1;
}


