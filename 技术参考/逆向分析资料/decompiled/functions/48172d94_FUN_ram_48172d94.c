/* Firmware entry: 0x48172d94 */

int FUN_ram_48172d94(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4818014a(param_2,1);
  if (iVar1 == 0) {
    while (iVar2 = FUN_ram_4818023e(param_2,param_1 + 4), -1 < iVar2) {
      iVar2 = FUN_ram_481803f0(param_2,param_2,param_1 + 4);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}


