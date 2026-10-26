/* Firmware entry: 0x4800e3d8 */

undefined4 FUN_ram_4800e3d8(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)FUN_ram_4800dd52(param_2);
  if (puVar1 == (uint *)0x0) {
    *param_1 = 2;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 & 4) == 0) {
      uVar2 = FUN_ram_4800d4f6(puVar1,param_2);
      if ((*(int *)(puVar1[1] + 0x2c) != 0) &&
         (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(puVar1[1] + 0x2c) + 8),
         UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
        if ((uVar3 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4800e424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)(puVar1[2],uVar2);
          return uVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x4800e432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar2,uVar2);
        return uVar2;
      }
      *param_1 = 0x58;
    }
    else {
      *param_1 = 0x1e;
    }
  }
  return 0xffffffff;
}


