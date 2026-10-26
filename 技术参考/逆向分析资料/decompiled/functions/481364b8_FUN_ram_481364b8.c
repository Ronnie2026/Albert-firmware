/* Firmware entry: 0x481364b8 */

undefined4 FUN_ram_481364b8(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined2 uStack_2a;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  char cStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = (int *)FUN_ram_48134b36();
  if (piVar2 == (int *)0x0) {
LAB_ram_48136582:
    puVar5 = (undefined4 *)FUN_ram_4819bf88();
    *puVar5 = 9;
    return 0xffffffff;
  }
  puVar7 = (uint *)*piVar2;
  if (puVar7 == (uint *)0x0) {
    FUN_ram_48134a50();
    goto LAB_ram_48136582;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\0') {
    iVar3 = FUN_ram_4814f1c0(puVar7);
LAB_ram_48136520:
    if (iVar3 == 0) {
      FUN_ram_48134a50(piVar2);
      return 0;
    }
    iVar4 = FUN_ram_481517ce(iVar3);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      uVar6 = FUN_ram_481517ce(iVar3);
      *puVar5 = uVar6;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if ((*puVar7 & 8) == 0) goto LAB_ram_481364ea;
    }
    else if ((cVar1 == '\n') && ((*puVar7 & 8) != 0)) {
LAB_ram_481364ea:
      if (((param_3 != 0x10) && (param_3 != 0x1c)) || ((param_2 & 3) != 0)) {
        iVar3 = FUN_ram_481517ce(0xfffffff0);
        if (iVar3 != 0) {
          puVar5 = (undefined4 *)FUN_ram_4819bf88();
          uVar6 = FUN_ram_481517ce(0xfffffff0);
          *puVar5 = uVar6;
        }
        goto LAB_ram_48136568;
      }
      FUN_ram_4813476e(param_2,&iStack_28,&uStack_2a);
      if (((cStack_14 == '\x06') && (iStack_28 == 0 && iStack_24 == 0)) && (iStack_20 == -0x10000))
      {
        cStack_14 = '\0';
      }
      iVar3 = FUN_ram_4814f176(*piVar2,&iStack_28,uStack_2a);
      goto LAB_ram_48136520;
    }
    iVar3 = FUN_ram_481517ce(0xfffffffa);
    if (iVar3 != 0) {
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      uVar6 = FUN_ram_481517ce(0xfffffffa);
      *puVar5 = uVar6;
    }
  }
LAB_ram_48136568:
  FUN_ram_48134a50(piVar2);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0xffffffff;
}


