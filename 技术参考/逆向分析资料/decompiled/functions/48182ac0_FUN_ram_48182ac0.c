/* Firmware entry: 0x48182ac0 */

undefined4
FUN_ram_48182ac0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                uint *param_6)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(uint *)(param_1 + 0x7c) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x28) != 0) &&
       (*(uint *)(param_1 + 0x20) < *(int *)(param_1 + 0x2c) + param_3)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xfffffff3;
    }
    if (param_3 <= param_5) {
      *param_6 = param_3;
      uVar1 = FUN_ram_4818264c();
      return uVar1;
    }
  }
  return 0xfffffff3;
}


