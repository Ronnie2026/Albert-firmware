/* Firmware entry: 0x4815e5fc */

void FUN_ram_4815e5fc(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  char local_fc [208];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar12 = (byte *)*param_2;
  if (pbVar12 != (byte *)0x0) {
    piVar3 = param_2 + 1;
    pcVar15 = " [-%c";
    puVar8 = &DAT_ram_481db20c;
    piVar6 = piVar3;
    do {
      if ((*pbVar12 & 1) != 0) break;
      if (((0 < *(int *)(pbVar12 + 0x14)) && (*(undefined1 **)(pbVar12 + 4) != (undefined1 *)0x0))
         && ((*pbVar12 & 2) == 0)) {
        FUN_ram_4815e4c0(param_1,puVar8,**(undefined1 **)(pbVar12 + 4));
        pcVar15 = "[%c";
        puVar8 = &DAT_ram_481db200;
      }
      pbVar12 = (byte *)*piVar6;
      piVar6 = piVar6 + 1;
    } while (pbVar12 != (byte *)0x0);
    pbVar12 = (byte *)*param_2;
    if (pbVar12 != (byte *)0x0) {
      pcVar9 = "";
      do {
        if ((*pbVar12 & 1) != 0) break;
        if (((*(int *)(pbVar12 + 0x14) < 1) && (*(undefined1 **)(pbVar12 + 4) != (undefined1 *)0x0))
           && ((*pbVar12 & 2) == 0)) {
          FUN_ram_4815e4c0(param_1,pcVar15,**(undefined1 **)(pbVar12 + 4));
          pcVar9 = "]";
          pcVar15 = "%c";
        }
        pbVar12 = (byte *)*piVar3;
        piVar3 = piVar3 + 1;
      } while (pbVar12 != (byte *)0x0);
      goto LAB_ram_4815e6b8;
    }
  }
  pcVar9 = "";
LAB_ram_4815e6b8:
  FUN_ram_4815e4c0(param_1,&DAT_ram_481cd004,pcVar9);
  pbVar12 = (byte *)*param_2;
  if (pbVar12 == (byte *)0x0) {
LAB_ram_4815e7e4:
    if (param_3 == 0) {
      return;
    }
    FUN_ram_4815e46a(param_1,param_3);
    return;
  }
  pcVar15 = local_fc + 0xca;
LAB_ram_4815e6de:
  if ((*pbVar12 & 1) == 0) {
    memset(local_fc + 4,0,200);
    bVar1 = *pbVar12;
    if (*(undefined1 **)(pbVar12 + 4) == (undefined1 *)0x0) {
      pcVar10 = *(char **)(pbVar12 + 8);
      pcVar9 = *(char **)(pbVar12 + 0xc);
      if (pcVar10 == (char *)0x0) {
        if (pcVar9 == (char *)0x0) goto LAB_ram_4815e7d6;
        if ((bVar1 & 4) == 0) {
          pcVar10 = local_fc + 4;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if (cVar2 == '\0') {
              *pcVar10 = '\0';
              goto LAB_ram_4815e7ce;
            }
            pcVar13 = pcVar10 + 1;
            *pcVar10 = cVar2;
            pcVar10 = pcVar13;
          } while (pcVar13 != local_fc + 0xca);
LAB_ram_4815e7ca:
          *pcVar13 = '\0';
          goto LAB_ram_4815e7ce;
        }
        pcVar10 = "[";
        pcVar16 = local_fc + 0xca;
        pcVar13 = local_fc + 4;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          if (cVar2 == '\0') {
            *pcVar13 = '\0';
            if (pcVar16 <= pcVar13) goto LAB_ram_4815e7ca;
            goto LAB_ram_4815e9d8;
          }
          pcVar4 = pcVar13 + 1;
          *pcVar13 = cVar2;
          pcVar13 = pcVar4;
        } while (pcVar4 != pcVar16);
        goto LAB_ram_4815eb04;
      }
      pcVar16 = "--";
      pcVar13 = local_fc + 4;
      do {
        cVar2 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar4 = pcVar13;
        if (cVar2 == '\0') break;
        pcVar4 = pcVar13 + 1;
        *pcVar13 = cVar2;
        pcVar13 = pcVar4;
      } while (pcVar4 != pcVar15);
      *pcVar4 = '\0';
      pcVar16 = (char *)strcspn(pcVar10,",");
      pcVar13 = local_fc + (0xcb - (int)pcVar4);
      if (pcVar16 < local_fc + (0xcb - (int)pcVar4)) {
        pcVar13 = pcVar16;
      }
      strncat(pcVar4,pcVar10,(size_t)pcVar13);
      if (pcVar9 == (char *)0x0) goto LAB_ram_4815e7ce;
      pcVar13 = local_fc + 0xca;
      pcVar10 = pcVar4;
      if (pcVar4 < pcVar13) {
        do {
          if (*pcVar4 == '\0') {
            pcVar10 = pcVar4;
            if (pcVar4 < pcVar13) {
              pcVar16 = "=";
              goto LAB_ram_4815e8b6;
            }
            break;
          }
          pcVar4 = pcVar4 + 1;
          pcVar10 = pcVar13;
        } while (pcVar4 != pcVar13);
      }
      goto LAB_ram_4815ea3c;
    }
    if ((bVar1 & 2) != 0) {
      local_fc[0] = '-';
      local_fc[1] = **(undefined1 **)(pbVar12 + 4);
      pcVar16 = *(char **)(pbVar12 + 0xc);
      local_fc[2] = 0;
      pcVar9 = local_fc + 4;
      pcVar10 = local_fc;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        if (cVar2 == '\0') break;
        *pcVar9 = cVar2;
        pcVar9 = pcVar9 + 1;
      } while (pcVar10 != local_fc + 0xc6);
      *pcVar9 = '\0';
      if (pcVar16 != (char *)0x0) {
        pcVar10 = " ";
        if (pcVar9 < pcVar15) {
          do {
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            if (cVar2 == '\0') {
              *pcVar9 = '\0';
              pcVar13 = pcVar9;
              if ((bVar1 & 4) == 0) goto LAB_ram_4815e80e;
              goto LAB_ram_4815e76a;
            }
            pcVar13 = pcVar9 + 1;
            *pcVar9 = cVar2;
            pcVar9 = pcVar13;
          } while (pcVar13 != pcVar15);
          local_fc[0xca] = 0;
          if ((bVar1 & 4) == 0) {
LAB_ram_4815e80e:
            pcVar9 = pcVar13;
            if (pcVar13 < pcVar15) {
              do {
                cVar2 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                if (cVar2 == '\0') {
                  *pcVar9 = '\0';
                  goto LAB_ram_4815e7ce;
                }
                pcVar13 = pcVar9 + 1;
                *pcVar9 = cVar2;
                pcVar9 = pcVar13;
              } while (pcVar13 != pcVar15);
            }
            goto LAB_ram_4815e7ca;
          }
LAB_ram_4815eaea:
          local_fc[0xca] = 0;
          pcVar9 = pcVar15;
        }
        else {
          if ((bVar1 & 4) == 0) {
            *pcVar9 = '\0';
            goto LAB_ram_4815e7ce;
          }
LAB_ram_4815e76a:
          if (pcVar9 < pcVar15) {
            pcVar10 = "[";
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              if (cVar2 == '\0') {
                *pcVar9 = '\0';
                pcVar13 = pcVar9;
                if (pcVar15 <= pcVar9) goto LAB_ram_4815eaec;
                goto LAB_ram_4815e79e;
              }
              pcVar13 = pcVar9 + 1;
              *pcVar9 = cVar2;
              pcVar9 = pcVar13;
            } while (pcVar13 != pcVar15);
            goto LAB_ram_4815eaea;
          }
        }
LAB_ram_4815eaec:
        *pcVar9 = '\0';
        *pcVar9 = '\0';
      }
      goto LAB_ram_4815e7ce;
    }
    goto LAB_ram_4815e7d6;
  }
  goto LAB_ram_4815e7e4;
  while( true ) {
    pcVar10 = pcVar13 + 1;
    *pcVar13 = cVar2;
    pcVar13 = pcVar10;
    if (pcVar10 == pcVar16) break;
LAB_ram_4815e9d8:
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar2 == '\0') {
      *pcVar13 = '\0';
      if (pcVar16 <= pcVar13) goto LAB_ram_4815e7ca;
      pcVar9 = "]";
      goto LAB_ram_4815e9fc;
    }
  }
  goto LAB_ram_4815eb04;
  while( true ) {
    pcVar10 = pcVar13 + 1;
    *pcVar13 = cVar2;
    pcVar13 = pcVar10;
    if (pcVar10 == pcVar16) break;
LAB_ram_4815e9fc:
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar2 == '\0') goto LAB_ram_4815e7ca;
  }
LAB_ram_4815eb04:
  local_fc[0xca] = 0;
  goto LAB_ram_4815e7ce;
  while( true ) {
    pcVar5 = pcVar4 + 1;
    *pcVar4 = cVar2;
    pcVar4 = pcVar5;
    pcVar10 = pcVar13;
    if (pcVar5 == pcVar13) break;
LAB_ram_4815e8b6:
    cVar2 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    if (cVar2 == '\0') {
      *pcVar4 = '\0';
      if ((bVar1 & 4) == 0) goto LAB_ram_4815ea44;
      if (pcVar13 <= pcVar4) goto LAB_ram_4815eafa;
      pcVar10 = "[";
      goto LAB_ram_4815e8de;
    }
  }
LAB_ram_4815ea3c:
  pcVar4 = pcVar10;
  *pcVar4 = '\0';
  if ((bVar1 & 4) != 0) goto LAB_ram_4815eafa;
LAB_ram_4815ea44:
  if (pcVar4 < pcVar13) {
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if (cVar2 == '\0') {
        *pcVar4 = '\0';
        goto LAB_ram_4815e92e;
      }
      pcVar10 = pcVar4 + 1;
      *pcVar4 = cVar2;
      pcVar4 = pcVar10;
    } while (pcVar10 != pcVar13);
  }
LAB_ram_4815e926:
  *pcVar4 = '\0';
LAB_ram_4815e92e:
  if (local_fc[4] != '\0') {
LAB_ram_4815e932:
    iVar11 = *param_2;
    iVar14 = *(int *)(iVar11 + 0x14);
    if (0 < iVar14) {
      iVar7 = 0;
      do {
        FUN_ram_4815e46a(param_1,&DAT_ram_481cbeec);
        FUN_ram_4815e46a(param_1,local_fc + 4);
        iVar11 = *param_2;
        iVar7 = iVar7 + 1;
        iVar14 = *(int *)(iVar11 + 0x14);
      } while (iVar7 < iVar14);
    }
    iVar7 = *(int *)(iVar11 + 0x18) - iVar14;
    if (iVar7 == 1) {
      FUN_ram_4815e46a(param_1,&DAT_ram_481db214);
      FUN_ram_4815e46a(param_1,local_fc + 4);
      FUN_ram_4815e46a(param_1,"]");
    }
    else if (iVar7 == 2) {
      FUN_ram_4815e46a(param_1,&DAT_ram_481db214);
      FUN_ram_4815e46a(param_1,local_fc + 4);
      FUN_ram_4815e46a(param_1,"]");
      FUN_ram_4815e46a(param_1,&DAT_ram_481db214);
      FUN_ram_4815e46a(param_1,local_fc + 4);
      FUN_ram_4815e46a(param_1,"]");
    }
    else if (*(int *)(iVar11 + 0x18) != iVar14) {
      FUN_ram_4815e46a(param_1,&DAT_ram_481db214);
      FUN_ram_4815e46a(param_1,local_fc + 4);
      FUN_ram_4815e46a(param_1,&DAT_ram_481db218);
    }
  }
LAB_ram_4815e7d6:
  pbVar12 = (byte *)param_2[1];
  param_2 = param_2 + 1;
  if (pbVar12 == (byte *)0x0) goto LAB_ram_4815e7e4;
  goto LAB_ram_4815e6de;
  while( true ) {
    pcVar16 = pcVar4 + 1;
    *pcVar4 = cVar2;
    pcVar4 = pcVar16;
    if (pcVar16 == pcVar13) break;
LAB_ram_4815e8de:
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar2 == '\0') {
      *pcVar4 = '\0';
      if (pcVar13 <= pcVar4) goto LAB_ram_4815eafa;
      goto LAB_ram_4815e8fa;
    }
  }
  local_fc[0xca] = 0;
LAB_ram_4815eafa:
  *pcVar4 = '\0';
  goto LAB_ram_4815e926;
  while( true ) {
    pcVar10 = pcVar4 + 1;
    *pcVar4 = cVar2;
    pcVar4 = pcVar10;
    if (pcVar10 == pcVar13) break;
LAB_ram_4815e8fa:
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar2 == '\0') {
      *pcVar4 = '\0';
      if (pcVar13 <= pcVar4) goto LAB_ram_4815e926;
      pcVar10 = "]";
      pcVar9 = pcVar4;
      goto LAB_ram_4815e91e;
    }
  }
  local_fc[0xca] = 0;
  pcVar4 = pcVar13;
  goto LAB_ram_4815e926;
  while( true ) {
    pcVar16 = pcVar9 + 1;
    *pcVar9 = cVar2;
    pcVar9 = pcVar16;
    pcVar4 = pcVar13;
    if (pcVar16 == pcVar13) break;
LAB_ram_4815e91e:
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar9;
    if (cVar2 == '\0') break;
  }
  goto LAB_ram_4815e926;
  while( true ) {
    pcVar9 = pcVar13 + 1;
    *pcVar13 = cVar2;
    pcVar13 = pcVar9;
    if (pcVar9 == pcVar15) break;
LAB_ram_4815e79e:
    cVar2 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    if (cVar2 == '\0') {
      *pcVar13 = '\0';
      if (pcVar15 <= pcVar13) goto LAB_ram_4815e7ca;
      pcVar9 = "]";
      goto LAB_ram_4815e7c2;
    }
  }
  goto LAB_ram_4815eb18;
  while( true ) {
    pcVar10 = pcVar13 + 1;
    *pcVar13 = cVar2;
    pcVar13 = pcVar10;
    if (pcVar10 == pcVar15) break;
LAB_ram_4815e7c2:
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar2 == '\0') goto LAB_ram_4815e7ca;
  }
LAB_ram_4815eb18:
  local_fc[0xca] = 0;
LAB_ram_4815e7ce:
  if (local_fc[4] == '\0') goto LAB_ram_4815e7d6;
  goto LAB_ram_4815e932;
}


