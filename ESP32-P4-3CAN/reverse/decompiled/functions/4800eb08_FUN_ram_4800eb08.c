/* Firmware entry: 0x4800eb08 */

undefined4 FUN_ram_4800eb08(uint param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x40) {
    if (((uint)(int)(char)(&DAT_ram_4ff483a1)[param_1 * 3] < 8) &&
       (puVar2 = (uint *)(&DAT_ram_4ff5a02c)[(char)(&DAT_ram_4ff483a1)[param_1 * 3]],
       puVar2 != (uint *)0x0)) {
      uVar1 = (&DAT_ram_4ff483a2)[param_1 * 3];
      puVar3 = (undefined4 *)FUN_ram_4ff3e8de();
      if ((*(int *)(puVar2[1] + 0x30) != 0) &&
         (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(puVar2[1] + 0x30) + 4),
         UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
        if ((*puVar2 & 2) != 0) {
                    /* WARNING: Could not emulate address calculation at 0x4800eb38 */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*UNRECOVERED_JUMPTABLE_00)(puVar2[2],uVar1,param_2);
          return uVar4;
        }
                    /* WARNING: Could not emulate address calculation at 0x4800eb38 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar1,param_2);
        return uVar4;
      }
      *puVar3 = 0x58;
      return 0xffffffff;
    }
  }
  puVar3 = (undefined4 *)FUN_ram_4ff3e8de();
  *puVar3 = 9;
  return 0xffffffff;
}


