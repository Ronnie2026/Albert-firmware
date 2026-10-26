/* Firmware entry: 0x481379bc */

void FUN_ram_481379bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481392ee();
  DAT_ram_4ff6e18c = param_2;
  DAT_ram_4ff6e190 = param_1;
  iVar1 = FUN_ram_4814e4a8(&DAT_ram_4ff6e188,0x40);
  if (iVar1 == 0) {
    FUN_ram_4814e6b6(&DAT_ram_481d7978,FUN_ram_48137604,0,0xe00,0x12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x291,"tcpip_init",
                   "failed to create tcpip_thread mbox");
}


