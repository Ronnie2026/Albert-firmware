/* Firmware entry: 0x480792e4 */

bool FUN_ram_480792e4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129ce8();
  if (iVar2 != 0) {
    bVar1 = false;
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 != 0)) {
      iVar2 = FUN_ram_4ff453ae(*(int *)(param_1 + 0x10),param_2);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


