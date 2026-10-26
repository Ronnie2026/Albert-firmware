/* Firmware entry: 0x48155c50 */

void FUN_ram_48155c50(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar9 = *param_1;
  puVar6 = (undefined4 *)param_1[1];
  if (2 < (byte)((char)param_1[4] - 6U)) {
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)();
      puVar6 = (undefined4 *)param_1[1];
    }
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
  }
  if (param_2 == 0) {
    uVar1 = *(undefined1 *)(iVar9 + 5);
    uVar8 = *(byte *)((int)param_1 + 0x12) + 1;
    *(ushort *)((int)param_1 + 0x12) = uVar8 & 0xff | uVar8 * 0x100;
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  if (((code *)puVar6[1] == (code *)0x0) || (puVar6[2] == 0)) {
    iStack_14 = 0;
    uVar4 = 8;
  }
  else {
    iStack_14 = (*(code *)puVar6[1])(param_1);
    uVar4 = (uint)*(ushort *)(iVar9 + 0xd0);
    if (iStack_14 < (int)(uVar4 - 3)) {
      uVar4 = iStack_14 + 8U & 0xffff;
    }
    else {
      iStack_14 = uVar4 - 4;
      uVar4 = uVar4 + 4 & 0xffff;
    }
  }
  iVar3 = FUN_ram_4813ad9a(0,uVar4,0x280);
  if (iVar3 != 0) {
    if (*(short *)(iVar3 + 8) != *(short *)(iVar3 + 10)) {
      FUN_ram_4813ac74();
      return;
    }
    puVar5 = *(undefined1 **)(iVar3 + 4);
    *puVar5 = 0xff;
    puVar5[1] = 3;
    puVar5[2] = (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8);
    uVar2 = *(undefined2 *)((int)param_1 + 0xe);
    puVar5[4] = 1;
    puVar5[3] = (char)uVar2;
    iVar7 = iStack_14 + 4;
    puVar5[5] = *(undefined1 *)((int)param_1 + 0x13);
    puVar5[7] = (char)iVar7;
    puVar5[6] = (char)((uint)iVar7 >> 8);
    if (iStack_14 != 0) {
      (**(code **)(param_1[1] + 8))
                (param_1,puVar5 + 8,&iStack_14,iVar7 >> 8,iVar7,*(code **)(param_1[1] + 8));
      if (*(ushort *)(iVar3 + 10) - 8 != iStack_14) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/netif/ppp/fsm.c",0x2f2,"fsm_sconfreq",
                         "cilen == p->len - HEADERLEN - PPP_HDRLEN");
      }
    }
    FUN_ram_4814cec2(iVar9,iVar3);
    *(char *)(param_1 + 5) = (char)param_1[5] + -1;
    FUN_ram_4814268a(FUN_ram_48156044,param_1);
    FUN_ram_48142636((uint)*(byte *)(iVar9 + 4) * 1000,FUN_ram_48156044,param_1);
  }
  return;
}


