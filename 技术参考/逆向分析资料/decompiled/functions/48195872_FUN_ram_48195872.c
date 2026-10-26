/* Firmware entry: 0x48195872 */

undefined * FUN_ram_48195872(void)

{
  undefined *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e2d8 != '\0') {
    puVar1 = (undefined *)FUN_ram_48006872(DAT_ram_4ff6e2d4);
    return puVar1;
  }
  return &DAT_ram_4ff6e2dc;
}


