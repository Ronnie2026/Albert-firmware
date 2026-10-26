/* Firmware entry: 0x48172c9a */

int FUN_ram_48172c9a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48180594(param_2,param_3,param_4);
  if (iVar1 == 0) {
    while ((*(short *)(param_2 + 4) < 0 && (iVar2 = FUN_ram_481802e8(param_2,0), iVar2 != 0))) {
      iVar2 = FUN_ram_4818058e(param_2,param_2,param_1 + 4);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}


