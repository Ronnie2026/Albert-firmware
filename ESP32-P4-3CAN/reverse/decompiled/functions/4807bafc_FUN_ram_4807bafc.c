/* Firmware entry: 0x4807bafc */

char FUN_ram_4807bafc(int param_1,char *param_2,char *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  size_t sVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  char *__s;
  uint *puVar13;
  int iVar14;
  uint local_38 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x41) != 'P') {
    return '\0';
  }
  if (*(char *)(param_1 + 0x42) != '1') {
    return '\0';
  }
  if (*(char *)(param_1 + 0x43) != '.') {
    return '\0';
  }
  pbVar2 = (byte *)(param_1 + 0x44);
  if (9 < (byte)(*(char *)(param_1 + 0x44) - 0x30U)) {
    return '\0';
  }
  iVar14 = 0;
  pbVar11 = pbVar2;
  do {
    uVar12 = 0;
    do {
      pbVar8 = pbVar11;
      if (~(*pbVar8 - 0x30) / 10 < uVar12) {
        return '\0';
      }
      bVar1 = pbVar8[1];
      uVar12 = (*pbVar8 - 0x30) + uVar12 * 10;
      pbVar11 = pbVar8 + 1;
    } while ((byte)(bVar1 - 0x30) < 10);
    if (iVar14 != 0) {
      if (bVar1 == 0) {
        if (param_2 == (char *)0x0) {
          return '\0';
        }
        if (*param_2 != 'P') {
          return '\0';
        }
        if (param_2[1] != '1') {
          return '\0';
        }
        if (param_2[2] != '.') {
          return '\0';
        }
        pbVar11 = (byte *)(param_2 + 3);
        if (9 < (byte)(param_2[3] - 0x30U)) {
          return '\0';
        }
        iVar14 = 0;
        pbVar8 = pbVar11;
        break;
      }
      if (iVar14 == 2) {
        return '\0';
      }
    }
    if (bVar1 != 0x2e) {
      return '\0';
    }
    iVar14 = iVar14 + 1;
    pbVar11 = pbVar8 + 2;
    if (9 < (byte)(pbVar8[2] - 0x30)) {
      return '\0';
    }
  } while( true );
LAB_ram_4807bc22:
  uVar12 = 0;
  do {
    pbVar7 = pbVar8;
    if (~(*pbVar7 - 0x30) / 10 < uVar12) {
      return '\0';
    }
    bVar1 = pbVar7[1];
    uVar12 = (*pbVar7 - 0x30) + uVar12 * 10;
    pbVar8 = pbVar7 + 1;
  } while ((byte)(bVar1 - 0x30) < 10);
  if (iVar14 != 0) {
    if (bVar1 == 0) {
      __s = (char *)(param_1 + 0x71);
      sVar4 = strlen(__s);
      if (sVar4 != 0x28) {
        return '\0';
      }
      pcVar9 = __s;
      do {
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        if ((9 < (byte)(cVar3 - 0x30U)) && (5 < (byte)(cVar3 + 0x9fU))) {
          return '\0';
        }
      } while ((char *)(param_1 + 0x99) != pcVar9);
      if (param_3 == (char *)0x0) {
        return '\0';
      }
      sVar4 = strlen(param_3);
      if (sVar4 != 0x28) {
        return '\0';
      }
      pcVar9 = param_3;
      do {
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        if ((9 < (byte)(cVar3 - 0x30U)) && (5 < (byte)(cVar3 + 0x9fU))) {
          return '\0';
        }
      } while (pcVar9 != param_3 + 0x28);
      puVar6 = local_38;
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0;
      iVar14 = 0;
      puVar13 = puVar6;
      do {
        uVar12 = 0;
        do {
          pbVar8 = pbVar2;
          if (~(*pbVar8 - 0x30) / 10 < uVar12) goto LAB_ram_4807bd92;
          bVar1 = pbVar8[1];
          uVar12 = (*pbVar8 - 0x30) + uVar12 * 10;
          pbVar2 = pbVar8 + 1;
        } while ((byte)(bVar1 - 0x30) < 10);
        *puVar13 = uVar12;
        if (iVar14 != 0) {
          if (bVar1 == 0) {
            puVar5 = local_38 + 3;
            iVar14 = 0;
            puVar13 = puVar5;
            while( true ) {
              uVar12 = 0;
              do {
                pbVar2 = pbVar11;
                if (~(*pbVar2 - 0x30) / 10 < uVar12) goto LAB_ram_4807bd92;
                bVar1 = pbVar2[1];
                uVar12 = (*pbVar2 - 0x30) + uVar12 * 10;
                pbVar11 = pbVar2 + 1;
              } while ((byte)(bVar1 - 0x30) < 10);
              *puVar13 = uVar12;
              if (iVar14 != 0) {
                if (bVar1 == 0) {
                  do {
                    uVar12 = *puVar6;
                    uVar10 = *puVar5;
                    puVar6 = puVar6 + 1;
                    puVar5 = puVar5 + 1;
                    if (uVar12 < uVar10) {
                      return '\x01';
                    }
                    if (uVar10 < uVar12) {
                      return '\x04';
                    }
                  } while (puVar6 != local_38 + 3);
                  break;
                }
                if (iVar14 == 2) break;
              }
              if (bVar1 != 0x2e) break;
              iVar14 = iVar14 + 1;
              puVar13 = puVar13 + 1;
              pbVar11 = pbVar2 + 2;
              if (9 < (byte)(pbVar2[2] - 0x30)) break;
            }
LAB_ram_4807bd92:
            cVar3 = '\x03';
            if (param_4 == 0) {
              iVar14 = FUN_ram_4ff453ae(__s,param_3);
              cVar3 = (iVar14 != 0) + '\x02';
            }
            return cVar3;
          }
          if (iVar14 == 2) goto LAB_ram_4807bd92;
        }
        if (bVar1 != 0x2e) goto LAB_ram_4807bd92;
        iVar14 = iVar14 + 1;
        puVar13 = puVar13 + 1;
        pbVar2 = pbVar8 + 2;
        if (9 < (byte)(pbVar8[2] - 0x30)) goto LAB_ram_4807bd92;
      } while( true );
    }
    if (iVar14 == 2) {
      return '\0';
    }
  }
  if (bVar1 != 0x2e) {
    return '\0';
  }
  iVar14 = iVar14 + 1;
  pbVar8 = pbVar7 + 2;
  if (9 < (byte)(pbVar7[2] - 0x30)) {
    return '\0';
  }
  goto LAB_ram_4807bc22;
}


