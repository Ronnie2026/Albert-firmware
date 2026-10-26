/* Firmware entry: 0x4800e00e */

undefined4 FUN_ram_4800e00e(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 0x40) {
    if (((uint)(int)(char)(&DAT_ram_4ff483a1)[param_2 * 3] < 8) &&
       (puVar2 = (uint *)(&DAT_ram_4ff5a02c)[(char)(&DAT_ram_4ff483a1)[param_2 * 3]],
       puVar2 != (uint *)0x0)) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(puVar2[1] + 8);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        *param_1 = 0x58;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0xffffffff;
      }
      if ((*puVar2 & 2) == 0) {
                    /* WARNING: Could not emulate address calculation at 0x4800e03c */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE_00)((&DAT_ram_4ff483a2)[param_2 * 3],param_3,param_4);
        return uVar1;
      }
                    /* WARNING: Could not emulate address calculation at 0x4800e03c */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(puVar2[2],(&DAT_ram_4ff483a2)[param_2 * 3]);
      return uVar1;
    }
  }
  *param_1 = 9;
  return 0xffffffff;
}


