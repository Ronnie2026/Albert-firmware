/* Firmware entry: 0x481774d2 */

int FUN_ram_481774d2(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_a2;
  undefined4 extraout_a2_00;
  undefined4 uVar5;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  int iStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  int *piStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piStack_24 = (int *)param_1[1];
  uStack_28 = *param_1;
  iVar2 = FUN_ram_481774c4(&uStack_28);
  piVar6 = (int *)0;
  if (iVar2 - 2U < 3) {
    piVar6 = piStack_24;
  }
  uStack_28 = *param_1;
  piStack_24 = (int *)param_1[1];
  uVar1 = 0x4817750a;
  uVar7 = FUN_ram_481774c4(&uStack_28);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  puVar3 = (undefined4 *)((int)uVar7 - 2);
  uVar5 = extraout_a2;
  if (puVar3 < (undefined4 *)0x3) {
    if (*piStack_24 != 0) {
      uStack_28 = *param_1;
      piStack_24 = (int *)param_1[1];
      uVar1 = 0x48177526;
      uVar7 = FUN_ram_481774c4(&uStack_28);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar3 = (undefined4 *)((int)uVar7 - 2);
      uVar5 = extraout_a2_00;
      if ((undefined4 *)0x2 < puVar3) goto LAB_ram_4817755c;
      if (*piStack_24 != param_2) {
        return -0x3d00;
      }
    }
    iVar2 = FUN_ram_48176468(piVar6,param_2);
    return iVar2;
  }
LAB_ram_4817755c:
  ebreak();
  puStack_44 = (undefined4 *)puVar3[1];
  uStack_48 = *puVar3;
  iStack_3c = param_2;
  puStack_38 = param_1;
  uStack_34 = uVar1;
  iVar2 = FUN_ram_481774c4(&uStack_48);
  if (2 < iVar2 - 2U) {
    ebreak();
    iVar2 = *(int *)(iVar2 + 2);
    iVar2 = FUN_ram_4817460e(iVar2,iVar2 + 0x68,iVar2 + 0x60,iVar2 + 0x1c,extraout_a3,extraout_a4);
    return iVar2;
  }
  iVar2 = FUN_ram_48175224(*puStack_44,puStack_44,uVar4,uVar5);
  if (iVar2 == 0) {
    return 0;
  }
  return iVar2 + -0x3d00;
}


