/* Firmware entry: 0x4ff40eb2 */

undefined4 FUN_ram_4ff40eb2(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_2 + -1 + param_1;
  if (param_1 < 0x4ff00000) {
    uVar1 = 0;
    if ((0x3fffffff < param_1) && (uVar1 = 0, uVar2 < 0x4c000000)) {
      FUN_ram_4ff36ab2(0x10);
      FUN_ram_4ff36ab2(0x20,param_1,param_2);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    if (uVar2 < 0x4ffc0000) {
      FUN_ram_4ff36ab2(0x10);
      uVar1 = 1;
    }
  }
  return uVar1;
}


