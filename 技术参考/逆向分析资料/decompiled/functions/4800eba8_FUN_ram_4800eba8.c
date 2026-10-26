/* Firmware entry: 0x4800eba8 */

undefined4 FUN_ram_4800eba8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  uint *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x40) {
    if (((uint)(int)(char)(&DAT_ram_4ff483a1)[param_1 * 3] < 8) &&
       (puVar4 = (uint *)(&DAT_ram_4ff5a02c)[(char)(&DAT_ram_4ff483a1)[param_1 * 3]],
       puVar4 != (uint *)0x0)) {
      uVar1 = (&DAT_ram_4ff483a2)[param_1 * 3];
      puVar2 = (undefined4 *)FUN_ram_4ff3e8de();
      if ((*(undefined4 **)(puVar4[1] + 0x30) != (undefined4 *)0x0) &&
         (UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined4 **)(puVar4[1] + 0x30),
         UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
        if ((*puVar4 & 2) != 0) {
                    /* WARNING: Could not emulate address calculation at 0x4800ebd8 */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE_00)(puVar4[2],uVar1,param_2,param_3);
          return uVar3;
        }
                    /* WARNING: Could not emulate address calculation at 0x4800ebd8 */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar1,param_2,param_3);
        return uVar3;
      }
      *puVar2 = 0x58;
      return 0xffffffff;
    }
  }
  puVar2 = (undefined4 *)FUN_ram_4ff3e8de();
  *puVar2 = 9;
  return 0xffffffff;
}


