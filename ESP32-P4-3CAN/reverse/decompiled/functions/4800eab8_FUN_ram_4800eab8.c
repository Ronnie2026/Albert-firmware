/* Firmware entry: 0x4800eab8 */

void FUN_ram_4800eab8(char param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != '\0') {
    FUN_ram_4ff3b3d2(param_2,param_3);
    return;
  }
  if (DAT_ram_4ff6db28 != 0) {
    piVar3 = &DAT_ram_4ff5a02c;
    iVar2 = 0;
    do {
      iVar1 = *piVar3;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (((iVar1 != 0) && (iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x34), iVar1 != 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xc), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x4800eafa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
        return;
      }
    } while (DAT_ram_4ff6db28 != iVar2);
  }
  return;
}


