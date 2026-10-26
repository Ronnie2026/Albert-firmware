/* Firmware entry: 0x4814cfa4 */

undefined4 FUN_ram_4814cfa4(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48138e1e(0);
  if (((char)piVar1[5] == '\0') && (*piVar1 == param_2)) {
    FUN_ram_48138d9c(0,&DAT_ram_48236f9c);
  }
  piVar1 = (int *)FUN_ram_48138e1e(1);
  if (((char)piVar1[5] == '\0') && (*piVar1 == param_3)) {
    FUN_ram_48138d9c(1,&DAT_ram_48236f9c);
    return 1;
  }
  return 1;
}


