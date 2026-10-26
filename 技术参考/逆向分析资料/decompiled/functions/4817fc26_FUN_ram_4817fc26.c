/* Firmware entry: 0x4817fc26 */

int FUN_ram_4817fc26(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_4817fbba(param_1,*(undefined2 *)((int)param_2 + 6));
  if (iVar4 == 0) {
    uVar6 = -(param_3 >> 1) | -param_3;
    uVar3 = (int)uVar6 >> 0x1f;
    uVar2 = (ushort)((int)uVar6 >> 0x1f);
    uVar1 = *(undefined2 *)((int)param_2 + 6);
    uVar5 = *param_2;
    *(ushort *)(param_1 + 1) =
         ((short)param_1[1] + 1U & ~uVar2 | *(short *)(param_2 + 1) + 1U & uVar2) - 1;
    FUN_ram_481816e8(*param_1,uVar5,uVar1,uVar3);
    uVar2 = *(ushort *)((int)param_1 + 6);
    if ((uint)*(ushort *)((int)param_2 + 6) < (uint)uVar2) {
      iVar4 = *param_1;
      puVar7 = (uint *)((uint)*(ushort *)((int)param_2 + 6) * 4 + iVar4);
      do {
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar7 & ~uVar3;
        puVar7 = puVar8;
      } while ((uint *)(iVar4 + (uint)uVar2 * 4) != puVar8);
      return 0;
    }
  }
  return iVar4;
}


