/* Firmware entry: 0x481a7972 */

void FUN_ram_481a7972(int param_1)

{
  int iVar1;
  int iStack_18;
  int aiStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ceca();
  while ((iVar1 = FUN_ram_4ff3e7ea(0), param_1 == iVar1 ||
         (iVar1 = FUN_ram_4ff3e7ea(1), param_1 == iVar1))) {
    FUN_ram_4ff3ef0e();
  }
  FUN_ram_4ff3c10a(param_1);
  iVar1 = FUN_ram_4ff3c666(param_1,aiStack_14,&iStack_18);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("idf_additions.c",0x85,"prvTaskDeleteWithCaps",
                     "xResult == ( ( BaseType_t ) 1 )");
  }
  if (aiStack_14[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("idf_additions.c",0x86,"prvTaskDeleteWithCaps","puxStackBuffer != ((void *)0)")
    ;
  }
  if (iStack_18 != 0) {
    FUN_ram_4ff209c6();
    thunk_FUN_ram_4ff209c6(iStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("idf_additions.c",0x87,"prvTaskDeleteWithCaps","pxTaskBuffer != ((void *)0)");
}


