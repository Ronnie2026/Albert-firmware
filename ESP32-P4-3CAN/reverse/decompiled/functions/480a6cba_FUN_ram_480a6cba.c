/* Firmware entry: 0x480a6cba */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_480a6cba(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *__s;
  uint uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined **ppuVar16;
  int *piVar17;
  undefined8 uVar18;
  longlong lVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48129d0c();
  if (iVar5 != 0) {
    for (piVar17 = *(int **)(param_1 + 8); piVar17 != (int *)0x0; piVar17 = (int *)*piVar17) {
      iVar5 = piVar17[8];
      if (iVar5 == 0) {
        return 0;
      }
      ppuVar16 = &PTR_s_id_ram_481be3c0_0x14_ram_482227ac;
      while( true ) {
        puVar10 = *ppuVar16;
        ppuVar16 = ppuVar16 + 1;
        iVar6 = FUN_ram_4ff453ae(iVar5,puVar10);
        if (iVar6 == 0) break;
        if (ppuVar16 == &PTR_s_track_ram_481c61cc_ram_482227dc) {
          return 0;
        }
      }
    }
    iVar5 = FUN_ram_48129c8a(param_1,"id");
    iVar6 = FUN_ram_48129cd6();
    uVar2 = DAT_ram_481f4cbc;
    uVar9 = DAT_ram_481f4cb8;
    if (iVar6 != 0) {
      uVar4 = *(uint *)(iVar5 + 0x1c);
      uVar3 = *(undefined4 *)(iVar5 + 0x18);
      iVar5 = __unorddf2(uVar3,uVar4 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if ((((iVar5 == 0) && (iVar5 = __gtdf2(uVar3,uVar4 & 0x7fffffff,uVar9,uVar2), iVar5 < 1)) &&
          (iVar5 = __ltdf2(uVar3,uVar4,0,0), -1 < iVar5)) &&
         (iVar5 = __gtdf2(uVar3,uVar4,DAT_ram_481f4ce0,DAT_ram_481f4ce4), iVar5 < 1)) {
        uVar18 = FUN_ram_48196062(uVar3,uVar4);
        iVar5 = __nedf2(uVar3,uVar4,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        if (iVar5 == 0) {
          lVar19 = FUN_ram_48195bce(uVar3,uVar4);
          if (lVar19 != 0) {
            iVar5 = FUN_ram_48129c8a(param_1,"name");
            iVar6 = FUN_ram_48129ce8();
            if (((iVar6 != 0) && (__s = *(char **)(iVar5 + 0x10), __s != (char *)0x0)) &&
               (sVar7 = strlen(__s), sVar7 < 0x19)) {
              uVar4 = 0;
              while (uVar4 < sVar7) {
                uVar12 = uVar4 + 1;
                pbVar1 = (byte *)(__s + uVar4);
                uVar14 = (uint)*pbVar1;
                uVar4 = uVar12;
                if ((char)*pbVar1 < '\0') {
                  if ((uVar14 & 0xe0) == 0xc0) {
                    uVar14 = uVar14 & 0x1f;
                    uVar15 = 0x80;
                    uVar11 = 1;
                  }
                  else if ((uVar14 & 0xf0) == 0xe0) {
                    uVar14 = uVar14 & 0xf;
                    uVar15 = 0x800;
                    uVar11 = 2;
                  }
                  else {
                    if ((uVar14 & 0xf8) != 0xf0) {
                      return 0;
                    }
                    uVar14 = uVar14 & 7;
                    uVar15 = 0x10000;
                    uVar11 = 3;
                  }
                  if (sVar7 - uVar12 < uVar11) {
                    return 0;
                  }
                  uVar13 = uVar12;
                  do {
                    uVar4 = uVar13 + 1;
                    if (((byte)__s[uVar13] & 0xc0) != 0x80) {
                      return 0;
                    }
                    uVar14 = uVar14 << 6 | (byte)__s[uVar13] & 0x3f;
                    uVar13 = uVar4;
                  } while (uVar11 + uVar12 != uVar4);
                  if (uVar14 < uVar15) {
                    return 0;
                  }
                  if (0x10ffff < uVar14) {
                    return 0;
                  }
                  if (uVar14 - 0xd800 < 0x800) {
                    return 0;
                  }
                }
              }
              FUN_ram_4ff45158(param_2 + 1,__s,sVar7 + 1);
              iVar5 = FUN_ram_480a6348(param_1,"lastUseSequence",0xffffffff,0,param_2 + 0xc);
              if ((iVar5 != 0) &&
                 (iVar5 = FUN_ram_4807806e(param_1,"manual",(int)param_2 + 0x2e), iVar5 != 0)) {
                iVar5 = FUN_ram_48129c8a(param_1,&DAT_ram_481c6214);
                iVar6 = FUN_ram_48129d0c();
                if (iVar6 != 0) {
                  for (piVar17 = *(int **)(iVar5 + 8); piVar17 != (int *)0x0;
                      piVar17 = (int *)*piVar17) {
                    iVar6 = piVar17[8];
                    if (iVar6 == 0) {
                      return 0;
                    }
                    ppuVar16 = &PTR_s_track_ram_481c61cc_ram_482227ec;
                    while( true ) {
                      puVar10 = *ppuVar16;
                      ppuVar16 = ppuVar16 + 1;
                      iVar8 = FUN_ram_4ff453ae(iVar6,puVar10);
                      if (iVar8 == 0) break;
                      if (ppuVar16 == &PTR_s_preset_ram_481cc14c_ram_482227fc) {
                        return 0;
                      }
                    }
                  }
                  iVar6 = FUN_ram_480a4e2a(iVar5,"track",0xffff,0,(int)param_2 + 0x1e);
                  if (iVar6 == 0) {
                    return 0;
                  }
                  iVar6 = FUN_ram_480a4e2a(iVar5,"backrest",0xffff,0,param_2 + 8);
                  if (iVar6 == 0) {
                    return 0;
                  }
                  iVar6 = FUN_ram_480a4e2a(iVar5,&DAT_ram_481c61e0,0xffff,0,(int)param_2 + 0x22);
                  if (iVar6 == 0) {
                    return 0;
                  }
                  iVar5 = FUN_ram_480a4e2a(iVar5,&DAT_ram_481c61e8,0xffff,0,param_2 + 9);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"tolerances");
                  iVar5 = FUN_ram_48077fd8(uVar9,&PTR_s_track_ram_481c61cc_ram_482227dc,4);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  iVar5 = FUN_ram_480a4e2a(uVar9,"track",0xffff,0,(int)param_2 + 0x26);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  iVar5 = FUN_ram_480a4e2a(uVar9,"backrest",0xffff,0,param_2 + 10);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  iVar5 = FUN_ram_480a4e2a(uVar9,&DAT_ram_481c61e0,0xffff,0,(int)param_2 + 0x2a);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  iVar5 = FUN_ram_480a4e2a(uVar9,&DAT_ram_481c61e8,0xffff,0,param_2 + 0xb);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"config");
                  iVar5 = FUN_ram_480a4f4a(uVar9,param_2 + 0xd);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"torque");
                  iVar5 = FUN_ram_480a6468(uVar9,param_2 + 0x36);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"battery");
                  iVar5 = FUN_ram_48078208(uVar9,param_2 + 0x48);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"rearFog");
                  iVar5 = FUN_ram_480a5a20(uVar9,(int)param_2 + 0x122);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"ambient");
                  iVar5 = FUN_ram_480a5ea0(uVar9,(int)param_2 + 0x12a);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  uVar9 = FUN_ram_48129c8a(param_1,"speedTarget");
                  iVar5 = FUN_ram_4807861a(uVar9,param_2 + 0x58);
                  if (iVar5 == 0) {
                    return 0;
                  }
                  *param_2 = (int)lVar19;
                  return iVar5;
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


