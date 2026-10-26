/* Firmware entry: 0x4819e7ee */

undefined4 FUN_ram_4819e7ee(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_3;
  for (iVar3 = iVar2; iVar3 <= param_1; iVar3 = iVar3 + 1) {
    puVar4 = (undefined4 *)*param_2;
    *param_2 = (int)(puVar4 + 1);
    *(undefined4 *)(iVar3 * 4 + param_4) = *puVar4;
  }
  iVar3 = 0;
  if (iVar2 <= param_1 + 1) {
    iVar3 = (param_1 + 1) - iVar2;
  }
  uVar1 = *(undefined4 *)(param_4 + param_1 * 4);
  *param_3 = iVar3 + iVar2;
  return uVar1;
}


