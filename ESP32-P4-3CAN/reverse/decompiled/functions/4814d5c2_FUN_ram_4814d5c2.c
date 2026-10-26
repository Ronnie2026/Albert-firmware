/* Firmware entry: 0x4814d5c2 */

int FUN_ram_4814d5c2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48139540(&DAT_ram_482372d8);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_ram_4814cd98(param_1,&PTR_FUN_ram_4814d1a8_ram_482372bc,piVar1,param_3,param_4);
    if (iVar2 != 0) {
      memset(piVar1 + 2,0,0x58);
      *piVar1 = iVar2;
      piVar1[1] = param_2;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2;
    }
    FUN_ram_4813958a(&DAT_ram_482372d8,piVar1);
  }
  return 0;
}


