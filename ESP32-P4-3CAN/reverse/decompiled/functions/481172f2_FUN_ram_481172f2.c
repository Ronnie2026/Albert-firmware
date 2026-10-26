/* Firmware entry: 0x481172f2 */

void FUN_ram_481172f2(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_11 [13];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_11[0] = 0;
  iVar1 = FUN_ram_480e0d32(param_1,auStack_11);
  if (iVar1 == 0) {
    return;
  }
  FUN_ram_480af836();
  FUN_ram_4807de80();
  FUN_ram_480ee8e2();
  FUN_ram_480d20b2();
  FUN_ram_48073de0();
  FUN_ram_480f6af8();
  FUN_ram_48116f6a();
  FUN_ram_480cec88();
  recovered_dashboard_register_routes(auStack_11[0]);
  return;
}


