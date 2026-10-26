/* Firmware entry: 0x4800e460 */

undefined4 FUN_ram_4800e460(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)FUN_ram_4800dd52(param_2);
  if (puVar1 == (uint *)0x0) {
    *param_1 = 2;
  }
  else {
    uVar5 = *puVar1;
    if ((uVar5 & 4) == 0) {
      puVar2 = (uint *)FUN_ram_4800dd52(param_3);
      if (puVar1 == puVar2) {
        uVar3 = FUN_ram_4800d4f6(puVar2,param_2);
        uVar4 = FUN_ram_4800d4f6(puVar1,param_3);
        if ((*(int *)(puVar1[1] + 0x2c) != 0) &&
           (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(puVar1[1] + 0x2c) + 0xc),
           UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
          if ((uVar5 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4800e4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*UNRECOVERED_JUMPTABLE_00)(puVar1[2],uVar3,uVar4);
            return uVar3;
          }
                    /* WARNING: Could not recover jumptable at 0x4800e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar3,uVar4,uVar4);
          return uVar3;
        }
        *param_1 = 0x58;
      }
      else {
        *param_1 = 0x12;
      }
    }
    else {
      *param_1 = 0x1e;
    }
  }
  return 0xffffffff;
}


