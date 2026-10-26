/* Firmware entry: 0x48182d4c */

int FUN_ram_48182d4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48182890(param_1,0);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_ram_48182c0c(param_1,param_2,param_5,param_6,param_7,param_8,auStack_30,param_10)
      , iVar1 == 0)) &&
     (iVar2 = FUN_ram_481723ca(param_9,auStack_30,param_10), iVar1 = 0, iVar2 != 0)) {
    FUN_ram_48178af2(param_8,param_2);
    iVar1 = -0xf;
  }
  return iVar1;
}


