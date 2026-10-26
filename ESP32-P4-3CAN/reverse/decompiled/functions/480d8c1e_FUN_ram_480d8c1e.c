/* Firmware entry: 0x480d8c1e */

void FUN_ram_480d8c1e(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  char local_c4 [4];
  undefined4 auStack_c0 [37];
  char cStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *param_1;
  FUN_ram_4ff3ec14(iVar6 + 0xb18,0xffffffff);
  puVar14 = (undefined4 *)(iVar6 + 0xb38);
  pcVar12 = local_c4;
  do {
    uVar8 = puVar14[1];
    uVar9 = puVar14[2];
    uVar10 = puVar14[3];
    *(undefined4 *)pcVar12 = *puVar14;
    *(undefined4 *)(pcVar12 + 4) = uVar8;
    *(undefined4 *)(pcVar12 + 8) = uVar9;
    *(undefined4 *)(pcVar12 + 0xc) = uVar10;
    puVar14 = puVar14 + 4;
    pcVar12 = pcVar12 + 0x10;
  } while (puVar14 != (undefined4 *)(iVar6 + 0xbd8));
  *(undefined4 *)pcVar12 = *puVar14;
  FUN_ram_4ff3ee10(iVar6 + 0xb18);
  iVar6 = *param_1;
  iVar15 = *(int *)(iVar6 + 0x9050);
  if ((*(int *)(iVar6 + 0x8fa0) == 0) || (300 < (uint)(param_4 - *(int *)(iVar6 + 0x8fa0)))) {
    if ((iVar15 == 0) || (300 < (uint)(param_4 - iVar15))) {
      if (local_c4[0] == '\0') {
        *(undefined2 *)((int)param_1 + 0xe2) = 0x100;
        *(undefined1 *)((int)param_1 + 0xe1) = 0;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        *(undefined1 *)(param_1 + 0x38) = 2;
      }
      else {
        *(undefined2 *)((int)param_1 + 0xe2) = 0x100;
        *(char *)((int)param_1 + 0xe1) = cStack_2c;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        *(undefined1 *)(param_1 + 0x38) = 2;
      }
      goto LAB_ram_480d8cdc;
    }
    uVar4 = *(undefined1 *)(iVar6 + 0x902c);
    if (local_c4[0] == '\0') {
      *(undefined1 *)((int)param_1 + 0xe1) = 0;
      *(undefined1 *)((int)param_1 + 0xe2) = 0;
      *(undefined1 *)((int)param_1 + 0xe3) = uVar4;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xe2) = 0;
      *(undefined1 *)((int)param_1 + 0xe3) = uVar4;
      *(char *)((int)param_1 + 0xe1) = cStack_2c;
    }
LAB_ram_480d8d80:
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    *(undefined1 *)(param_1 + 0x38) = 2;
  }
  else {
    cVar1 = *(char *)(iVar6 + 0x8f9c);
    bVar5 = cVar1 == '\x04';
    if ((iVar15 == 0) || (300 < (uint)(param_4 - iVar15))) {
      if (local_c4[0] == '\0') {
        *(undefined1 *)((int)param_1 + 0xe3) = 1;
        *(undefined1 *)((int)param_1 + 0xe1) = 0;
        *(bool *)((int)param_1 + 0xe2) = bVar5;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        *(undefined1 *)(param_1 + 0x38) = 2;
        goto LAB_ram_480d8cdc;
      }
      *(bool *)((int)param_1 + 0xe2) = bVar5;
      *(char *)((int)param_1 + 0xe1) = cStack_2c;
      *(undefined1 *)((int)param_1 + 0xe3) = 1;
      if ((cStack_2c != '\0') && (cVar1 == '\x04')) goto LAB_ram_480d8cce;
      goto LAB_ram_480d8d80;
    }
    if (local_c4[0] == '\0') {
      uVar4 = *(undefined1 *)(iVar6 + 0x902c);
      *(undefined1 *)((int)param_1 + 0xe1) = 0;
      *(bool *)((int)param_1 + 0xe2) = bVar5;
      *(undefined1 *)((int)param_1 + 0xe3) = uVar4;
      goto LAB_ram_480d8d80;
    }
    cVar2 = *(char *)(iVar6 + 0x902c);
    *(bool *)((int)param_1 + 0xe2) = bVar5;
    *(char *)((int)param_1 + 0xe3) = cVar2;
    *(char *)((int)param_1 + 0xe1) = cStack_2c;
    if ((cStack_2c == '\0') || (cVar1 != '\x04')) goto LAB_ram_480d8d80;
    if (cVar2 != '\0') goto LAB_ram_480d8cce;
    if ((param_1[0x3a] == 0) || ((uint)(param_4 - param_1[0x3a]) < 0x2ef)) {
      cVar1 = (char)param_1[0x38];
      if (param_3 == 0) {
        if (cVar1 == '\0') {
LAB_ram_480d8e50:
          uVar7 = 2;
          goto LAB_ram_480d8cde;
        }
        if (cVar1 == '\x01') {
LAB_ram_480d8e5c:
          uVar7 = 6;
          goto LAB_ram_480d8cde;
        }
      }
      else {
        param_1[0x3a] = param_4;
        if (cVar1 == '\x02') goto LAB_ram_480d8ea6;
        if (cVar1 == '\x01') {
          if (param_2 != 6) {
            *(undefined1 *)((int)param_1 + 0xe7) = 0;
            uVar7 = 6;
            goto LAB_ram_480d8cde;
          }
          bVar3 = *(byte *)((int)param_1 + 0xe7);
          if ((bVar3 < 3) && (*(byte *)((int)param_1 + 0xe7) = bVar3 + 1, bVar3 != 2))
          goto LAB_ram_480d8e5c;
          if (*(char *)((int)param_1 + 0xe5) == '\0') {
            uVar7 = 6;
            goto LAB_ram_480d8cde;
          }
LAB_ram_480d8cce:
          *(undefined2 *)((int)param_1 + 0xe6) = 0;
          *(undefined2 *)(param_1 + 0x39) = 0;
          *(undefined1 *)(param_1 + 0x38) = 2;
        }
        else if (param_2 == 2) {
          *(undefined1 *)((int)param_1 + 0xe6) = 0;
          if (cVar1 == '\0') {
            uVar7 = 2;
            goto LAB_ram_480d8cde;
          }
        }
        else {
          if ((((param_2 - 3U & 0xff) < 4) || (bVar3 = *(byte *)((int)param_1 + 0xe6), 5 < bVar3))
             || (*(byte *)((int)param_1 + 0xe6) = bVar3 + 1, bVar3 == 5)) goto LAB_ram_480d8cce;
          if (cVar1 == '\0') goto LAB_ram_480d8e50;
        }
      }
    }
    else {
      *(undefined2 *)((int)param_1 + 0xe6) = 0;
      *(undefined2 *)(param_1 + 0x39) = 0;
      *(undefined1 *)(param_1 + 0x38) = 2;
      if (param_3 != 0) {
        param_1[0x3a] = param_4;
LAB_ram_480d8ea6:
        if (param_2 == 2) {
          *(undefined1 *)(param_1 + 0x38) = 0;
          *(undefined1 *)((int)param_1 + 0xe6) = 0;
          uVar7 = 2;
          goto LAB_ram_480d8cde;
        }
      }
    }
  }
LAB_ram_480d8cdc:
  uVar7 = 0;
LAB_ram_480d8cde:
  iVar15 = (iVar6 + 0x7a15U & 3) << 3;
  puVar11 = (uint *)(iVar6 + 0x7a15U & 0xfffffffc);
  uVar16 = *puVar11;
  *puVar11 = uVar16 & ~(0xff << iVar15) | uVar7 << iVar15;
  if (uVar7 != ((int)uVar16 >> iVar15 & 0xffU)) {
    *(int *)(iVar6 + 0x7a48) = *(int *)(iVar6 + 0x7a48) + 1;
    iVar6 = *(int *)(iVar6 + 0x79cc);
    piVar13 = (int *)(iVar6 + 0x5c4);
    do {
      iVar15 = *piVar13 + 1;
      if (iVar15 == 0) {
        iVar15 = 1;
      }
      *piVar13 = iVar15;
      piVar13 = piVar13 + 0x2c;
    } while ((int *)(iVar6 + 0x7d4) != piVar13);
  }
  return;
}


