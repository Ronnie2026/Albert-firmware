/* Firmware entry: 0x4808e07e */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_onboarding_complete_4808e07e(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  code cVar10;
  undefined8 uVar11;
  char cStack_12f;
  undefined1 uStack_12e;
  char cStack_12d;
  undefined1 auStack_12c [16];
  undefined4 auStack_11c [4];
  int iStack_10c;
  undefined1 *puStack_108;
  code *pcStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  int aiStack_d0 [42];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(aiStack_d0,"choice");
  iVar5 = FUN_ram_4802b18e(aiStack_d0,"plain");
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar5 == 0) ||
     (iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar5 + 0xcc2) == '\0')) {
    iVar5 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar5 + 0x1cc4) != 0) {
      puVar3 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar4 = 0;
      do {
        iVar9 = FUN_ram_4802b18e(aiStack_d0,*puVar3);
        if (iVar9 != 0) {
          FUN_ram_4802a8a8(auStack_12c,*(undefined4 *)(iVar2 + (iVar6 * 0x3a8 + uVar4) * 8 + 0xcc8))
          ;
          goto LAB_ram_4808e100;
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar4 < *(uint *)(iVar5 + 0x1cc4));
    }
    FUN_ram_4802a8a8(auStack_12c,&DAT_ram_481df390);
  }
  else {
    puVar7 = *(undefined1 **)(iVar5 + 0x43c);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(auStack_12c,puVar7,*(undefined4 *)(iVar5 + 0x438));
  }
LAB_ram_4808e100:
  FUN_ram_4802a59e(aiStack_d0);
  iVar6 = FUN_ram_4802b18e(auStack_12c,"later");
  cVar10 = (code)0x1;
  if (iVar6 == 0) {
    iVar6 = FUN_ram_4802b18e(auStack_12c,&DAT_ram_481cb730);
    cVar10 = (code)0x2;
    if (iVar6 == 0) {
      iVar6 = FUN_ram_4802b18e(auStack_12c,"restored");
      cVar10 = (code)0x3;
      if (iVar6 == 0) {
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,400,"application/json",
                         "{\"ok\":false,\"error\":\"invalid_choice\"}");
        goto LAB_ram_4808e29e;
      }
    }
  }
  iVar2 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if (DAT_ram_4ff6dd68 == '\0') {
    FUN_ram_48066698(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"storage_unavailable\"}",0x2a);
    goto LAB_ram_4808e29e;
  }
  fence();
  fence();
  if (((DAT_ram_4ff6df30 != '\0') || (DAT_ram_4ff5c5c0 != '\0')) || (DAT_ram_4ff5c5ca != '\0')) {
    pcStack_fc = (code *)0x481cb7e4;
    auStack_11c[0] = 0x199;
    aiStack_d0[0] = 0x27;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      iVar5 = 0x27;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(auStack_11c,&pcStack_fc,aiStack_d0);
        DAT_ram_4ff5cbc8 = '\0';
        iVar5 = aiStack_d0[0];
        if (aiStack_d0[0] == 0) {
          iVar5 = 1;
        }
      }
      iVar5 = FUN_ram_4ff206d8(iVar5,0x404);
      iVar9 = iVar2 + iVar6 * 0x1d40;
      *(int *)(iVar9 + 0x1cdc) = iVar5;
      if (iVar5 == 0) {
        if (*(char *)(iVar9 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar2 + iVar6 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (aiStack_d0[0] != 0) {
          FUN_ram_4ff45158(iVar5,pcStack_fc,aiStack_d0[0]);
          iVar5 = *(int *)(iVar9 + 0x1cdc);
        }
        iVar6 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iVar6 + 0x44c) != '\0') && (*(char *)(iVar6 + 0x44c) != '\x06')) {
          *(int *)(iVar6 + 0x1ce0) = iVar5;
          *(int *)(iVar6 + 0x1ce4) = aiStack_d0[0];
          *(undefined4 *)(iVar6 + 0x1ce8) = 0;
          puStack_108 = &LAB_ram_4802d3f2;
          iStack_10c = iVar6;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,auStack_11c[0],"application/json",iVar6,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    goto LAB_ram_4808e29e;
  }
  iVar6 = FUN_ram_4802ed9c(&cStack_12f,&uStack_12e);
  if (iVar6 == 0) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                     "{\"ok\":false,\"error\":\"storage_unavailable\"}");
    goto LAB_ram_4808e29e;
  }
  if (cStack_12f == '\0') {
    if ((cVar10 == (code)0x3) && (iVar6 = FUN_ram_480330be(), iVar6 == 0)) {
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                       "{\"ok\":false,\"error\":\"restore_not_complete\"}");
      goto LAB_ram_4808e29e;
    }
  }
  else if (uStack_12e != cVar10) {
    FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x199,"application/json",
                     "{\"ok\":false,\"error\":\"choice_already_stored\"}");
    goto LAB_ram_4808e29e;
  }
  if (DAT_ram_4ff6dd68 != '\0') {
    fence();
    fence();
    if ((((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0'))
       && (iVar6 = FUN_ram_4802ed9c(&cStack_12d,auStack_11c), iVar6 != 0)) {
      if (cStack_12d != '\0') {
LAB_ram_4808e54e:
        memset(aiStack_d0,0,0xa0);
        pcStack_fc = (code *)aiStack_d0;
        aiStack_d0[0] = CONCAT31(aiStack_d0[0]._1_3_,0x7b);
        uStack_f8 = 0xa0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 1;
        uStack_f4 = 1;
        uStack_ec = 1;
        uStack_e0 = 1;
        uStack_f0 = 1;
        FUN_ram_4808c2dc(&pcStack_fc,&DAT_ram_481c4274,1);
        FUN_ram_4808c2dc(&pcStack_fc,"completed",1);
        if (cVar10 == (code)0x2) {
          pcVar8 = "new";
        }
        else {
          pcVar8 = "later";
          if (cVar10 == (code)0x3) {
            pcVar8 = "restored";
          }
        }
        FUN_ram_4808cb32(&pcStack_fc,"choice",pcVar8);
        FUN_ram_4808c96e(&pcStack_fc,"persistence","stored",6);
        FUN_ram_4808c244(&pcStack_fc);
        iVar6 = FUN_ram_4808c64a(&pcStack_fc);
        if (iVar6 != 0) {
          FUN_ram_4802a8a8(auStack_11c,"Cache-Control");
          FUN_ram_4802a8a8(&iStack_10c,"no-store");
          FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_11c,&iStack_10c);
          FUN_ram_4802a59e(&iStack_10c);
          FUN_ram_4802a59e(auStack_11c);
          FUN_ram_48066698(&DAT_ram_4ff5cb9c,200,"application/json",pcStack_fc,uStack_f4);
          FUN_ram_4802a59e(auStack_12c);
          return;
        }
        FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                         "{\"ok\":false,\"error\":\"response_unavailable\"}");
        goto LAB_ram_4808e29e;
      }
      if ((cVar10 != (code)0x3) || (iVar6 = FUN_ram_480330be(), iVar6 != 0)) {
        aiStack_d0[0] = 0;
        aiStack_d0[1] = 0;
        aiStack_d0[2] = 0;
        aiStack_d0[3] = 0;
        aiStack_d0[4] = 0;
        aiStack_d0[5] = 0;
        FUN_ram_48064bd0(&DAT_ram_4ff5ce9c,aiStack_d0);
        uVar11 = FUN_ram_4ff21a0a();
        DAT_ram_4ff5cea8 = __divdi3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),1000,0);
        DAT_ram_4ff5cea0 = 1;
        DAT_ram_4ff5cea4 = 8;
        DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
        DAT_ram_4ff5ceb4 = 0;
        DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
        uStack_f8 = 0;
        uStack_f4 = uStack_f4 & 0xffffff00;
        pcStack_fc = FUN_ram_48025b94;
        DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
        FUN_ram_4807df16(&pcStack_fc);
        iVar6 = FUN_ram_48159fd2("p4_data","p4_onboard",1,&iStack_10c);
        if (iVar6 == 0) {
          iVar6 = FUN_ram_4815a104(iStack_10c,"choice",cVar10);
          if ((iVar6 == 0) && (iVar6 = FUN_ram_4815a104(iStack_10c,"completed",1), iVar6 == 0)) {
            iVar6 = FUN_ram_4815a1c4(iStack_10c);
            FUN_ram_4815a050(iStack_10c);
            FUN_ram_4807e2fa(&pcStack_fc);
            FUN_ram_48064c42(&DAT_ram_4ff5ce98,aiStack_d0);
            if ((iVar6 == 0) &&
               (((iVar6 = FUN_ram_4802ed9c(&pcStack_fc,aiStack_d0), iVar6 != 0 &&
                 ((char)pcStack_fc != '\0')) && (aiStack_d0[0]._0_1_ == cVar10))))
            goto LAB_ram_4808e54e;
            goto LAB_ram_4808e358;
          }
          FUN_ram_4815a050(iStack_10c);
        }
        FUN_ram_4807e2fa(&pcStack_fc);
        FUN_ram_48064c42(&DAT_ram_4ff5ce98,aiStack_d0);
      }
    }
  }
LAB_ram_4808e358:
  FUN_ram_48067954(&DAT_ram_4ff5cb9c,500,"application/json",
                   "{\"ok\":false,\"error\":\"persistence_failed\"}");
LAB_ram_4808e29e:
  FUN_ram_4802a59e(auStack_12c);
  return;
}


