/* Firmware entry: 0x4813711a */

int FUN_ram_4813711a(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 == (int *)0x0) {
LAB_ram_481371c0:
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 9;
    return -1;
  }
  puVar6 = (uint *)*piVar1;
  if (puVar6 == (uint *)0x0) {
    FUN_ram_48134a50();
    goto LAB_ram_481371c0;
  }
  if ((*puVar6 & 0xf0) != 0x10) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    *puVar2 = 0x5f;
    FUN_ram_48134a50(piVar1);
    return -1;
  }
  uVar5 = 1;
  if (param_2 == 1) {
    uVar5 = 0;
  }
  else if (param_2 != 2) {
    if (param_2 != 0) {
      puVar2 = (undefined4 *)FUN_ram_4819bf88();
      *puVar2 = 0x16;
      FUN_ram_48134a50(piVar1);
      return -1;
    }
    iVar3 = FUN_ram_4814f59e(puVar6,1,0);
    iVar4 = FUN_ram_481517ce();
    goto joined_r0x48137174;
  }
  iVar3 = FUN_ram_4814f59e(puVar6,uVar5,1);
  iVar4 = FUN_ram_481517ce();
joined_r0x48137174:
  if (iVar4 != 0) {
    puVar2 = (undefined4 *)FUN_ram_4819bf88();
    uVar5 = FUN_ram_481517ce(iVar3);
    *puVar2 = uVar5;
  }
  FUN_ram_48134a50(piVar1);
  return -(uint)(iVar3 != 0);
}


