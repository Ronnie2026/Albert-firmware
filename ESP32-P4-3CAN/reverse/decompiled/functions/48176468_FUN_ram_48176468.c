/* Firmware entry: 0x48176468 */

int FUN_ram_48176468(uint *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48174022();
  FUN_ram_48173f5c(param_1);
  *param_1 = param_2;
  if (param_2 == 7) {
    uVar2 = 0xc0001;
    puVar9 = &DAT_ram_48239314;
    puVar8 = &DAT_ram_482392e4;
    puVar7 = &UNK_ram_482392b4;
    puVar4 = &UNK_ram_48239224;
    puVar5 = &UNK_ram_48239284;
    puVar6 = &UNK_ram_48239254;
LAB_ram_481766b6:
    param_1[2] = uVar2;
    param_1[4] = uVar2;
    param_1[6] = uVar2;
    param_1[0xe] = uVar2;
    param_1[8] = uVar2;
    param_1[10] = uVar2;
    param_1[1] = (uint)puVar9;
    param_1[3] = (uint)puVar8;
  }
  else {
    if (7 < param_2) {
      if (param_2 == 10) {
        puVar11 = &LAB_ram_48175c90;
        uVar2 = 0x60001;
        puVar9 = &DAT_ram_48239558;
        puVar8 = &DAT_ram_48239554;
        puVar7 = &DAT_ram_48239550;
        puVar4 = &DAT_ram_48239508;
        puVar5 = &DAT_ram_48239538;
        puVar6 = &DAT_ram_48239520;
      }
      else {
        if (param_2 < 0xb) {
          if (param_2 != 8) {
            param_1[0x12] = (uint)&LAB_ram_481754cc;
            iVar3 = FUN_ram_4817ff24(param_1 + 3,0x1db42);
            if (iVar3 == 0) {
              puVar10 = param_1 + 1;
              iVar3 = FUN_ram_4817ff24(puVar10,1);
              if (((iVar3 == 0) && (iVar3 = FUN_ram_4818014a(puVar10,0xff), iVar3 == 0)) &&
                 (iVar3 = FUN_ram_481805c8(puVar10,puVar10,0x13), iVar3 == 0)) {
                uVar2 = FUN_ram_4818006c(puVar10);
                param_1[0xf] = uVar2;
                iVar3 = FUN_ram_481800da(param_1 + 0xd,&DAT_ram_48239094,0x10);
                if (((iVar3 == 0) && (iVar3 = FUN_ram_4817ffcc(param_1 + 0xd,0xfc,1), iVar3 == 0))
                   && ((iVar3 = FUN_ram_4817ff24(param_1 + 7,9), iVar3 == 0 &&
                       (iVar3 = FUN_ram_4817ff24(param_1 + 0xb,1), iVar3 == 0)))) {
                  FUN_ram_4817fb90(param_1 + 9);
                  param_1[0x10] = 0xfe;
                  return 0;
                }
              }
            }
            FUN_ram_48174022(param_1);
            return iVar3;
          }
          uVar2 = 0x100001;
          puVar9 = &DAT_ram_482391e4;
          puVar8 = &DAT_ram_482391a4;
          puVar7 = &UNK_ram_48239164;
          puVar4 = &UNK_ram_482390a4;
          puVar5 = &UNK_ram_48239124;
          puVar6 = &UNK_ram_482390e4;
          goto LAB_ram_481766b6;
        }
        if (param_2 == 0xb) {
          param_1[0x12] = (uint)&LAB_ram_48175c9e;
          param_1[2] = 0x70001;
          param_1[8] = 0x70001;
          param_1[10] = 0x70001;
          param_1[1] = (uint)&DAT_ram_482394ec;
          param_1[4] = 0x10001;
          param_1[6] = 0x10001;
          param_1[0xc] = 0x10001;
          param_1[3] = (uint)&DAT_ram_482394e8;
          param_1[5] = (uint)&DAT_ram_482394e4;
          param_1[0xe] = 0x80001;
          param_1[0xd] = (uint)&DAT_ram_4823948c;
          param_1[7] = (uint)&DAT_ram_482394c8;
          param_1[9] = (uint)&DAT_ram_482394ac;
          param_1[0xb] = (uint)&DAT_ram_4823995c;
          goto LAB_ram_481765ba;
        }
        if (param_2 != 0xc) {
LAB_ram_481767e2:
          *param_1 = 0;
          return -0x4e80;
        }
        puVar11 = &LAB_ram_48175cac;
        uVar2 = 0x80001;
        puVar9 = &DAT_ram_4823946c;
        puVar8 = &DAT_ram_48239468;
        puVar7 = &DAT_ram_48239464;
        puVar4 = &DAT_ram_48239404;
        puVar5 = &DAT_ram_48239444;
        puVar6 = &DAT_ram_48239424;
      }
      param_1[0x12] = (uint)puVar11;
      param_1[2] = uVar2;
      param_1[0xe] = uVar2;
      param_1[8] = uVar2;
      param_1[10] = uVar2;
      param_1[1] = (uint)puVar9;
      param_1[4] = 0x10001;
      param_1[6] = 0x10001;
      param_1[0xc] = 0x10001;
      param_1[3] = (uint)puVar8;
      param_1[5] = (uint)puVar7;
      param_1[0xd] = (uint)puVar4;
      param_1[7] = (uint)puVar5;
      param_1[9] = (uint)puVar6;
      param_1[0xb] = (uint)&DAT_ram_4823995c;
      goto LAB_ram_481765ba;
    }
    if (param_2 == 4) {
      pcVar1 = FUN_ram_481755ce;
      uVar2 = 0xc0001;
      puVar9 = &DAT_ram_48239784;
      puVar7 = &UNK_ram_48239754;
      puVar4 = &UNK_ram_482396c4;
      puVar5 = &UNK_ram_48239724;
      puVar6 = &UNK_ram_482396f4;
    }
    else if (param_2 < 5) {
      if (param_2 == 2) {
        puVar7 = &DAT_ram_482398a8;
        puVar4 = &DAT_ram_48239854;
        puVar5 = &DAT_ram_4823988c;
        puVar6 = &DAT_ram_48239870;
        param_1[0x12] = (uint)FUN_ram_48175cba;
        param_1[2] = 0x80001;
        param_1[1] = (uint)&DAT_ram_482398c4;
        param_1[6] = 0x70001;
        param_1[0xe] = 0x70001;
        param_1[8] = 0x70001;
        param_1[10] = 0x70001;
        goto LAB_ram_48176664;
      }
      if (param_2 != 3) {
        if (param_2 == 1) {
          param_1[0x12] = (uint)FUN_ram_48175efe;
          param_1[2] = 0x60001;
          param_1[6] = 0x60001;
          param_1[0xe] = 0x60001;
          param_1[8] = 0x60001;
          param_1[10] = 0x60001;
          param_1[1] = (uint)&DAT_ram_48239944;
          param_1[5] = (uint)&DAT_ram_4823992c;
          param_1[0xd] = (uint)&DAT_ram_482398e4;
          param_1[7] = (uint)&DAT_ram_48239914;
          param_1[9] = (uint)&DAT_ram_482398fc;
          param_1[0xc] = 0x10001;
          param_1[0xb] = (uint)&DAT_ram_4823995c;
          uVar2 = FUN_ram_4818006c(param_1 + 1);
          param_1[0xf] = uVar2;
          uVar2 = FUN_ram_4818006c(param_1 + 0xd);
          param_1[0x10] = uVar2;
          param_1[0x11] = 1;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          return 0;
        }
        goto LAB_ram_481767e2;
      }
      pcVar1 = FUN_ram_48176048;
      uVar2 = 0x80001;
      puVar9 = &DAT_ram_48239834;
      puVar7 = &DAT_ram_48239814;
      puVar4 = &DAT_ram_482397b4;
      puVar5 = &DAT_ram_482397f4;
      puVar6 = &DAT_ram_482397d4;
    }
    else {
      if (param_2 != 5) {
        uVar2 = 0x80001;
        puVar9 = &DAT_ram_482393e4;
        puVar8 = &DAT_ram_482393c4;
        puVar7 = &DAT_ram_482393a4;
        puVar4 = &DAT_ram_48239344;
        puVar5 = &DAT_ram_48239384;
        puVar6 = &DAT_ram_48239364;
        goto LAB_ram_481766b6;
      }
      pcVar1 = (code *)&LAB_ram_48175540;
      uVar2 = 0x110001;
      puVar9 = &DAT_ram_48239680;
      puVar7 = &UNK_ram_4823963c;
      puVar4 = &UNK_ram_48239570;
      puVar5 = &UNK_ram_482395f8;
      puVar6 = &UNK_ram_482395b4;
    }
    param_1[0x12] = (uint)pcVar1;
    param_1[2] = uVar2;
    param_1[6] = uVar2;
    param_1[0xe] = uVar2;
    param_1[8] = uVar2;
    param_1[10] = uVar2;
    param_1[1] = (uint)puVar9;
  }
LAB_ram_48176664:
  param_1[5] = (uint)puVar7;
  param_1[0xd] = (uint)puVar4;
  param_1[7] = (uint)puVar5;
  param_1[9] = (uint)puVar6;
  param_1[0xc] = 0x10001;
  param_1[0xb] = (uint)&DAT_ram_4823995c;
LAB_ram_481765ba:
  uVar2 = FUN_ram_4818006c(param_1 + 1);
  param_1[0xf] = uVar2;
  uVar2 = FUN_ram_4818006c(param_1 + 0xd);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = uVar2;
  param_1[0x11] = 1;
  return 0;
}


