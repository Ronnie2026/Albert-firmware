/* Firmware entry: 0x481951fe */

bool FUN_ram_481951fe(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                     undefined4 param_5)

{
  bool bVar1;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0x10;
  local_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2,*param_3,&local_20,param_5,*(code **)(*param_1 + 0x18));
  bVar1 = (uStack_1c & 6) == 6;
  if (bVar1) {
    *param_3 = local_20;
  }
  return bVar1;
}


