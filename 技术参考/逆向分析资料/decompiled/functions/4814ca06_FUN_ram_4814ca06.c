/* Firmware entry: 0x4814ca06 */

undefined4
FUN_ram_4814ca06(int param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar6 = FUN_ram_48137fc8(param_5);
  iVar7 = FUN_ram_4813aab0(param_2,0xe);
  if (iVar7 != 0) {
    return 0xfffffffe;
  }
  puVar9 = *(undefined1 **)(param_2 + 4);
  puVar9[0xc] = (char)uVar6;
  puVar9[0xd] = (char)((ushort)uVar6 >> 8);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar4 = param_4[4];
  uVar5 = param_4[5];
  *puVar9 = *param_4;
  puVar9[1] = uVar1;
  puVar9[5] = uVar5;
  puVar9[2] = uVar2;
  puVar9[3] = uVar3;
  puVar9[4] = uVar4;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  puVar9[6] = *param_3;
  puVar9[7] = uVar1;
  puVar9[8] = uVar2;
  puVar9[9] = uVar3;
  puVar9[10] = uVar4;
  puVar9[0xb] = uVar5;
  if (*(char *)(param_1 + 0xe6) == '\x06') {
                    /* WARNING: Could not recover jumptable at 0x4814cac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(param_1 + 0xb8))(param_1,param_2);
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/netif/ethernet.c",0x13a,"ethernet_output",
                   "netif->hwaddr_len must be 6 for ethernet_output!");
}


