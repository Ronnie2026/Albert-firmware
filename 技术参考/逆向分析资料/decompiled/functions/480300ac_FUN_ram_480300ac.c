/* Firmware entry: 0x480300ac */

bool FUN_ram_480300ac(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (*(char *)(param_1 + 0x3ff9) != '\0') {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x2ecc);
  iVar3 = FUN_ram_48025ba6();
  iVar1 = iVar1 - iVar3;
  bVar2 = false;
  if (0 < iVar1) {
    if (10000 < iVar1) {
      iVar1 = 10000;
    }
    iVar1 = FUN_ram_48166f06(param_2,iVar1);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


