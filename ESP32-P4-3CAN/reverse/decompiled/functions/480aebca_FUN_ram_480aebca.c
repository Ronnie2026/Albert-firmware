/* Firmware entry: 0x480aebca */

void FUN_ram_480aebca(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = (undefined1 *)param_1[1];
  iVar5 = *param_1;
  uVar4 = (int)puVar3 - iVar5;
  if (param_2 <= uVar4) {
    if ((param_2 < uVar4) && ((undefined1 *)(iVar5 + param_2) != puVar3)) {
      param_1[1] = (int)(iVar5 + param_2);
    }
    return;
  }
  uVar6 = param_2 - uVar4;
  if (uVar6 <= (uint)(param_1[2] - (int)puVar3)) {
    *puVar3 = 0;
    puVar7 = puVar3 + 1;
    if (uVar6 != 1) {
      puVar7 = puVar3 + uVar6;
      memset(puVar3 + 1,0,uVar6 - 1);
    }
    param_1[1] = (int)puVar7;
    return;
  }
  if (0x7fffffff - uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_481950f0("vector::_M_default_append");
  }
  uVar8 = uVar6;
  if (uVar6 < uVar4) {
    uVar8 = uVar4;
  }
  uVar9 = uVar8 + uVar4;
  if (0x7fffffff < uVar8 + uVar4) {
    uVar9 = 0x7fffffff;
  }
  iVar1 = FUN_ram_48194e68(uVar9);
  *(undefined1 *)(iVar1 + uVar4) = 0;
  if (uVar6 != 1) {
    memset((undefined1 *)(iVar1 + uVar4) + 1,0,uVar6 - 1);
  }
  if (uVar4 == 0) {
    if (iVar5 == 0) goto LAB_ram_480aec66;
    iVar2 = param_1[2] - iVar5;
  }
  else {
    FUN_ram_4ff45158(iVar1,iVar5,uVar4);
    iVar2 = param_1[2] - iVar5;
  }
  thunk_FUN_ram_4ff209c6(iVar5,iVar2);
LAB_ram_480aec66:
  param_1[1] = param_2 + iVar1;
  param_1[2] = uVar9 + iVar1;
  *param_1 = iVar1;
  return;
}


