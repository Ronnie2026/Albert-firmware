/* Firmware entry: 0x480b66f6 */

int FUN_ram_480b66f6(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined4 *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined2 uStack_24;
  
  puVar1 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dc94 == (undefined4 *)0x0) ||
     (*(char *)((int)DAT_ram_4ff6dc94 + 0x1e931) == '\0')) {
    return 0;
  }
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    return 0;
  }
  if (DAT_ram_4ff5c5c0 != '\0') {
    return 0;
  }
  if (DAT_ram_4ff5c5ca != '\0') {
    return 0;
  }
  puVar7 = DAT_ram_4ff6dc94 + 0x24e6;
  iVar2 = FUN_ram_4807a228(puVar7);
  if (iVar2 == 0) goto LAB_ram_480b68ea;
  puStack_30 = puVar1 + 0x49cd;
  *(undefined1 *)(puVar1 + 0x49cc) = 0x42;
  *(undefined1 *)((int)puVar1 + 0x12731) = 0x43;
  *(undefined1 *)((int)puVar1 + 0x12732) = 0x4b;
  *(undefined1 *)((int)puVar1 + 0x12733) = 0x33;
  uStack_2c = 0xbff9;
  uStack_24 = 0x100;
  uStack_28 = 0;
  FUN_ram_480a8446(&puStack_30,puVar7);
  FUN_ram_480a7960(&puStack_30,(int)puVar1 + 0x126d5);
  if ((char)uStack_24 == '\0') {
    if (uStack_24._1_1_ == '\0') {
      uVar13 = *(undefined1 *)((int)puVar1 + 0x1272f);
      uStack_24 = uStack_24 & 0xff;
    }
    else if (uStack_28 < uStack_2c) {
      *(undefined1 *)((int)puStack_30 + uStack_28) = *(undefined1 *)((int)puVar1 + 0x1272e);
      uVar13 = *(undefined1 *)((int)puVar1 + 0x1272f);
      if (uStack_28 + 1 < uStack_2c) {
        *(undefined1 *)((int)puStack_30 + uStack_28 + 1) = uVar13;
        uStack_28 = uStack_28 + 2;
      }
      else {
LAB_ram_480b696c:
        uStack_28 = uStack_28 + 1;
        uStack_24 = uStack_24 & 0xff;
      }
    }
    else {
      uVar13 = *(undefined1 *)((int)puVar1 + 0x1272f);
      uStack_24 = uStack_24 & 0xff;
    }
  }
  else {
    uVar13 = 0;
    if (uStack_24._1_1_ != '\0') {
      if (uStack_28 < uStack_2c) {
        uVar6 = uStack_28 + 1;
        *(undefined1 *)((int)puVar1 + 0x1272e) = *(undefined1 *)((int)puStack_30 + uStack_28);
        if (uStack_2c <= uVar6) goto LAB_ram_480b696c;
        uStack_28 = uStack_28 + 2;
        uVar13 = *(undefined1 *)((int)puStack_30 + uVar6);
        goto LAB_ram_480b67d4;
      }
      uStack_24 = uStack_24 & 0xff;
    }
    *(undefined1 *)((int)puVar1 + 0x1272e) = 0;
  }
LAB_ram_480b67d4:
  *(undefined1 *)((int)puVar1 + 0x1272f) = uVar13;
  FUN_ram_480a82da(&puStack_30,(int)puVar1 + 0x12716);
  if (uStack_24._1_1_ != '\0') {
    pbVar10 = (byte *)(puVar1 + 0x49cc);
    if (uStack_28 == 0xfffffffc) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      do {
        iVar2 = 8;
        uVar6 = uVar6 ^ *pbVar10;
        do {
          iVar2 = iVar2 + -1;
          uVar6 = uVar6 >> 1 ^ -(uVar6 & 1) & 0xedb88320;
        } while (iVar2 != 0);
        pbVar10 = pbVar10 + 1;
      } while ((byte *)(uStack_28 + 0x12734 + (int)puVar1) != pbVar10);
      uVar6 = ~uVar6;
    }
    puVar8 = (undefined1 *)(uStack_28 + 0x12734 + (int)puVar1);
    uVar3 = 0;
    do {
      *puVar8 = (char)(uVar6 >> (uVar3 & 0x1f));
      uVar3 = uVar3 + 8;
      puVar8 = puVar8 + 1;
    } while (uVar3 != 0x20);
    if ((uStack_28 + 8 < 0xc001) &&
       (iVar2 = FUN_ram_480b621c(&DAT_ram_4ff5bc80,&DAT_ram_4ff5bd30), iVar2 != 0)) {
      puVar9 = puVar1 + 0x24e6;
      puVar7 = puVar1;
      do {
        uVar12 = puVar9[1];
        uVar11 = puVar9[2];
        uVar4 = puVar9[3];
        uVar5 = puVar9[4];
        *puVar7 = *puVar9;
        puVar7[1] = uVar12;
        puVar7[2] = uVar11;
        puVar7[3] = uVar4;
        puVar7[4] = uVar5;
        puVar9 = puVar9 + 5;
        puVar7 = puVar7 + 5;
      } while (puVar9 != puVar1 + 0x49cb);
      *puVar7 = *puVar9;
      FUN_ram_4802e73a();
      puVar1[0x7a4d] = &DAT_ram_481df390;
      return iVar2;
    }
  }
LAB_ram_480b68ea:
  puVar9 = puVar1 + 0x24e6;
  puVar7 = puVar1;
  do {
    uVar12 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    uVar11 = puVar7[4];
    *puVar9 = *puVar7;
    puVar9[1] = uVar12;
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    puVar9[4] = uVar11;
    puVar7 = puVar7 + 5;
    puVar9 = puVar9 + 5;
  } while (puVar7 != puVar1 + 0x24e5);
  *puVar9 = *puVar7;
  FUN_ram_4802e73a();
  puVar1[0x7a4d] = "control_commit_failed";
  return 0;
}


