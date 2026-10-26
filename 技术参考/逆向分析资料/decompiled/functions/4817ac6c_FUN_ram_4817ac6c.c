/* Firmware entry: 0x4817ac6c */

int FUN_ram_4817ac6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_28 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(auStack_28);
  if ((((param_4 == 0) ||
       ((iVar1 = FUN_ram_481805c8(auStack_28,param_1,1), iVar1 == 0 &&
        (iVar1 = FUN_ram_48180a3c(param_4,param_3,auStack_28), iVar1 == 0)))) &&
      ((param_5 == 0 ||
       ((iVar1 = FUN_ram_481805c8(auStack_28,param_2,1), iVar1 == 0 &&
        (iVar1 = FUN_ram_48180a3c(param_5,param_3,auStack_28), iVar1 == 0)))))) &&
     (iVar1 = 0, param_6 != 0)) {
    iVar1 = FUN_ram_481812e6(param_6,param_2,param_1);
  }
  FUN_ram_4817fb90(auStack_28);
  return iVar1;
}


