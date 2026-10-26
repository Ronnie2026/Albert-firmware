/* Firmware entry: 0x48184b1e */

int FUN_ram_48184b1e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_24 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48184440(param_1,param_2,param_4,param_5);
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_ram_481845d4(param_1,param_6,param_7), iVar1 != 0 ||
      ((iVar1 = FUN_ram_4818474a(param_1,param_8,param_3,param_9,param_3,auStack_24), iVar1 == 0 &&
       (iVar2 = FUN_ram_481849c4(param_1,0,0,auStack_24,param_11,param_10), iVar1 = 0, iVar2 != 0)))
      ))) {
    iVar1 = -0x14;
  }
  return iVar1;
}


