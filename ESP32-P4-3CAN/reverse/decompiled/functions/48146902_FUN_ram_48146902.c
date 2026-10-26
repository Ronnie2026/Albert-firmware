/* Firmware entry: 0x48146902 */

void FUN_ram_48146902(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_28 = DAT_ram_48236f9c;
  iVar3 = FUN_ram_4813ad9a(0x4a,8,0x280);
  if (iVar3 != 0) {
    puVar1 = *(undefined1 **)(iVar3 + 4);
    if (*(ushort *)(iVar3 + 10) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/igmp.c",0x329,"igmp_send",
                       "igmp_send: check that first pbuf can hold struct igmp_msg");
    }
    uStack_28 = *(undefined4 *)(param_1 + 4);
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar4 = (undefined1)((uint)uVar7 >> 8);
    uVar5 = (undefined1)((uint)uVar7 >> 0x10);
    uVar6 = (undefined1)((uint)uVar7 >> 0x18);
    if (param_3 == 0x16) {
      puVar1[4] = (char)uVar7;
      puVar1[5] = uVar4;
      puVar1[6] = uVar5;
      puVar1[7] = uVar6;
      *(undefined1 *)(param_2 + 8) = 1;
      puVar8 = (undefined4 *)(param_2 + 4);
    }
    else {
      puVar1[4] = (char)uVar7;
      puVar1[5] = uVar4;
      puVar1[6] = uVar5;
      puVar1[7] = uVar6;
      puVar8 = &DAT_ram_4ff6e21c;
    }
    *puVar1 = (char)param_3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = FUN_ram_48151aa6(puVar1,8);
    puVar1[2] = (char)uVar2;
    puVar1[3] = (char)((ushort)uVar2 >> 8);
    auStack_24[0] = 0x494;
    FUN_ram_48147746(iVar3,&uStack_28,puVar8,1,0,2,param_1,auStack_24,4);
    FUN_ram_4813ac74(iVar3);
  }
  return;
}


