/* Firmware entry: 0x48133e18 */

void FUN_ram_48133e18(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e17c == 0) {
    FUN_ram_48006190(param_1,0);
    DAT_ram_4ff6e178 = 1;
  }
  else if (DAT_ram_4ff6e17c == 1) {
    FUN_ram_4819bfe2(&local_40,0);
    uVar3 = *param_1 * 1000000;
    uVar2 = param_1[2] + uVar3;
    uVar4 = iStack_38 + local_40 * 1000000;
    uVar5 = uVar2 - uVar4;
    iVar1 = (((uint)(uVar2 < uVar3) +
             param_1[1] * 1000000 + (int)((ulonglong)*param_1 * 1000000 >> 0x20) +
             ((int)param_1[2] >> 0x1f)) -
            ((uint)(uVar4 < local_40 * 1000000) +
            iStack_3c * 1000000 + (int)((ulonglong)local_40 * 1000000 >> 0x20) + (iStack_38 >> 0x1f)
            )) - (uint)(uVar2 < uVar5);
    uStack_30 = __divdi3(uVar5,iVar1,1000000,0);
    uStack_28 = __moddi3(uVar5,iVar1,1000000,0);
    iVar1 = FUN_ram_48005f34(&uStack_30,0);
    if (iVar1 == -1) {
      FUN_ram_48006190(param_1,0);
      DAT_ram_4ff6e178 = 1;
    }
    else {
      DAT_ram_4ff6e178 = 2;
    }
  }
  if (DAT_ram_4ff6e174 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x48133e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_ram_4ff6e174)(param_1);
  return;
}


