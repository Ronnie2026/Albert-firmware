/* Firmware entry: 0x480064f2 */

int FUN_ram_480064f2(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  iVar2 = param_1[1];
  if (iVar2 == 2) {
    iVar2 = FUN_ram_4ff3ae5a(*param_1);
    iVar1 = FUN_ram_4ff3d9a8();
    if (iVar2 == iVar1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x2d;
    }
    iVar2 = param_1[1];
  }
  if (iVar2 != 1) {
    iVar2 = FUN_ram_4ff3b5f0();
    return (uint)(iVar2 != 1) << 4;
  }
  iVar2 = FUN_ram_4ff3b744(*param_1,param_2);
  return (uint)(iVar2 != 1) << 4;
}


