/* Firmware entry: 0x48172558 */

int FUN_ram_48172558(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_38 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48173f3a(auStack_38);
  iVar1 = FUN_ram_48174600(param_1,auStack_38,param_4,param_3,param_5,param_6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_48174138(auStack_38);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4817fe72(param_2,auStack_38);
    }
    else {
      iVar1 = -0x4f80;
    }
  }
  FUN_ram_48173ffc(auStack_38);
  return iVar1;
}


