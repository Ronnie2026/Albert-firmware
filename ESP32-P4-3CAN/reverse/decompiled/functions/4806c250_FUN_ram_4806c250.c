/* Firmware entry: 0x4806c250 */

int FUN_ram_4806c250(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 local_60 [4];
  char *apcStack_50 [4];
  int aiStack_40 [4];
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(local_60,"fsdConfigRevision");
  iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar8 + 0x1cc4) != 0) {
    puVar2 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar4 = FUN_ram_4802b18e(local_60,*puVar2);
      if (iVar4 != 0) {
        FUN_ram_4802a8a8(apcStack_50,"fsdConfigRevision");
        iVar5 = FUN_ram_4802b18e(apcStack_50,"plain");
        iVar4 = DAT_ram_4ff5cbe8;
        iVar8 = DAT_ram_4ff5cbdc;
        if ((iVar5 == 0) ||
           (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0'))
        {
          iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar5 + 0x1cc4) == 0) goto LAB_ram_4806c4ae;
          puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
          uVar3 = 0;
          goto LAB_ram_4806c334;
        }
        puVar7 = *(undefined1 **)(iVar5 + 0x43c);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(aiStack_40,puVar7,*(undefined4 *)(iVar5 + 0x438));
        goto LAB_ram_4806c362;
      }
      puVar2 = puVar2 + 2;
    } while (uVar3 < *(uint *)(iVar8 + 0x1cc4));
  }
  FUN_ram_4802a59e(local_60);
  goto LAB_ram_4806c3ac;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar5 + 0x1cc4) <= uVar3) break;
LAB_ram_4806c334:
    iVar6 = FUN_ram_4802b18e(apcStack_50,*puVar2);
    if (iVar6 != 0) {
      FUN_ram_4802a8a8(aiStack_40,*(undefined4 *)(iVar4 + (iVar8 * 0x3a8 + uVar3) * 8 + 0xcc8));
      goto LAB_ram_4806c362;
    }
  }
LAB_ram_4806c4ae:
  FUN_ram_4802a8a8(aiStack_40,&DAT_ram_481df390);
LAB_ram_4806c362:
  FUN_ram_4802aa44(&iStack_30,DAT_ram_4ff47ea4,10);
  iVar8 = FUN_ram_4802b13e(aiStack_40,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a59e(aiStack_40);
  FUN_ram_4802a59e(apcStack_50);
  FUN_ram_4802a59e(local_60);
  if (iVar8 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar8;
  }
LAB_ram_4806c3ac:
  iVar4 = DAT_ram_4ff5cbe8;
  iVar8 = DAT_ram_4ff5cbdc;
  apcStack_50[0] = "{\"ok\":false,\"error\":\"fsd_config_stale\"}";
  local_60[0] = 0x199;
  aiStack_40[0] = 0x27;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar5 = 0x27;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(local_60,apcStack_50,aiStack_40);
      DAT_ram_4ff5cbc8 = '\0';
      iVar5 = aiStack_40[0];
      if (aiStack_40[0] == 0) {
        iVar5 = 1;
      }
    }
    iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
    iVar6 = iVar4 + iVar8 * 0x1d40;
    *(int *)(iVar6 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar6 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar4 + iVar8 * 0x1d40 + 0x1c,7);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    }
    else {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar5,apcStack_50[0],aiStack_40[0]);
        iVar5 = *(int *)(iVar6 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_30 + 0x44c) != '\0') && (*(char *)(iStack_30 + 0x44c) != '\x06')) {
        *(int *)(iStack_30 + 0x1ce0) = iVar5;
        *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
        *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,local_60[0],"application/json",iStack_30,
                         &LAB_ram_4802d3f2);
      }
    }
  }
  return 0;
}


