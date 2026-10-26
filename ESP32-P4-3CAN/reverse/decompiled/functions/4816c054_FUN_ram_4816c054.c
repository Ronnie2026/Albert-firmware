/* Firmware entry: 0x4816c054 */

int FUN_ram_4816c054(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    *(undefined4 *)(param_1[0xf] + 0x6c) = 0;
    return 0;
  }
  iVar12 = param_1[6];
  if (iVar12 == 0) {
    puVar8 = (undefined1 *)param_1[0x32];
    iVar12 = *(int *)(*param_1 + 0x3c);
    iVar13 = *(int *)(*param_1 + 0x40);
    iVar9 = *param_1;
    if (puVar8 != (undefined1 *)0x0) goto LAB_ram_4816c084;
LAB_ram_4816c194:
    if ((*(char *)(iVar9 + 8) == '\0') && (*(char *)(iVar9 + 10) == '\x02')) {
      return -0x5d80;
    }
    iVar7 = param_1[0x10];
    iVar4 = *(int *)(iVar7 + 0x104);
    if (iVar4 != 0) goto LAB_ram_4816c09c;
LAB_ram_4816c1b0:
    iVar4 = *(int *)(iVar9 + 0x58);
    uVar5 = *(undefined4 *)(iVar9 + 0x5c);
    bVar1 = iVar4 != 0;
  }
  else {
    puVar8 = (undefined1 *)param_1[0x32];
    iVar13 = param_1[7];
    iVar9 = *param_1;
    if (puVar8 == (undefined1 *)0x0) goto LAB_ram_4816c194;
LAB_ram_4816c084:
    if (puVar8 == &DAT_ram_481df390) {
      puVar8 = (undefined1 *)0x0;
    }
    iVar7 = param_1[0x10];
    iVar4 = *(int *)(iVar7 + 0x104);
    if (iVar4 == 0) goto LAB_ram_4816c1b0;
LAB_ram_4816c09c:
    uVar5 = *(undefined4 *)(iVar7 + 0x108);
    bVar1 = true;
  }
  iVar12 = thunk_FUN_ram_48188cba
                     (param_3,iVar4,uVar5,*(undefined4 *)(iVar9 + 0x50),puVar8,param_1[0xf] + 0x6c,
                      iVar12,iVar13,param_5);
  iVar9 = param_1[4];
  if (iVar9 == 0x303) {
    iVar9 = FUN_ram_48177194(param_3 + 0xcc,2);
    if (iVar9 == 0) {
      iVar9 = param_1[4];
      goto LAB_ram_4816c0be;
    }
    puStack_24 = *(undefined4 **)(param_3 + 0xd0);
    uStack_28 = *(undefined4 *)(param_3 + 0xcc);
    iVar9 = FUN_ram_481774c4(&uStack_28);
    piVar3 = (int *)(iVar9 - 2);
    if ((int *)0x2 < piVar3) {
      ebreak();
      cVar14 = *(char *)(*(int *)(iVar9 + 0x3e) + 2);
      if (cVar14 == '\x03') {
        cVar14 = *(char *)(*piVar3 + 10);
      }
      uVar10 = (uint)*(byte *)(*(int *)(*(int *)(iVar9 + 0x3e) + 0x10) + 10);
      if ((10 < uVar10) || ((0x69eU >> (uVar10 & 0x1f) & 1) == 0)) {
        *(undefined4 *)(*(int *)(iVar9 + 0x3a) + 0x6c) = 0;
        goto LAB_ram_4816c42e;
      }
      if (*(char *)(*piVar3 + 8) == '\x01') {
        if (uVar10 == 7) goto LAB_ram_4816c42e;
        if (cVar14 == '\0') {
          *(undefined4 *)(*(int *)(iVar9 + 0x3a) + 0x6c) = 0x80;
          goto LAB_ram_4816c42e;
        }
      }
      iVar12 = FUN_ram_48170c76(piVar3,1);
      if (iVar12 != 0) {
        return iVar12;
      }
      iVar12 = *(int *)(iVar9 + 0x3a);
      if ((((*(char *)(*piVar3 + 8) != '\0') && (*(int *)(iVar9 + 0x86) == 7)) &&
          (*(int *)(iVar9 + 0x7a) == 0x16)) &&
         (((pcVar11 = *(char **)(iVar9 + 0x72), *pcVar11 == '\v' && (pcVar11[4] == '\0')) &&
          ((pcVar11[5] == '\0' && (pcVar11[6] == '\0')))))) {
        *(undefined4 *)(iVar12 + 0x6c) = 0x40;
        if (cVar14 != '\x01') {
          return -0x7480;
        }
LAB_ram_4816c42e:
        *(int *)(iVar9 + 2) = *(int *)(iVar9 + 2) + 1;
        return 0;
      }
      if (*(int *)(iVar12 + 0x68) != 0) {
        FUN_ram_48189290();
        thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar12 + 0x68));
        *(undefined4 *)(iVar12 + 0x68) = 0;
      }
      iVar12 = thunk_FUN_ram_4817b126(1,0x198);
      if (iVar12 == 0) {
        FUN_ram_48170f7a(piVar3,2,0x50);
        return -0x7f00;
      }
      FUN_ram_48189282();
      if ((*(int *)(iVar9 + 0x7a) == 0x16) && (pcVar11 = *(char **)(iVar9 + 0x72), *pcVar11 == '\v')
         ) {
        uVar10 = *(uint *)(iVar9 + 0x86);
        if (((uVar10 < 10) || (pcVar11[4] != '\0')) ||
           (uVar10 != ((uint)(*(ushort *)(pcVar11 + 5) >> 8) |
                      (*(ushort *)(pcVar11 + 5) & 0xff) << 8) + 7)) {
LAB_ram_4816c51e:
          FUN_ram_48170f7a(piVar3,2,0x32);
          iVar13 = -0x7300;
        }
        else {
          uVar15 = 7;
          iVar4 = 0;
          do {
            uVar16 = uVar15 + 3;
            if (uVar10 < uVar16) goto LAB_ram_4816c51e;
            iVar13 = *(int *)(iVar9 + 0x72);
            if (*(char *)(uVar15 + iVar13) != '\0') {
              FUN_ram_48170f7a(piVar3,2,0x2b);
LAB_ram_4816c548:
              iVar13 = -0x7a00;
              goto LAB_ram_4816c40c;
            }
            uVar2 = *(ushort *)((char *)(uVar15 + iVar13) + 1);
            uVar6 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
            if ((uVar6 < 0x80) || (uVar15 = uVar16 + uVar6, uVar10 < uVar15)) goto LAB_ram_4816c51e;
            if (((iVar4 == 0) && (*(char *)(*piVar3 + 8) == '\0')) && (*(int *)(iVar9 + 6) == 1)) {
              iVar17 = *(int *)(iVar9 + 0x36);
              iVar7 = *(int *)(iVar17 + 0x68);
              if (((iVar7 == 0) || (uVar6 != *(uint *)(iVar7 + 8))) ||
                 (iVar13 = FUN_ram_4ff4511a(*(undefined4 *)(iVar7 + 0xc),iVar13 + uVar16),
                 iVar13 != 0)) {
                FUN_ram_48170f7a(piVar3,2,0x31);
                goto LAB_ram_4816c548;
              }
              FUN_ram_48189290(iVar7);
              thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar17 + 0x68));
              iVar13 = *(int *)(iVar9 + 0x72);
              *(undefined4 *)(iVar17 + 0x68) = 0;
            }
            iVar13 = FUN_ram_48189d0e(iVar12,iVar13 + uVar16,uVar6);
            if (iVar13 == -0x2580) {
              uVar5 = 0x2b;
LAB_ram_4816c3fa:
              FUN_ram_48170f7a(piVar3,2,uVar5);
              goto LAB_ram_4816c40c;
            }
            if (iVar13 < -0x257f) {
              if (iVar13 == -0x2880) {
                uVar5 = 0x50;
                goto LAB_ram_4816c3fa;
              }
              if (iVar13 != -0x262e) goto LAB_ram_4816c4b6;
            }
            else if (iVar13 != 0) {
LAB_ram_4816c4b6:
              uVar5 = 0x2a;
              goto LAB_ram_4816c3fa;
            }
            uVar10 = *(uint *)(iVar9 + 0x86);
            iVar4 = iVar4 + 1;
          } while (uVar15 < uVar10);
          iVar13 = FUN_ram_4816c054(piVar3,cVar14,iVar12,
                                    *(undefined4 *)(*(int *)(iVar9 + 0x3e) + 0x10),0);
          if (iVar13 == 0) {
            *(int *)(*(int *)(iVar9 + 0x3a) + 0x68) = iVar12;
            goto LAB_ram_4816c42e;
          }
        }
      }
      else {
        FUN_ram_48170f7a(piVar3,2,10);
        iVar13 = -0x7700;
      }
LAB_ram_4816c40c:
      FUN_ram_48189290(iVar12);
      thunk_FUN_ram_4ff209c6(iVar12);
      return iVar13;
    }
    iVar13 = FUN_ram_4816aeea(param_1,*puStack_24);
    iVar9 = param_1[4];
    if (iVar13 == 0) goto LAB_ram_4816c0be;
    iVar13 = param_1[0xf];
    *(uint *)(iVar13 + 0x6c) = *(uint *)(iVar13 + 0x6c) | 0x10000;
    if (iVar12 == 0) {
      iVar12 = -0x7a00;
    }
    FUN_ram_4816bf3c(param_3,param_4,*(undefined1 *)(*param_1 + 8),iVar9,iVar13 + 0x6c);
LAB_ram_4816c20a:
    if (param_2 == 1) {
      if (iVar12 == -0x2700) {
        return 0;
      }
      if (iVar12 == -0x7a00) {
        return 0;
      }
      goto LAB_ram_4816c0ee;
    }
joined_r0x4816c210:
    if ((bVar1) || (param_2 != 2)) goto LAB_ram_4816c0ee;
  }
  else {
LAB_ram_4816c0be:
    iVar9 = FUN_ram_4816bf3c(param_3,param_4,*(undefined1 *)(*param_1 + 8),iVar9,param_1[0xf] + 0x6c
                            );
    if (iVar9 != 0) {
      if (iVar12 != 0) goto LAB_ram_4816c20a;
      if (param_2 == 1) {
        return 0;
      }
      iVar12 = -0x7a00;
      goto joined_r0x4816c210;
    }
    if (param_2 == 1) {
      if (iVar12 == -0x2700) {
        return 0;
      }
      if (iVar12 == -0x7a00) {
        return 0;
      }
LAB_ram_4816c172:
      if (iVar12 == 0) {
        return 0;
      }
      goto LAB_ram_4816c0ee;
    }
    if ((bVar1) || (param_2 != 2)) goto LAB_ram_4816c172;
  }
  iVar12 = -0x7680;
LAB_ram_4816c0ee:
  iVar9 = 0x31;
  uVar10 = *(uint *)(param_1[0xf] + 0x6c);
  if (((((uVar10 & 0x100) == 0) && (iVar9 = 0x2a, (uVar10 & 4) == 0)) &&
      (iVar9 = 0x2b, (uVar10 >> 0xb & 0x33) == 0)) &&
     ((iVar9 = 0x2d, (uVar10 & 1) == 0 && (iVar9 = 0x2c, (uVar10 & 2) == 0)))) {
    iVar9 = (-(uint)((uVar10 & 8) == 0) & 0xfffffffe) + 0x30;
  }
  FUN_ram_48170f7a(param_1,2,iVar9);
  return iVar12;
}


