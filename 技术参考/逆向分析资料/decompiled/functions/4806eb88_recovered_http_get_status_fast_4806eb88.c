/* Firmware entry: 0x4806eb88 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_status_fast_4806eb88(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uStack_88;
  char *pcStack_84;
  uint uStack_80;
  undefined1 *puStack_7c;
  int iStack_70;
  undefined1 *puStack_6c;
  undefined4 local_60 [2];
  int aiStack_58 [10];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = FUN_ram_48025ba6();
  uVar12 = FUN_ram_4ff21a0a();
  local_60[0] = 0;
  local_60[1] = 0;
  aiStack_58[0] = 0;
  aiStack_58[1] = 0;
  aiStack_58[2] = 0;
  aiStack_58[3] = 0;
  aiStack_58[4] = 0;
  aiStack_58[5] = 0;
  aiStack_58[6] = 0;
  aiStack_58[7] = 0;
  aiStack_58[8] = 0;
  fence();
  if ((DAT_ram_4ff6dd28 == '\0') && (iVar3 = FUN_ram_480069b2(&DAT_ram_4ff6dd28), iVar3 != 0)) {
    FUN_ram_4802a8a8(&DAT_ram_4ff5c474,&DAT_ram_481df390);
    FUN_ram_481974a0(FUN_ram_4802a59e,&DAT_ram_4ff5c474,&DAT_ram_4ff6daac);
    FUN_ram_48006bca(&DAT_ram_4ff6dd28);
  }
  if (DAT_ram_4ff6dd24 == '\0') {
    iVar3 = FUN_ram_4802a79a(&DAT_ram_4ff5c474,0x200);
    DAT_ram_4ff6dd24 = (char)iVar3;
    if (iVar3 == 0) goto LAB_ram_4806ebea;
  }
  iVar3 = FUN_ram_48039cfc(&DAT_ram_4ff5c474);
  if (iVar3 != 0) {
    if ((char)DAT_ram_4ff5c483 < '\0') {
      uVar5 = DAT_ram_4ff5c483 & 0x7f;
    }
    else {
      uVar5 = 0;
      if (DAT_ram_4ff5c474 != (char *)0x0) {
        uVar5 = DAT_ram_4ff5c47c;
      }
    }
    iVar4 = FUN_ram_4ff21a0a();
    iVar6 = DAT_ram_4ff5cbe8;
    iVar3 = DAT_ram_4ff5cbdc;
    aiStack_58[1] = iVar4 - (int)uVar12;
    local_60[1] = uVar2;
    puVar9 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x1d00);
    aiStack_58[4] = uVar5;
    uStack_30 = uVar12;
    uStack_28 = 0;
    uStack_24 = 0;
    aiStack_58[0] = CONCAT31(aiStack_58[0]._1_3_,1);
    puVar7 = local_60;
    do {
      uVar11 = *puVar7;
      uVar10 = puVar7[1];
      uVar2 = puVar7[2];
      puVar9[3] = puVar7[3];
      *puVar9 = uVar11;
      puVar9[1] = uVar10;
      puVar9[2] = uVar2;
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar7 != (undefined4 *)&stack0xffffffe0);
    iVar6 = iVar6 + iVar3 * 0x1d40;
    *(undefined1 *)(iVar6 + 0x1cf4) = 1;
    uVar12 = FUN_ram_4ff21a0a();
    *(undefined8 *)(iVar6 + 0x1d38) = uVar12;
    *(undefined1 *)(iVar6 + 0x1d09) = 1;
    *(undefined1 *)(iVar6 + 0x1d26) = 1;
    FUN_ram_4802a8a8(&uStack_80,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_70,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&uStack_80,&iStack_70);
    FUN_ram_4802a59e(&iStack_70);
    FUN_ram_4802a59e(&uStack_80);
    iVar6 = DAT_ram_4ff5cbe8;
    iVar3 = DAT_ram_4ff5cbdc;
    if ((char)DAT_ram_4ff5c483 < '\0') {
      uStack_80 = DAT_ram_4ff5c483 & 0x7f;
      pcStack_84 = (char *)&DAT_ram_4ff5c474;
    }
    else {
      uStack_80 = DAT_ram_4ff5c47c;
      pcStack_84 = DAT_ram_4ff5c474;
      if (DAT_ram_4ff5c474 == (char *)0x0) {
        uStack_80 = 0;
      }
    }
    uStack_88 = 200;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '\x06') {
      return;
    }
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_88,&pcStack_84,&uStack_80);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar5 = uStack_80;
    if (uStack_80 == 0) {
      uVar5 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(uVar5,0x404);
    iVar8 = iVar6 + iVar3 * 0x1d40;
    *(int *)(iVar8 + 0x1cdc) = iVar4;
    if (iVar4 != 0) {
      if (uStack_80 != 0) {
        FUN_ram_4ff45158(iVar4,pcStack_84,uStack_80);
        iVar4 = *(int *)(iVar8 + 0x1cdc);
      }
      iStack_70 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(char *)(iStack_70 + 0x44c) == '\0') {
        return;
      }
      if (*(char *)(iStack_70 + 0x44c) == '\x06') {
        return;
      }
      *(int *)(iStack_70 + 0x1ce0) = iVar4;
      *(uint *)(iStack_70 + 0x1ce4) = uStack_80;
      *(undefined4 *)(iStack_70 + 0x1ce8) = 0;
      puStack_6c = &LAB_ram_4802d3f2;
      FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_88,"application/json",iStack_70,&LAB_ram_4802d3f2);
      return;
    }
    if (*(char *)(iVar8 + 0x44c) == '\0') {
      return;
    }
    FUN_ram_48065e9c(iVar6 + iVar3 * 0x1d40 + 0x1c,7);
    return;
  }
LAB_ram_4806ebea:
  iVar6 = DAT_ram_4ff5cbe8;
  iVar3 = DAT_ram_4ff5cbdc;
  pcStack_84 = "{\"ok\":false,\"error\":\"status_fast_buffer_unavailable\"}";
  uStack_88 = 0x1f7;
  iStack_70 = 0x35;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iVar4 = 0x35;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_88,&pcStack_84,&iStack_70);
      DAT_ram_4ff5cbc8 = '\0';
      iVar4 = iStack_70;
      if (iStack_70 == 0) {
        iVar4 = 1;
      }
    }
    iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
    iVar8 = iVar6 + iVar3 * 0x1d40;
    *(int *)(iVar8 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar8 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar6 + iVar3 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (iStack_70 != 0) {
        FUN_ram_4ff45158(iVar4,pcStack_84,iStack_70);
        iVar4 = *(int *)(iVar8 + 0x1cdc);
      }
      uStack_80 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(uStack_80 + 0x44c) != '\0') && (*(char *)(uStack_80 + 0x44c) != '\x06')) {
        *(int *)(uStack_80 + 0x1ce0) = iVar4;
        *(int *)(uStack_80 + 0x1ce4) = iStack_70;
        *(undefined4 *)(uStack_80 + 0x1ce8) = 0;
        puStack_7c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_88,"application/json",uStack_80,&LAB_ram_4802d3f2)
        ;
      }
    }
  }
  return;
}


