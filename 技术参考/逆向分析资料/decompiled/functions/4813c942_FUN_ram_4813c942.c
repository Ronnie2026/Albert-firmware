/* Firmware entry: 0x4813c942 */

uint FUN_ram_4813c942(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8f3,"tcp_eff_send_mss_netif",
                     "tcp_eff_send_mss_netif: invalid dst_ip");
  }
  if (*(char *)(param_3 + 0x14) == '\x06') {
    uVar2 = FUN_ram_4814c63e(param_3);
    if (uVar2 == 0) {
      return param_1;
    }
    if (*(char *)(param_3 + 0x14) == '\x06') {
      uVar1 = 0x3c;
      goto LAB_ram_4813c976;
    }
  }
  else {
    if (param_2 == 0) {
      return param_1;
    }
    uVar2 = (uint)*(ushort *)(param_2 + 0xdc);
    if (uVar2 == 0) {
      return param_1;
    }
  }
  uVar1 = 0x28;
LAB_ram_4813c976:
  if (uVar2 <= uVar1) {
    return 0;
  }
  if ((uVar2 - uVar1 & 0xffff) <= param_1) {
    param_1 = uVar2 - uVar1;
  }
  return param_1 & 0xffff;
}


