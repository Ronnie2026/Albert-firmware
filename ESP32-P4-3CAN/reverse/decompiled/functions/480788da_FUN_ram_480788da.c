/* Firmware entry: 0x480788da */

undefined4 FUN_ram_480788da(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar10 = FUN_ram_48129cfa();
  if ((iVar10 != 0) &&
     (iVar10 = FUN_ram_48129c58(param_1), uVar5 = DAT_ram_481f4d14, uVar4 = DAT_ram_481f4d10,
     uVar2 = DAT_ram_481f4cbc, uVar1 = DAT_ram_481f4cb8, iVar10 == 10)) {
    puVar19 = (undefined1 *)(param_2 + 0x341d);
    iVar10 = 0;
    while( true ) {
      iVar11 = FUN_ram_48129c6e(param_1,iVar10);
      iVar12 = FUN_ram_48129d0c();
      if (iVar12 == 0) break;
      for (piVar18 = *(int **)(iVar11 + 8); piVar18 != (int *)0x0; piVar18 = (int *)*piVar18) {
        iVar12 = piVar18[8];
        if (iVar12 == 0) {
          return 0;
        }
        ppuVar6 = &PTR_s_track_ram_481c61cc_ram_4822276c;
        while( true ) {
          puVar15 = *ppuVar6;
          ppuVar6 = ppuVar6 + 1;
          iVar13 = FUN_ram_4ff453ae(iVar12,puVar15);
          if (iVar13 == 0) break;
          if (ppuVar6 == &PTR_s_config_ram_481bffb4_8_ram_48222784) {
            return 0;
          }
        }
      }
      iVar12 = FUN_ram_48129c8a(iVar11,"track");
      iVar13 = FUN_ram_48129cd6();
      if (iVar13 == 0) {
        return 0;
      }
      uVar17 = *(uint *)(iVar12 + 0x1c);
      uVar7 = *(undefined4 *)(iVar12 + 0x18);
      iVar12 = __unorddf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (iVar12 != 0) {
        return 0;
      }
      iVar12 = __gtdf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (0 < iVar12) {
        return 0;
      }
      iVar12 = __ltdf2(uVar7,uVar17,0,0);
      if (iVar12 < 0) {
        return 0;
      }
      iVar12 = __gtdf2(uVar7,uVar17,uVar4,uVar5);
      if (0 < iVar12) {
        return 0;
      }
      uVar20 = FUN_ram_48196062(uVar7,uVar17);
      iVar12 = __nedf2(uVar7,uVar17,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      if (iVar12 != 0) {
        return 0;
      }
      iVar12 = iVar10 * 10 + param_2;
      uVar9 = FUN_ram_48195bce(uVar7,uVar17);
      *(char *)(iVar12 + 0x3415) = (char)uVar9;
      *(char *)(iVar12 + 0x3416) = (char)((ushort)uVar9 >> 8);
      iVar13 = FUN_ram_48129c8a(iVar11,"backrest");
      iVar14 = FUN_ram_48129cd6();
      if (iVar14 == 0) {
        return 0;
      }
      uVar7 = *(undefined4 *)(iVar13 + 0x18);
      uVar17 = *(uint *)(iVar13 + 0x1c);
      iVar13 = __unorddf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (iVar13 != 0) {
        return 0;
      }
      iVar13 = __gtdf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (0 < iVar13) {
        return 0;
      }
      iVar13 = __ltdf2(uVar7,uVar17,0,0);
      if (iVar13 < 0) {
        return 0;
      }
      iVar13 = __gtdf2(uVar7,uVar17,uVar4,uVar5);
      if (0 < iVar13) {
        return 0;
      }
      uVar20 = FUN_ram_48196062(uVar7,uVar17);
      iVar13 = __nedf2(uVar7,uVar17,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      if (iVar13 != 0) {
        return 0;
      }
      uVar9 = FUN_ram_48195bce(uVar7,uVar17);
      *(char *)(iVar12 + 0x3417) = (char)uVar9;
      *(char *)(iVar12 + 0x3418) = (char)((ushort)uVar9 >> 8);
      iVar13 = FUN_ram_48129c8a(iVar11,&DAT_ram_481c61e0);
      iVar14 = FUN_ram_48129cd6();
      if (iVar14 == 0) {
        return 0;
      }
      uVar17 = *(uint *)(iVar13 + 0x1c);
      uVar7 = *(undefined4 *)(iVar13 + 0x18);
      iVar13 = __unorddf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (iVar13 != 0) {
        return 0;
      }
      iVar13 = __gtdf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (0 < iVar13) {
        return 0;
      }
      iVar13 = __ltdf2(uVar7,uVar17,0,0);
      if (iVar13 < 0) {
        return 0;
      }
      iVar13 = __gtdf2(uVar7,uVar17,uVar4,uVar5);
      if (0 < iVar13) {
        return 0;
      }
      uVar20 = FUN_ram_48196062(uVar7,uVar17);
      iVar13 = __nedf2(uVar7,uVar17,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      if (iVar13 != 0) {
        return 0;
      }
      uVar9 = FUN_ram_48195bce(uVar7,uVar17);
      *(char *)(iVar12 + 0x3419) = (char)uVar9;
      *(char *)(iVar12 + 0x341a) = (char)((ushort)uVar9 >> 8);
      iVar13 = FUN_ram_48129c8a(iVar11,&DAT_ram_481c61e8);
      iVar14 = FUN_ram_48129cd6();
      if (iVar14 == 0) {
        return 0;
      }
      uVar7 = *(undefined4 *)(iVar13 + 0x18);
      uVar17 = *(uint *)(iVar13 + 0x1c);
      iVar13 = __unorddf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (iVar13 != 0) {
        return 0;
      }
      iVar13 = __gtdf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (0 < iVar13) {
        return 0;
      }
      iVar13 = __ltdf2(uVar7,uVar17,0,0);
      if (iVar13 < 0) {
        return 0;
      }
      iVar13 = __gtdf2(uVar7,uVar17,uVar4,uVar5);
      if (0 < iVar13) {
        return 0;
      }
      uVar20 = FUN_ram_48196062(uVar7,uVar17);
      iVar13 = __nedf2(uVar7,uVar17,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      if (iVar13 != 0) {
        return 0;
      }
      uVar9 = FUN_ram_48195bce(uVar7,uVar17);
      *(char *)(iVar12 + 0x341b) = (char)uVar9;
      *(char *)(iVar12 + 0x341c) = (char)((ushort)uVar9 >> 8);
      iVar12 = FUN_ram_48129c8a(iVar11,"validMarker");
      iVar13 = FUN_ram_48129cd6();
      if (iVar13 == 0) {
        return 0;
      }
      uVar17 = *(uint *)(iVar12 + 0x1c);
      uVar7 = *(undefined4 *)(iVar12 + 0x18);
      iVar12 = __unorddf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (iVar12 != 0) {
        return 0;
      }
      iVar12 = __gtdf2(uVar7,uVar17 & 0x7fffffff,uVar1,uVar2);
      if (0 < iVar12) {
        return 0;
      }
      iVar12 = __ltdf2(uVar7,uVar17,0,0);
      if (iVar12 < 0) {
        return 0;
      }
      iVar12 = __gtdf2(uVar7,uVar17,DAT_ram_481f4d08,DAT_ram_481f4d0c);
      if (0 < iVar12) {
        return 0;
      }
      uVar20 = FUN_ram_48196062(uVar7,uVar17);
      iVar12 = __nedf2(uVar7,uVar17,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      if (iVar12 != 0) {
        return 0;
      }
      uVar8 = FUN_ram_48195bce(uVar7,uVar17);
      *puVar19 = uVar8;
      iVar11 = FUN_ram_48129c8a(iVar11,"formatVersion");
      iVar12 = FUN_ram_48129cd6();
      uVar3 = DAT_ram_481f4cbc;
      uVar7 = DAT_ram_481f4cb8;
      if (iVar12 == 0) {
        return 0;
      }
      uVar17 = *(uint *)(iVar11 + 0x1c);
      uVar16 = *(undefined4 *)(iVar11 + 0x18);
      iVar11 = __unorddf2(uVar16,uVar17 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if (iVar11 != 0) {
        return 0;
      }
      iVar11 = __gtdf2(uVar16,uVar17 & 0x7fffffff,uVar7,uVar3);
      if (0 < iVar11) {
        return 0;
      }
      iVar11 = __ltdf2(uVar16,uVar17,0,0);
      if (iVar11 < 0) {
        return 0;
      }
      iVar11 = __gtdf2(uVar16,uVar17,DAT_ram_481f4d08,DAT_ram_481f4d0c);
      if (0 < iVar11) {
        return 0;
      }
      uVar20 = FUN_ram_48196062(uVar16,uVar17);
      iVar11 = __nedf2(uVar16,uVar17,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      if (iVar11 != 0) {
        return 0;
      }
      iVar10 = iVar10 + 1;
      uVar8 = FUN_ram_48195bce(uVar16,uVar17);
      puVar19[1] = uVar8;
      puVar19 = puVar19 + 10;
      if (iVar10 == 10) {
        return 1;
      }
    }
  }
  return 0;
}


