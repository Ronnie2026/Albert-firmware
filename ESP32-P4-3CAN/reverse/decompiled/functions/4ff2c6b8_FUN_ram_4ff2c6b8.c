/* Firmware entry: 0x4ff2c6b8 */

undefined4 FUN_ram_4ff2c6b8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uStack_18;
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = 0;
  uStack_18 = 0;
  iVar1 = FUN_ram_4ff2c30a(param_1,&uStack_18);
  if (iVar1 != 0) {
    return 0;
  }
  auStack_14[0] = 0;
  if ((uStack_18 & 1) == 0) {
    FUN_ram_4ff415ec(0,param_1,1,1,auStack_14);
  }
  else {
    FUN_ram_4ff415ec(0,param_1,1,2,auStack_14);
  }
  *param_2 = auStack_14[0];
  return 1;
}


