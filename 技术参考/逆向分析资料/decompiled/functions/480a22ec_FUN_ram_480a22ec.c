/* Firmware entry: 0x480a22ec */

byte FUN_ram_480a22ec(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char cVar11;
  char *pcVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[6] != '\0') || (param_2 == 0)) || ((uint)(param_1[1] - param_1[2]) <= param_3)
     ) goto LAB_ram_480a2310;
  FUN_ram_4ff45158(*param_1 + param_1[2]);
  iVar14 = param_1[2];
  param_1[2] = param_3 + iVar14;
  *(undefined1 *)(*param_1 + param_3 + iVar14) = 0;
  pcVar15 = (char *)param_1[3];
  pcVar18 = (char *)param_1[2];
  if (pcVar15 == (char *)0x0) {
    if ((pcVar18 != (char *)0x0) &&
       (pcVar16 = (char *)*param_1, pcVar15 = pcVar16, pcVar8 = pcVar18, (char *)0x3 < pcVar18)) {
      do {
        pcVar6 = memchr(pcVar15,0xd,(size_t)(pcVar8 + -3));
        if (pcVar6 == (char *)0x0) break;
        if (((*pcVar6 == '\r') && (pcVar6[1] == '\n')) &&
           ((pcVar6[2] == '\r' && (pcVar6[3] == '\n')))) {
          pcVar6 = pcVar6 + -(int)pcVar16;
          if (pcVar6 != (char *)0xffffffff) {
            if (pcVar6 < (char *)0x801) {
              uStack_50._0_4_ = pcVar18;
              if ((char *)0x9 < pcVar18) {
                uStack_50._0_4_ = (char *)0x9;
              }
              uStack_48._4_4_ = &DAT_ram_481cbee4;
              uStack_48._0_4_ = 9;
              if ((((((char *)0x8 < pcVar18) &&
                    (uStack_50._4_4_ = pcVar16,
                    iVar14 = FUN_ram_480a10f0(&uStack_50,9,&DAT_ram_481cbee4), iVar14 == 0)) &&
                   ((char *)0xb < pcVar18)) &&
                  ((bVar1 = pcVar16[9], (bVar1 - 0x31 & 0xff) < 5 &&
                   (bVar2 = pcVar16[10], (bVar2 - 0x30 & 0xff) < 10)))) &&
                 (bVar3 = pcVar16[0xb], (bVar3 - 0x30 & 0xff) < 10)) {
                pcVar15 = pcVar6 + 4;
                param_1[3] = (int)pcVar15;
                param_1[5] = (bVar1 - 0x30) * 100 + (bVar2 - 0x30) * 10 + (uint)bVar3 + -0x30;
                pcVar8 = pcVar16;
                pcVar12 = pcVar18;
                goto LAB_ram_480a2578;
              }
            }
            *(undefined1 *)(param_1 + 6) = 1;
            return 0;
          }
          break;
        }
        pcVar15 = pcVar6 + 1;
        pcVar8 = pcVar16 + ((int)pcVar18 - (int)(pcVar6 + 1));
      } while ((char *)0x3 < pcVar16 + ((int)pcVar18 - (int)(pcVar6 + 1)));
      if ((char *)0x800 < pcVar18) {
        *(undefined1 *)(param_1 + 6) = 1;
        return 0;
      }
    }
    goto LAB_ram_480a2474;
  }
  goto LAB_ram_480a246c;
  while( true ) {
    if ((*pcVar7 == '\r') && (pcVar7[1] == '\n')) {
      iVar14 = (int)pcVar7 - (int)pcVar16;
      goto LAB_ram_480a25ac;
    }
    if (pcVar12 < (char *)0x2) break;
LAB_ram_480a2578:
    pcVar7 = memchr(pcVar8,0xd,(size_t)(pcVar12 + -1));
    uVar20 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_48);
    pcVar8 = pcVar7 + 1;
    pcVar12 = pcVar16 + ((int)pcVar18 - (int)pcVar8);
    if (pcVar7 == (char *)0x0) break;
  }
  iVar14 = -1;
LAB_ram_480a25ac:
  pcVar8 = (char *)(iVar14 + 2);
  if (pcVar6 <= pcVar8) {
LAB_ram_480a2310:
    *(undefined1 *)(param_1 + 6) = 1;
    return 0;
  }
  bVar4 = false;
  do {
    if (pcVar18 <= pcVar8) {
LAB_ram_480a25f0:
      *(undefined1 *)(param_1 + 6) = 1;
      return 0;
    }
    pcVar7 = pcVar18 + -(int)pcVar8;
    pcVar12 = pcVar16 + (int)pcVar8;
    uStack_48 = uVar20;
    if (pcVar7 == (char *)0x1) goto LAB_ram_480a25f0;
    while( true ) {
      pcVar9 = memchr(pcVar12,0xd,(size_t)(pcVar7 + -1));
      pcVar12 = pcVar9 + 1;
      pcVar7 = pcVar16 + ((int)pcVar18 - (int)pcVar12);
      if (pcVar9 == (char *)0x0) goto LAB_ram_480a25f0;
      if ((*pcVar9 == '\r') && (pcVar9[1] == '\n')) break;
      if (pcVar7 < (char *)0x2) goto LAB_ram_480a25f0;
    }
    uVar10 = FUN_ram_48030e10(pcVar18,pcVar16,0x3a,pcVar8);
    uVar17 = (int)pcVar9 - (int)pcVar16;
    if ((uVar17 == 0xffffffff) || (uVar17 <= uVar10)) goto LAB_ram_480a25f0;
    uVar20 = FUN_ram_48030de0(pcVar18,pcVar16,pcVar8,uVar10 - (int)pcVar8);
    uStack_50 = uVar20;
    uVar20 = FUN_ram_48030de0(pcVar18,pcVar16,uVar10 + 1,(uVar17 - 1) - uVar10);
    pbVar19 = (byte *)((ulonglong)uVar20 >> 0x20);
    if ((int)uVar20 == 0) {
      iVar14 = 0;
    }
    else {
      pbVar13 = pbVar19 + (int)uVar20;
      do {
        if (*pbVar19 != 0x20) {
          iVar14 = (int)pbVar13 - (int)pbVar19;
          goto LAB_ram_480a2688;
        }
        pbVar19 = pbVar19 + 1;
      } while (pbVar19 != pbVar13);
      iVar14 = 0;
      pbVar19 = pbVar13;
    }
LAB_ram_480a2688:
    if ((char *)uStack_50 == (char *)0x11) {
      pcVar12 = "Transfer-Encoding";
      pcVar8 = uStack_50._4_4_;
      while( true ) {
        cVar5 = *pcVar8;
        cVar11 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        if ((byte)(cVar5 + 0xbfU) < 0x1a) {
          cVar5 = cVar5 + ' ';
        }
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        if (cVar5 != cVar11) break;
        pcVar8 = pcVar8 + 1;
        if (pcVar12 == "") goto LAB_ram_480a25f0;
      }
    }
    else if ((char *)uStack_50 == (char *)0x10) {
      pcVar12 = "Content-Encoding";
      pcVar8 = uStack_50._4_4_;
      while( true ) {
        cVar5 = *pcVar8;
        cVar11 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        if ((byte)(cVar5 + 0xbfU) < 0x1a) {
          cVar5 = cVar5 + ' ';
        }
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        if (cVar5 != cVar11) break;
        pcVar8 = pcVar8 + 1;
        if (pcVar12 == "") goto LAB_ram_480a25f0;
      }
    }
    else if ((char *)uStack_50 == (char *)0xe) {
      pcVar12 = "Content-Length";
      pcVar8 = uStack_50._4_4_;
      do {
        cVar5 = *pcVar8;
        cVar11 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        if ((byte)(cVar5 + 0xbfU) < 0x1a) {
          cVar5 = cVar5 + ' ';
        }
        if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          cVar11 = cVar11 + ' ';
        }
        if (cVar5 != cVar11) goto LAB_ram_480a2450;
        pcVar8 = pcVar8 + 1;
      } while (pcVar12 != "");
      if ((bVar4) || (iVar14 == 0)) goto LAB_ram_480a25f0;
      pbVar13 = pbVar19 + iVar14;
      if (pbVar13 == pbVar19) {
        uVar10 = param_1[1];
      }
      else {
        do {
          bVar1 = *pbVar19;
          pbVar19 = pbVar19 + 1;
          if (9 < (bVar1 - 0x30 & 0xff)) goto LAB_ram_480a25f0;
          uVar10 = param_1[1];
          if (uVar10 / 10 < (uint)param_1[4]) goto LAB_ram_480a25f0;
          param_1[4] = param_1[4] * 10 + -0x30 + (uint)bVar1;
        } while (pbVar13 != pbVar19);
      }
      if (uVar10 - (int)pcVar15 <= (uint)param_1[4]) goto LAB_ram_480a25f0;
      bVar4 = true;
    }
LAB_ram_480a2450:
    pcVar8 = (char *)(uVar17 + 2);
  } while (pcVar8 < pcVar6);
  if (!bVar4) goto LAB_ram_480a2310;
LAB_ram_480a246c:
  if (pcVar15 + param_1[4] < pcVar18) {
    *(undefined1 *)(param_1 + 6) = 1;
    return 0;
  }
LAB_ram_480a2474:
  return *(byte *)(param_1 + 6) ^ 1;
}


