/* Firmware entry: 0x4800ee28 */

undefined4 FUN_ram_4800ee28(uint param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 0x10) && ((DAT_ram_4ff6db2c >> ((param_1 & 0xf) << 1) & 3) != 0)) {
    if (param_3 < 3) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    puVar1 = (undefined4 *)FUN_ram_4819bf88(0);
    *puVar1 = 0x16;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)FUN_ram_4819bf88();
  *puVar1 = 9;
  return 0xffffffff;
}


