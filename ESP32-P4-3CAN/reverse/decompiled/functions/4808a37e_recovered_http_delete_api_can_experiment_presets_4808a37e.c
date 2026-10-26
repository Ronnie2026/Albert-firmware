/* Firmware entry: 0x4808a37e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_delete_api_can_experiment_presets_4808a37e(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uStack_48;
  char *pcStack_44;
  int aiStack_40 [4];
  undefined8 uStack_30;
  int iStack_28;
  byte bStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6ded0 != (code *)0x0) &&
     (iVar4 = (*DAT_ram_4ff6ded0)(), iVar8 = DAT_ram_4ff6ded8, iVar4 == 0)) {
    aiStack_40[0] = 0x2e;
    iVar4 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
    iVar5 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
    pcStack_44 = "{\"ok\":false,\"error\":\"can_experiment_quiesced\"}";
    uStack_48 = 0x199;
    cVar1 = *(char *)(iVar4 * 0x1d40 + iVar5 + 0x44c);
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '\x06') {
      return;
    }
    puVar2 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
    iVar10 = 0x2e;
    if (((code *)*puVar2 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
      *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
      (*(code *)*puVar2)(&uStack_48,&pcStack_44,aiStack_40);
      *(undefined1 *)(iVar8 + 0x2c) = 0;
      iVar10 = aiStack_40[0];
      if (aiStack_40[0] == 0) {
        iVar10 = 1;
      }
    }
    iVar10 = FUN_ram_4ff206d8(iVar10,0x404);
    iVar4 = iVar4 * 0x1d40;
    iVar9 = iVar5 + iVar4;
    *(int *)(iVar9 + 0x1cdc) = iVar10;
    if (iVar10 != 0) {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar10,pcStack_44,aiStack_40[0]);
        iVar10 = *(int *)(iVar9 + 0x1cdc);
      }
      uStack_30._0_4_ = (char *)(*(int *)(iVar8 + 0x4c) + *(int *)(iVar8 + 0x40) * 0x1d40);
      if ((*(char *)((int)(char *)uStack_30 + 0x44c) != '\0') &&
         (*(char *)((int)(char *)uStack_30 + 0x44c) != '\x06')) {
        *(int *)((int)(char *)uStack_30 + 0x1ce0) = iVar10;
        *(int *)((int)(char *)uStack_30 + 0x1ce4) = aiStack_40[0];
        *(undefined4 *)((int)(char *)uStack_30 + 0x1ce8) = 0;
        uStack_30._4_4_ = &LAB_ram_4802d3f2;
        FUN_ram_48066484(iVar8,uStack_48,"application/json",(char *)uStack_30,&LAB_ram_4802d3f2);
        return;
      }
      return;
    }
    if (*(char *)(iVar9 + 0x44c) != '\0') {
      FUN_ram_48065e9c(iVar5 + iVar4 + 0x1c,7);
      return;
    }
    return;
  }
  FUN_ram_4802a8a8(aiStack_40,&DAT_ram_481c7a3c);
  iVar4 = *(int *)(DAT_ram_4ff6ded8 + 0x40) * 0x1d40;
  iVar8 = *(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar4;
  if (*(int *)(iVar8 + 0x1cc4) != 0) {
    puVar2 = (undefined4 *)(*(int *)(DAT_ram_4ff6ded8 + 0x4c) + iVar4 + 0xcc4);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar5 = FUN_ram_4802b18e(aiStack_40,*puVar2);
      iVar4 = DAT_ram_4ff6ded8;
      if (iVar5 != 0) {
        iVar8 = FUN_ram_4802b18e(aiStack_40,"plain");
        if ((iVar8 == 0) ||
           (iVar8 = *(int *)(iVar4 + 0x4c) + *(int *)(iVar4 + 0x40) * 0x1d40,
           *(char *)(iVar8 + 0xcc2) == '\0')) {
          iVar5 = *(int *)(iVar4 + 0x40);
          iVar8 = iVar5 * 0x1d40;
          iVar10 = *(int *)(iVar4 + 0x4c);
          iVar4 = iVar10 + iVar8;
          if (*(int *)(iVar4 + 0x1cc4) == 0) goto LAB_ram_4808a67e;
          puVar2 = (undefined4 *)(iVar8 + 0xcc4 + iVar10);
          uVar3 = 0;
          goto LAB_ram_4808a5ee;
        }
        puVar7 = *(undefined1 **)(iVar8 + 0x43c);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(&uStack_30,puVar7,*(undefined4 *)(iVar8 + 0x438));
        goto joined_r0x4808a620;
      }
      puVar2 = puVar2 + 2;
    } while (uVar3 < *(uint *)(iVar8 + 0x1cc4));
  }
  FUN_ram_4802a59e(aiStack_40);
  goto LAB_ram_4808a59c;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar4 + 0x1cc4) <= uVar3) break;
LAB_ram_4808a5ee:
    iVar8 = FUN_ram_4802b18e(aiStack_40,*puVar2);
    if (iVar8 != 0) {
      FUN_ram_4802a8a8(&uStack_30,*(undefined4 *)(iVar10 + (iVar5 * 0x3a8 + uVar3) * 8 + 0xcc8));
      goto joined_r0x4808a620;
    }
  }
LAB_ram_4808a67e:
  FUN_ram_4802a8a8(&uStack_30,&DAT_ram_481df390);
joined_r0x4808a620:
  if ((char)bStack_21 < '\0') {
    uStack_30._0_4_ = (char *)&uStack_30;
    if ((bStack_21 & 0x7f) != 0) goto LAB_ram_4808a44e;
  }
  else if (((char *)uStack_30 != (char *)0x0) && (iStack_28 != 0)) {
LAB_ram_4808a44e:
    pcStack_44 = (char *)0x0;
    uVar6 = strtoul((char *)uStack_30,&pcStack_44,10);
    if ((pcStack_44 != (char *)0x0) && ((*pcStack_44 == '\0' && (uVar6 < 8)))) {
      FUN_ram_4802a59e(&uStack_30);
      FUN_ram_4802a59e(aiStack_40);
      uVar11 = FUN_ram_48085fb4(DAT_ram_4ff6ded4,uVar6 & 0xff);
      if ((uVar11 & 0xff) != 0) {
        uStack_30 = uVar11;
        FUN_ram_48089eac(uVar6 & 0xff,&uStack_30);
        return;
      }
      uStack_30._1_1_ = (undefined1)(uVar11 >> 8);
      FUN_ram_4808999a(0x199,uStack_30._1_1_,0);
      uStack_30 = uVar11;
      return;
    }
  }
  FUN_ram_4802a59e(&uStack_30);
  FUN_ram_4802a59e(aiStack_40);
LAB_ram_4808a59c:
  FUN_ram_4808999a(400,0x12,0);
  return;
}


