/* Firmware entry: 0x481457ba */

undefined4
FUN_ram_481457ba(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined4 param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x468,"etharp_raw",
                     "netif != NULL");
  }
  iVar8 = FUN_ram_4813ad9a(0xe,0x1c,0x280);
  if (iVar8 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    if (*(ushort *)(iVar8 + 10) < 0x1c) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x473,"etharp_raw",
                       "check that first pbuf can hold struct etharp_hdr");
    }
    puVar6 = *(undefined1 **)(iVar8 + 4);
    uVar7 = FUN_ram_48137fc8(param_8);
    puVar6[7] = (char)((ushort)uVar7 >> 8);
    puVar6[6] = (char)uVar7;
    if (*(char *)(param_1 + 0xe6) != '\x06') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x47a,"etharp_raw",
                       "netif->hwaddr_len must be the same as ETH_HWADDR_LEN for etharp!");
    }
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    uVar5 = param_4[5];
    puVar6[8] = *param_4;
    puVar6[9] = uVar1;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    puVar6[0xc] = uVar4;
    puVar6[0xd] = uVar5;
    uVar1 = param_6[1];
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    uVar4 = param_6[4];
    uVar5 = param_6[5];
    puVar6[0x12] = *param_6;
    puVar6[0x13] = uVar1;
    puVar6[0x14] = uVar2;
    puVar6[0x15] = uVar3;
    puVar6[0x16] = uVar4;
    puVar6[0x17] = uVar5;
    uVar1 = param_5[2];
    uVar2 = param_5[3];
    uVar3 = *param_5;
    puVar6[0xf] = param_5[1];
    puVar6[0x10] = uVar1;
    puVar6[0x11] = uVar2;
    puVar6[0xe] = uVar3;
    uVar1 = *param_7;
    uVar2 = param_7[1];
    uVar3 = param_7[2];
    puVar6[0x1b] = param_7[3];
    puVar6[0x18] = uVar1;
    puVar6[0x19] = uVar2;
    puVar6[0x1a] = uVar3;
    puVar6[4] = 6;
    puVar6[1] = 1;
    puVar6[2] = 8;
    puVar6[5] = 4;
    *puVar6 = 0;
    puVar6[3] = 0;
    FUN_ram_4814ca06(param_1,iVar8,param_2,param_3,0x806);
    FUN_ram_4813ac74(iVar8);
    uVar9 = 0;
  }
  return uVar9;
}


