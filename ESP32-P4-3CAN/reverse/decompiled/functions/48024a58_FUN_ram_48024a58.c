/* Firmware entry: 0x48024a58 */

undefined4 FUN_ram_48024a58(int *param_1,uint param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (param_5 != 0) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(DAT_ram_4ff6dbe0,0xffffffff);
  }
  if (param_4 < 2) {
    uVar1 = FUN_ram_48160338(iVar2,1,param_2 & 0x3ff,param_3);
  }
  else {
    uVar1 = FUN_ram_4816065e(iVar2,1,param_2 & 0x3ff,param_3,param_4);
  }
  if (param_5 == 0) {
    return uVar1;
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6dbe0);
  return uVar1;
}


