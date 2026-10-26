/* Firmware entry: 0x4815e0e8 */

undefined4 FUN_ram_4815e0e8(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812e1d6(1,2,param_1);
  if (iVar1 == 0) {
    return 0x105;
  }
  if (*(char *)(iVar1 + 0x29) == '\0') {
    iVar2 = FUN_ram_4ff20824(0x10,2,0x1400,0x1800);
    if (iVar2 != 0) {
      FUN_ram_4815d248(iVar2,iVar1);
      *param_2 = iVar2;
      return 0;
    }
    return 0x101;
  }
  return 0x1119;
}


