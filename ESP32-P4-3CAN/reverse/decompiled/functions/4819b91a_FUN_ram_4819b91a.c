/* Firmware entry: 0x4819b91a */

void FUN_ram_4819b91a(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  ushort uStack_54;
  ushort uStack_52;
  ushort uStack_50;
  ushort uStack_4e;
  ushort uStack_4c;
  ushort uStack_4a;
  int iStack_48;
  char *apcStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_481a2e20();
  pcVar4 = (char *)FUN_ram_4819639a(param_1,&DAT_ram_481d1bcc);
  iVar6 = DAT_ram_4ff6e2f0;
  if (pcVar4 == (char *)0x0) {
    DAT_ram_4ff6e2f4 = 0;
    DAT_ram_4ff6e2f8 = 0;
    PTR_DAT_ram_481e3774_ram_4ff47fb8 = &DAT_ram_481e3774;
    PTR_DAT_ram_481e3774_ram_4ff47fbc = &DAT_ram_481e3774;
    *(undefined1 *)(iVar3 + 8) = 0x4a;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined1 *)(iVar3 + 0x30) = 0x4a;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    thunk_FUN_ram_4ff209c6(iVar6);
    DAT_ram_4ff6e2f0 = 0;
    return;
  }
  if ((DAT_ram_4ff6e2f0 != 0) && (iVar6 = FUN_ram_4ff453ae(), iVar6 == 0)) {
    return;
  }
  thunk_FUN_ram_4ff209c6(DAT_ram_4ff6e2f0);
  sVar5 = strlen(pcVar4);
  DAT_ram_4ff6e2f0 = FUN_ram_4ff450d0(param_1,sVar5 + 1);
  if (DAT_ram_4ff6e2f0 != 0) {
    FUN_ram_4ff454c4(DAT_ram_4ff6e2f0,pcVar4);
  }
  DAT_ram_4ff6e2f8 = 0;
  PTR_DAT_ram_481e3774_ram_4ff47fb8 = &DAT_ram_481df390;
  PTR_DAT_ram_481e3774_ram_4ff47fbc = &DAT_ram_481df390;
  DAT_ram_4ff6e2f4 = 0;
  *(undefined1 *)(iVar3 + 8) = 0x4a;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0x4a;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  pcVar4 = pcVar4 + (*pcVar4 == ':');
  if (*pcVar4 == '<') {
    pcVar11 = pcVar4 + 1;
    iVar6 = FUN_ram_4819e650(pcVar11,"%11[-+0-9A-Za-z]%n",&DAT_ram_4ff6d798,&iStack_48);
    if (iVar6 < 1) {
      return;
    }
    if (7 < iStack_48 - 3U) {
      return;
    }
    pcVar4 = pcVar4 + 2;
    if (pcVar11[iStack_48] != '>') {
      return;
    }
  }
  else {
    iVar6 = FUN_ram_4819e650(pcVar4,"%11[A-Za-z]%n",&DAT_ram_4ff6d798,&iStack_48);
    if (iVar6 < 1) {
      return;
    }
    if (7 < iStack_48 - 3U) {
      return;
    }
  }
  pcVar4 = pcVar4 + iStack_48;
  if (*pcVar4 == '-') {
    pcVar4 = pcVar4 + 1;
    iVar6 = -1;
  }
  else {
    iVar6 = 1;
    pcVar4 = pcVar4 + (*pcVar4 == '+');
  }
  uStack_52 = 0;
  uStack_50 = 0;
  iVar7 = FUN_ram_4819e650(pcVar4,"%hu%n:%hu%n:%hu%n",&uStack_54,&iStack_48,&uStack_52,&iStack_48,
                           &uStack_50);
  if (iVar7 < 1) {
    return;
  }
  pcVar4 = pcVar4 + iStack_48;
  iVar6 = ((uint)uStack_52 * 0x3c + (uint)uStack_50 + (uint)uStack_54 * 0xe10) * iVar6;
  if (*pcVar4 == '<') {
    pcVar11 = pcVar4 + 1;
    iVar7 = FUN_ram_4819e650(pcVar11,"%11[-+0-9A-Za-z]%n",&DAT_ram_4ff6d78c,&iStack_48);
    if ((0 < iVar7) || (pcVar4[1] != '>')) {
      if (7 < iStack_48 - 3U) {
        return;
      }
      pcVar4 = pcVar4 + 2;
      if (pcVar11[iStack_48] != '>') {
        return;
      }
LAB_ram_4819bbea:
      pcVar4 = pcVar4 + iStack_48;
      if (*pcVar4 == '-') {
        pcVar4 = pcVar4 + 1;
        iVar7 = -1;
      }
      else {
        iVar7 = 1;
        pcVar4 = pcVar4 + (*pcVar4 == '+');
      }
      uStack_54 = 0;
      uStack_52 = 0;
      uStack_50 = 0;
      iStack_48 = 0;
      iVar8 = FUN_ram_4819e650(pcVar4,"%hu%n:%hu%n:%hu%n",&uStack_54,&iStack_48,&uStack_52,
                               &iStack_48,&uStack_50);
      if (iVar8 < 1) {
        iVar7 = iVar6 + -0xe10;
      }
      else {
        iVar7 = ((uint)uStack_52 * 0x3c + (uint)uStack_50 + (uint)uStack_54 * 0xe10) * iVar7;
      }
      pcVar4 = pcVar4 + iStack_48;
      puVar12 = (undefined1 *)(iVar3 + 8);
      bVar2 = false;
      do {
        bVar1 = bVar2;
        pcVar4 = pcVar4 + (*pcVar4 == ',');
        if (*pcVar4 == 'M') {
          iVar8 = FUN_ram_4819e650(pcVar4,"M%hu%n.%hu%n.%hu%n",&uStack_4e,&iStack_48,&uStack_4c,
                                   &iStack_48,&uStack_4a);
          if (iVar8 != 3) {
            return;
          }
          if (0xb < (uStack_4e - 1 & 0xffff)) {
            return;
          }
          if (4 < (uStack_4c - 1 & 0xffff)) {
            return;
          }
          if (6 < uStack_4a) {
            return;
          }
          *puVar12 = 0x4d;
          *(uint *)(puVar12 + 4) = (uint)uStack_4e;
          *(uint *)(puVar12 + 8) = (uint)uStack_4c;
          *(uint *)(puVar12 + 0xc) = (uint)uStack_4a;
          pcVar11 = pcVar4 + iStack_48;
        }
        else {
          uVar10 = 0x44;
          if (*pcVar4 == 'J') {
            pcVar4 = pcVar4 + 1;
            uVar10 = 0x4a;
          }
          uVar9 = strtoul(pcVar4,apcStack_44,10);
          uStack_4a = (ushort)uVar9;
          pcVar11 = apcStack_44[0];
          if (apcStack_44[0] == pcVar4) {
            if (bVar1) {
              *(undefined1 *)(iVar3 + 0x30) = 0x4d;
              *(undefined4 *)(iVar3 + 0x34) = 0xb;
              *(undefined4 *)(iVar3 + 0x38) = 1;
              *(undefined4 *)(iVar3 + 0x3c) = 0;
            }
            else {
              *(undefined1 *)(iVar3 + 8) = 0x4d;
              *(undefined4 *)(iVar3 + 0xc) = 3;
              *(undefined4 *)(iVar3 + 0x10) = 2;
              *(undefined4 *)(iVar3 + 0x14) = 0;
            }
          }
          else {
            *puVar12 = uVar10;
            *(ulong *)(puVar12 + 0xc) = uVar9 & 0xffff;
          }
        }
        uStack_54 = 2;
        uStack_52 = 0;
        uStack_50 = 0;
        iStack_48 = 0;
        if ((*pcVar11 == '/') &&
           (iVar8 = FUN_ram_4819e650(pcVar11,"/%hu%n:%hu%n:%hu%n",&uStack_54,&iStack_48,&uStack_52,
                                     &iStack_48,&uStack_50), iVar8 < 1)) {
          *(undefined1 *)(iVar3 + 8) = 0x4a;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x10) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x18) = 0;
          *(undefined4 *)(iVar3 + 0x20) = 0;
          *(undefined4 *)(iVar3 + 0x24) = 0;
          *(undefined4 *)(iVar3 + 0x28) = 0;
          *(undefined1 *)(iVar3 + 0x30) = 0x4a;
          *(undefined4 *)(iVar3 + 0x34) = 0;
          *(undefined4 *)(iVar3 + 0x38) = 0;
          *(undefined4 *)(iVar3 + 0x3c) = 0;
          *(undefined4 *)(iVar3 + 0x40) = 0;
          *(undefined4 *)(iVar3 + 0x48) = 0;
          *(undefined4 *)(iVar3 + 0x4c) = 0;
          *(undefined4 *)(iVar3 + 0x50) = 0;
          return;
        }
        *(uint *)(puVar12 + 0x10) =
             (uint)uStack_52 * 0x3c + (uint)uStack_50 + (uint)uStack_54 * 0xe10;
        pcVar4 = pcVar11 + iStack_48;
        puVar12 = puVar12 + 0x28;
        bVar2 = true;
        if (bVar1) {
          *(int *)(iVar3 + 0x28) = iVar6;
          *(int *)(iVar3 + 0x50) = iVar7;
          PTR_DAT_ram_481e3774_ram_4ff47fb8 = &DAT_ram_4ff6d798;
          PTR_DAT_ram_481e3774_ram_4ff47fbc = &DAT_ram_4ff6d78c;
          FUN_ram_4819b76e(*(undefined4 *)(iVar3 + 4));
          DAT_ram_4ff6e2f4 = *(int *)(iVar3 + 0x28);
          DAT_ram_4ff6e2f8 = (uint)(*(int *)(iVar3 + 0x50) != *(int *)(iVar3 + 0x28));
          return;
        }
      } while( true );
    }
  }
  else {
    iVar7 = FUN_ram_4819e650(pcVar4,"%11[A-Za-z]%n",&DAT_ram_4ff6d78c,&iStack_48);
    if (0 < iVar7) {
      if (7 < iStack_48 - 3U) {
        return;
      }
      goto LAB_ram_4819bbea;
    }
  }
  PTR_DAT_ram_481e3774_ram_4ff47fb8 = &DAT_ram_4ff6d798;
  PTR_DAT_ram_481e3774_ram_4ff47fbc = &DAT_ram_4ff6d798;
  *(int *)(iVar3 + 0x28) = iVar6;
  DAT_ram_4ff6e2f4 = iVar6;
  return;
}


