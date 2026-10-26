/* Firmware entry: 0x480f1e34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_config_ble_obstacle_480f1e34(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 local_1c0 [47];
  undefined4 auStack_104 [4];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined4 local_d4 [29];
  undefined1 uStack_5f;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"ota_busy\"}",0x1f);
    return;
  }
  puVar16 = local_1c0;
  iVar5 = FUN_ram_48067a66();
  if (iVar5 == 0) {
    return;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  uVar1 = DAT_ram_4ff619cd;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  uVar6 = FUN_ram_48036a9a("enabled",uVar1);
  FUN_ram_4802a8a8(auStack_e4,"requestId");
  iVar7 = FUN_ram_4802b18e(auStack_e4,"plain");
  iVar10 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  if (iVar7 == 0) {
LAB_ram_480f2026:
    iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar7 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar17 = 0;
      do {
        iVar9 = FUN_ram_4802b18e(auStack_e4,*puVar2);
        if (iVar9 != 0) {
          FUN_ram_4802a8a8(local_d4,*(undefined4 *)(iVar10 + (iVar5 * 0x3a8 + uVar17) * 8 + 0xcc8));
          goto LAB_ram_480f1f20;
        }
        uVar17 = uVar17 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar17 < *(uint *)(iVar7 + 0x1cc4));
    }
    FUN_ram_4802a8a8(local_d4,&DAT_ram_481df390);
  }
  else {
    iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(char *)(iVar7 + 0xcc2) == '\0') goto LAB_ram_480f2026;
    puVar11 = *(undefined1 **)(iVar7 + 0x43c);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(local_d4,puVar11,*(undefined4 *)(iVar7 + 0x438));
  }
LAB_ram_480f1f20:
  puVar2 = local_d4;
  uVar8 = FUN_ram_4802b91c(puVar2);
  FUN_ram_4802a59e(puVar2);
  FUN_ram_4802a59e(auStack_e4);
  FUN_ram_4802a8a8(auStack_e4,"revision");
  iVar7 = FUN_ram_4802b18e(auStack_e4,"plain");
  iVar10 = DAT_ram_4ff5cbe8;
  iVar5 = DAT_ram_4ff5cbdc;
  if (iVar7 != 0) {
    iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(char *)(iVar7 + 0xcc2) != '\0') {
      puVar11 = *(undefined1 **)(iVar7 + 0x43c);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &DAT_ram_481df390;
      }
      FUN_ram_4802a888(puVar2,puVar11,*(undefined4 *)(iVar7 + 0x438));
      goto LAB_ram_480f1f82;
    }
  }
  iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar7 + 0x1cc4) != 0) {
    puVar3 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
    uVar17 = 0;
    do {
      iVar9 = FUN_ram_4802b18e(auStack_e4,*puVar3);
      if (iVar9 != 0) {
        FUN_ram_4802a8a8(puVar2,*(undefined4 *)(iVar10 + (iVar5 * 0x3a8 + uVar17) * 8 + 0xcc8));
        goto LAB_ram_480f1f82;
      }
      uVar17 = uVar17 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar17 < *(uint *)(iVar7 + 0x1cc4));
  }
  FUN_ram_4802a8a8(puVar2,&DAT_ram_481df390);
LAB_ram_480f1f82:
  iVar5 = FUN_ram_4802b91c(puVar2);
  FUN_ram_4802a59e(puVar2);
  FUN_ram_4802a59e(auStack_e4);
  if (DAT_ram_4ff47ea8 == iVar5) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
    puVar15 = &DAT_ram_4ff61958;
    puVar3 = puVar2;
    do {
      uVar12 = puVar15[1];
      uVar13 = puVar15[2];
      uVar14 = puVar15[3];
      *puVar3 = *puVar15;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar15 = puVar15 + 4;
      puVar3 = puVar3 + 4;
    } while (puVar15 != (undefined4 *)&DAT_ram_4ff619f8);
    *puVar3 = _DAT_ram_4ff619f8;
    FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
    uStack_5f = (char)uVar6;
    do {
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      *puVar16 = *puVar2;
      puVar16[1] = uVar12;
      puVar16[2] = uVar13;
      puVar16[3] = uVar14;
      puVar2 = puVar2 + 4;
      puVar16 = puVar16 + 4;
    } while (puVar2 != &uStack_34);
    *puVar16 = *puVar2;
    FUN_ram_480edbbe(local_1c0);
    DAT_ram_4ff47ea8 = DAT_ram_4ff47ea8 + 1;
    iVar5 = FUN_ram_480ee8aa();
    if (((DAT_ram_4ff6dd78 == '\0') || (iVar10 = FUN_ram_480aecea(), iVar5 == 0)) || (iVar10 == 0))
    {
      FUN_ram_4802a8a8(auStack_104,"{\"ok\":");
      pcVar4 = "false";
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      fence();
      if ((DAT_ram_4ff6de94 & 1) == 0) {
        FUN_ram_4802a8a8(auStack_104,"{\"ok\":");
        pcVar4 = "true";
        iVar5 = 0;
      }
      else {
        FUN_ram_4802a8a8(auStack_104,"{\"ok\":");
        pcVar4 = "true";
        iVar5 = iVar10;
      }
    }
    puVar2 = auStack_104;
    FUN_ram_4802af2c(puVar2,pcVar4);
    FUN_ram_4802a8a8(auStack_e4,",\"requestId\":");
    FUN_ram_4802aa44(auStack_f4,uVar8,10);
    uVar8 = FUN_ram_4802afda(auStack_e4,auStack_f4);
    FUN_ram_4802ae48(puVar2,uVar8);
    FUN_ram_4802a59e(auStack_f4);
    FUN_ram_4802a59e(auStack_e4);
    FUN_ram_4802a8a8(auStack_e4,",\"requested\":");
    FUN_ram_4802a970(auStack_f4,uVar6,10);
    uVar8 = FUN_ram_4802afda(auStack_e4,auStack_f4);
    FUN_ram_4802ae48(puVar2,uVar8);
    FUN_ram_4802a59e(auStack_f4);
    FUN_ram_4802a59e(auStack_e4);
    FUN_ram_4802a8a8(auStack_e4,",\"ram\":");
    FUN_ram_4802a970(auStack_f4,uVar6,10);
    uVar6 = FUN_ram_4802afda(auStack_e4,auStack_f4);
    FUN_ram_4802ae48(puVar2,uVar6);
    FUN_ram_4802a59e(auStack_f4);
    FUN_ram_4802a59e(auStack_e4);
    FUN_ram_4802af2c(puVar2,",\"flashOk\":");
    if (iVar10 == 0) {
      FUN_ram_4802af2c(puVar2,"false");
      FUN_ram_4802af2c(puVar2,",\"persistenceAccepted\":");
      FUN_ram_4802af2c(puVar2,pcVar4);
      FUN_ram_4802af2c(puVar2,",\"persistence\":\"");
      pcVar4 = "failed";
    }
    else if (iVar5 == 0) {
      FUN_ram_4802af2c(puVar2,&DAT_ram_481c3dec);
      FUN_ram_4802af2c(puVar2,",\"persistenceAccepted\":");
      FUN_ram_4802af2c(puVar2,pcVar4);
      FUN_ram_4802af2c(puVar2,",\"persistence\":\"");
      pcVar4 = "stored";
    }
    else {
      FUN_ram_4802af2c(puVar2,"false");
      FUN_ram_4802af2c(puVar2,",\"persistenceAccepted\":");
      FUN_ram_4802af2c(puVar2,pcVar4);
      FUN_ram_4802af2c(puVar2,",\"persistence\":\"");
      pcVar4 = "pending";
    }
    FUN_ram_4802af2c(puVar2,pcVar4);
    FUN_ram_4802af5a(puVar2,0x22);
    FUN_ram_4802a8a8(auStack_e4,",\"revision\":");
    FUN_ram_4802aa44(auStack_f4,DAT_ram_4ff47ea8,10);
    uVar6 = FUN_ram_4802afda(auStack_e4,auStack_f4);
    uVar6 = FUN_ram_4802b058(uVar6,0x7d);
    FUN_ram_4802ae48(puVar2,uVar6);
    FUN_ram_4802a59e(auStack_f4);
    FUN_ram_4802a59e(auStack_e4);
    iVar7 = 500;
    if (iVar10 != 0) {
      iVar7 = (-(uint)(iVar5 == 0) & 0xfffffffe) + 0xca;
    }
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,iVar7,"application/json",puVar2);
  }
  else {
    FUN_ram_4802a8a8(puVar2,"{\"ok\":false,\"error\":\"revision_conflict\",\"requestId\":");
    FUN_ram_4802afaa(puVar2,uVar8);
    FUN_ram_4802af2c(puVar2,",\"revision\":");
    FUN_ram_4802afaa(puVar2,DAT_ram_4ff47ea8);
    FUN_ram_4802af5a(puVar2,0x7d);
    FUN_ram_4806acb0(&DAT_ram_4ff5cb9c,0x199,"application/json",puVar2);
  }
  FUN_ram_4802a59e(puVar2);
  return;
}


