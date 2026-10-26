/* Firmware entry: 0x48180316 */

undefined4 FUN_ram_48180316(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar9 = param_2;
  if (((param_1 != param_3) && (piVar9 = param_3, param_1 != param_2)) &&
     (iVar4 = FUN_ram_4817fe72(), iVar4 != 0)) {
    return 0xfffffff0;
  }
  uVar2 = (uint)*(ushort *)((int)piVar9 + 6);
  *(undefined2 *)(param_1 + 1) = 1;
  if (uVar2 == 0) {
    return 0;
  }
  iVar4 = *piVar9 + uVar2 * 4;
  while (piVar1 = (int *)(iVar4 + -4), iVar4 = iVar4 + -4, *piVar1 == 0) {
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) {
      return 0;
    }
  }
  iVar4 = FUN_ram_4817fbba(param_1,uVar2);
  if (iVar4 != 0) {
    return 0xfffffff0;
  }
  iVar4 = *param_1;
  iVar5 = FUN_ram_48181ab6(iVar4,iVar4,*piVar9,uVar2);
  puVar6 = (uint *)(iVar4 + uVar2 * 4);
  if (iVar5 == 0) {
    return 0;
  }
  while( true ) {
    while (uVar3 = uVar2 + 1, uVar2 < *(ushort *)((int)param_1 + 6)) {
      uVar8 = *puVar6;
      uVar7 = uVar8 + iVar5;
      *puVar6 = uVar7;
      iVar5 = 1;
      uVar2 = uVar3;
      puVar6 = puVar6 + 1;
      if (uVar8 <= uVar7) {
        return 0;
      }
    }
    iVar4 = FUN_ram_4817fbba(param_1,uVar3);
    if (iVar4 != 0) break;
    puVar6 = (uint *)(*param_1 + uVar2 * 4);
    uVar8 = *puVar6;
    uVar7 = uVar8 + iVar5;
    *puVar6 = uVar7;
    iVar5 = 1;
    uVar2 = uVar3;
    puVar6 = puVar6 + 1;
    if (uVar8 <= uVar7) {
      return 0;
    }
  }
  return 0xfffffff0;
}


