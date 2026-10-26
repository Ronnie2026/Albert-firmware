/* Firmware entry: 0x4802bbe6 */

int FUN_ram_4802bbe6(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar4 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + 0xc);
  sVar3 = strlen(param_2);
  if (UNRECOVERED_JUMPTABLE == FUN_ram_4802b9f2) {
    iVar2 = 0;
    if (sVar3 != 0) {
      pcVar5 = param_2 + sVar3;
      iVar2 = 0;
      while( true ) {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        iVar4 = (**(code **)(iVar4 + 8))(param_1,cVar1);
        iVar2 = iVar2 + iVar4;
        if (pcVar5 == param_2) break;
        iVar4 = *param_1;
      }
    }
    return iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x4802bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (*UNRECOVERED_JUMPTABLE)
                    (param_1,param_2,sVar3,extraout_a3,extraout_a4,UNRECOVERED_JUMPTABLE);
  return iVar4;
}


