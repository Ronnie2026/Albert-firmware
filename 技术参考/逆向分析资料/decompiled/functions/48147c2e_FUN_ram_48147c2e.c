/* Firmware entry: 0x48147c2e */

void FUN_ram_48147c2e(int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/icmp6.c",0x18a,
                     "icmp6_send_response_with_addrs_and_netif","pbuf is NULL");
  }
  uVar5 = *(ushort *)(param_1 + 8);
  if (0x4d0 < uVar5) {
    uVar5 = 0x4d0;
  }
  iVar3 = FUN_ram_4813ad9a(0x36,uVar5 + 8,0x280);
  if (iVar3 != 0) {
    if (7 < *(ushort *)(iVar3 + 10)) {
      puVar1 = *(undefined1 **)(iVar3 + 4);
      *puVar1 = param_4;
      puVar1[1] = param_2;
      uVar4 = FUN_ram_48137fd6(param_3);
      puVar1[7] = (char)((uint)uVar4 >> 0x18);
      puVar1[4] = (char)uVar4;
      puVar1[5] = (char)((uint)uVar4 >> 8);
      puVar1[6] = (char)((uint)uVar4 >> 0x10);
      FUN_ram_4813b1ae(iVar3,param_1,uVar5,8);
      uVar2 = *(undefined2 *)(iVar3 + 8);
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar2 = FUN_ram_481519fc(iVar3,0x3a,uVar2,param_5,param_6);
      puVar1[2] = (char)uVar2;
      puVar1[3] = (char)((ushort)uVar2 >> 8);
      FUN_ram_48149080(iVar3,param_5,param_6,0xff,0,0x3a,param_7);
      FUN_ram_4813ac74(iVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/icmp6.c",0x195,
                     "icmp6_send_response_with_addrs_and_netif",
                     "check that first pbuf can hold icmp6 header");
  }
  return;
}


