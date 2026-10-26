/* Firmware entry: 0x4817ab8c */

int FUN_ram_4817ab8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_4 == 0) || (iVar1 = FUN_ram_481802e8(param_1,1), iVar1 < 1)) ||
      (iVar1 = FUN_ram_481802e8(param_2,1), iVar1 < 1)) ||
     (iVar1 = FUN_ram_481802e8(param_3,0), iVar1 == 0)) {
    iVar1 = -4;
  }
  else {
    iVar1 = FUN_ram_4817ffaa(param_3,0);
    if (iVar1 == 1) {
      FUN_ram_4817fb86(auStack_30);
      FUN_ram_4817fb86(auStack_28);
      iVar1 = FUN_ram_481805c8(auStack_30,param_1,1);
      if (((iVar1 == 0) && (iVar1 = FUN_ram_481805c8(auStack_28,param_2,1), iVar1 == 0)) &&
         ((iVar1 = FUN_ram_48181048(param_4,auStack_30,auStack_28), iVar1 == 0 &&
          ((iVar1 = FUN_ram_4817bf84(auStack_30,auStack_30,auStack_28), iVar1 == 0 &&
           (iVar1 = FUN_ram_481805fa(auStack_30,0,auStack_30,param_4), iVar1 == 0)))))) {
        iVar1 = FUN_ram_481813b2(param_4,param_3,auStack_30);
      }
      FUN_ram_4817fb90(auStack_30);
      FUN_ram_4817fb90(auStack_28);
    }
    else {
      iVar1 = -0xe;
    }
  }
  return iVar1;
}


