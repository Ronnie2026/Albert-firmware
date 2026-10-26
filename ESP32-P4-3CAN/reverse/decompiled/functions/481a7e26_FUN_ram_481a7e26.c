/* Firmware entry: 0x481a7e26 */

void FUN_ram_481a7e26(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff40024(param_1,auStack_14);
  if (iVar1 == 1) {
    FUN_ram_4ff3ff7a(param_1);
    FUN_ram_4ff209c6(auStack_14[0]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("idf_additions_event_groups.c",0x45,"vEventGroupDeleteWithCaps",
                   "xResult == ( ( BaseType_t ) 1 )");
}


