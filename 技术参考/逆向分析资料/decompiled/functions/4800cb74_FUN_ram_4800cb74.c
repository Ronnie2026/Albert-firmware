/* Firmware entry: 0x4800cb74 */

undefined4 FUN_ram_4800cb74(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4800c81c();
  if (iVar1 != 0) {
    FUN_ram_4ff216dc(&DAT_ram_4ff48378);
    iVar1 = (*(code *)PTR_FUN_ram_4800cbf6_ram_4ff48390)(param_1);
    FUN_ram_4ff216e6(&DAT_ram_4ff48378);
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    piVar2 = (int *)FUN_ram_4819bf88();
    *piVar2 = iVar1;
  }
  return 0xffffffff;
}


