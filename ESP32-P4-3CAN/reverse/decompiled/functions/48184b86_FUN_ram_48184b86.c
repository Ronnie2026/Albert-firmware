/* Firmware entry: 0x48184b86 */

int FUN_ram_48184b86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48184440(param_1,0);
  if (iVar1 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar1;
  }
  iVar1 = FUN_ram_481845d4(param_1,param_5,param_6);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4818474a(param_1,param_9,param_2,param_10,param_2,auStack_34);
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    iVar1 = FUN_ram_481849c4(param_1,0,0,auStack_34,auStack_30,param_8);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_481723ca(param_7,auStack_30,param_8);
      if (iVar1 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      FUN_ram_48178af2(param_10,param_2);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x12;
    }
  }
  return -0x14;
}


