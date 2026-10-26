/* Firmware entry: 0x48177276 */

int FUN_ram_48177276(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5,
                    int param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_4 == 0 && param_6 == 0) || (param_5 != 0)) && (*param_3 != 0)) {
    iVar1 = (**(code **)(*param_3 + 0xc))(param_1);
    if (iVar1 == 0) {
      return -0x3f00;
    }
    if (param_1 == 6) {
      piVar2 = (int *)*param_3;
      if ((piVar2 == (int *)0x0) || (*piVar2 != 1)) {
        return -0x3980;
      }
      if (param_2 != (undefined4 *)0x0) {
        iVar1 = (*(code *)piVar2[2])(param_3);
        if (param_8 < iVar1 + 7U >> 3) {
          return -0x4380;
        }
        iVar1 = 0;
        if (((int *)*param_3 != (int *)0x0) && (iVar1 = 0, *(int *)*param_3 == 1)) {
          iVar1 = param_3[1];
        }
        iVar1 = FUN_ram_4817a66c(iVar1,param_4,param_6,param_5,*param_2,param_2[1],param_7);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (*param_3 == 0) {
          if (param_8 == 0) {
            return 0;
          }
        }
        else {
          iVar1 = (**(code **)(*param_3 + 8))(param_3);
          if (param_8 <= iVar1 + 7U >> 3) {
            return 0;
          }
        }
        return -0x3900;
      }
    }
    else if (param_2 == (undefined4 *)0x0) {
      iVar1 = FUN_ram_481771a6(param_3,param_4,param_5,param_6,param_7,param_8,0);
      return iVar1;
    }
  }
  return -16000;
}


