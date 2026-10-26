/* Firmware entry: 0x48176cf2 */

undefined4 FUN_ram_48176cf2(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    if (uVar2 == 9) {
      uVar1 = FUN_ram_4817b062(param_2,param_3,param_4,0);
      return uVar1;
    }
    if (uVar2 < 10) {
      if (uVar2 == 5) {
        uVar1 = FUN_ram_4817b010();
        return uVar1;
      }
      if (uVar2 == 8) {
        uVar1 = FUN_ram_4817b062(param_2,param_3,param_4,1);
        return uVar1;
      }
      if (uVar2 == 3) {
        uVar1 = FUN_ram_48177020();
        return uVar1;
      }
    }
    else {
      if (uVar2 == 10) {
        uVar1 = FUN_ram_4817b0c4();
        return uVar1;
      }
      if (uVar2 == 0xb) {
        uVar1 = FUN_ram_4817b0c4();
        return uVar1;
      }
    }
  }
  return 0xffffaf00;
}


