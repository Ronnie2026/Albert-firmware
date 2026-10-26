/* Firmware entry: 0x48092f5a */

uint FUN_ram_48092f5a(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_4ff2bcc4();
  if (iVar3 != 0) {
    return 0;
  }
  cVar13 = *(char *)((int)param_2 + 0x1a);
  if (cVar13 == '\x04') {
    cVar12 = *(char *)((int)param_2 + 0xd);
    if (cVar12 == '\x02') {
      if (((*param_2 == 0x3c2) && ((char)param_2[1] == '\b')) &&
         ((*(byte *)((int)param_2 + 5) & 3) == 1)) {
        iVar3 = FUN_ram_4ff21a0a();
        iVar14 = *(int *)(param_1 + 0x5a0);
        iVar8 = *(int *)(param_1 + 0x2e7c);
        uVar11 = FUN_ram_4ff26908(param_1,iVar3);
        if (*(char *)((int)param_2 + 0xd) != '\x02') {
          return 0;
        }
        if (*param_2 != 0x3c2) {
          return 0;
        }
        if ((char)param_2[1] != '\b') {
          return 0;
        }
        if ((*(byte *)((int)param_2 + 5) & 3) != 1) {
          return 0;
        }
        if ((param_2[6] & 0xffff0000U) != 0x16040000) {
          return 0;
        }
        if (((uint)param_2[6] >> 9 & 1) == 0) {
          return 0;
        }
        if (param_2[7] == 0) {
          return 0;
        }
        if ((*(char *)((int)param_2 + 0xe) == '\0') && (param_2[4] == 0)) {
          return 0;
        }
        if (5000 < (uint)(iVar3 - param_2[4])) {
          return 0;
        }
        if ((char)param_3[2] == '\0') {
          return 0;
        }
        if (0 < iVar3 - param_3[1]) {
          return 0;
        }
        if (iVar14 == 0) {
          return 0;
        }
        if (iVar14 != param_3[10]) {
          return 0;
        }
        if (iVar8 == 0) {
          return 0;
        }
        return uVar11 & *param_3 == iVar8;
      }
      if (*(char *)((int)param_2 + 0x1b) != '\x1b') goto LAB_ram_48092fca;
      if (*param_2 == 0x3fd) goto LAB_ram_48093154;
LAB_ram_4809310a:
      if ((char)param_2[6] != '\0') {
        return 0;
      }
      cVar9 = *(char *)((int)param_2 + 0x1b);
      cVar12 = '\x02';
      if (cVar9 == '\x1d') {
        return 0;
      }
    }
    else {
      cVar9 = *(char *)((int)param_2 + 0x1b);
      if (cVar9 == '\x1b') goto LAB_ram_48092f96;
LAB_ram_48092fca:
      fence();
      if (DAT_ram_4ff4b8d0 != '\0') {
        FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
        if (DAT_ram_4ff4b934 != 0) {
          puVar7 = &DAT_ram_4ff4b8c8;
          do {
            if (((*(int *)(puVar7 + 0xc) == *param_2) &&
                ((puVar7[0x10] & *(byte *)((int)param_2 + 0xd)) != 0)) &&
               (uVar11 = (uint)*(byte *)(param_2 + 1), uVar11 == (byte)puVar7[0x11])) {
              if (uVar11 == 0) {
LAB_ram_480930da:
                FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
                return 0;
              }
              pbVar6 = (byte *)((int)param_2 + 5);
              pbVar4 = pbVar6 + uVar11;
              bVar2 = true;
              puVar5 = puVar7;
              do {
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                bVar2 = (bool)(bVar2 & ((bVar1 ^ puVar5[0x1a]) & puVar5[0x12]) == 0);
                puVar5 = puVar5 + 1;
              } while (pbVar4 != pbVar6);
              if (bVar2) goto LAB_ram_480930da;
            }
            puVar7 = puVar7 + 0x18;
          } while (puVar7 != &DAT_ram_4ff4b8c8 + (uint)DAT_ram_4ff4b934 * 0x18);
        }
        FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
      }
      cVar12 = *(char *)((int)param_2 + 0xd);
      if (cVar12 == '\x02') goto LAB_ram_4809312c;
      cVar9 = *(char *)((int)param_2 + 0x1b);
      if (cVar9 == '\x1d') {
        if (cVar12 != '\x01') {
          return 0;
        }
        if (*param_2 != 0x3fd) {
          return 0;
        }
        if ((char)param_2[1] != '\b') {
          return 0;
        }
        if ((*(byte *)((int)param_2 + 5) & 7) != 0) {
          return 0;
        }
        if (*(char *)((int)param_2 + 0x1a) != '\x04') {
          return 0;
        }
        if (((uint)param_2[6] >> 8 & 1) == 0) {
          return 0;
        }
        if ((char)param_2[6] != '\0') {
          return 0;
        }
        if ((char)param_3[2] == '\0') {
          return 0;
        }
LAB_ram_4809302c:
        if (param_3[8] == 0) {
          return 0;
        }
        if (param_3[8] != *(int *)(param_1 + 0x58c)) {
          return 0;
        }
        goto LAB_ram_4809303a;
      }
      if ((char)param_2[6] != '\0') goto LAB_ram_48092f9e;
      if (*param_2 == 0x3fd) {
        cVar13 = *(char *)((int)param_2 + 0x1a);
        goto LAB_ram_48093176;
      }
    }
    if (cVar9 != '\x1b') {
      return 1;
    }
    cVar13 = *(char *)((int)param_2 + 0x1a);
LAB_ram_48093144:
    if (3 < (byte)(cVar13 - 1U)) {
      return 0;
    }
  }
  else {
    if (*(char *)((int)param_2 + 0x1b) != '\x1b') goto LAB_ram_48092fca;
    cVar12 = *(char *)((int)param_2 + 0xd);
    cVar9 = '\x1b';
    if (cVar12 == '\x02') {
LAB_ram_4809312c:
      if (*param_2 != 0x3fd) goto LAB_ram_4809310a;
LAB_ram_48093154:
      if ((char)param_2[1] == '\b') {
        uVar11 = *(byte *)((int)param_2 + 5) & 7;
        if ((*(byte *)((int)param_2 + 5) & 7) == 0) {
          if (*(char *)((int)param_2 + 0x1b) != '\x10') {
            return 0;
          }
          if ((char)param_2[6] == '\0') {
            return 0;
          }
          if (*(char *)((int)param_2 + 0x1a) != '\x04') {
            return 0;
          }
          goto LAB_ram_4809302c;
        }
        if ((char)param_2[6] != '\0') {
          if (*(char *)((int)param_2 + 0x1a) == '\x04') {
            return 0;
          }
          if (1 < (uVar11 - 1 & 0xff)) {
            return 0;
          }
          goto LAB_ram_48093218;
        }
      }
      else if ((char)param_2[6] != '\0') {
        return 0;
      }
      cVar9 = *(char *)((int)param_2 + 0x1b);
      if (cVar9 == '\x1d') {
        return 0;
      }
      cVar13 = *(char *)((int)param_2 + 0x1a);
      cVar12 = '\x02';
    }
    else {
LAB_ram_48092f96:
      if ((char)param_2[6] != '\0') {
LAB_ram_48092f9e:
        if (cVar12 != '\x01') {
          return 0;
        }
        if (*param_2 != 0x3fd) {
          return 0;
        }
        if ((char)param_2[1] != '\b') {
          return 0;
        }
        uVar11 = *(byte *)((int)param_2 + 5) & 7;
        if (2 < uVar11) {
          return 0;
        }
LAB_ram_48093218:
        if (param_3[8] == 0) {
          return 0;
        }
        if (param_3[8] != *(int *)(uVar11 * 4 + param_1 + 0x58c)) {
          return 0;
        }
LAB_ram_4809303a:
        if (param_3[9] != *(int *)(param_1 + 0x840)) {
          return 0;
        }
        return (uint)*(byte *)(param_1 + 0x844);
      }
      if (*param_2 != 0x3fd) goto LAB_ram_48093144;
    }
LAB_ram_48093176:
    if (3 < (byte)(cVar13 - 1U)) {
      return 0;
    }
    if (cVar9 != '\x1b') {
      return 0;
    }
  }
  uVar11 = (uint)*(byte *)(param_3 + 0x10);
  if (((((uVar11 < 0xc) && (iVar3 = param_3[0xe], iVar3 != 0)) &&
       (iVar14 = param_3[0xf], iVar14 != 0)) &&
      ((cVar13 != '\x04' ||
       (((iVar8 = FUN_ram_48040830(param_2), iVar8 != 0 && (param_3[8] != 0)) &&
        ((param_3[8] == *(int *)(param_1 + 0x58c) &&
         ((param_3[9] == *(int *)(param_1 + 0x840) && (*(char *)(param_1 + 0x844) != '\0'))))))))))
     && (((iVar8 = uVar11 + 3, *(char *)(iVar8 * 0x24 + param_1 + 0x5d6) != '\0' &&
          ((((((iVar10 = iVar8 * 0x24 + param_1, *(char *)(iVar10 + 0x5d7) == '\0' &&
               (*(char *)(iVar10 + 0x5b9) == '\x01')) && (*(char *)(iVar10 + 0x5da) == cVar13)) &&
             ((*(char *)(iVar10 + 0x5b8) == cVar12 && (*(byte *)(iVar10 + 0x5ba) == uVar11)))) &&
            ((iVar3 == *(int *)(iVar10 + 0x5bc) &&
             ((iVar14 == *(int *)(iVar10 + 0x5c8) && (*(int *)(iVar10 + 0x5cc) == *param_3)))))) &&
           (*(char *)(iVar10 + 0x5d4) == (char)param_3[2])))) &&
         ((param_1 = iVar8 * 0x24 + param_1, *(int *)(param_1 + 0x5d0) == param_3[1] &&
          ((uint)*(byte *)(param_1 + 0x5d5) == ((uint)param_2[6] >> 8 & 1))))))) {
    uVar11 = FUN_ram_48040cd4(param_2,*(undefined1 *)(param_1 + 0x5d9),1);
    return uVar11;
  }
  return 0;
}


