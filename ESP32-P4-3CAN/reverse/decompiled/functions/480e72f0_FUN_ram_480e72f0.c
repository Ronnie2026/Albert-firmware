/* Firmware entry: 0x480e72f0 */

void FUN_ram_480e72f0(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint *puStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [20];
  undefined2 uStack_dc;
  char cStack_da;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined1 uStack_ba;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  undefined1 uStack_59;
  undefined4 uStack_58;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte bStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (*(char *)(param_1 + 0x9789) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x33e8) != 0) {
    iVar5 = param_1 + 0x2864;
    FUN_ram_4ff3ec14(iVar5,0xffffffff);
    iVar7 = *(int *)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(iVar5);
    if (iVar7 != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x33e8);
      FUN_ram_4ff3ec14(param_1 + 0x79f4,0xffffffff);
      uVar8 = *(uint *)(param_1 + 0x7a00);
      uVar4 = *(uint *)(param_1 + 0x79fc);
      uVar12 = *(undefined4 *)(param_1 + 0x7a04);
      uVar11 = *(undefined4 *)(param_1 + 0x7a08);
      uVar10 = *(undefined4 *)(param_1 + 0x7a0c);
      uVar13 = *(undefined4 *)(param_1 + 0x7a10);
      FUN_ram_4ff3ee10(param_1 + 0x79f4);
      bStack_66 = (byte)uVar8 & 1;
      bStack_65 = (byte)(uVar8 >> 1) & 1;
      bStack_64 = (byte)(uVar8 >> 2) & 1;
      bStack_63 = (byte)(uVar8 >> 3) & 1;
      bStack_54 = (byte)(uVar8 >> 4) & 1;
      bStack_53 = (byte)(uVar8 >> 5) & 1;
      bStack_5a = (byte)(uVar8 >> 6) & 1;
      bStack_68 = (byte)uVar4 & 1;
      bStack_67 = (byte)(uVar4 >> 1) & 1;
      bStack_61 = (byte)(uVar4 >> 2) & 1;
      bStack_60 = (byte)(uVar4 >> 0xe) & 1;
      bStack_5f = (byte)(uVar4 >> 3) & 1;
      bStack_5e = (byte)(uVar4 >> 4) & 1;
      bStack_5d = (byte)(uVar4 >> 5) & 1;
      bStack_51 = (byte)(uVar4 >> 8) & 7;
      bStack_50 = (byte)(uVar4 >> 0xb) & 7;
      bStack_62 = (byte)(uVar8 >> 7) & 1;
      bStack_5c = (byte)(uVar4 >> 6) & 1;
      bStack_5b = (byte)(uVar4 >> 7) & 1;
      bStack_52 = (byte)(uVar4 >> 0xf) & 1;
      uStack_59 = 0;
      uStack_4d = 0;
      uStack_4f = (undefined1)(uVar4 >> 0x10);
      uStack_4e = 5;
      if ((uVar4 >> 0x18 != 0) && (uStack_4e = (char)(uVar4 >> 0x18), 100 < uVar4 >> 0x18)) {
        uStack_4e = 100;
      }
      uStack_58 = uVar10;
      uStack_4c = uVar12;
      uStack_48 = uVar11;
      uStack_44 = uVar13;
      FUN_ram_4ff3ec14(iVar5,0xffffffff);
      piVar6 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(iVar5);
      uVar10 = FUN_ram_48025b94();
      cVar2 = '\0';
      do {
        cVar3 = cVar2 + '\x01';
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        iVar5 = FUN_ram_480450a0(uVar9,cVar3,&bStack_68,piVar6,uVar10,&uStack_b8,0,1);
        if (iVar5 != 0) {
          uStack_100 = uStack_b8;
          uStack_fc = uStack_b4;
          uStack_f8 = uStack_b0;
          uStack_f4 = uStack_ac;
          FUN_ram_4ff2480c(auStack_f0,uVar9,&uStack_100,cVar3,&bStack_68,piVar6,uVar10,1);
        }
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_ba = 1;
        uStack_dc = 1;
        cStack_da = cVar3;
        iVar5 = FUN_ram_480450a0(uVar9,cVar3,&bStack_68,piVar6,uVar10,&uStack_90,0,1);
        if (iVar5 != 0) {
          uStack_d8 = uStack_88;
          uStack_d4 = uStack_80;
          uStack_d0 = uStack_7c;
          uStack_c8 = uStack_78;
          uStack_c0 = CONCAT13(uStack_c0._3_1_,0x10000);
          uStack_bc = CONCAT11(uStack_bc._1_1_,cVar2 + '\x02');
          uStack_c4 = uStack_70;
          uStack_c0._0_2_ = (undefined2)((uint)uStack_6c >> 8);
        }
        cVar2 = '\x01';
        (**(code **)(*piVar6 + 0xa8))(piVar6,&uStack_dc);
      } while (cVar3 != '\x02');
    }
  }
  FUN_ram_480a00b8(param_1 + 0x2870,3);
  if ((*(int *)(param_1 + 0x33ec) == 0) || (*(char *)(*(int *)(param_1 + 0x33ec) + 0x10) == '\0')) {
    FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
    cVar2 = *(char *)(param_1 + 0xb42);
    FUN_ram_4ff3ee10(param_1 + 0xb18);
    if (cVar2 != '\0') {
      iVar5 = *(int *)(param_1 + 0x33e8);
      if (iVar5 != 0) {
        FUN_ram_4ff3ec14(iVar5 + 0xc,0xffffffff);
        bVar1 = *(byte *)(iVar5 + 0x3bf6);
        FUN_ram_4ff3ee10(iVar5 + 0xc);
        if ((bVar1 & 6) != 0) {
LAB_ram_480e7722:
          FUN_ram_48025b94();
          FUN_ram_480e6b84(param_1 + 0x33f4);
          return;
        }
      }
      puStack_104 = (uint *)(param_1 + 0x4c5c);
      cVar2 = '\0';
LAB_ram_480e765e:
      uVar4 = *puStack_104;
joined_r0x480e7664:
      if (uVar4 != 0) {
        iVar5 = __ctzsi2(uVar4);
        uVar4 = uVar4 & uVar4 - 1;
        if (cVar2 == '\0') goto code_r0x480e7682;
        while (cVar2 != '\x01') {
          if (iVar5 < 0x18) {
            iVar7 = 2;
            cVar3 = '\x04';
            goto joined_r0x480e76fe;
          }
          if (uVar4 == 0) goto LAB_ram_480e76be;
          iVar5 = __ctzsi2(uVar4);
          uVar4 = uVar4 & uVar4 - 1;
        }
        while (0x17 < iVar5) {
          if (uVar4 == 0) {
            puStack_104 = puStack_104 + 0x48a;
            cVar2 = '\x02';
            goto LAB_ram_480e765e;
          }
          iVar5 = __ctzsi2(uVar4);
          uVar4 = uVar4 & uVar4 - 1;
        }
        iVar7 = 1;
        cVar3 = '\x02';
        goto joined_r0x480e76fe;
      }
LAB_ram_480e76be:
      cVar2 = cVar2 + '\x01';
      if (cVar2 != '\x03') {
        puStack_104 = puStack_104 + 0x48a;
        goto LAB_ram_480e765e;
      }
    }
  }
  return;
code_r0x480e7682:
  if (iVar5 < 0x18) {
    iVar7 = 0;
    cVar3 = '\x01';
joined_r0x480e76fe:
    if (iVar5 < 0x10) {
      iVar5 = iVar5 * 0xe8 + iVar7 * 0x1228 + 0x3a40;
    }
    else {
      iVar5 = (iVar5 + -0x10) * 0x120;
      iVar7 = param_1 + iVar5;
      if ((*(char *)(iVar7 + 0x70d6) == '\0') || (*(char *)(iVar7 + 0x70b8) != cVar3))
      goto joined_r0x480e7664;
      iVar5 = iVar5 + 0x70f0;
    }
    if (*(char *)(iVar5 + param_1 + 0x37) == '\x03') goto LAB_ram_480e7722;
  }
  goto joined_r0x480e7664;
}


