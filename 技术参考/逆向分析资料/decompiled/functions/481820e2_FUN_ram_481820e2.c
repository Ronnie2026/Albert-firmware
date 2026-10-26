/* Firmware entry: 0x481820e2 */

void FUN_ram_481820e2(uint *param_1,uint *param_2,undefined4 param_3,uint param_4,uint *param_5,
                     uint param_6,uint *param_7)

{
  int iVar1;
  size_t __n;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  size_t __n_00;
  uint *puVar16;
  uint *puVar17;
  uint *puStack_60;
  int iStack_5c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __n_00 = param_6 * 4;
  puVar13 = param_7 + param_6;
  sVar9 = param_6 * 0xc;
  puVar12 = puVar13 + param_6;
  puVar16 = puVar12 + param_6;
  if (param_6 <= param_4) {
    param_4 = param_6;
  }
  __n = (param_6 - param_4) * 4;
  if (param_2 == (uint *)0x0) {
    FUN_ram_4ff45158(param_7,param_3);
    memset(param_7 + param_4,0,__n);
    if (param_1 != param_5) {
      FUN_ram_4ff45158(param_1,param_5,__n_00);
    }
    puStack_60 = (uint *)0x0;
  }
  else {
    puStack_60 = puVar16 + param_6;
    FUN_ram_4ff45158();
    memset(param_7 + param_4,0,__n);
    if (param_1 != param_5) {
      FUN_ram_4ff45158(param_1,param_5,__n_00);
    }
    memset(param_2,0,__n_00);
    memset(puVar16 + param_6,0,__n_00);
    puVar16[param_6] = 1;
  }
  iVar1 = (param_6 + param_4) * 0x20;
  if (iVar1 != 0) {
    puVar10 = puVar16 + (param_6 - 1);
    iStack_5c = 0;
    do {
      uVar14 = (int)(-(*param_1 & 1) & -(*param_7 & 1)) >> 0x1f;
      uVar15 = ~((int)-(*param_1 & 1) >> 0x1f) & (int)-(*param_7 & 1) >> 0x1f;
      if (param_6 != 0) {
        uVar11 = 0;
        puVar3 = param_7;
        puVar5 = param_1;
        puVar17 = puVar13;
        do {
          uVar6 = *puVar5;
          uVar7 = *puVar3;
          puVar5 = puVar5 + 1;
          uVar8 = uVar6 - uVar11;
          *puVar17 = uVar8 - uVar7;
          puVar3 = puVar3 + 1;
          uVar11 = (uint)(uVar6 < uVar11) + (uint)(uVar8 < uVar7);
          puVar17 = puVar17 + 1;
        } while (param_1 + param_6 != puVar5);
        FUN_ram_4ff45158(puVar12,puVar13,__n_00);
        uVar11 = 0;
        puVar3 = puVar12;
        puVar5 = param_7;
        if (param_7 != puVar12) {
          do {
            *puVar3 = ~uVar14 & *puVar3 | uVar14 & *puVar5;
            uVar11 = uVar11 + 1;
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + 1;
          } while (param_6 != uVar11);
        }
        FUN_ram_4ff45158(puVar16,param_7,__n_00);
        if (param_1 != puVar16) {
          uVar11 = 0;
          puVar3 = param_1;
          puVar5 = puVar16;
          do {
            *puVar5 = ~uVar15 & *puVar5 | uVar15 & *puVar3;
            uVar11 = uVar11 + 1;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          } while (param_6 != uVar11);
        }
        uVar11 = 0;
        puVar3 = puVar16;
        puVar5 = puVar13;
        if (__n_00 != sVar9) {
          do {
            *puVar3 = ~uVar14 & *puVar3 | uVar14 & *puVar5;
            uVar11 = uVar11 + 1;
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + 1;
          } while (param_6 != uVar11);
        }
        uVar11 = 0;
        puVar3 = puVar16 + param_6;
        do {
          uVar6 = puVar3[-1];
          puVar3 = puVar3 + -1;
          *puVar3 = uVar6 >> 1 | uVar11;
          uVar11 = uVar6 << 0x1f;
        } while (puVar16 != puVar3);
      }
      FUN_ram_4ff45158(param_7,puVar12,__n_00);
      FUN_ram_4ff45158(param_1,puVar16,__n_00);
      uVar2 = FUN_ram_48181632(param_1,param_7,param_6);
      if (param_7 != param_1) {
        FUN_ram_4818154a(param_7,param_1,param_6,uVar2);
      }
      if (param_2 != (uint *)0x0) {
        if (param_6 == 0) {
          FUN_ram_48181aea(puVar13,param_5,0,0);
          if ((puVar12 == puStack_60) && (puVar16 == param_2)) {
LAB_ram_481824a0:
            iVar4 = FUN_ram_48181aea(puVar16,param_5,param_6,*puVar16 & 1);
            if (param_6 == 0) goto LAB_ram_481824b4;
            goto LAB_ram_48182408;
          }
          iVar4 = FUN_ram_48181aea(puVar16,param_5,0,*puVar16 & 1);
LAB_ram_481824b4:
          *puVar10 = *puVar10 | iVar4 << 0x1f;
          if (param_2 == puStack_60) {
            return;
          }
        }
        else {
          uVar11 = 0;
          puVar3 = puStack_60;
          puVar5 = param_2;
          puVar17 = puVar13;
          do {
            uVar6 = *puVar5;
            uVar7 = *puVar3;
            puVar5 = puVar5 + 1;
            uVar8 = uVar6 - uVar11;
            *puVar17 = uVar8 - uVar7;
            puVar3 = puVar3 + 1;
            uVar11 = (uint)(uVar6 < uVar11) + (uint)(uVar8 < uVar7);
            puVar17 = puVar17 + 1;
          } while (param_2 + param_6 != puVar5);
          FUN_ram_48181aea(puVar13,param_5,param_6);
          FUN_ram_4ff45158(puVar12,puVar13,__n_00);
          if (puVar12 == puStack_60) {
            FUN_ram_4ff45158(puVar16,puVar12,__n_00);
            if (puVar16 == param_2) goto LAB_ram_4818249a;
LAB_ram_481823aa:
            uVar11 = 0;
            puVar3 = param_2;
            puVar5 = puVar16;
            do {
              *puVar5 = ~uVar15 & *puVar5 | uVar15 & *puVar3;
              uVar11 = uVar11 + 1;
              puVar3 = puVar3 + 1;
              puVar5 = puVar5 + 1;
            } while (param_6 != uVar11);
            if (__n_00 != sVar9) goto LAB_ram_481823d4;
          }
          else {
            uVar11 = 0;
            puVar3 = puVar12;
            puVar5 = puStack_60;
            do {
              *puVar3 = ~uVar14 & *puVar3 | uVar14 & *puVar5;
              uVar11 = uVar11 + 1;
              puVar5 = puVar5 + 1;
              puVar3 = puVar3 + 1;
            } while (param_6 != uVar11);
            FUN_ram_4ff45158(puVar16,puStack_60,__n_00);
            if (puVar16 != param_2) goto LAB_ram_481823aa;
LAB_ram_4818249a:
            if (__n_00 == sVar9) goto LAB_ram_481824a0;
LAB_ram_481823d4:
            uVar15 = 0;
            puVar3 = puVar13;
            puVar5 = puVar16;
            do {
              *puVar5 = ~uVar14 & *puVar5 | uVar14 & *puVar3;
              uVar15 = uVar15 + 1;
              puVar3 = puVar3 + 1;
              puVar5 = puVar5 + 1;
            } while (param_6 != uVar15);
          }
          iVar4 = FUN_ram_48181aea(puVar16,param_5,param_6,*puVar16 & 1);
LAB_ram_48182408:
          uVar14 = 0;
          puVar3 = puVar16 + param_6;
          do {
            uVar15 = puVar3[-1];
            puVar3 = puVar3 + -1;
            *puVar3 = uVar14 | uVar15 >> 1;
            uVar14 = uVar15 << 0x1f;
          } while (puVar16 != puVar3);
          *puVar10 = *puVar10 | iVar4 << 0x1f;
          FUN_ram_4ff45158(puStack_60,puVar12,__n_00);
          FUN_ram_4ff45158(param_2,puVar16,__n_00);
          if (param_2 == puStack_60) goto LAB_ram_4818245c;
        }
        FUN_ram_4818154a(puStack_60,param_2,param_6,uVar2);
      }
LAB_ram_4818245c:
      iStack_5c = iStack_5c + 1;
    } while (iStack_5c != iVar1);
  }
  return;
}


