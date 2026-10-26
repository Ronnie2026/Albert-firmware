/* Firmware entry: 0x4818385c */

int FUN_ram_4818385c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48173f3a(auStack_38);
  FUN_ram_4817fb86(auStack_58);
  FUN_ram_4817fb86(auStack_50);
  FUN_ram_4817fb86(auStack_48);
  FUN_ram_4817fb86(auStack_40);
  if (*param_1 == 9) {
    return -0x4f80;
  }
  if (param_1[0xd] == 0) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_481802e8(param_5,1);
  if (-1 < iVar1) {
    piVar3 = param_1 + 0xd;
    iVar1 = FUN_ram_4818023e(param_5,piVar3);
    if (((iVar1 < 0) && (iVar1 = FUN_ram_481802e8(param_6,1), -1 < iVar1)) &&
       (iVar1 = FUN_ram_4818023e(param_6,piVar3), iVar1 < 0)) {
      iVar1 = FUN_ram_48183558(param_1,auStack_58,param_2,param_3);
      if (((((iVar1 != 0) || (iVar1 = FUN_ram_48180ec2(0,auStack_50,param_6,piVar3), iVar1 != 0)) ||
           ((iVar1 = FUN_ram_4817bf84(auStack_48,auStack_58,auStack_50), iVar1 != 0 ||
            ((iVar1 = FUN_ram_48180a3c(auStack_48,auStack_48,piVar3), iVar1 != 0 ||
             (iVar1 = FUN_ram_4817bf84(auStack_40,param_5,auStack_50), iVar1 != 0)))))) ||
          (iVar1 = FUN_ram_48180a3c(auStack_40,auStack_40,piVar3), iVar1 != 0)) ||
         (iVar1 = FUN_ram_4817461e(param_1,auStack_38,auStack_48,param_1 + 7,auStack_40,param_4,0),
         iVar1 != 0)) goto LAB_ram_481838cc;
      iVar1 = FUN_ram_48174138(auStack_38);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_48180a3c(auStack_38,auStack_38,piVar3);
        if (iVar1 != 0) goto LAB_ram_481838cc;
        iVar2 = FUN_ram_4818023e(auStack_38,param_5);
        iVar1 = 0;
        if (iVar2 == 0) goto LAB_ram_481838cc;
      }
    }
  }
  iVar1 = -0x4e00;
LAB_ram_481838cc:
  FUN_ram_48173ffc(auStack_38);
  FUN_ram_4817fb90(auStack_58);
  FUN_ram_4817fb90(auStack_50);
  FUN_ram_4817fb90(auStack_48);
  FUN_ram_4817fb90(auStack_40);
  return iVar1;
}


