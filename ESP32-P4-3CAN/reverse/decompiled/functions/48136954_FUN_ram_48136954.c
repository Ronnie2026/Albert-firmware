/* Firmware entry: 0x48136954 */

undefined4 FUN_ram_48136954(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 != (int *)0x0) {
    puVar6 = (uint *)*piVar1;
    if (puVar6 != (uint *)0x0) {
      if ((*puVar6 & 0xf0) != 0x10) {
        FUN_ram_48134a50();
        uVar5 = FUN_ram_4813678a(param_1,param_2,param_3,param_4,0,0);
        return uVar5;
      }
      auStack_24[0] = 0;
      iVar2 = FUN_ram_4814f55a(puVar6,param_2,param_3,
                               (-(uint)((param_4 & 0x10) == 0) & 0xfffffffe) + 3 & 0xff |
                               (int)param_4 >> 1 & 4U,auStack_24);
      iVar3 = FUN_ram_481517ce();
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        uVar5 = FUN_ram_481517ce(iVar2);
        *puVar4 = uVar5;
      }
      FUN_ram_48134a50(piVar1);
      if (iVar2 == 0) {
        return auStack_24[0];
      }
      return 0xffffffff;
    }
    FUN_ram_48134a50();
  }
  puVar4 = (undefined4 *)FUN_ram_4819bf88();
  *puVar4 = 9;
  return 0xffffffff;
}


