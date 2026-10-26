/* Firmware entry: 0x4800ee72 */

undefined4 FUN_ram_4800ee72(uint param_1)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x10) {
    puVar1 = (undefined4 *)FUN_ram_4819bf88();
    *puVar1 = 0x58;
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)FUN_ram_4819bf88();
  *puVar1 = 9;
  return 0xffffffff;
}


