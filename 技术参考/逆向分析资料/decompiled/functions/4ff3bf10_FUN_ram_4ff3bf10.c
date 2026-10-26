/* Firmware entry: 0x4ff3bf10 */

void FUN_ram_4ff3bf10(int param_1)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3f0aa();
  FUN_ram_4819be8c(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x15d);
  if (cVar1 == '\0') {
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x30));
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x1348,"prvDeleteTCB",
                     "pxTCB->ucStaticallyAllocated == ( ( uint8_t ) 2 )");
  }
  thunk_FUN_ram_4ff209c6(param_1);
  return;
}


