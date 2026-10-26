/* Firmware entry: 0x481365d0 */

undefined4 FUN_ram_481365d0(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      param_2 = param_2 & (int)~param_2 >> 0x1f;
      if (0xff < (int)param_2) {
        param_2 = 0xff;
      }
      iVar2 = FUN_ram_4814f1f8(*piVar1,param_2 & 0xff);
      if (iVar2 == 0) {
        FUN_ram_48134a50(piVar1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      if ((*(uint *)*piVar1 & 0xf0) == 0x10) {
        iVar4 = FUN_ram_481517ce();
        if (iVar4 != 0) {
          puVar3 = (undefined4 *)FUN_ram_4819bf88();
          uVar5 = FUN_ram_481517ce(iVar2);
          *puVar3 = uVar5;
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_ram_4819bf88();
        *puVar3 = 0x5f;
      }
      FUN_ram_48134a50(piVar1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    FUN_ram_48134a50();
  }
  puVar3 = (undefined4 *)FUN_ram_4819bf88();
  *puVar3 = 9;
  return 0xffffffff;
}


