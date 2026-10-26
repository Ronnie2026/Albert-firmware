/* Firmware entry: 0x4807861a */

undefined4 FUN_ram_4807861a(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *puVar12;
  int *piVar13;
  short *psVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = FUN_ram_48129c8a(param_1,"targets");
  iVar8 = FUN_ram_48129c8a(param_1,"modeExplicit");
  if (iVar8 == 0) {
    iVar9 = FUN_ram_48129d0c(param_1);
    if (iVar9 == 0) {
      return 0;
    }
    for (piVar13 = *(int **)(param_1 + 8); piVar13 != (int *)0x0; piVar13 = (int *)*piVar13) {
      iVar9 = piVar13[8];
      if (iVar9 == 0) {
        return 0;
      }
      iVar10 = FUN_ram_4ff453ae(iVar9,"customSpeedEnabled");
      if ((iVar10 != 0) && (iVar9 = FUN_ram_4ff453ae(iVar9,"targets"), iVar9 != 0)) {
        return 0;
      }
    }
  }
  else {
    iVar9 = FUN_ram_48129d0c(param_1);
    if (iVar9 == 0) {
      return 0;
    }
    for (piVar13 = *(int **)(param_1 + 8); piVar13 != (int *)0x0; piVar13 = (int *)*piVar13) {
      iVar9 = piVar13[8];
      if (iVar9 == 0) {
        return 0;
      }
      ppuVar6 = &PTR_s_customSpeedEnabled_ram_481c4284_ram_48222810;
      while( true ) {
        puVar12 = *ppuVar6;
        ppuVar6 = ppuVar6 + 1;
        iVar10 = FUN_ram_4ff453ae(iVar9,puVar12);
        if (iVar10 == 0) break;
        if (ppuVar6 == &PTR_s_enabled_ram_481ccbd8_8_ram_4822281c) {
          return 0;
        }
      }
    }
  }
  uVar11 = FUN_ram_48129c8a(param_1,"customSpeedEnabled");
  iVar9 = FUN_ram_48129cb4();
  if (iVar9 != 0) {
    iVar9 = FUN_ram_48129ca2(uVar11);
    *(bool *)param_2 = iVar9 != 0;
    iVar9 = FUN_ram_48129cfa(uVar7);
    if ((iVar9 != 0) && (iVar9 = FUN_ram_48129c58(uVar7), iVar9 == 0x1e)) {
      *(undefined1 *)(param_2 + 1) = 0;
      if (iVar8 != 0) {
        uVar11 = FUN_ram_48129c8a(param_1,"modeExplicit");
        iVar8 = FUN_ram_48129cb4();
        if (iVar8 == 0) {
          return 0;
        }
        iVar8 = FUN_ram_48129ca2(uVar11);
        *(bool *)(param_2 + 1) = iVar8 != 0;
      }
      uVar4 = DAT_ram_481f4d0c;
      uVar3 = DAT_ram_481f4d08;
      uVar2 = DAT_ram_481f4cbc;
      uVar11 = DAT_ram_481f4cb8;
      psVar5 = (short *)(param_2 + 2);
      iVar8 = 0;
      psVar14 = psVar5;
      do {
        iVar9 = FUN_ram_48129c6e(uVar7,iVar8);
        iVar10 = FUN_ram_48129cd6();
        if (iVar10 == 0) {
          return 0;
        }
        uVar16 = *(undefined4 *)(iVar9 + 0x18);
        uVar15 = *(uint *)(iVar9 + 0x1c);
        iVar9 = __unorddf2(uVar16,uVar15 & 0x7fffffff,uVar11,uVar2);
        if (iVar9 != 0) {
          return 0;
        }
        iVar9 = __gtdf2(uVar16,uVar15 & 0x7fffffff,uVar11,uVar2);
        if (0 < iVar9) {
          return 0;
        }
        iVar9 = __ltdf2(uVar16,uVar15,0,0);
        if (iVar9 < 0) {
          return 0;
        }
        iVar9 = __gtdf2(uVar16,uVar15,uVar3,uVar4);
        if (0 < iVar9) {
          return 0;
        }
        uVar17 = FUN_ram_48196062(uVar16,uVar15);
        iVar9 = __nedf2(uVar16,uVar15,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        if (iVar9 != 0) {
          return 0;
        }
        lVar18 = FUN_ram_48195bce(uVar16,uVar15);
        iVar8 = iVar8 + 1;
        if (lVar18 == 0) {
          return 0;
        }
        *psVar14 = (short)lVar18;
        psVar14 = psVar14 + 1;
      } while (iVar8 != 0x1e);
      while (sVar1 = *psVar5, psVar5 = psVar5 + 1, (ushort)(sVar1 - 1U) < 0xff) {
        if ((short *)(param_2 + 0x3e) == psVar5) {
          return 1;
        }
      }
    }
  }
  return 0;
}


