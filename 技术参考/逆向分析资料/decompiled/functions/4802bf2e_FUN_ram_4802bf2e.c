/* Firmware entry: 0x4802bf2e */

int FUN_ram_4802bf2e(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = (**(code **)(*param_2 + 8))(param_2,param_1);
  pcVar4 = *(code **)(*param_1 + 0xc);
  if (pcVar4 == FUN_ram_4802b9f2) {
    iVar2 = (**(code **)(*param_1 + 8))(param_1,0xd);
    iVar3 = (**(code **)(*param_1 + 8))(param_1,10);
    return iVar3 + iVar2 + iVar1;
  }
  iVar2 = (*pcVar4)(param_1,"\r\n",2);
  return iVar2 + iVar1;
}


