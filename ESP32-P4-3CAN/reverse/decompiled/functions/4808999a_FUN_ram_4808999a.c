/* Firmware entry: 0x4808999a */

void FUN_ram_4808999a(undefined4 param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_5c;
  undefined4 *****pppppuStack_58;
  uint uStack_54;
  undefined4 *****apppppuStack_50 [2];
  uint uStack_48;
  byte bStack_41;
  int iStack_40;
  undefined1 *puStack_3c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(apppppuStack_50,&DAT_ram_481c4164);
  if ((char)bStack_41 < '\0') {
    uVar8 = bStack_41 & 0x7f;
    if ((bStack_41 & 0x7f) != 0) goto LAB_ram_480899d4;
LAB_ram_480899ec:
    FUN_ram_4802af5a(apppppuStack_50,0x2c);
  }
  else {
    if (((undefined4 ******)apppppuStack_50[0] == (undefined4 ******)0x0) ||
       (uVar8 = uStack_48, uStack_48 == 0)) goto LAB_ram_480899ec;
LAB_ram_480899d4:
    pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_50,uVar8 - 1);
    if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_480899ec;
  }
  FUN_ram_4802af5a(apppppuStack_50,0x22);
  FUN_ram_4802af2c(apppppuStack_50,&DAT_ram_481c4274);
  FUN_ram_4802af2c(apppppuStack_50,&DAT_ram_481c67c4);
  FUN_ram_4802af2c(apppppuStack_50,"false");
  if (param_2 == 0xd) {
    pbVar6 = &UNK_ram_481cb2d8;
  }
  else if (param_2 < 0xe) {
    if (param_2 == 6) {
      pbVar6 = &UNK_ram_481cb130;
    }
    else if (param_2 < 7) {
      if (param_2 == 3) {
        pbVar6 = &UNK_ram_481cb0e4;
      }
      else if (param_2 < 4) {
        if (param_2 == 1) {
          pbVar6 = &UNK_ram_481cb30c;
        }
        else if (param_2 == 2) {
          pbVar6 = &UNK_ram_481cb338;
        }
        else {
          pbVar6 = &DAT_ram_481cb414;
        }
      }
      else if (param_2 == 4) {
        pbVar6 = &UNK_ram_481cb100;
      }
      else {
        pbVar6 = &UNK_ram_481cb114;
      }
    }
    else if (param_2 == 10) {
      pbVar6 = &UNK_ram_481cb23c;
    }
    else if (param_2 < 0xb) {
      if (param_2 == 8) {
        pbVar6 = &UNK_ram_481cb20c;
      }
      else if (param_2 == 9) {
        pbVar6 = &UNK_ram_481cb224;
      }
      else {
        pbVar6 = &UNK_ram_481cb148;
      }
    }
    else if (param_2 == 0xb) {
      pbVar6 = &UNK_ram_481cb264;
    }
    else {
      pbVar6 = &UNK_ram_481cb2b0;
    }
  }
  else if (param_2 == 0x14) {
    pbVar6 = &UNK_ram_481cb3f4;
  }
  else if (param_2 < 0x15) {
    if (param_2 == 0x11) {
      pbVar6 = &UNK_ram_481cb3a0;
    }
    else if (param_2 < 0x12) {
      if (param_2 == 0xf) {
        pbVar6 = &UNK_ram_481cb358;
      }
      else if (param_2 == 0x10) {
        pbVar6 = &UNK_ram_481cb380;
      }
      else {
        pbVar6 = &UNK_ram_481cb2f4;
      }
    }
    else if (param_2 == 0x12) {
      pbVar6 = &UNK_ram_481cb3bc;
    }
    else {
      pbVar6 = &UNK_ram_481cb3d8;
    }
  }
  else if (param_2 == 0x17) {
    pbVar6 = &UNK_ram_481cb088;
  }
  else if (param_2 < 0x18) {
    if (param_2 == 0x15) {
      pbVar6 = &UNK_ram_481cb0b8;
    }
    else {
      pbVar6 = &UNK_ram_481cb0a4;
    }
  }
  else if (param_2 == 0x18) {
    pbVar6 = &UNK_ram_481cb1bc;
  }
  else {
    pbVar6 = &UNK_ram_481cb180;
    if (param_2 != 0x19) {
      pbVar6 = &UNK_ram_481cb328;
    }
  }
  if ((char)bStack_41 < '\0') {
    uVar8 = bStack_41 & 0x7f;
    if ((bStack_41 & 0x7f) != 0) goto LAB_ram_48089b2a;
LAB_ram_48089b42:
    FUN_ram_4802af5a(apppppuStack_50,0x2c);
  }
  else {
    if (((undefined4 ******)apppppuStack_50[0] == (undefined4 ******)0x0) ||
       (uVar8 = uStack_48, uStack_48 == 0)) goto LAB_ram_48089b42;
LAB_ram_48089b2a:
    pbVar7 = (byte *)FUN_ram_4802b206(apppppuStack_50,uVar8 - 1);
    if ((*pbVar7 & 0xdf) != 0x5b) goto LAB_ram_48089b42;
  }
  FUN_ram_4802af5a(apppppuStack_50,0x22);
  FUN_ram_4802af2c(apppppuStack_50,"error");
  FUN_ram_4802af2c(apppppuStack_50,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(apppppuStack_50,0x22);
  bVar4 = *pbVar6;
  while (bVar4 != 0) {
    while ((bVar4 != 0x22 && (bVar4 != 0x5c))) {
      if (0x1f < bVar4) goto LAB_ram_48089ba8;
      bVar4 = pbVar6[1];
      pbVar6 = pbVar6 + 1;
      if (bVar4 == 0) goto LAB_ram_48089bb8;
    }
    FUN_ram_4802af5a(apppppuStack_50,0x5c);
LAB_ram_48089ba8:
    pbVar6 = pbVar6 + 1;
    FUN_ram_4802af5a(apppppuStack_50,bVar4);
    bVar4 = *pbVar6;
  }
LAB_ram_48089bb8:
  FUN_ram_4802af5a(apppppuStack_50,0x22);
  if ((char)bStack_41 < '\0') {
    uVar8 = bStack_41 & 0x7f;
    if ((bStack_41 & 0x7f) != 0) goto LAB_ram_48089bd2;
LAB_ram_48089bea:
    FUN_ram_4802af5a(apppppuStack_50,0x2c);
  }
  else {
    if (((undefined4 ******)apppppuStack_50[0] == (undefined4 ******)0x0) ||
       (uVar8 = uStack_48, uStack_48 == 0)) goto LAB_ram_48089bea;
LAB_ram_48089bd2:
    pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_50,uVar8 - 1);
    if ((*pbVar6 & 0xdf) != 0x5b) goto LAB_ram_48089bea;
  }
  FUN_ram_4802af5a(apppppuStack_50,0x22);
  FUN_ram_4802af2c(apppppuStack_50,"code");
  FUN_ram_4802af2c(apppppuStack_50,&DAT_ram_481c67c4);
  FUN_ram_4802a928(&iStack_40,param_2,10);
  FUN_ram_4802ae48(apppppuStack_50,&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  if ((char)bStack_41 < '\0') {
    uVar8 = bStack_41 & 0x7f;
    if ((bStack_41 & 0x7f) != 0) goto LAB_ram_48089c3e;
  }
  else if (((undefined4 ******)apppppuStack_50[0] != (undefined4 ******)0x0) &&
          (uVar8 = uStack_48, uStack_48 != 0)) {
LAB_ram_48089c3e:
    pbVar6 = (byte *)FUN_ram_4802b206(apppppuStack_50,uVar8 - 1);
    if ((*pbVar6 & 0xdf) == 0x5b) goto LAB_ram_48089c60;
  }
  FUN_ram_4802af5a(apppppuStack_50,0x2c);
LAB_ram_48089c60:
  FUN_ram_4802af5a(apppppuStack_50,0x22);
  FUN_ram_4802af2c(apppppuStack_50,"bus");
  FUN_ram_4802af2c(apppppuStack_50,&DAT_ram_481c67c4);
  FUN_ram_4802a928(&iStack_40,param_3,10);
  FUN_ram_4802ae48(apppppuStack_50,&iStack_40);
  FUN_ram_4802a59e(&iStack_40);
  FUN_ram_4802af5a(apppppuStack_50,0x7d);
  iVar3 = DAT_ram_4ff6ded8;
  if ((char)bStack_41 < '\0') {
    apppppuStack_50[0] = apppppuStack_50;
    uStack_54 = bStack_41 & 0x7f;
  }
  else {
    uStack_54 = 0;
    if ((undefined4 ******)apppppuStack_50[0] != (undefined4 ******)0x0) {
      uStack_54 = uStack_48;
    }
  }
  iVar5 = *(int *)(DAT_ram_4ff6ded8 + 0x40);
  iVar11 = *(int *)(DAT_ram_4ff6ded8 + 0x4c);
  cVar1 = *(char *)(iVar5 * 0x1d40 + iVar11 + 0x44c);
  uStack_5c = param_1;
  pppppuStack_58 = apppppuStack_50[0];
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    puVar2 = (undefined4 *)(DAT_ram_4ff6ded8 + 0x28);
    if (((code *)*puVar2 != (code *)0x0) && (*(char *)(DAT_ram_4ff6ded8 + 0x2c) == '\0')) {
      *(undefined1 *)(DAT_ram_4ff6ded8 + 0x2c) = 1;
      (*(code *)*puVar2)(&uStack_5c,&pppppuStack_58,&uStack_54);
      *(undefined1 *)(iVar3 + 0x2c) = 0;
    }
    uVar8 = uStack_54;
    if (uStack_54 == 0) {
      uVar8 = 1;
    }
    iVar9 = FUN_ram_4ff206d8(uVar8,0x404);
    iVar5 = iVar5 * 0x1d40;
    iVar10 = iVar11 + iVar5;
    *(int *)(iVar10 + 0x1cdc) = iVar9;
    if (iVar9 == 0) {
      if (*(char *)(iVar10 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar11 + iVar5 + 0x1c,7);
      }
    }
    else {
      if (uStack_54 != 0) {
        FUN_ram_4ff45158(iVar9,pppppuStack_58,uStack_54);
        iVar9 = *(int *)(iVar10 + 0x1cdc);
      }
      iVar5 = *(int *)(iVar3 + 0x4c) + *(int *)(iVar3 + 0x40) * 0x1d40;
      if ((*(char *)(iVar5 + 0x44c) != '\0') && (*(char *)(iVar5 + 0x44c) != '\x06')) {
        *(int *)(iVar5 + 0x1ce0) = iVar9;
        *(uint *)(iVar5 + 0x1ce4) = uStack_54;
        *(undefined4 *)(iVar5 + 0x1ce8) = 0;
        puStack_3c = &LAB_ram_4802d3f2;
        iStack_40 = iVar5;
        FUN_ram_48066484(iVar3,uStack_5c,"application/json",iVar5,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppppuStack_50);
  return;
}


