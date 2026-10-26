/* Firmware entry: 0x481466dc */

void FUN_ram_481466dc(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = 0x1c;
  if (*(ushort *)(param_1 + 8) < 0x1d) {
    uVar2 = *(ushort *)(param_1 + 8);
  }
  iVar5 = FUN_ram_4813ad9a(0x36,uVar2 + 8,0x280);
  if (iVar5 != 0) {
    if (*(ushort *)(iVar5 + 10) < (ushort)(uVar2 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/icmp.c",0x16d,"icmp_send_response",
                       "check that first pbuf can hold icmp message");
    }
    puVar1 = *(undefined1 **)(iVar5 + 4);
    iVar3 = *(int *)(param_1 + 4);
    *puVar1 = 3;
    puVar1[1] = param_2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_ram_4813b1ae(iVar5,param_1,uVar2,8);
    uStack_28 = *(undefined4 *)(iVar3 + 0xc);
    auStack_24[0] = *(undefined4 *)(iVar3 + 0x10);
    iVar3 = FUN_ram_481470f4(auStack_24,&uStack_28);
    if (iVar3 != 0) {
      uVar4 = *(undefined2 *)(iVar5 + 10);
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar4 = FUN_ram_48151aa6(puVar1,uVar4);
      puVar1[2] = (char)uVar4;
      puVar1[3] = (char)((ushort)uVar4 >> 8);
      FUN_ram_48147772(iVar5,0,&uStack_28,0x40,0,1,iVar3);
    }
    FUN_ram_4813ac74(iVar5);
  }
  return;
}


