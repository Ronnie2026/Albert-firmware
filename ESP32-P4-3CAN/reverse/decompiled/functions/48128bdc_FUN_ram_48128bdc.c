/* Firmware entry: 0x48128bdc */

void FUN_ram_48128bdc(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  puVar8 = *(undefined4 **)(param_1 + 0x14);
  iVar5 = (int)puVar8 - (int)puVar1;
  if (0 < iVar5 >> 7) {
    puVar2 = puVar1 + (iVar5 >> 7) * 0x20;
    do {
      if ((param_2 == puVar1[6]) && (param_3 == puVar1[7])) goto joined_r0x48128d52;
      if ((param_2 == puVar1[0xe]) && (param_3 == puVar1[0xf])) {
        puVar1 = puVar1 + 8;
        goto joined_r0x48128d52;
      }
      if ((param_2 == puVar1[0x16]) && (param_3 == puVar1[0x17])) {
        puVar1 = puVar1 + 0x10;
        goto joined_r0x48128d52;
      }
      if ((param_2 == puVar1[0x1e]) && (param_3 == puVar1[0x1f])) {
        puVar1 = puVar1 + 0x18;
        goto joined_r0x48128d52;
      }
      puVar1 = puVar1 + 0x20;
    } while (puVar1 != puVar2);
    iVar5 = (int)puVar8 - (int)puVar1;
  }
  iVar5 = iVar5 >> 5;
  if (iVar5 == 2) {
LAB_ram_48128d74:
    if (param_2 == puVar1[6]) {
      if (param_3 == puVar1[7]) goto joined_r0x48128d52;
      puVar1 = puVar1 + 8;
    }
    else {
      puVar1 = puVar1 + 8;
    }
  }
  else {
    if (iVar5 == 3) {
      if (param_2 == puVar1[6]) {
        if (param_3 == puVar1[7]) goto joined_r0x48128d52;
        puVar1 = puVar1 + 8;
      }
      else {
        puVar1 = puVar1 + 8;
      }
      goto LAB_ram_48128d74;
    }
    if (iVar5 != 1) {
      return;
    }
  }
  if (param_2 != puVar1[6]) {
    return;
  }
  if (param_3 != puVar1[7]) {
    return;
  }
joined_r0x48128d52:
  if (puVar8 == puVar1) {
    return;
  }
  puVar3 = puVar1 + 8;
  puVar2 = puVar1;
  if (puVar8 != puVar3) {
    do {
      while ((param_2 != puVar3[6] || (param_3 != puVar3[7]))) {
        uVar4 = puVar3[1];
        uVar6 = puVar3[5];
        iVar5 = puVar3[4];
        *puVar1 = *puVar3;
        puVar1[1] = uVar4;
        uStack_30 = 0;
        uStack_2c = 0;
        pcStack_28 = (code *)0x0;
        if (iVar5 != 0) {
          uStack_30 = puVar3[2];
          uStack_2c = puVar3[3];
          puVar3[4] = 0;
          puVar3[5] = 0;
          pcStack_28 = (code *)iVar5;
        }
        uVar4 = puVar1[3];
        uVar9 = puVar1[2];
        puVar1[2] = uStack_30;
        puVar1[3] = uStack_2c;
        pcVar7 = (code *)puVar1[4];
        uStack_24 = puVar1[5];
        puVar1[4] = pcStack_28;
        puVar1[5] = uVar6;
        uStack_30 = uVar9;
        uStack_2c = uVar4;
        pcStack_28 = pcVar7;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(&uStack_30,&uStack_30,3);
        }
        puVar2 = puVar3 + 6;
        uVar4 = puVar3[7];
        puVar3 = puVar3 + 8;
        puVar1[6] = *puVar2;
        puVar1[7] = uVar4;
        puVar1 = puVar1 + 8;
        if (puVar8 == puVar3) goto LAB_ram_48128d00;
      }
      puVar3 = puVar3 + 8;
    } while (puVar8 != puVar3);
LAB_ram_48128d00:
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    puVar2 = puVar1;
    if (puVar1 == puVar3) {
      return;
    }
  }
  do {
    if ((code *)puVar1[4] != (code *)0x0) {
      (*(code *)puVar1[4])(puVar1 + 2,puVar1 + 2,3);
    }
    puVar1 = puVar1 + 8;
  } while (puVar1 != puVar3);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  return;
}


