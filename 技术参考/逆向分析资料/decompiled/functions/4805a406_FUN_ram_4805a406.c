/* Firmware entry: 0x4805a406 */

undefined4 FUN_ram_4805a406(int param_1,uint *param_2,char *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int *piVar16;
  char cVar17;
  char *pcVar18;
  char *pcStack_2a4;
  uint auStack_298 [24];
  undefined1 auStack_238 [4];
  uint auStack_234 [24];
  byte bStack_1d4;
  uint local_1d0 [24];
  undefined1 uStack_170;
  char local_16c [96];
  undefined1 auStack_10c [4];
  uint auStack_108 [24];
  undefined1 uStack_a8;
  uint local_a4 [24];
  undefined1 uStack_44;
  uint auStack_40 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if ((((char)param_2[0x18] == '\0') && ((char)param_2[0x31] == '\0')) &&
     ((char)param_2[0x4a] == '\0')) {
    iVar8 = (param_1 + 0x9788U & 3) << 3;
    uVar6 = 0xff << iVar8;
    local_16c[0] = '\0';
    puVar12 = (uint *)(param_1 + 0x9788U & 0xfffffffc);
    uVar4 = *puVar12;
    if ((uVar4 & uVar6) == 0) {
      *puVar12 = uVar4 & ~uVar6 | 1 << iVar8 & uVar6;
    }
    if ((char)((int)uVar4 >> iVar8) != '\0') goto LAB_ram_4805a4b0;
  }
  else {
    fence();
    if (*(char *)(param_1 + 0x9789) != '\0') {
LAB_ram_4805a4b0:
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 2;
      }
      return 0;
    }
    iVar8 = (param_1 + 0x9788U & 3) << 3;
    uVar6 = 0xff << iVar8;
    local_16c[0] = '\0';
    puVar12 = (uint *)(param_1 + 0x9788U & 0xfffffffc);
    uVar4 = *puVar12;
    if ((uVar4 & uVar6) == 0) {
      *puVar12 = uVar4 & ~uVar6 | 1 << iVar8 & uVar6;
    }
    cVar11 = (char)((int)uVar4 >> iVar8);
    if ((cVar11 != '\0') && (local_16c[0] = cVar11, cVar11 != '\0')) goto LAB_ram_4805a4b0;
    fence();
    if (*(char *)(param_1 + 0x9789) != '\0') {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 2;
      }
      goto LAB_ram_4805a7d6;
    }
  }
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  uVar1 = *(undefined1 *)(param_1 + 0xb39);
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  FUN_ram_48051e92(auStack_298,uVar1);
  FUN_ram_4805934a(local_16c,param_1);
  pcStack_2a4 = &DAT_ram_4ff47e48;
  pcVar18 = &DAT_ram_4ff47e48;
  do {
    cVar11 = *pcVar18;
    puVar12 = param_2;
    if ((cVar11 == '\x01') || (puVar12 = param_2 + 0x19, cVar11 == '\x02')) {
LAB_ram_4805a802:
      if ((byte)puVar12[0x18] != 0) {
        puVar13 = puVar12 + (byte)puVar12[0x18];
        do {
          puVar14 = auStack_298;
          if ((cVar11 == '\x01') || (puVar14 = (uint *)(auStack_238 + 0x68), cVar11 != '\x02')) {
            uVar4 = (uint)(byte)puVar14[0x18];
            uVar6 = *puVar12 & 0x7ff;
            if (uVar4 != 0) goto LAB_ram_4805a834;
LAB_ram_4805a902:
            uVar7 = 0;
            cVar17 = '\x01';
          }
          else {
            uVar4 = (uint)bStack_1d4;
            puVar14 = (uint *)(auStack_238 + 4);
            uVar6 = *puVar12 & 0x7ff;
            if (uVar4 == 0) goto LAB_ram_4805a902;
LAB_ram_4805a834:
            uVar7 = 0;
            puVar10 = puVar14;
            do {
              uVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              if (uVar6 <= uVar9) {
                if (uVar7 < uVar4) {
                  if (uVar6 == puVar14[uVar7]) goto LAB_ram_4805a8b0;
                  if (0x17 < uVar4) goto LAB_ram_4805a8be;
                  uVar9 = uVar4 - uVar7 & 0xff;
                  iVar8 = -(uVar9 - 1 & 0xff);
                  cVar17 = (char)uVar4 + '\x01';
                  FUN_ram_4ff4522c(puVar14 + iVar8 + uVar4,puVar14 + (uVar4 - 1) + iVar8,uVar9 << 2)
                  ;
                  goto LAB_ram_4805a8a2;
                }
                break;
              }
              uVar7 = uVar7 + 1 & 0xff;
            } while (uVar7 != uVar4);
            if (0x17 < uVar4) goto LAB_ram_4805a8be;
            cVar17 = (char)uVar4 + '\x01';
          }
LAB_ram_4805a8a2:
          puVar14[uVar7] = uVar6;
          *(char *)(puVar14 + 0x18) = cVar17;
LAB_ram_4805a8b0:
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar13);
      }
    }
    else if (cVar11 == '\x04') {
      puVar12 = param_2 + 0x32;
      goto LAB_ram_4805a802;
    }
    pcVar18 = pcVar18 + 1;
  } while (pcVar18 != &DAT_ram_4ff47e4b);
  do {
    cVar11 = *pcStack_2a4;
    puVar12 = param_2;
    if ((cVar11 == '\x01') || (puVar12 = param_2 + 0x19, cVar11 == '\x02')) {
LAB_ram_4805a916:
      if ((byte)puVar12[0x18] != 0) {
        puVar13 = puVar12 + (byte)puVar12[0x18];
        do {
          puVar14 = (uint *)local_16c;
          if ((cVar11 != '\x01') && (puVar14 = (uint *)(auStack_10c + 0x68), cVar11 == '\x02')) {
            puVar14 = (uint *)(auStack_10c + 4);
          }
          bVar2 = (byte)puVar14[0x18];
          uVar4 = (uint)bVar2;
          uVar6 = *puVar12 & 0x7ff;
          if (uVar4 == 0) {
            cVar17 = '\x01';
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            puVar10 = puVar14;
            do {
              uVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              if (uVar6 <= uVar9) {
                if (uVar7 < uVar4) {
                  if (uVar6 == puVar14[uVar7]) goto LAB_ram_4805a9bc;
                  if (0x17 < uVar4) goto LAB_ram_4805a8be;
                  uVar9 = uVar4 - uVar7 & 0xff;
                  iVar8 = -(uVar9 - 1 & 0xff);
                  cVar17 = bVar2 + 1;
                  FUN_ram_4ff4522c(puVar14 + iVar8 + uVar4,puVar14 + (uVar4 - 1) + iVar8,uVar9 << 2)
                  ;
                  goto LAB_ram_4805a9ae;
                }
                break;
              }
              uVar7 = uVar7 + 1 & 0xff;
            } while (uVar4 != uVar7);
            if (0x17 < uVar4) goto LAB_ram_4805a8be;
            cVar17 = bVar2 + 1;
          }
LAB_ram_4805a9ae:
          puVar14[uVar7] = uVar6;
          *(char *)(puVar14 + 0x18) = cVar17;
LAB_ram_4805a9bc:
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar13);
      }
    }
    else if (cVar11 == '\x04') {
      puVar12 = param_2 + 0x32;
      goto LAB_ram_4805a916;
    }
    pcStack_2a4 = pcStack_2a4 + 1;
  } while (pcStack_2a4 != &DAT_ram_4ff47e4b);
  iVar8 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar8,0xffffffff);
  iVar15 = *(int *)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar8);
  if (iVar15 == 0) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 3;
    }
  }
  else {
    iVar15 = param_1 + 0xb30;
    FUN_ram_4ff3ec14(iVar15,0xffffffff);
    cVar11 = *(char *)(param_1 + 0x964c);
    FUN_ram_4ff3ee10(iVar15);
    if (cVar11 != '\0') {
LAB_ram_4805a684:
      FUN_ram_4ff3ec14(iVar8,0xffffffff);
      piVar16 = *(int **)(param_1 + 0x1e08);
      FUN_ram_4ff3ee10(iVar8);
      if (piVar16 != (int *)0x0) {
        (**(code **)(*piVar16 + 0xc))(piVar16,1,local_16c,auStack_10c[0]);
        (**(code **)(*piVar16 + 0xc))(piVar16,2,auStack_10c + 4,uStack_a8);
        (**(code **)(*piVar16 + 0xc))(piVar16,4,auStack_10c + 0x68,uStack_44);
      }
      FUN_ram_4ff3ec14(iVar15,0xffffffff);
      puVar12 = param_2 + 0x4b;
      puVar13 = (uint *)(param_1 + 0x9520);
      do {
        uVar4 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar9 = param_2[4];
        *puVar13 = *param_2;
        puVar13[1] = uVar4;
        puVar13[2] = uVar6;
        puVar13[3] = uVar7;
        puVar13[4] = uVar9;
        param_2 = param_2 + 5;
        puVar13 = puVar13 + 5;
      } while (param_2 != puVar12);
      puVar13 = (uint *)(param_1 + 0x93f4);
      puVar12 = (uint *)local_16c;
      do {
        uVar9 = *puVar12;
        uVar4 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        puVar13[4] = puVar12[4];
        *puVar13 = uVar9;
        puVar13[1] = uVar4;
        puVar13[2] = uVar6;
        puVar13[3] = uVar7;
        puVar12 = puVar12 + 5;
        puVar13 = puVar13 + 5;
      } while (puVar12 != auStack_40);
      iVar8 = *(int *)(param_1 + 0x977c) + 1;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      *(int *)(param_1 + 0x977c) = iVar8;
      puVar12 = (uint *)local_16c;
      puVar13 = (uint *)(param_1 + 0x9650);
      do {
        uVar9 = *puVar12;
        uVar7 = puVar12[1];
        uVar4 = puVar12[2];
        uVar6 = puVar12[3];
        puVar13[4] = puVar12[4];
        *puVar13 = uVar9;
        puVar13[1] = uVar7;
        puVar13[2] = uVar4;
        puVar13[3] = uVar6;
        puVar12 = puVar12 + 5;
        puVar13 = puVar13 + 5;
      } while (puVar12 != auStack_40);
      *(int *)(param_1 + 0x9780) = iVar8;
      *(undefined4 *)(param_1 + 0x9784) = 0;
      FUN_ram_4ff3ee10(iVar15);
      uVar3 = 1;
      goto LAB_ram_4805a7d8;
    }
    FUN_ram_4ff3ec14(iVar8,0xffffffff);
    piVar16 = *(int **)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(iVar8);
    cVar11 = '\0';
    if (piVar16 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar16 + 0x10))(piVar16,1,auStack_298,auStack_238[0]);
      if (iVar5 == 0) {
        cVar11 = '\x01';
      }
      else {
        iVar5 = (**(code **)(*piVar16 + 0x10))(piVar16,2,auStack_238 + 4,bStack_1d4);
        if (iVar5 == 0) {
          cVar11 = '\x02';
        }
        else {
          iVar5 = (**(code **)(*piVar16 + 0x10))(piVar16,4,auStack_238 + 0x68,uStack_170);
          cVar11 = '\x04';
          if (iVar5 != 0) goto LAB_ram_4805a684;
        }
      }
    }
    if (param_3 != (char *)0x0) {
      *param_3 = cVar11;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 4;
    }
  }
  goto LAB_ram_4805a7d6;
LAB_ram_4805a8be:
  if (param_3 != (char *)0x0) {
    *param_3 = cVar11;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
LAB_ram_4805a7d6:
  uVar3 = 0;
LAB_ram_4805a7d8:
  FUN_ram_48059f34(param_1);
  return uVar3;
}


