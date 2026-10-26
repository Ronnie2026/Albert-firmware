/* Firmware entry: 0x48142636 */

void FUN_ram_48142636(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x40000000) {
    iVar1 = thunk_FUN_ram_4ff3c5d4();
    FUN_ram_4814246a(iVar1 + param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/timeouts.c",0x136,"sys_timeout",
                   "Timeout time too long, max is LWIP_UINT32_MAX/4 msecs");
}


