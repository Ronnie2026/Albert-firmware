/* Firmware entry: 0x48136200 */

undefined4 FUN_ram_48136200(undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined2 uStack_2a;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  char cStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 == (int *)0x0) {
LAB_ram_481362be:
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    *puVar4 = 9;
    return 0xffffffff;
  }
  puVar6 = (uint *)*piVar1;
  if (puVar6 == (uint *)0x0) {
    FUN_ram_48134a50();
    goto LAB_ram_481362be;
  }
  if (*(char *)(param_2 + 1) == '\x02') {
    if ((*puVar6 & 8) == 0) goto LAB_ram_48136230;
  }
  else if ((*(char *)(param_2 + 1) == '\n') && ((*puVar6 & 8) != 0)) {
LAB_ram_48136230:
    if (((param_3 == 0x10) || (param_3 == 0x1c)) && ((param_2 & 3) == 0)) {
      FUN_ram_4813476e(param_2,&iStack_28,&uStack_2a);
      if (((cStack_14 == '\x06') && (iStack_28 == 0 && iStack_24 == 0)) && (iStack_20 == -0x10000))
      {
        cStack_14 = '\0';
      }
      iVar2 = FUN_ram_4814f0c8(*piVar1,&iStack_28,uStack_2a);
      if (iVar2 == 0) {
        FUN_ram_48134a50(piVar1);
        return 0;
      }
      iVar3 = FUN_ram_481517ce();
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        uVar5 = FUN_ram_481517ce(iVar2);
        *puVar4 = uVar5;
      }
    }
    else {
      iVar2 = FUN_ram_481517ce(0xfffffff0);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        uVar5 = FUN_ram_481517ce(0xfffffff0);
        *puVar4 = uVar5;
      }
    }
    goto LAB_ram_4813628a;
  }
  iVar2 = FUN_ram_481517ce(0xfffffffa);
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)FUN_ram_4819bf88();
    uVar5 = FUN_ram_481517ce(0xfffffffa);
    *puVar4 = uVar5;
  }
LAB_ram_4813628a:
  FUN_ram_48134a50(piVar1);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0xffffffff;
}


