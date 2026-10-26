/* Firmware entry: 0x481372bc */

undefined4
FUN_ram_481372bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      if (param_4 == 0) {
        puVar5 = (undefined4 *)FUN_ram_4819bf88();
        *puVar5 = 0xe;
        FUN_ram_48134a50(piVar1);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffffff;
      }
      iStack_28 = 0;
      uStack_3c = param_1;
      uStack_38 = param_2;
      uStack_34 = param_3;
      iStack_30 = param_4;
      uStack_2c = param_5;
      uStack_24 = FUN_ram_4814e840();
      iVar2 = FUN_ram_481377ee(&DAT_ram_48135820,&uStack_3c);
      if (iVar2 == 0) {
        FUN_ram_4814e408(uStack_24,0);
        iVar2 = iStack_28;
        if (iStack_28 == 0) {
          FUN_ram_48134a50(piVar1);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        piVar3 = (int *)FUN_ram_4819bf88();
        *piVar3 = iVar2;
      }
      else {
        iVar4 = FUN_ram_481517ce();
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)FUN_ram_4819bf88();
          uVar6 = FUN_ram_481517ce(iVar2);
          *puVar5 = uVar6;
        }
      }
      FUN_ram_48134a50(piVar1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    FUN_ram_48134a50();
  }
  puVar5 = (undefined4 *)FUN_ram_4819bf88();
  *puVar5 = 9;
  return 0xffffffff;
}


