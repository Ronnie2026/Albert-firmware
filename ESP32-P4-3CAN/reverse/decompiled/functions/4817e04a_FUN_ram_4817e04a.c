/* Firmware entry: 0x4817e04a */

void FUN_ram_4817e04a(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff20626();
  if (299 < uVar1) {
    iVar2 = *param_1;
    if (iVar2 == 1) {
      if (param_3 != 0x20) goto LAB_ram_4817e096;
      iVar2 = FUN_ram_4818ac9e();
      if (iVar2 != 0) goto LAB_ram_4817e0d6;
      if (*param_1 != 3) goto LAB_ram_4817e096;
    }
    else {
      if (iVar2 != 3) {
        if ((iVar2 != 4) || (param_3 != 0x30)) goto LAB_ram_4817e096;
        goto LAB_ram_4817e0d6;
      }
      if (param_3 != 0x20) goto LAB_ram_4817e096;
    }
    iVar2 = FUN_ram_4818aca2();
    if (iVar2 != 0) {
LAB_ram_4817e0d6:
      FUN_ram_4817dd44(param_1,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
LAB_ram_4817e096:
  FUN_ram_4818385c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


