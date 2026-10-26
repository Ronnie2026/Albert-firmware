/* Firmware entry: 0x4800e2ac */

undefined4 FUN_ram_4800e2ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)FUN_ram_4800dd52(param_2);
  if (puVar1 == (uint *)0x0) {
    *param_1 = 2;
  }
  else {
    uVar2 = FUN_ram_4800d4f6(puVar1,param_2);
    if ((*(undefined4 **)(puVar1[1] + 0x2c) != (undefined4 *)0x0) &&
       (UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined4 **)(puVar1[1] + 0x2c),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
      if ((*puVar1 & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4800e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE_00)(puVar1[2],uVar2,param_3);
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x4800e300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)(uVar2,param_3);
      return uVar2;
    }
    *param_1 = 0x58;
  }
  return 0xffffffff;
}


