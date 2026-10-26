/* Firmware entry: 0x48024b00 */

undefined4
FUN_ram_48024b00(undefined4 *param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = *param_1;
  if (param_5 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(DAT_ram_4ff6dbe0,0xffffffff);
  }
  if (param_4 < 2) {
    uVar1 = FUN_ram_481603ec(uVar1,1,param_2 & 0x3ff,*param_3,0);
  }
  else {
    uVar1 = FUN_ram_481606e6(uVar1,1,param_2 & 0x3ff,param_3,param_4);
  }
  if (param_5 == 0) {
    return uVar1;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbe0);
  return uVar1;
}


