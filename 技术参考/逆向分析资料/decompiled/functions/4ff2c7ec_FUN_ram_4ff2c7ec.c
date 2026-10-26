/* Firmware entry: 0x4ff2c7ec */

void FUN_ram_4ff2c7ec(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int aiStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45788();
  iVar2 = (**(code **)PTR_PTR_ram_4ff53080)(param_1);
  if (iVar2 == 0) {
    if ((iVar1 == 0) ||
       (pcVar4 = *(code **)(param_1[1] + 0x60), piVar3 = param_1, pcVar4 == (code *)0x0)) {
      pcVar4 = *(code **)(*(int *)*param_1 + 8);
      piVar3 = (int *)*param_1;
    }
    iVar1 = (*pcVar4)(piVar3,param_2);
    if ((((param_3 != 0) && (iVar1 == 0)) && (iVar1 = (*pcVar4)(piVar3,aiStack_24), iVar1 == 0)) &&
       (*param_2 != aiStack_24[0])) {
      iVar1 = 0x6003;
    }
    (**(code **)(PTR_PTR_ram_4ff53080 + 4))(param_1,iVar1);
    return;
  }
  return;
}


