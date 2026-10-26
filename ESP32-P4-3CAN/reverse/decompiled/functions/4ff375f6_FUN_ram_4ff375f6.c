/* Firmware entry: 0x4ff375f6 */

void FUN_ram_4ff375f6(void)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = 0x500c2000;
  local_20 = 1;
  FUN_ram_4fc00208(&local_20);
  FUN_ram_4fc00214(&local_20);
  FUN_ram_4fc0020c(&local_20);
  uStack_18 = 2;
  uStack_14 = 0x500c3000;
  FUN_ram_4fc00208(&uStack_18);
  FUN_ram_4fc00214(&uStack_18);
  FUN_ram_4fc0020c(&uStack_18);
  return;
}


