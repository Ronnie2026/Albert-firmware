/* Firmware entry: 0x4813985e */

void FUN_ram_4813985e(int param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  char cStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  char cStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  char cStack_3c;
  int aiStack_38 [5];
  undefined1 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    param_2 = &DAT_ram_48236f9c;
    if (param_3 != (int *)0x0) goto LAB_ram_4813987a;
LAB_ram_48139918:
    param_3 = &DAT_ram_48236f9c;
    if (param_4 != (int *)0x0) goto LAB_ram_4813987e;
LAB_ram_48139924:
    param_4 = &DAT_ram_48236f9c;
    bVar1 = false;
    if (*param_2 == 0) goto LAB_ram_48139934;
LAB_ram_48139886:
    uVar9 = 0;
    iVar7 = *param_3;
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(param_1 + 0x34);
    uVar8 = uVar9;
    bVar3 = bVar1;
    if (iVar7 != iVar6) goto LAB_ram_48139892;
LAB_ram_481399a8:
    iVar6 = *param_4;
    if (iVar5 != iVar6) goto LAB_ram_481398c4;
    puVar2 = DAT_ram_4ff6e1b0;
    if (bVar1) {
      if (uVar9 == 0) {
        return;
      }
      uVar10 = 0x90;
      goto joined_r0x481398fa;
    }
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 == *param_2) {
      uVar10 = (-(uint)(uVar9 == 0) & 0xffffff70) + 0x490;
      goto joined_r0x481398fa;
    }
    uVar9 = 0x90;
LAB_ram_48139a48:
    aiStack_38[0] = *param_2;
    cStack_3c = *(char *)(param_1 + 0x18);
    uStack_24 = 0;
    if (cStack_3c == '\x06') {
      uStack_4c = *(undefined4 *)(param_1 + 8);
      uStack_48 = *(undefined4 *)(param_1 + 0xc);
      uStack_44 = *(undefined4 *)(param_1 + 0x10);
      uStack_40 = *(undefined1 *)(param_1 + 0x14);
    }
    else {
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_40 = 0;
    }
    iStack_50 = iVar5;
    FUN_ram_4813d1fe(&iStack_50,aiStack_38);
    FUN_ram_481435c4(&iStack_50,aiStack_38);
    FUN_ram_4813be48(&iStack_50,aiStack_38);
    FUN_ram_4814e9b8(param_1,&iStack_50,aiStack_38);
    iVar5 = *param_2;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 4) = iVar5;
    FUN_ram_481397ec(param_1,1);
    piStack_8c = &iStack_50;
  }
  else {
    if (param_3 == (int *)0x0) goto LAB_ram_48139918;
LAB_ram_4813987a:
    if (param_4 == (int *)0x0) goto LAB_ram_48139924;
LAB_ram_4813987e:
    bVar1 = false;
    if (*param_2 != 0) goto LAB_ram_48139886;
LAB_ram_48139934:
    bVar1 = true;
    if (*(int *)(param_1 + 4) == 0) goto LAB_ram_48139886;
    cStack_3c = *(char *)(param_1 + 0x18);
    aiStack_38[0] = 0;
    uStack_24 = 0;
    if (cStack_3c == '\x06') {
      uStack_4c = *(undefined4 *)(param_1 + 8);
      uStack_48 = *(undefined4 *)(param_1 + 0xc);
      uStack_44 = *(undefined4 *)(param_1 + 0x10);
      uStack_40 = *(undefined1 *)(param_1 + 0x14);
    }
    else {
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_40 = 0;
    }
    iStack_50 = *(int *)(param_1 + 4);
    FUN_ram_4813d1fe(&iStack_50,aiStack_38);
    FUN_ram_481435c4(&iStack_50,aiStack_38);
    FUN_ram_4813be48(&iStack_50,aiStack_38);
    FUN_ram_4814e9b8(param_1,&iStack_50,aiStack_38);
    iVar5 = *param_2;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 4) = iVar5;
    FUN_ram_481397ec(param_1,1);
    iVar7 = *param_3;
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(param_1 + 0x34);
    bVar1 = true;
    uVar8 = 0x10;
    uVar9 = 0x10;
    bVar3 = true;
    piStack_8c = &iStack_50;
    if (iVar7 == iVar6) goto LAB_ram_481399a8;
LAB_ram_48139892:
    bVar1 = bVar3;
    cStack_6c = *(char *)(param_1 + 0x30);
    iStack_80 = iVar6;
    if (cStack_6c != '\x06') {
      *(int *)(param_1 + 0x1c) = iVar7;
      *(undefined1 *)(param_1 + 0x30) = 0;
      iVar6 = *param_4;
      uStack_74 = 0;
      uStack_78 = 0;
      uStack_7c = 0;
      uStack_70 = 0;
      if (iVar5 == iVar6) goto LAB_ram_481399f6;
LAB_ram_481398c0:
      piStack_88 = &iStack_80;
      uVar9 = uVar8 | 0x40;
LAB_ram_481398c4:
      cStack_54 = *(char *)(param_1 + 0x48);
      if (cStack_54 == '\x06') {
        uStack_5c = *(undefined4 *)(param_1 + 0x40);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        uStack_58 = *(undefined1 *)(param_1 + 0x44);
        *(int *)(param_1 + 0x34) = iVar6;
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      else {
        uStack_5c = 0;
        uStack_60 = 0;
        uStack_64 = 0;
        uStack_58 = 0;
        *(int *)(param_1 + 0x34) = iVar6;
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      uVar10 = uVar9 | 0xa0;
      piStack_84 = &iStack_68;
      puVar2 = DAT_ram_4ff6e1b0;
      iStack_68 = iVar5;
      if (bVar1) goto joined_r0x481398fa;
      piStack_84 = &iStack_68;
      iVar5 = *(int *)(param_1 + 4);
      uVar10 = uVar9 | 0x4a0;
      if (iVar5 == *param_2) goto joined_r0x481398fa;
      uVar9 = uVar9 | 0xb0;
      goto LAB_ram_48139a48;
    }
    uStack_74 = *(undefined4 *)(param_1 + 0x28);
    uStack_7c = *(undefined4 *)(param_1 + 0x20);
    uStack_78 = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x1c) = iVar7;
    uStack_70 = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x30) = 0;
    iVar6 = *param_4;
    if (iVar5 != iVar6) goto LAB_ram_481398c0;
LAB_ram_481399f6:
    piStack_88 = &iStack_80;
    uVar10 = uVar8 | 0xc0;
    puVar2 = DAT_ram_4ff6e1b0;
    if (bVar1) goto joined_r0x481398fa;
    iVar5 = *(int *)(param_1 + 4);
    uVar9 = uVar8 | 0xc0;
    if (*param_2 != iVar5) {
      uVar9 = 0xd0;
      goto LAB_ram_48139a48;
    }
  }
  uVar10 = uVar9 | 0x400;
  puVar2 = DAT_ram_4ff6e1b0;
joined_r0x481398fa:
  while (puVar2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar2[1];
    (*(code *)*puVar2)(param_1,uVar10,&piStack_8c);
    puVar2 = puVar4;
  }
  return;
}


