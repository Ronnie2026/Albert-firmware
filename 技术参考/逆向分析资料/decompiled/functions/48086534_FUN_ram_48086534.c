/* Firmware entry: 0x48086534 */

undefined1 FUN_ram_48086534(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ******ppppppuVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iStack_1d8;
  undefined1 auStack_1d4 [8];
  undefined4 *****local_1cc [3];
  char cStack_1bd;
  undefined1 auStack_1bc [16];
  undefined4 local_1ac [10];
  undefined1 uStack_184;
  undefined1 uStack_180;
  undefined2 uStack_158;
  undefined2 uStack_154;
  undefined1 uStack_14f;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_148;
  undefined2 uStack_146;
  undefined2 uStack_142;
  undefined1 uStack_138;
  undefined1 uStack_134;
  undefined4 auStack_bc [30];
  undefined4 auStack_44 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x18) != '\0') {
    return *(undefined1 *)(param_1 + 0x19);
  }
  iVar13 = *(int *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (iVar13 == 0) {
    iVar13 = FUN_ram_4ff206d8(0xbe0,0x404);
    if (iVar13 == 0) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      return 0;
    }
    puVar14 = (undefined1 *)(iVar13 + 0x16c);
    do {
      memset(puVar14 + -0x16c,0,0x17c);
      puVar14[-0x140] = 1;
      *(undefined2 *)(puVar14 + -0x114) = 100;
      puVar14[-0x10b] = 1;
      puVar14[-0x108] = 0xff;
      *(undefined2 *)(puVar14 + -0x102) = 0xff1d;
      puVar14[-0xf4] = 0xff;
      puVar1 = puVar14 + -0xf0;
      do {
        puVar10 = puVar1;
        *puVar10 = 1;
        *(undefined2 *)(puVar10 + 0x2c) = 100;
        puVar10[0x35] = 1;
        puVar10[0x38] = 0xff;
        *(undefined2 *)(puVar10 + 0x3e) = 0xff1d;
        puVar10[0x4c] = 0xff;
        puVar1 = puVar10 + 0x50;
      } while (puVar10 + 0x50 != puVar14);
      puVar14 = puVar10 + 0x1cc;
    } while (puVar14 != (undefined1 *)(iVar13 + 0xd4c));
    *(int *)(param_1 + 0x14) = iVar13;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  iVar15 = 0;
  cVar12 = '\0';
  do {
    memset(local_1ac,0,0x17c);
    puVar8 = local_1ac;
    do {
      *(undefined1 *)(puVar8 + 0x1f) = 1;
      *(undefined2 *)(puVar8 + 0x2a) = 100;
      *(undefined1 *)((int)puVar8 + 0xb1) = 1;
      *(undefined1 *)(puVar8 + 0x2d) = 0xff;
      *(undefined2 *)((int)puVar8 + 0xba) = 0xff1d;
      *(undefined1 *)(puVar8 + 0x32) = 0xff;
      puVar8 = puVar8 + 0x14;
    } while (puVar8 != auStack_bc);
    uStack_180 = 1;
    uStack_154 = 100;
    uStack_14b = 1;
    uStack_148 = 0xff;
    uStack_142 = 0xff1d;
    uStack_134 = 0xff;
    FUN_ram_4ff45158(iVar13 + iVar15,local_1ac,0x179);
    memset(local_1ac,0,0x16c);
    puVar8 = local_1ac;
    uStack_184 = 1;
    uStack_158 = 100;
    uStack_14f = 1;
    uStack_14c = 0xff;
    uStack_146 = 0xff1d;
    uStack_138 = 0xff;
    do {
      *(undefined1 *)(puVar8 + 0x1e) = 1;
      *(undefined2 *)(puVar8 + 0x29) = 100;
      *(undefined1 *)((int)puVar8 + 0xad) = 1;
      *(undefined1 *)(puVar8 + 0x2c) = 0xff;
      *(undefined2 *)((int)puVar8 + 0xb6) = 0xff1d;
      *(undefined1 *)(puVar8 + 0x31) = 0xff;
      puVar8 = puVar8 + 0x14;
    } while (puVar8 != auStack_bc);
    iStack_1d8 = 0;
    if (*(code **)(param_1 + 8) == (code *)0x0) {
      FUN_ram_48121fd6(auStack_1d4);
      iVar13 = FUN_ram_48121fee(auStack_1d4,"CANEXP01",1,0);
      if (iVar13 == 0) {
        FUN_ram_48121fd6(auStack_1bc);
        iVar13 = FUN_ram_48121fee(auStack_1bc,"CANEXP01",0,0);
        if (iVar13 == 0) {
          FUN_ram_48121fe0(auStack_1bc);
          FUN_ram_48121fe0(auStack_1d4);
          goto LAB_ram_48086718;
        }
        FUN_ram_48122142(auStack_1bc);
        iStack_1d8 = 0;
        FUN_ram_48121fe0(auStack_1bc);
        FUN_ram_48121fe0(auStack_1d4);
      }
      else {
        FUN_ram_4802a8a8(local_1cc,"p");
        FUN_ram_4802a928(auStack_1bc,cVar12,10);
        FUN_ram_4802ae48(local_1cc,auStack_1bc);
        FUN_ram_4802a59e(auStack_1bc);
        ppppppuVar6 = local_1cc;
        if (-1 < cStack_1bd) {
          ppppppuVar6 = (undefined4 ******)local_1cc[0];
        }
        iStack_1d8 = FUN_ram_48122930(auStack_1d4,ppppppuVar6);
        if ((iStack_1d8 == 0x16c) || (iStack_1d8 == 0x13c)) {
          ppppppuVar6 = local_1cc;
          if (-1 < cStack_1bd) {
            ppppppuVar6 = (undefined4 ******)local_1cc[0];
          }
          iVar4 = FUN_ram_481229e0(auStack_1d4,ppppppuVar6,local_1ac,iStack_1d8);
          iVar13 = iStack_1d8;
          FUN_ram_48122142(auStack_1d4);
          FUN_ram_4802a59e(local_1cc);
          uVar2 = (uint)(iVar13 == iVar4);
          FUN_ram_48121fe0(auStack_1d4);
          goto LAB_ram_4808666e;
        }
        FUN_ram_48122142(auStack_1d4);
        FUN_ram_4802a59e(local_1cc);
        FUN_ram_48121fe0(auStack_1d4);
      }
LAB_ram_48086672:
      if (iStack_1d8 != 0) {
        puVar14 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar15);
        *puVar14 = 1;
        iVar13 = FUN_ram_48086138(local_1ac);
        puVar14[1] = (char)iVar13;
        if (iVar13 != 0) {
          puVar9 = local_1ac;
          puVar8 = (undefined4 *)(puVar14 + 4);
          do {
            uVar11 = puVar9[1];
            uVar3 = puVar9[2];
            uVar5 = puVar9[3];
            uVar7 = puVar9[4];
            *puVar8 = *puVar9;
            puVar8[1] = uVar11;
            puVar8[2] = uVar3;
            puVar8[3] = uVar5;
            puVar8[4] = uVar7;
            puVar9 = puVar9 + 5;
            puVar8 = puVar8 + 5;
          } while (puVar9 != auStack_44);
          *puVar8 = *puVar9;
        }
        *(undefined4 *)(puVar14 + 0x170) = 1;
        *(undefined4 *)(puVar14 + 0x174) = 1;
      }
    }
    else {
      uVar2 = (**(code **)(param_1 + 8))
                        (*(undefined4 *)(param_1 + 4),cVar12,local_1ac,0x16c,&iStack_1d8);
LAB_ram_4808666e:
      if (uVar2 != 0) goto LAB_ram_48086672;
LAB_ram_48086718:
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    cVar12 = cVar12 + '\x01';
    if (cVar12 == '\b') {
      return *(undefined1 *)(param_1 + 0x19);
    }
    iVar15 = iVar15 + 0x17c;
    iVar13 = *(int *)(param_1 + 0x14);
  } while( true );
}


