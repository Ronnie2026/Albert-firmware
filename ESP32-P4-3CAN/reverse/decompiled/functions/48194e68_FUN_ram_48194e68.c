/* Firmware entry: 0x48194e68 */

void FUN_ram_48194e68(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = thunk_FUN_ram_4ff2070c(param_1);
    if (iVar1 != 0) {
      return;
    }
    pcVar2 = (code *)FUN_ram_48194e58();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  puVar3 = (undefined4 *)FUN_ram_48195ee0(4);
  *puVar3 = &PTR_FUN_ram_481951d8_ram_4823adc0;
                    /* WARNING: Subroutine does not return */
  FUN_ram_48195eec(puVar3,&PTR_PTR_ram_4823acec,FUN_ram_481951d8);
}


