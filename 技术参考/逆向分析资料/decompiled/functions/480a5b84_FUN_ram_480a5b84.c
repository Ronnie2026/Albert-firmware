/* Firmware entry: 0x480a5b84 */

int FUN_ram_480a5b84(int param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 uVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar9 = FUN_ram_48129d0c();
  if (iVar9 != 0) {
    for (piVar15 = *(int **)(param_1 + 8); piVar15 != (int *)0x0; piVar15 = (int *)*piVar15) {
      iVar9 = piVar15[8];
      if (iVar9 == 0) {
        return 0;
      }
      ppuVar6 = &PTR_s_preset_ram_481cc14c_ram_482227fc;
      while( true ) {
        puVar11 = *ppuVar6;
        ppuVar6 = ppuVar6 + 1;
        iVar10 = FUN_ram_4ff453ae(iVar9,puVar11);
        if (iVar10 == 0) break;
        if (ppuVar6 == &PTR_s_customSpeedEnabled_ram_481c4284_ram_48222810) {
          return 0;
        }
      }
    }
    iVar9 = FUN_ram_48129c8a(param_1,"preset");
    iVar10 = FUN_ram_48129cd6();
    uVar5 = DAT_ram_481f4cbc;
    uVar4 = DAT_ram_481f4cb8;
    if (iVar10 != 0) {
      uVar17 = *(uint *)(iVar9 + 0x1c);
      uVar16 = *(undefined4 *)(iVar9 + 0x18);
      iVar9 = __unorddf2(uVar16,uVar17 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if ((((iVar9 == 0) && (iVar9 = __gtdf2(uVar16,uVar17 & 0x7fffffff,uVar4,uVar5), iVar9 < 1)) &&
          (iVar9 = __ltdf2(uVar16,uVar17,0,0), -1 < iVar9)) &&
         (iVar9 = __gtdf2(uVar16,uVar17,DAT_ram_481f4d08,DAT_ram_481f4d0c), iVar9 < 1)) {
        uVar18 = FUN_ram_48196062(uVar16,uVar17);
        iVar9 = __nedf2(uVar16,uVar17,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        if (iVar9 == 0) {
          bVar7 = FUN_ram_48195bce(uVar16,uVar17);
          *param_2 = bVar7;
          iVar9 = FUN_ram_48129c8a(param_1,"sdiBlockMax");
          iVar10 = FUN_ram_48129cd6();
          if (iVar10 != 0) {
            uVar16 = *(undefined4 *)(iVar9 + 0x18);
            uVar17 = *(uint *)(iVar9 + 0x1c);
            iVar9 = __unorddf2(uVar16,uVar17 & 0x7fffffff,uVar4,uVar5);
            if (((iVar9 == 0) &&
                (iVar9 = __gtdf2(uVar16,uVar17 & 0x7fffffff,uVar4,uVar5), iVar9 < 1)) &&
               ((iVar9 = __ltdf2(uVar16,uVar17,0,0), -1 < iVar9 &&
                (iVar9 = __gtdf2(uVar16,uVar17,DAT_ram_481f4d10,DAT_ram_481f4d14), iVar9 < 1)))) {
              uVar18 = FUN_ram_48196062(uVar16,uVar17);
              iVar9 = __nedf2(uVar16,uVar17,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
              if (iVar9 == 0) {
                uVar8 = FUN_ram_48195bce(uVar16,uVar17);
                *(undefined2 *)(param_2 + 2) = uVar8;
                iVar9 = FUN_ram_480a4e2a(param_1,"sdiCautionMax",0xffff,0,param_2 + 4);
                if (((iVar9 != 0) &&
                    (iVar9 = FUN_ram_480a4d0a(param_1,"minValidSdi",0xff,0,param_2 + 6), iVar9 != 0)
                    ) && ((iVar9 = FUN_ram_480a4d0a(param_1,"radarBlockMaxRaw",0xff,0,param_2 + 7),
                          iVar9 != 0 && (uVar17 = (uint)*param_2, uVar17 < 4)))) {
                  uVar1 = *(ushort *)(param_2 + 2);
                  uVar2 = *(ushort *)(param_2 + 4);
                  uVar3 = *(ushort *)(param_2 + 6);
                  if (uVar17 == 3) {
                    uVar12 = uVar1;
                    if (0x1ff < uVar1) {
                      uVar12 = 0x1ff;
                    }
                    uVar13 = uVar2;
                    if (0x1ff < uVar2) {
                      uVar13 = 0x1ff;
                    }
                    uVar14 = uVar3 & 0xff;
                    if (6 < (uVar3 & 0xff)) {
                      uVar14 = 6;
                    }
                    uVar14 = uVar14 | (ushort)param_2[7] << 8;
                  }
                  else {
                    iVar10 = uVar17 * 6;
                    uVar14 = *(ushort *)(&DAT_ram_48222c74 + iVar10);
                    uVar12 = *(ushort *)(&DAT_ram_48222c70 + iVar10);
                    uVar13 = *(ushort *)(&DAT_ram_48222c72 + iVar10);
                  }
                  if (((uVar1 == uVar12) && (uVar2 == uVar13)) && (uVar3 == uVar14)) {
                    return iVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


