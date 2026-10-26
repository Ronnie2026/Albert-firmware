/* Firmware entry: 0x4808d01a */

undefined4 FUN_ram_4808d01a(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined4 ****ppppuVar12;
  int iVar13;
  uint local_90;
  undefined4 ***pppuStack_8c;
  undefined4 ***apppuStack_80 [2];
  uint uStack_78;
  byte bStack_71;
  undefined4 ***apppuStack_70 [2];
  uint uStack_68;
  byte bStack_61;
  int aiStack_60 [2];
  uint uStack_58;
  byte bStack_51;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_40,"url");
  iVar4 = FUN_ram_4802b18e(auStack_40,"plain");
  iVar13 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar5 = 0;
      do {
        iVar7 = FUN_ram_4802b18e(auStack_40,*puVar2);
        if (iVar7 != 0) {
          FUN_ram_4802a8a8(apppuStack_80,
                           *(undefined4 *)(iVar13 + (iVar6 * 0x3a8 + uVar5) * 8 + 0xcc8));
          goto LAB_ram_4808d08e;
        }
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(apppuStack_80,&DAT_ram_481df390);
  }
  else {
    puVar10 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(apppuStack_80,puVar10,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_4808d08e:
  FUN_ram_4802a59e(auStack_40);
  FUN_ram_4802a8a8(auStack_40,"token");
  iVar4 = FUN_ram_4802b18e(auStack_40,"plain");
  iVar13 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar5 = 0;
      do {
        iVar7 = FUN_ram_4802b18e(auStack_40,*puVar2);
        if (iVar7 != 0) {
          FUN_ram_4802a8a8(apppuStack_70,
                           *(undefined4 *)(iVar13 + (iVar6 * 0x3a8 + uVar5) * 8 + 0xcc8));
          goto LAB_ram_4808d0e2;
        }
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(apppuStack_70,&DAT_ram_481df390);
  }
  else {
    puVar10 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(apppuStack_70,puVar10,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_4808d0e2:
  FUN_ram_4802a59e(auStack_40);
  FUN_ram_4802a8a8(auStack_40,"intervalSec");
  iVar4 = FUN_ram_4802b18e(auStack_40,"plain");
  iVar13 = DAT_ram_4ff5cbe8;
  iVar6 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar5 = 0;
      do {
        iVar7 = FUN_ram_4802b18e(auStack_40,*puVar2);
        if (iVar7 != 0) {
          FUN_ram_4802a8a8(aiStack_60,*(undefined4 *)(iVar13 + (iVar6 * 0x3a8 + uVar5) * 8 + 0xcc8))
          ;
          goto LAB_ram_4808d136;
        }
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar5 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(aiStack_60,&DAT_ram_481df390);
  }
  else {
    puVar10 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(aiStack_60,puVar10,*(undefined4 *)(iVar4 + 0x438));
  }
LAB_ram_4808d136:
  FUN_ram_4802a59e(auStack_40);
  if ((char)bStack_51 < '\0') {
    uVar5 = bStack_51 & 0x7f;
    if ((bStack_51 & 0x7f) != 0) goto LAB_ram_4808d200;
LAB_ram_4808d14c:
    FUN_ram_4808cb66(400,"invalid_interval");
  }
  else {
    if ((aiStack_60[0] == 0) || (uVar5 = uStack_58, uStack_58 == 0)) goto LAB_ram_4808d14c;
LAB_ram_4808d200:
    if (uVar5 == 0) {
      iVar6 = 0;
      iVar13 = 0;
      if ((char)bStack_71 < '\0') goto LAB_ram_4808d418;
LAB_ram_4808d26a:
      local_90 = 0;
      if ((undefined4 ****)apppuStack_80[0] != (undefined4 ****)0x0) {
        local_90 = uStack_78;
      }
      pppuStack_8c = apppuStack_80[0];
      iVar13 = iVar6;
      if (-1 < (char)bStack_61) goto LAB_ram_4808d27e;
LAB_ram_4808d42e:
      uVar5 = bStack_61 & 0x7f;
      ppppuVar12 = apppuStack_70;
    }
    else {
      uVar1 = 0;
      iVar13 = 0;
      if (3 < uVar5) goto LAB_ram_4808d14c;
      do {
        while( true ) {
          uVar5 = FUN_ram_4802b236(aiStack_60,uVar1);
          if ((uVar5 < 0x30) || (uVar5 = FUN_ram_4802b236(aiStack_60,uVar1), 0x39 < uVar5))
          goto LAB_ram_4808d14c;
          iVar6 = FUN_ram_4802b236(aiStack_60,uVar1);
          uVar1 = uVar1 + 1;
          iVar13 = iVar6 + iVar13 * 10 + -0x30;
          if ((char)bStack_51 < '\0') break;
          if ((aiStack_60[0] == 0) || (uStack_58 <= uVar1)) goto LAB_ram_4808d25a;
        }
      } while (uVar1 < (bStack_51 & 0x7f));
LAB_ram_4808d25a:
      iVar6 = iVar13;
      if (-1 < (char)bStack_71) goto LAB_ram_4808d26a;
LAB_ram_4808d418:
      local_90 = bStack_71 & 0x7f;
      pppuStack_8c = apppuStack_80;
      if ((char)bStack_61 < '\0') goto LAB_ram_4808d42e;
LAB_ram_4808d27e:
      ppppuVar12 = (undefined4 ****)apppuStack_70[0];
      uVar5 = 0;
      if ((undefined4 ****)apppuStack_70[0] != (undefined4 ****)0x0) {
        uVar5 = uStack_68;
      }
    }
    uVar3 = DAT_ram_4ff6dcc8;
    FUN_ram_4802a8a8(auStack_50,"clearToken");
    iVar7 = FUN_ram_4802b18e(auStack_50,"plain");
    iVar4 = DAT_ram_4ff5cbe8;
    iVar6 = DAT_ram_4ff5cbdc;
    if ((iVar7 == 0) ||
       (iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar7 + 0xcc2) == '\0')) {
      iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if (*(int *)(iVar7 + 0x1cc4) != 0) {
        puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
        uVar1 = 0;
        do {
          iVar9 = FUN_ram_4802b18e(auStack_50,*puVar2);
          if (iVar9 != 0) {
            FUN_ram_4802a8a8(auStack_40,*(undefined4 *)(iVar4 + (iVar6 * 0x3a8 + uVar1) * 8 + 0xcc8)
                            );
            goto LAB_ram_4808d2d4;
          }
          uVar1 = uVar1 + 1;
          puVar2 = puVar2 + 2;
        } while (uVar1 < *(uint *)(iVar7 + 0x1cc4));
      }
      FUN_ram_4802a8a8(auStack_40,&DAT_ram_481df390);
    }
    else {
      puVar10 = *(undefined1 **)(iVar7 + 0x43c);
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &DAT_ram_481df390;
      }
      FUN_ram_4802a888(auStack_40,puVar10,*(undefined4 *)(iVar7 + 0x438));
    }
LAB_ram_4808d2d4:
    uVar8 = FUN_ram_4802b18e(auStack_40,"1");
    iVar6 = FUN_ram_480728ea(uVar3,local_90,pppuStack_8c,uVar5,ppppuVar12,iVar13,uVar8,param_1);
    FUN_ram_4802a59e(auStack_40);
    FUN_ram_4802a59e(auStack_50);
    uVar3 = 1;
    if (iVar6 == 0) goto LAB_ram_4808d15e;
    if (iVar6 == 3) {
      pcVar11 = "token_required";
    }
    else if (iVar6 == 2) {
      pcVar11 = "invalid_token";
    }
    else if (iVar6 == 4) {
      pcVar11 = "invalid_interval";
    }
    else {
      pcVar11 = "invalid_url";
    }
    FUN_ram_4808cb66(400,pcVar11);
  }
  uVar3 = 0;
LAB_ram_4808d15e:
  FUN_ram_4802a59e(aiStack_60);
  FUN_ram_4802a59e(apppuStack_70);
  FUN_ram_4802a59e(apppuStack_80);
  return uVar3;
}


