/* Firmware entry: 0x4800d35c */

void FUN_ram_4800d35c(int param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    piVar2 = &DAT_ram_4ff5a02c;
    iVar1 = 0;
    do {
      if ((((iVar1 < 8) && (*piVar2 != 0)) &&
          (iVar3 = *(int *)(*(int *)(*piVar2 + 4) + 0x34), iVar3 != 0)) &&
         ((pcVar4 = *(code **)(iVar3 + 0x14), pcVar4 != (code *)0x0 && (*param_2 != '\0')))) {
        (*pcVar4)(*param_3);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 0x1c;
    } while (iVar1 != param_1);
    return;
  }
  return;
}


