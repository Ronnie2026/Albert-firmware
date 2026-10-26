/* Firmware entry: 0x4802b9f2 */

int FUN_ram_4802b9f2(int *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    puVar4 = param_2 + param_3;
    iVar3 = 0;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar2 = (**(code **)(*param_1 + 8))(param_1,uVar1);
      iVar3 = iVar3 + iVar2;
    } while (puVar4 != param_2);
    return iVar3;
  }
  return 0;
}


