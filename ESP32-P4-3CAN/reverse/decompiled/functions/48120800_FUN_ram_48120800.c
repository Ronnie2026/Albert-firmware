/* Firmware entry: 0x48120800 */

int FUN_ram_48120800(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != 0)) &&
     ((param_3 & 0x1ff) == 0)) {
    if ((*param_1 == 0) || (*param_2 < param_3)) {
      iVar1 = FUN_ram_4ff20956(0x40,param_3,0x404);
      if (iVar1 == 0) {
        DAT_ram_4ff6e028 = DAT_ram_4ff6e028 + 1;
        FUN_ram_48120a40(param_3);
        return 0;
      }
      uVar2 = param_3;
      if (*param_1 != 0) {
        uVar2 = param_3 - *param_2;
      }
      FUN_ram_4ff209c6();
      *param_1 = iVar1;
      *param_2 = param_3;
      DAT_ram_4ff6e024 = DAT_ram_4ff6e024 + uVar2;
      FUN_ram_48120b08();
    }
    else {
      FUN_ram_48120b08();
      iVar1 = *param_1;
    }
    return iVar1;
  }
  return 0;
}


