/* Firmware entry: 0x4813a6fc */

void FUN_ram_4813a6fc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x61d,
                     "netif_create_ip6_linklocal_address",
                     "netif_create_ip6_linklocal_address: invalid netif");
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80fe;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar1 = 0;
    uVar6 = 3;
    do {
      if ((uint)*(byte *)(param_1 + 0xe6) <= (uVar1 & 0xff)) break;
      if (uVar1 == 4) {
        uVar6 = uVar6 - 1 & 0xff;
      }
      uVar2 = FUN_ram_48137fd6((uint)*(byte *)((*(byte *)(param_1 + 0xe6) - uVar1) + param_1 + 0xdf)
                               << ((uVar1 & 3) << 3));
      iVar5 = uVar6 * 4 + param_1;
      uVar1 = uVar1 + 1;
      *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) | uVar2;
    } while (uVar1 != 8);
  }
  else {
    uVar3 = FUN_ram_48137fd6((uint)*(byte *)(param_1 + 0xe1) << 0x10 |
                             (uint)*(byte *)(param_1 + 0xe2) << 8 |
                             (*(byte *)(param_1 + 0xe0) ^ 2) << 0x18 | 0xff);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar3 = FUN_ram_48137fd6((uint)*(byte *)(param_1 + 0xe3) << 0x10 |
                             (uint)*(byte *)(param_1 + 0xe4) << 8 | (uint)*(byte *)(param_1 + 0xe5)
                             | 0xfe000000);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  cVar4 = '\0';
  if ((*(uint *)(param_1 + 0x4c) & 0xc0ff) == 0x80fe) {
    cVar4 = *(char *)(param_1 + 0xea) + '\x01';
  }
  *(char *)(param_1 + 0x5c) = cVar4;
  FUN_ram_4813a504(param_1,0,8);
  return;
}


