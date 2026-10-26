/* Firmware entry: 0x48181b30 */

uint FUN_ram_48181b30(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != 0) {
    puVar1 = param_2 + param_4;
    uVar2 = 0;
    do {
      uVar5 = *param_2;
      uVar4 = *param_3;
      param_2 = param_2 + 1;
      uVar3 = uVar5 - uVar2;
      *param_1 = uVar3 - uVar4;
      param_3 = param_3 + 1;
      uVar2 = (uint)(uVar5 < uVar2) + (uint)(uVar3 < uVar4);
      param_1 = param_1 + 1;
    } while (param_2 != puVar1);
    return uVar2;
  }
  return 0;
}


