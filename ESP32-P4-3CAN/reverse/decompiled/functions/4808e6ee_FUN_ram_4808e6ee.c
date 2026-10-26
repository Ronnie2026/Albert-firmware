/* Firmware entry: 0x4808e6ee */

void FUN_ram_4808e6ee(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  size_t sVar15;
  char *pcVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined1 auStack_310 [12];
  undefined4 uStack_304;
  void *pvStack_300;
  uint auStack_2fc [4];
  int iStack_2ec;
  undefined1 *puStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  void *pvStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  ushort uStack_2a4;
  undefined2 uStack_2a0;
  undefined2 uStack_29e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvStack_2cc = memset(&uStack_2a0,0,0x280);
  uStack_2c8 = 0x280;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0x227b;
  uStack_29e = 0x6b6f;
  uStack_2a4 = 1;
  uStack_2bc = 1;
  uStack_2b0 = 1;
  uStack_2c0 = 1;
  uStack_2c4 = 4;
  iVar12 = FUN_ram_4808c90a(&pvStack_2cc,&DAT_ram_481c67c4,2);
  uVar4 = DAT_ram_481c3def;
  uVar3 = DAT_ram_481c3dee;
  uVar2 = DAT_ram_481c3ded;
  if (iVar12 == 0) {
LAB_ram_4808e78c:
    uStack_2a4 = uStack_2a4 & 0xff00;
  }
  else {
    cVar1 = (char)uStack_2a4;
    *(undefined1 *)((int)&uStack_2c0 + uStack_2c0 + 3) = 0;
    if (cVar1 == '\0') goto LAB_ram_4808e78c;
    if ((uStack_2c8 < uStack_2c4) || (uStack_2c8 - uStack_2c4 < 5)) goto LAB_ram_4808e78c;
    puVar18 = (undefined1 *)((int)pvStack_2cc + uStack_2c4);
    uStack_2c4 = uStack_2c4 + 4;
    *puVar18 = DAT_ram_481c3dec;
    puVar18[1] = uVar2;
    puVar18[2] = uVar3;
    puVar18[3] = uVar4;
    *(undefined1 *)((int)pvStack_2cc + uStack_2c4) = 0;
  }
  FUN_ram_4808c2dc(&pvStack_2cc,"enabled",DAT_ram_4ff6dcc8[0x28a]);
  FUN_ram_4808c2dc(&pvStack_2cc,"configured",*(undefined1 *)(DAT_ram_4ff6dc9c + 0x87b60));
  uVar14 = uStack_2c4;
  if ((((char)uStack_2a4 == '\0') || (uStack_2c0 == 0)) ||
     (*(char *)((int)&uStack_2b4 + uStack_2c0 + 3) == '\0')) {
LAB_ram_4808e7fa:
    uStack_2c4 = uVar14;
    uStack_2a4 = uStack_2a4 & 0xff00;
  }
  else {
    if (*(char *)((int)&uStack_2c0 + uStack_2c0 + 3) == '\0') {
      if ((uStack_2c8 < uStack_2c4) || (uStack_2c8 - uStack_2c4 < 2)) goto LAB_ram_4808e7fa;
      puVar18 = (undefined1 *)((int)pvStack_2cc + uStack_2c4);
      uStack_2c4 = uStack_2c4 + 1;
      *puVar18 = 0x2c;
      *(undefined1 *)((int)pvStack_2cc + uStack_2c4) = 0;
    }
    uVar14 = uStack_2c4;
    if ((uStack_2c8 < uStack_2c4) || (uStack_2c8 - uStack_2c4 < 2)) goto LAB_ram_4808e7fa;
    uVar14 = uStack_2c4 + 1;
    *(undefined1 *)((int)pvStack_2cc + uStack_2c4) = 0x22;
    pcVar16 = (char *)((int)pvStack_2cc + uVar14);
    *pcVar16 = '\0';
    cVar10 = s_Unknown_protocol_ram_481e34c0[0xf];
    cVar9 = s_Unknown_protocol_ram_481e34c0[0xe];
    cVar8 = s_Unknown_protocol_ram_481e34c0[0xc];
    cVar7 = s_Unknown_protocol_ram_481e34c0[0xb];
    cVar6 = s_Unknown_protocol_ram_481e34c0[10];
    cVar5 = s_Unknown_protocol_ram_481e34c0[9];
    cVar1 = s_Unknown_protocol_ram_481e34c0[8];
    if ((uStack_2c8 < uVar14) || (uStack_2c8 - uVar14 < 9)) goto LAB_ram_4808e7fa;
    uStack_2c4 = uStack_2c4 + 9;
    pcVar16[5] = s_Unknown_protocol_ram_481e34c0[0xd];
    pcVar16[6] = cVar9;
    *pcVar16 = cVar1;
    pcVar16[1] = cVar5;
    pcVar16[2] = cVar6;
    pcVar16[3] = cVar7;
    pcVar16[4] = cVar8;
    pcVar16[7] = cVar10;
    *(undefined1 *)((int)pvStack_2cc + uStack_2c4) = 0;
    iVar12 = FUN_ram_4808c90a(&pvStack_2cc,&DAT_ram_481c67c4,2);
    if (iVar12 != 0) {
      iStack_2ec = 0;
      puStack_2e8 = (undefined1 *)0x0;
      uStack_2e4 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uStack_2d0 = 0;
      *(undefined1 *)((int)&uStack_2c0 + uStack_2c0 + 3) = 0;
      FUN_ram_4819ad74(&iStack_2ec,0x20,&DAT_ram_481cb8cc,auStack_310 + uStack_2c0,2,0);
      if ((char)uStack_2a4 != '\0') {
        if ((uStack_2c4 <= uStack_2c8) && (1 < uStack_2c8 - uStack_2c4)) {
          *(undefined1 *)(uStack_2c4 + (int)pvStack_2cc) = (undefined1)iStack_2ec;
          *(undefined1 *)((int)pvStack_2cc + uStack_2c4 + 1) = 0;
          uStack_2c4 = uStack_2c4 + 1;
          goto LAB_ram_4808e802;
        }
      }
      uStack_2a4 = uStack_2a4 & 0xff00;
    }
  }
LAB_ram_4808e802:
  pcVar16 = DAT_ram_4ff6dcc8;
  sVar15 = 0;
  if (DAT_ram_4ff6dcc8 != (char *)0x0) {
    sVar15 = strlen(DAT_ram_4ff6dcc8);
  }
  FUN_ram_4808c96e(&pvStack_2cc,"origin",pcVar16,sVar15);
  FUN_ram_4808c96e(&pvStack_2cc,"capabilities",
                   "api_call,settings_backup,records_backup,user_restore,conflict_resolution",0x48);
  pvStack_300 = pvStack_2cc;
  if ((char)uStack_2a4 != '\0') {
    if ((((uStack_2c0 == 1) && ((uStack_2b0 & 0xff) != 0)) && (uStack_2c4 <= uStack_2c8)) &&
       (1 < uStack_2c8 - uStack_2c4)) {
      puVar18 = (undefined1 *)((int)pvStack_2cc + uStack_2c4);
      uStack_2c4 = uStack_2c4 + 1;
      *puVar18 = 0x7d;
      uStack_2c0 = 0;
      *(undefined1 *)((int)pvStack_2cc + uStack_2c4) = 0;
      goto LAB_ram_4808e856;
    }
  }
  uStack_2a4 = uStack_2a4 & 0xff00;
LAB_ram_4808e856:
  uVar14 = uStack_2c4;
  FUN_ram_4802a8a8(&iStack_2ec,"Cache-Control");
  FUN_ram_4802a8a8(auStack_2fc,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,&iStack_2ec,auStack_2fc);
  FUN_ram_4802a59e(auStack_2fc);
  FUN_ram_4802a59e(&iStack_2ec);
  iVar11 = DAT_ram_4ff5cbe8;
  iVar12 = DAT_ram_4ff5cbdc;
  uStack_304 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    auStack_2fc[0] = uVar14;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_304,&pvStack_300,auStack_2fc);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar14 = auStack_2fc[0];
    if (auStack_2fc[0] == 0) {
      uVar14 = 1;
    }
    iVar13 = FUN_ram_4ff206d8(uVar14,0x404);
    iVar17 = iVar11 + iVar12 * 0x1d40;
    *(int *)(iVar17 + 0x1cdc) = iVar13;
    if (iVar13 == 0) {
      if (*(char *)(iVar17 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar11 + iVar12 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_2fc[0] != 0) {
        FUN_ram_4ff45158(iVar13,pvStack_300,auStack_2fc[0]);
        iVar13 = *(int *)(iVar17 + 0x1cdc);
      }
      iStack_2ec = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_2ec + 0x44c) != '\0') && (*(char *)(iStack_2ec + 0x44c) != '\x06')) {
        *(int *)(iStack_2ec + 0x1ce0) = iVar13;
        *(uint *)(iStack_2ec + 0x1ce4) = auStack_2fc[0];
        *(undefined4 *)(iStack_2ec + 0x1ce8) = 0;
        puStack_2e8 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_304,"application/json",iStack_2ec,
                         &LAB_ram_4802d3f2);
      }
    }
  }
  return;
}


