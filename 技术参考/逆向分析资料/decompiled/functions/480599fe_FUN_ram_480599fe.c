/* Firmware entry: 0x480599fe */

undefined4 FUN_ram_480599fe(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  char cVar16;
  uint local_298 [24];
  byte abStack_238 [4];
  uint local_234 [24];
  byte bStack_1d4;
  uint local_1d0 [24];
  byte bStack_170;
  uint local_16c [24];
  undefined1 auStack_10c [4];
  uint auStack_108 [25];
  uint local_a4 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar13 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar13,0xffffffff);
  iVar1 = *(int *)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar13);
  if (iVar1 == 0) {
    FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
    *(undefined4 *)(param_1 + 0x9784) = 0xffffff38;
    FUN_ram_4ff3ee10(param_1 + 0xb30);
    return 0;
  }
  FUN_ram_4805934a(local_298,param_1);
  iVar1 = param_1 + 0xb30;
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  puVar11 = (uint *)(param_1 + 0x9520);
  puVar8 = local_16c;
  do {
    uVar12 = puVar11[1];
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    uVar6 = puVar11[4];
    *puVar8 = *puVar11;
    puVar8[1] = uVar12;
    puVar8[2] = uVar4;
    puVar8[3] = uVar5;
    puVar8[4] = uVar6;
    puVar11 = puVar11 + 5;
    puVar8 = puVar8 + 5;
  } while (puVar11 != (uint *)(param_1 + 0x964c));
  pbVar14 = &DAT_ram_4ff47e48;
  FUN_ram_4ff3ee10(iVar1);
  do {
    uVar4 = (uint)*pbVar14;
    if (uVar4 == 1) {
      puVar8 = local_16c;
LAB_ram_48059c0e:
      if ((byte)puVar8[0x18] != 0) {
        puVar11 = puVar8 + (byte)puVar8[0x18];
        do {
          puVar10 = local_298;
          if ((uVar4 == 1) || (puVar10 = local_1d0, uVar4 != 2)) {
            uVar5 = (uint)(byte)puVar10[0x18];
            uVar6 = *puVar8 & 0x7ff;
            if (uVar5 != 0) goto LAB_ram_48059c3c;
LAB_ram_48059d34:
            cVar16 = '\x01';
            uVar12 = 0;
          }
          else {
            uVar5 = (uint)bStack_1d4;
            puVar10 = local_234;
            uVar6 = *puVar8 & 0x7ff;
            if (uVar5 == 0) goto LAB_ram_48059d34;
LAB_ram_48059c3c:
            uVar12 = 0;
            puVar9 = puVar10;
            do {
              uVar7 = *puVar9;
              puVar9 = puVar9 + 1;
              if (uVar6 <= uVar7) {
                if (uVar12 < uVar5) {
                  if (uVar6 == puVar10[uVar12]) goto LAB_ram_48059cae;
                  if (0x17 < uVar5) goto LAB_ram_48059cba;
                  uVar7 = uVar5 - uVar12 & 0xff;
                  iVar15 = -(uVar7 - 1 & 0xff);
                  cVar16 = (char)uVar5 + '\x01';
                  FUN_ram_4ff4522c(puVar10 + iVar15 + uVar5,puVar10 + (uVar5 - 1) + iVar15,
                                   uVar7 << 2);
                  goto LAB_ram_48059ca0;
                }
                break;
              }
              uVar12 = uVar12 + 1 & 0xff;
            } while (uVar12 != uVar5);
            if (0x17 < uVar5) {
LAB_ram_48059cba:
              FUN_ram_4ff3ec14(iVar1,0xffffffff);
              *(uint *)(param_1 + 0x9784) = -100 - uVar4;
              FUN_ram_4ff3ee10(iVar1);
              return 0;
            }
            cVar16 = (char)uVar5 + '\x01';
          }
LAB_ram_48059ca0:
          puVar10[uVar12] = uVar6;
          *(char *)(puVar10 + 0x18) = cVar16;
LAB_ram_48059cae:
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar11);
      }
    }
    else {
      if (uVar4 == 2) {
        puVar8 = (uint *)(auStack_10c + 4);
        goto LAB_ram_48059c0e;
      }
      if (uVar4 == 4) {
        puVar8 = (uint *)(auStack_10c + 0x68);
        goto LAB_ram_48059c0e;
      }
    }
    pbVar14 = pbVar14 + 1;
  } while (pbVar14 != &DAT_ram_4ff47e4b);
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  uVar4 = (uint)abStack_238[0];
  if (uVar4 == *(byte *)(param_1 + 0x9454)) {
    if (uVar4 != 0) {
      puVar11 = local_298;
      puVar8 = puVar11 + uVar4;
      puVar10 = (uint *)(param_1 + 0x93f4);
      do {
        uVar4 = *puVar10;
        uVar5 = *puVar11;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        if (uVar4 != uVar5) goto LAB_ram_48059b06;
      } while (puVar11 != puVar8);
    }
    uVar4 = (uint)bStack_1d4;
    if (uVar4 != *(byte *)(param_1 + 0x94b8)) goto LAB_ram_48059b06;
    if (uVar4 != 0) {
      puVar10 = (uint *)(param_1 + 0x9458);
      puVar8 = puVar10 + uVar4;
      puVar11 = local_234;
      do {
        uVar4 = *puVar10;
        uVar5 = *puVar11;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        if (uVar4 != uVar5) goto LAB_ram_48059b06;
      } while (puVar10 != puVar8);
    }
    uVar4 = (uint)bStack_170;
    if (uVar4 != *(byte *)(param_1 + 0x951c)) goto LAB_ram_48059b06;
    if (uVar4 != 0) {
      puVar10 = (uint *)(param_1 + 0x94bc);
      puVar8 = puVar10 + uVar4;
      puVar11 = local_1d0;
      do {
        uVar4 = *puVar10;
        uVar5 = *puVar11;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        if (uVar4 != uVar5) goto LAB_ram_48059b06;
      } while (puVar10 != puVar8);
    }
    iVar15 = *(int *)(param_1 + 0x977c);
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x9780) == iVar15) {
        FUN_ram_4ff3ee10(iVar1);
        return 1;
      }
      FUN_ram_4ff3ee10();
      goto LAB_ram_48059e04;
    }
  }
  else {
LAB_ram_48059b06:
    puVar11 = (uint *)(param_1 + 0x93f4);
    puVar8 = local_298;
    do {
      uVar12 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      puVar11[4] = puVar8[4];
      *puVar11 = uVar12;
      puVar11[1] = uVar4;
      puVar11[2] = uVar5;
      puVar11[3] = uVar6;
      puVar8 = puVar8 + 5;
      puVar11 = puVar11 + 5;
    } while (puVar8 != local_16c);
    iVar15 = *(int *)(param_1 + 0x977c) + 1;
    if (iVar15 == 0) {
      iVar15 = 1;
    }
    *(int *)(param_1 + 0x977c) = iVar15;
    if (param_2 == 0) {
      FUN_ram_4ff3ee10(iVar1);
LAB_ram_48059e04:
      fence();
      if (*(char *)(param_1 + 0x9788) != '\0') {
        return 0;
      }
      goto LAB_ram_48059b58;
    }
  }
  FUN_ram_4ff3ee10(iVar1);
LAB_ram_48059b58:
  FUN_ram_4ff3ec14(iVar13,0xffffffff);
  piVar2 = *(int **)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar13);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,1,local_298,abStack_238[0]);
    (**(code **)(*piVar2 + 0xc))(piVar2,2,local_234,bStack_1d4);
    (**(code **)(*piVar2 + 0xc))(piVar2,4,local_1d0,bStack_170);
  }
  uVar3 = 0;
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  if ((*(int *)(param_1 + 0x977c) == iVar15) &&
     (uVar4 = (uint)abStack_238[0], uVar4 == *(byte *)(param_1 + 0x9454))) {
    if (uVar4 != 0) {
      puVar11 = local_298;
      puVar8 = puVar11 + uVar4;
      puVar10 = (uint *)(param_1 + 0x93f4);
      do {
        uVar4 = *puVar10;
        uVar5 = *puVar11;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        if (uVar4 != uVar5) {
          uVar3 = 0;
          goto LAB_ram_48059bc4;
        }
      } while (puVar11 != puVar8);
    }
    uVar4 = (uint)bStack_1d4;
    uVar3 = 0;
    if (uVar4 == *(byte *)(param_1 + 0x94b8)) {
      if (uVar4 != 0) {
        puVar10 = (uint *)(param_1 + 0x9458);
        puVar11 = puVar10 + uVar4;
        puVar8 = local_234;
        do {
          uVar4 = *puVar10;
          uVar5 = *puVar8;
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          if (uVar4 != uVar5) {
            uVar3 = 0;
            goto LAB_ram_48059bc4;
          }
        } while (puVar10 != puVar11);
      }
      uVar4 = (uint)bStack_170;
      uVar3 = 0;
      if (uVar4 == *(byte *)(param_1 + 0x951c)) {
        if (uVar4 != 0) {
          puVar10 = (uint *)(param_1 + 0x94bc);
          puVar11 = puVar10 + uVar4;
          puVar8 = local_1d0;
          do {
            uVar4 = *puVar10;
            uVar5 = *puVar8;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
            if (uVar4 != uVar5) {
              uVar3 = 0;
              goto LAB_ram_48059bc4;
            }
          } while (puVar11 != puVar10);
        }
        puVar8 = local_298;
        puVar11 = (uint *)(param_1 + 0x9650);
        do {
          uVar12 = *puVar8;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar11[4] = puVar8[4];
          *puVar11 = uVar12;
          puVar11[1] = uVar4;
          puVar11[2] = uVar5;
          puVar11[3] = uVar6;
          puVar8 = puVar8 + 5;
          puVar11 = puVar11 + 5;
        } while (puVar8 != local_16c);
        *(int *)(param_1 + 0x9780) = iVar15;
        *(undefined4 *)(param_1 + 0x9784) = 0;
        uVar3 = 1;
      }
    }
  }
LAB_ram_48059bc4:
  FUN_ram_4ff3ee10(iVar1);
  return uVar3;
}


