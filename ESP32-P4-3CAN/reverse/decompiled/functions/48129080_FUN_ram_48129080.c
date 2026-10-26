/* Firmware entry: 0x48129080 */

undefined1 * FUN_ram_48129080(void)

{
  undefined1 auStack_18 [3];
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6c1c4 != '\0') {
    return &DAT_ram_4ff6c1c4;
  }
  FUN_ram_481333bc(auStack_18);
  FUN_ram_4819ad74(&DAT_ram_4ff6c1c4,0x20,"%s%02X%02X%02X","esp32p4-",uStack_15,uStack_14,uStack_13)
  ;
  return &DAT_ram_4ff6c1c4;
}


