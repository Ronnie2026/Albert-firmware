/* Firmware entry: 0x4802be74 */

int FUN_ram_4802be74(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  char *pcVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (char *)0x0) {
    iVar2 = *param_1;
    iVar5 = 0;
LAB_ram_4802beca:
    if (*(code **)(iVar2 + 0xc) != FUN_ram_4802b9f2) {
      iVar2 = (**(code **)(iVar2 + 0xc))(param_1,"\r\n",2);
      goto LAB_ram_4802beea;
    }
  }
  else {
    iVar2 = *param_1;
    pcVar6 = *(code **)(iVar2 + 0xc);
    sVar3 = strlen(param_2);
    if (pcVar6 != FUN_ram_4802b9f2) {
      iVar5 = (*pcVar6)(param_1,param_2,sVar3);
      iVar2 = *param_1;
      goto LAB_ram_4802beca;
    }
    if (sVar3 != 0) {
      pcVar7 = param_2 + sVar3;
      iVar5 = 0;
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        iVar4 = (**(code **)(iVar2 + 8))(param_1,cVar1);
        iVar2 = *param_1;
        iVar5 = iVar5 + iVar4;
      } while (pcVar7 != param_2);
      goto LAB_ram_4802beca;
    }
    iVar5 = 0;
  }
  iVar4 = (**(code **)(iVar2 + 8))(param_1,0xd);
  iVar2 = (**(code **)(*param_1 + 8))(param_1,10);
  iVar2 = iVar2 + iVar4;
LAB_ram_4802beea:
  return iVar2 + iVar5;
}


