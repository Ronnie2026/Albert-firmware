/* Firmware entry: 0x4802176a */

undefined4 FUN_ram_4802176a(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4819ab6a(10);
  uVar1 = FUN_ram_4ff45080(1,0x800);
  FUN_ram_4ff3dd40();
  FUN_ram_4819aaa0("%s: Run Time Stats:\n%s\n","esp_cli",uVar1);
  thunk_FUN_ram_4ff209c6(uVar1);
  return 0;
}


