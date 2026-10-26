/* Firmware entry: 0x48181d88 */

void FUN_ram_48181d88(int *param_1,int *param_2,int *param_3,undefined4 param_4,uint *param_5,
                     int param_6,int param_7,uint *param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_8,0,param_6 * 8 + 4);
  if (param_6 == 0) {
    uVar6 = *param_8;
    iVar2 = 0;
  }
  else {
    puVar1 = param_8;
    iVar2 = 0;
    do {
      iVar10 = iVar2;
      iVar4 = *param_2;
      iVar2 = *param_3;
      uVar6 = *puVar1;
      param_2 = param_2 + 1;
      FUN_ram_48181b68(puVar1,param_6 + 2,param_3,param_4,iVar4);
      FUN_ram_48181b68(puVar1,param_6 + 2,param_5,param_6,(iVar4 * iVar2 + uVar6) * param_7);
      iVar2 = iVar10 + 1;
      puVar1 = puVar1 + 1;
    } while (param_6 != iVar2);
    puVar1 = param_8 + iVar10;
    iVar2 = param_6 * 4;
    param_8 = puVar1 + 1;
    uVar6 = param_8[param_6];
    puVar9 = param_5 + param_6;
    iVar4 = 4 - (int)param_5;
    uVar8 = 0;
    piVar5 = param_1;
    do {
      uVar3 = *(uint *)((int)param_5 + (int)puVar1 + iVar4);
      uVar7 = *param_5;
      param_5 = param_5 + 1;
      uVar11 = uVar3 - uVar8;
      *piVar5 = uVar11 - uVar7;
      uVar8 = (uint)(uVar3 < uVar8) + (uint)(uVar11 < uVar7);
      piVar5 = piVar5 + 1;
    } while (puVar9 != param_5);
    uVar6 = uVar6 ^ uVar8;
  }
  FUN_ram_4817248c((int)(-(uVar6 >> 1) | -uVar6) >> 0x1f,param_1,param_8,0,iVar2);
  return;
}


