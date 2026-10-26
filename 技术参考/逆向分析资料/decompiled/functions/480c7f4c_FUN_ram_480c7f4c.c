/* Firmware entry: 0x480c7f4c */

void FUN_ram_480c7f4c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_c4 [43];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 1) {
    param_1[0xa4] = 0;
    uVar3 = FUN_ram_48025ba6();
    FUN_ram_480c70d0(param_1,uVar3);
    iVar2 = *param_1;
    FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
    puVar7 = (undefined4 *)(iVar2 + 0xb38);
    puVar6 = local_c4;
    do {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar7 != (undefined4 *)(iVar2 + 0xbd8));
    *puVar6 = *puVar7;
    FUN_ram_4ff3ee10(iVar2 + 0xb18);
    FUN_ram_4809ec88(param_1,local_c4);
  }
  else {
    iVar2 = FUN_ram_48025ba6();
    param_1[0x86] = iVar2;
    *(undefined1 *)((int)param_1 + 0x247) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    if (param_2 == 4) {
      *(undefined1 *)((int)param_1 + 0x24e) = 0;
    }
    if (param_1[0x7d] + 1 == 0) {
      iVar2 = param_1[0x7e];
      param_1[0x7d] = 1;
    }
    else {
      iVar2 = param_1[0x7e];
      param_1[0x7d] = param_1[0x7d] + 1;
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar1 = *param_1;
    param_1[0x7e] = iVar2;
    FUN_ram_4ff3ec14(iVar1 + 0xb18,0xffffffff);
    puVar7 = (undefined4 *)(iVar1 + 0xb38);
    puVar6 = local_c4;
    do {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar7 != (undefined4 *)(iVar1 + 0xbd8));
    *puVar6 = *puVar7;
    FUN_ram_4ff3ee10(iVar1 + 0xb18);
    FUN_ram_480c7da6(param_1,local_c4);
    iVar2 = *param_1;
    FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
    puVar7 = (undefined4 *)(iVar2 + 0xb38);
    puVar6 = local_c4;
    do {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar7 != (undefined4 *)(iVar2 + 0xbd8));
    *puVar6 = *puVar7;
    FUN_ram_4ff3ee10(iVar2 + 0xb18);
    FUN_ram_4809ec88(param_1,local_c4);
  }
  return;
}


