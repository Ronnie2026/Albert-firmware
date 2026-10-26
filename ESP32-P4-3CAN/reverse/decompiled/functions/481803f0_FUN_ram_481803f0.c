/* Firmware entry: 0x481803f0 */

undefined4 FUN_ram_481803f0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = (uint)*(ushort *)((int)param_3 + 6);
  if (uVar2 != 0) {
    iVar5 = *param_3 + uVar2 * 4;
    do {
      piVar1 = (int *)(iVar5 + -4);
      iVar5 = iVar5 + -4;
      if (*piVar1 != 0) {
        if (*(ushort *)((int)param_2 + 6) < uVar2) goto LAB_ram_481804d6;
        break;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  iVar5 = FUN_ram_4817fbba(param_1);
  if (iVar5 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xfffffff0;
  }
  uVar6 = (uint)*(ushort *)((int)param_2 + 6);
  if ((uVar2 < uVar6) && (param_2 != param_1)) {
    FUN_ram_4ff45158(*param_1 + uVar2 * 4,uVar2 * 4 + *param_2,(uVar6 - uVar2) * 4);
    uVar6 = (uint)*(ushort *)((int)param_2 + 6);
    uVar4 = (uint)*(ushort *)((int)param_1 + 6);
    if (uVar4 <= uVar6) {
LAB_ram_48180442:
      iVar5 = FUN_ram_48181b30(*param_1,*param_2,*param_3,uVar2);
      goto joined_r0x481804bc;
    }
  }
  else {
    uVar4 = (uint)*(ushort *)((int)param_1 + 6);
    if (uVar4 <= uVar6) goto LAB_ram_48180442;
  }
  memset((void *)(*param_1 + uVar6 * 4),0,(uVar4 - uVar6) * 4);
  iVar5 = FUN_ram_48181b30(*param_1,*param_2,*param_3,uVar2);
joined_r0x481804bc:
  if ((iVar5 == 0) ||
     (iVar3 = *param_1 + uVar2 * 4,
     iVar5 = FUN_ram_4818208a(iVar3,iVar3,iVar5,*(ushort *)((int)param_1 + 6) - uVar2), iVar5 == 0))
  {
    *(undefined2 *)(param_1 + 1) = 1;
    uVar7 = 0;
  }
  else {
LAB_ram_481804d6:
    uVar7 = 0xfffffff6;
  }
  return uVar7;
}


