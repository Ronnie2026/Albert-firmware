/* Firmware entry: 0x480a275c */

/* WARNING: Removing unreachable block (ram,0x480a2f7e) */
/* WARNING: Removing unreachable block (ram,0x480a2d66) */
/* WARNING: Removing unreachable block (ram,0x480a2d44) */

void FUN_ram_480a275c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *__s;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  size_t sStack_2dc;
  char *pcStack_2d8;
  uint uStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  undefined4 uStack_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_294;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined4 uStack_284;
  undefined1 *puStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined1 uStack_26c;
  int iStack_268;
  code *pcStack_264;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  
  iVar2 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b38) = 0;
  *(undefined1 *)(iVar2 + 0x30f5b) = 0;
  *(undefined4 *)(iVar2 + 0x87b44) = 0;
  *(undefined1 *)(iVar2 + 0x87b61) = 0;
  uVar13 = FUN_ram_4ff21a0a();
  lVar14 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
  iVar4 = DAT_ram_4ff6dc9c;
  if (*(char *)(iVar2 + 0x87b5c) == '\x05') {
    iVar3 = FUN_ram_48136a1a(2,1,6);
    if (iVar3 < 0) goto LAB_ram_480a27d8;
    sStack_2dc = iVar4 + 0x6975d;
    uStack_2d4 = 0;
    iStack_2d0 = 0;
    iStack_2cc = 0;
    uStack_2c8 = 0;
    uStack_2c4 = uStack_2c4 & 0xffffff00;
    pcStack_2d8 = (char *)0x10001;
    iVar11 = FUN_ram_4813746c(iVar3,4,0x4000);
    if (iVar11 < 0) {
LAB_ram_480a2906:
      iVar11 = FUN_ram_4813630a(iVar3);
      if (iVar11 != 0) {
        *(int *)(iVar4 + 0x87b4c) = iVar3;
      }
    }
    else {
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_300 = 0x50000200;
      uStack_2fc = 0x100007f;
      iVar11 = FUN_ram_481364b8(iVar3,&uStack_300,0x10);
      if (((iVar11 != 0) && (piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0x77)) &&
         (piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0xb)) goto LAB_ram_480a2906;
      uVar6 = 0;
      while (fence(), DAT_ram_4ff6dcbc == '\0') {
        uVar13 = FUN_ram_4ff21a0a();
        uVar15 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
        if (lVar14 + 5000U <= uVar15) break;
        if (uVar6 < *(uint *)(iVar4 + 0x87b3c)) {
          uVar10 = *(uint *)(iVar4 + 0x87b3c) - uVar6;
          if (0x400 < uVar10) {
            uVar10 = 0x400;
          }
          iVar11 = FUN_ram_48136954(iVar3,iVar4 + 0x6175c + uVar6,uVar10,0);
          if (iVar11 < 1) {
            piVar9 = (int *)FUN_ram_4819bf88();
            if (((*piVar9 != 0xb) && (piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0xb)) &&
               ((piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0x80 &&
                (piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0x77)))) break;
          }
          else {
            uVar6 = uVar6 + iVar11;
          }
        }
        else {
          memset(&uStack_240,0,0x200);
          iVar11 = FUN_ram_48136782(iVar3,&uStack_240,0x200,0);
          if (iVar11 < 1) {
            if ((iVar11 == 0) ||
               ((piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0xb &&
                (piVar9 = (int *)FUN_ram_4819bf88(), *piVar9 != 0xb)))) break;
          }
          else {
            iVar12 = FUN_ram_480a22ec(&sStack_2dc,&uStack_240,iVar11);
            iVar11 = iStack_2d0;
            uVar10 = uStack_2d4;
            if (iVar12 == 0) break;
            if ((((char)uStack_2c4 == '\0') && (iStack_2d0 != 0)) &&
               (uStack_2d4 == iStack_2cc + iStack_2d0)) {
              iVar12 = FUN_ram_4813630a(iVar3);
              if (iVar12 != 0) {
                *(int *)(iVar4 + 0x87b4c) = iVar3;
              }
              uVar10 = uVar10 - iVar11;
              *(undefined4 *)(iVar4 + 0x87b44) = uStack_2c8;
              if (0x30800 < uVar10) goto LAB_ram_480a27d8;
              FUN_ram_4ff45158(iVar4 + 0x30f5b,sStack_2dc + iVar11,uVar10);
              *(uint *)(iVar4 + 0x87b38) = uVar10;
              *(undefined1 *)(iVar4 + uVar10 + 0x30f5b) = 0;
              goto LAB_ram_480a27e2;
            }
          }
        }
        FUN_ram_4ff3c2b6(5);
      }
      iVar11 = FUN_ram_4813630a(iVar3);
      if (iVar11 != 0) {
        *(int *)(iVar4 + 0x87b4c) = iVar3;
      }
    }
    *(undefined4 *)(iVar4 + 0x87b44) = 0;
    goto LAB_ram_480a27d8;
  }
  fence();
  if ((DAT_ram_4ff6dcbc != '\0') ||
     (fence(), *(int *)(DAT_ram_4ff6dc9c + 0x504) != DAT_ram_4ff47e58)) goto LAB_ram_480a27d8;
  __s = (char *)(iVar2 + 0xc5a);
  sStack_2dc = strlen(__s);
  iVar4 = DAT_ram_4ff6dcc8;
  iVar11 = DAT_ram_4ff6dcc8 + 0x100c;
  pcStack_2d8 = __s;
  iVar3 = FUN_ram_480744c8(sStack_2dc,__s,iVar11);
  if (iVar3 == 0) goto LAB_ram_480a27d8;
  uVar15 = lVar14 + 15000;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  iVar3 = FUN_ram_48139330(iVar11,&uStack_240);
  if (iVar3 == 0) {
    piVar9 = (int *)(iVar4 + 0x1910);
    do {
      if (*piVar9 == 0) {
        *piVar9 = 1;
        FUN_ram_4819ad74(piVar9 + 1,0x181,&DAT_ram_481cd004,iVar11);
        *(undefined1 *)(piVar9 + 0x68) = 0;
        iVar3 = FUN_ram_48137856(FUN_ram_48032586,piVar9);
        if (iVar3 == 0) goto LAB_ram_480a29b4;
        iVar4 = *piVar9;
        *piVar9 = 3;
        if (iVar4 == 2) {
          fence();
          *piVar9 = 0;
        }
        goto LAB_ram_480a2d78;
      }
      piVar9 = piVar9 + 0x69;
    } while ((int *)(iVar4 + 0x1fa0) != piVar9);
    goto LAB_ram_480a27d8;
  }
  iVar4 = FUN_ram_4813931a(&uStack_240,iVar4 + 0x1fa0,0x2e);
  if (iVar4 == 0) goto LAB_ram_480a27d8;
  goto LAB_ram_480a2be8;
LAB_ram_480a29b4:
  fence();
  if (*piVar9 == 3) goto LAB_ram_480a2d4a;
  fence();
  if ((DAT_ram_4ff6dcbc != '\0') ||
     (fence(), *(int *)(DAT_ram_4ff6dc9c + 0x504) != DAT_ram_4ff47e58)) {
LAB_ram_480a29cc:
    if (*piVar9 == 1) {
      *piVar9 = 2;
    }
    else {
LAB_ram_480a2d78:
      if (*piVar9 == 3) {
        *piVar9 = 0;
      }
    }
    goto LAB_ram_480a27d8;
  }
  uVar13 = FUN_ram_4ff21a0a();
  uVar16 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
  if (uVar15 <= uVar16) goto LAB_ram_480a29cc;
  FUN_ram_4ff3c2b6(10);
  goto LAB_ram_480a29b4;
LAB_ram_480a2d4a:
  if (((char)piVar9[0x68] == '\0') ||
     (iVar4 = FUN_ram_4813931a(piVar9 + 0x62,iVar4 + 0x1fa0,0x2e), iVar4 == 0)) {
    if (*piVar9 == 3) {
      *piVar9 = 0;
    }
    goto LAB_ram_480a27d8;
  }
  if (*piVar9 == 3) {
    *piVar9 = 0;
  }
LAB_ram_480a2be8:
  iVar4 = DAT_ram_4ff6dcc8;
  memset(&sStack_2dc,0,0x9c);
  iStack_268 = iVar4 + 0x100c;
  pcStack_2d8 = (char *)(iVar4 + 0x1fa0);
  uStack_2c4 = iVar4 + 0x130e;
  uStack_2d4 = (uint)*(ushort *)(iVar4 + 0x190e);
  uStack_2c0 = iVar4 + 0x160eU & -(uint)(*(char *)(iVar4 + 0x160e) != '\0');
  uStack_294 = (uint)(2 < *(byte *)(iVar2 + 0x87b5c) - 2);
  uStack_27c = 2;
  uStack_284 = 0xffffffff;
  iStack_270 = iVar2;
  uStack_290 = 1000;
  pcStack_264 = FUN_ram_4812cd16;
  puStack_280 = &LAB_ram_4802f2dc;
  uStack_26c = 1;
  uStack_28c = 1;
  uStack_278 = 0x401;
  uStack_274 = 0x401;
  iVar3 = FUN_ram_4816793e(&sStack_2dc);
  if (iVar3 == 0) goto LAB_ram_480a27d8;
  memset(&uStack_240,0,200);
  FUN_ram_4819ad74(&uStack_240,200,"Bearer %s",iVar2 + 0x5c);
  iVar4 = FUN_ram_48166d90(iVar3,&DAT_ram_481c3da8,iVar4 + 0x118d);
  if ((((iVar4 == 0) && (iVar4 = FUN_ram_48166d90(iVar3,"Authorization",&uStack_240), iVar4 == 0))
      && (iVar4 = FUN_ram_48166d90(iVar3,"Content-Type","application/json"), iVar4 == 0)) &&
     (iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Protocol","2"), iVar4 == 0)) {
    if (*(char *)(iVar2 + 0x87b5c) != '\a') {
      if (*(char *)(iVar2 + 0x87b5c) == '\x01') {
        memset(&uStack_300,0,0x21);
        memset(&uStack_330,0,0x18);
        memset(&uStack_318,0,0x18);
        FUN_ram_48075bd8(iVar2 + 0x86934,&uStack_300);
        FUN_ram_4819ad74(&uStack_330,0x18,&DAT_ram_481c207c,*(undefined4 *)(iVar2 + 0x86944));
        FUN_ram_4819ad74(&uStack_318,0x18,&DAT_ram_481c48f4);
LAB_ram_480a2ece:
        iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Settings-Epoch",&uStack_300);
        if (((((iVar4 != 0) ||
              (iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Settings-Revision",&uStack_330), iVar4 != 0)) ||
             ((iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Backup-Base-Revision",&uStack_318), iVar4 != 0
              || ((iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Content-SHA256",iVar2 + 0x857e2), iVar4 != 0
                  || (iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Backup-Schema","1"), iVar4 != 0)))))) ||
            (iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Hardware-Profile",&DAT_ram_481c3ddc), iVar4 != 0))
           || (((*(char *)(iVar2 + 0x87b5c) == '\x01' && (*(char *)(iVar2 + 0x4b) != '\0')) &&
               (iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Delta","copy-v1"), iVar4 != 0))))
        goto LAB_ram_480a2cd6;
        iVar4 = *(int *)(iVar2 + 0x87b34);
      }
      else {
        iVar4 = *(int *)(iVar2 + 0x87b34);
      }
      if (iVar4 != 0) {
LAB_ram_480a2f66:
        iVar4 = FUN_ram_481685ca(iVar3,iVar2 + 0xf5a);
        if (iVar4 != 0) goto LAB_ram_480a2cd6;
      }
      uVar13 = FUN_ram_4ff21a0a();
      uVar16 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
LAB_ram_480a2e02:
      if (uVar16 < uVar15) {
        uVar6 = (uint)uVar15 - (int)uVar16;
        uVar10 = ((int)(uVar15 >> 0x20) - (int)(uVar16 >> 0x20)) - (uint)((uint)uVar15 < uVar6);
        uVar13 = FUN_ram_4ff21a0a();
        uVar13 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
        iVar4 = (int)((ulonglong)uVar13 >> 0x20);
        while ((fence(), DAT_ram_4ff6dcbc == '\0' &&
               (fence(), *(int *)(DAT_ram_4ff6dc9c + 0x504) == DAT_ram_4ff47e58))) {
          uVar17 = FUN_ram_4ff21a0a();
          uVar17 = __divdi3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
          uVar7 = (uint)uVar17 - (int)uVar13;
          uVar8 = ((int)((ulonglong)uVar17 >> 0x20) - iVar4) - (uint)((uint)uVar17 < uVar7);
          if ((uVar10 <= uVar8) && ((uVar10 != uVar8 || (uVar6 <= uVar7)))) break;
          iVar11 = FUN_ram_48168726(iVar3);
          iVar12 = 1;
          if (iVar11 != 0) {
            iVar12 = (uint)(iVar11 != 0x7007) << 1;
          }
          fence();
          if ((DAT_ram_4ff6dcbc != '\0') ||
             (fence(), *(int *)(DAT_ram_4ff6dc9c + 0x504) != DAT_ram_4ff47e58)) break;
          uVar17 = FUN_ram_4ff21a0a();
          uVar17 = __divdi3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
          uVar7 = (uint)uVar17 - (int)uVar13;
          uVar8 = ((int)((ulonglong)uVar17 >> 0x20) - iVar4) - (uint)((uint)uVar17 < uVar7);
          if ((uVar10 <= uVar8) && ((uVar10 != uVar8 || (uVar6 <= uVar7)))) break;
          if (iVar12 == 1) {
            uVar5 = FUN_ram_48168650(iVar3);
            cVar1 = *(char *)(DAT_ram_4ff6dc9c + 0x87b61);
            *(undefined4 *)(DAT_ram_4ff6dc9c + 0x87b44) = uVar5;
            FUN_ram_481674aa(iVar3);
            if (cVar1 != '\0') goto LAB_ram_480a27d8;
            goto LAB_ram_480a27e2;
          }
          if (iVar12 == 2) break;
          FUN_ram_4ff3c2b6(10);
        }
      }
      FUN_ram_481674aa(iVar3);
      goto LAB_ram_480a27d8;
    }
    iVar4 = FUN_ram_48166d90(iVar3,"X-P4-Management","P4-MANAGEMENT-V1");
    if (*(char *)(iVar2 + 0x87b5c) == '\x01') {
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2e0 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_31c = 0;
      uStack_318 = 0;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      FUN_ram_48075bd8(iVar2 + 0x86934,&uStack_300);
      FUN_ram_4819ad74(&uStack_330,0x18,&DAT_ram_481c207c,*(undefined4 *)(iVar2 + 0x86944));
      FUN_ram_4819ad74(&uStack_318,0x18,&DAT_ram_481c48f4);
      if (iVar4 == 0) goto LAB_ram_480a2ece;
      goto LAB_ram_480a2cd6;
    }
    if (*(int *)(iVar2 + 0x87b34) != 0) {
      if (iVar4 != 0) goto LAB_ram_480a2cd6;
      goto LAB_ram_480a2f66;
    }
    uVar13 = FUN_ram_4ff21a0a();
    uVar16 = __divdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
    if (iVar4 == 0) goto LAB_ram_480a2e02;
  }
  else {
    if (*(char *)(iVar2 + 0x87b5c) == '\x01') {
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2e0 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_31c = 0;
      uStack_318 = 0;
      uStack_314 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_308 = 0;
      uStack_304 = 0;
      FUN_ram_48075bd8(iVar2 + 0x86934,&uStack_300);
      FUN_ram_4819ad74(&uStack_330,0x18,&DAT_ram_481c207c,*(undefined4 *)(iVar2 + 0x86944));
      FUN_ram_4819ad74(&uStack_318,0x18,&DAT_ram_481c48f4);
    }
LAB_ram_480a2cd6:
    FUN_ram_4ff21a0a();
  }
  FUN_ram_481674aa(iVar3);
LAB_ram_480a27d8:
  *(undefined4 *)(iVar2 + 0x87b44) = 0;
LAB_ram_480a27e2:
  FUN_ram_4ff3b5f0(DAT_ram_4ff6dcc4,0xffffffff);
  fence();
  *(undefined1 *)(iVar2 + 0x87b5e) = 1;
  iVar2 = DAT_ram_4ff6dcc8;
  uVar5 = DAT_ram_4ff6dcc4;
  *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 0;
  *(undefined1 *)(iVar2 + 0x63fe) = 1;
  DAT_ram_4ff6dcc0 = 0;
  FUN_ram_4ff3afa2(uVar5,0,0,0);
  FUN_ram_481a7b04(0);
  return;
}


