/* Firmware entry: 0x4817fcd0 */

undefined4 FUN_ram_4817fcd0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != param_2) {
    uVar4 = -(param_3 >> 1) | -param_3;
    iVar5 = FUN_ram_4817fbba(param_1,*(undefined2 *)((int)param_2 + 6));
    if ((iVar5 == 0) &&
       (iVar5 = FUN_ram_4817fbba(param_2,*(undefined2 *)((int)param_1 + 6)), iVar5 == 0)) {
      sVar1 = *(short *)(param_1 + 1);
      uVar3 = (ushort)((int)uVar4 >> 0x1f);
      *(ushort *)(param_1 + 1) = (*(short *)(param_2 + 1) + 1U & uVar3 | ~uVar3 & sVar1 + 1U) - 1;
      uVar6 = *param_1;
      uVar2 = *(undefined2 *)((int)param_1 + 6);
      *(ushort *)(param_2 + 1) = (*(short *)(param_2 + 1) + 1U & ~uVar3 | sVar1 + 1U & uVar3) - 1;
      FUN_ram_48181712(uVar6,*param_2,uVar2,(int)uVar4 >> 0x1f);
      uVar6 = 0;
    }
    else {
      uVar6 = 0xfffffff0;
    }
    return uVar6;
  }
  return 0;
}


