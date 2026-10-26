/* Firmware entry: 0x4800e518 */

undefined4 FUN_ram_4800e518(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)FUN_ram_4800dd52();
  puVar2 = (undefined4 *)FUN_ram_4ff3e8de();
  if (puVar1 == (uint *)0x0) {
    *puVar2 = 2;
  }
  else {
    uVar3 = FUN_ram_4800d4f6(puVar1,param_1);
    if ((*(int *)(puVar1[1] + 0x2c) != 0) &&
       (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(puVar1[1] + 0x2c) + 0x30),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
      if ((*puVar1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4800e564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)(puVar1[2],uVar3,param_2);
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x4800e574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar3,param_2);
      return uVar3;
    }
    *puVar2 = 0x58;
  }
  return 0xffffffff;
}


