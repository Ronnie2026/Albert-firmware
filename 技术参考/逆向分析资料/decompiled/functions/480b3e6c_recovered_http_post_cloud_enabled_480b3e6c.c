/* Firmware entry: 0x480b3e6c */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_cloud_enabled_480b3e6c(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_2bc [16];
  undefined4 local_2ac [161];
  int iStack_28;
  undefined1 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dcc8 == (undefined4 *)0x0) || (DAT_ram_4ff6dcc4 == 0)) {
    FUN_ram_4808cb66(0x1f7,"resource_error");
    return;
  }
  FUN_ram_4802a8a8(local_2ac,"enabled");
  iVar4 = FUN_ram_4802b18e(local_2ac,"plain");
  iVar1 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar3 = 0;
      do {
        iVar5 = FUN_ram_4802b18e(local_2ac,*puVar2);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(auStack_2bc,*(undefined4 *)(iVar1 + (iVar6 * 0x3a8 + uVar3) * 8 + 0xcc8))
          ;
          goto LAB_ram_480b3f74;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar3 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_2bc,&DAT_ram_481df390);
  }
  else {
    puVar8 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_2bc,puVar8,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_480b3f74:
  FUN_ram_4802a59e(local_2ac);
  iVar6 = FUN_ram_4802b18e(auStack_2bc,"0");
  if ((iVar6 == 0) && (iVar6 = FUN_ram_4802b18e(auStack_2bc,"1"), iVar6 == 0)) {
    FUN_ram_4808cb66(400,"invalid_enabled");
    FUN_ram_4802a59e(auStack_2bc);
  }
  else {
    puVar11 = local_2ac;
    puVar2 = DAT_ram_4ff6dcc8;
    do {
      uVar13 = puVar2[1];
      uVar12 = puVar2[2];
      uVar7 = puVar2[3];
      uVar9 = puVar2[4];
      uVar10 = puVar2[5];
      *puVar11 = *puVar2;
      puVar11[1] = uVar13;
      puVar11[2] = uVar12;
      puVar11[3] = uVar7;
      puVar11[4] = uVar9;
      puVar11[5] = uVar10;
      puVar2 = puVar2 + 6;
      puVar11 = puVar11 + 6;
    } while (puVar2 != DAT_ram_4ff6dcc8 + 0xa2);
    *puVar11 = *puVar2;
    uStack_22 = FUN_ram_4802b18e(auStack_2bc,"1");
    iStack_28 = iStack_28 + 1;
    if (iStack_28 == 0) {
      iStack_28 = 1;
    }
    FUN_ram_480b3b14(local_2ac);
    FUN_ram_4802a59e(auStack_2bc);
  }
  return;
}


