/* Firmware entry: 0x48172ae2 */

int FUN_ram_48172ae2(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_2 + 0x48) == 0) {
    iVar3 = FUN_ram_48180a3c(param_1,param_1,param_2 + 4);
    return iVar3;
  }
  if (((*(short *)(param_1 + 4) < 0) && (iVar3 = FUN_ram_481802e8(param_1,0), iVar3 != 0)) ||
     (uVar2 = FUN_ram_4818006c(param_1), (uint)(*(int *)(param_2 + 0x3c) << 1) < uVar2)) {
    iVar3 = -0x4f80;
  }
  else {
    iVar1 = param_2 + 4;
    iVar3 = (**(code **)(param_2 + 0x48))(param_1);
    if (iVar3 == 0) {
      while ((*(short *)(param_1 + 4) < 0 && (iVar3 = FUN_ram_481802e8(param_1,0), iVar3 != 0))) {
        iVar3 = FUN_ram_4818058e(param_1,param_1,iVar1);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      do {
        iVar3 = FUN_ram_4818023e(param_1,iVar1);
        if (iVar3 < 0) {
          return 0;
        }
        iVar3 = FUN_ram_481803f0(param_1,param_1,iVar1);
      } while (iVar3 == 0);
      return iVar3;
    }
  }
  return iVar3;
}


