/* Firmware entry: 0x481a7c88 */

void FUN_ram_481a7c88(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3ad64(param_1,auStack_14,&uStack_18);
  if (iVar1 == 1) {
    FUN_ram_4ff3ba8e(param_1);
    FUN_ram_4ff209c6(uStack_18);
    FUN_ram_4ff209c6(auStack_14[0]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("idf_additions.c",0x112,"vQueueDeleteWithCaps","xResult == ( ( BaseType_t ) 1 )")
  ;
}


