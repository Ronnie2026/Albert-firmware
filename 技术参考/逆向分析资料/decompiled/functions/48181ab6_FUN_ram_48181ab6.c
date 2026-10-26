/* Firmware entry: 0x48181ab6 */

int FUN_ram_48181ab6(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != 0) {
    puVar6 = param_2 + param_4;
    iVar1 = 0;
    do {
      uVar5 = *param_2;
      uVar4 = *param_3;
      param_2 = param_2 + 1;
      uVar2 = iVar1 + uVar5;
      uVar3 = uVar4 + uVar2;
      *param_1 = uVar3;
      iVar1 = (uint)(uVar2 < uVar5) + (uint)(uVar3 < uVar4);
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != puVar6);
    return iVar1;
  }
  return 0;
}


