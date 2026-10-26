/* Firmware entry: 0x48147f00 */

void FUN_ram_48147f00(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_ram_4ff6cdb4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6cdb4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/icmp6.c",0x13c,"icmp6_send_response",
                     "icmpv6 packet not a direct response");
  }
  iVar2 = FUN_ram_481482f0(DAT_ram_4ff6cdb4,&DAT_ram_4ff6cdc8);
  if (iVar2 != 0) {
    FUN_ram_48147c2e(param_1,param_2,0,1,iVar2,&DAT_ram_4ff6cdc8,iVar1);
    return;
  }
  return;
}


