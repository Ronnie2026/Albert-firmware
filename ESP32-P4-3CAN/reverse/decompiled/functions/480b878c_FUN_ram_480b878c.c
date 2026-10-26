/* Firmware entry: 0x480b878c */

int FUN_ram_480b878c(char *param_1,int param_2,int param_3,char *param_4,char *param_5,byte *param_6
                    ,char *param_7,undefined1 *param_8)

{
  char cVar1;
  uint uVar2;
  size_t __n;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_8 = 0;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  __n = strlen(param_1);
  iVar3 = FUN_ram_4807271e(__n,param_1,0x180);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_4 == (char *)0x0) {
    return 0;
  }
  sVar4 = strlen(param_4);
  if (sVar4 != 0x10) {
    return 0;
  }
  pcVar11 = param_4;
  do {
    if ((9 < (byte)(*pcVar11 - 0x30U)) && (5 < (byte)(*pcVar11 + 0x9fU))) {
      return 0;
    }
    pcVar11 = pcVar11 + 1;
  } while (param_4 + 0x10 != pcVar11);
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_5 == (char *)0x0) {
    return 0;
  }
  if (param_6 == (byte *)0x0) {
    return 0;
  }
  if (param_7 == (char *)0x0) {
    return 0;
  }
  if (__n == 0) {
    iVar16 = FUN_ram_4ff453ae(param_2,&DAT_ram_481cd044);
    if (iVar16 == 0) {
LAB_ram_480b8a28:
      FUN_ram_4ff45158(param_8,param_1,__n + 1);
      return iVar3;
    }
    iVar16 = -1;
  }
  else {
    pvVar5 = memchr(param_1,0x3f,__n);
    if (pvVar5 == (void *)0x0) {
      iVar16 = -1;
    }
    else {
      iVar16 = (int)pvVar5 - (int)param_1;
      if (iVar16 != -1) {
        if (__n < iVar16 + 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_48195164("%s: __pos (which is %zu) > __size (which is %zu)",
                           "basic_string_view::substr",iVar16 + 1U,__n);
        }
        iVar6 = FUN_ram_48079ec4();
        if (iVar6 != 0) {
          return 0;
        }
      }
    }
    iVar6 = FUN_ram_4ff453ae(param_2,&DAT_ram_481cd044);
    if (iVar6 == 0) {
      if (0x2ff < __n) {
        return 0;
      }
      goto LAB_ram_480b8a28;
    }
  }
  iVar6 = FUN_ram_4ff453ae(param_2,"backup");
  if ((iVar6 != 0) && (iVar7 = FUN_ram_4ff453ae(param_2,"download"), iVar7 != 0)) {
    return 0;
  }
  iVar7 = FUN_ram_4ff453ae(param_3,"manifest");
  if (iVar7 == 0) {
    cVar1 = *param_5;
    if ((cVar1 != '\0') && (iVar7 = FUN_ram_48075cde(param_5), iVar7 == 0)) {
      return 0;
    }
    if (iVar6 == 0) {
      return 0;
    }
    uVar8 = (uint)*param_6;
    if (uVar8 == 0) {
      return 0;
    }
    iVar6 = FUN_ram_4ff453ae(param_6,"latest");
    if (iVar6 != 0) {
      uVar15 = 0;
      uVar2 = 0;
      pbVar9 = param_6;
      do {
        uVar18 = uVar8 - 0x30;
        if (9 < (uVar18 & 0xff)) {
          return 0;
        }
        iVar6 = 0x1fffff - ((int)uVar18 >> 0x1f);
        uVar18 = ~uVar18;
        uVar13 = uVar18 + iVar6;
        uVar13 = uVar13 + (uVar13 < uVar18);
        uVar14 = uVar18 - (uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                                    uVar13 / 5));
        uVar18 = (iVar6 - (uint)(uVar18 < uVar14)) * -0x33333333 + uVar14 * -0x33333334 +
                 (int)((ulonglong)uVar14 * 0xcccccccd >> 0x20);
        uVar13 = uVar18 >> 1;
        if (uVar13 < uVar2) {
          return 0;
        }
        if ((uVar2 == uVar13) && ((uVar18 * -0x80000000 | uVar14 * -0x33333333 >> 1) < uVar15)) {
          return 0;
        }
        uVar17 = uVar15 >> 0x1e;
        uVar12 = uVar15 * 4;
        uVar18 = uVar15 * 5;
        uVar14 = uVar15 * 10;
        uVar13 = uVar14 + uVar8;
        uVar8 = (uint)pbVar9[1];
        uVar15 = uVar13 - 0x30;
        pbVar9 = pbVar9 + 1;
        uVar2 = (uint)(uVar15 < uVar13) +
                (uVar18 >> 0x1f | ((uint)(uVar18 < uVar12) + (uVar17 | uVar2 << 2) + uVar2) * 2) +
                (uint)(uVar13 < uVar14) + -1;
      } while (uVar8 != 0);
      if (uVar15 == 0 && uVar2 == 0) {
        return 0;
      }
    }
    iVar6 = FUN_ram_4ff453ae(param_7,"settings,records");
    if (((iVar6 != 0) && (iVar6 = FUN_ram_4ff453ae(param_7,"settings"), iVar6 != 0)) &&
       (iVar6 = FUN_ram_4ff453ae(param_7,"records"), iVar6 != 0)) {
      return 0;
    }
    if (*param_7 == '\0') {
      return 0;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    goto LAB_ram_480b8910;
  }
  iVar7 = FUN_ram_4ff453ae(param_3,"settings");
  if (iVar7 == 0) {
    if (*param_5 != '\0') goto LAB_ram_480b8b74;
    if (iVar6 == 0) {
      if (*param_6 != 0) {
        return 0;
      }
      if (*param_7 != '\0') {
        return 0;
      }
    }
LAB_ram_480b88fc:
    iVar6 = FUN_ram_4ff453ae(param_2,"download");
  }
  else {
    iVar7 = FUN_ram_4ff453ae(param_3,"records");
    if (iVar7 != 0) {
      return 0;
    }
    if (*param_5 == '\0') {
      if (iVar6 == 0) {
        return 0;
      }
      goto LAB_ram_480b88fc;
    }
LAB_ram_480b8b74:
    iVar7 = FUN_ram_48075cde(param_5);
    if (iVar7 == 0) {
      return 0;
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_ram_480b8910:
  uVar10 = 0x26;
  if (iVar16 == -1) {
    uVar10 = 0x3f;
  }
  iVar16 = FUN_ram_4819ad74(param_8,0x300,"%s%cop=%s&domain=%s&device_id=%s",param_1,uVar10,param_2,
                            param_3,param_4);
  if (iVar16 - 1U < 0x2ff) {
    if (*param_5 == '\0') {
      if (*param_6 == 0) {
        return iVar3;
      }
      iVar6 = FUN_ram_4ff453ae(param_7,"settings,records");
      if (iVar6 == 0) {
        param_7 = "settings%2Crecords";
      }
      uVar8 = FUN_ram_4819ad74(param_8 + iVar16,0x300 - iVar16,"&backup_revision=%s&scopes=%s",
                               param_6,param_7);
    }
    else {
      uVar8 = FUN_ram_4819ad74(param_8 + iVar16,0x300 - iVar16,"&restore_nonce=%s",param_5);
    }
    if ((-1 < (int)uVar8) && (uVar8 < 0x300U - iVar16)) {
      return iVar3;
    }
  }
  *param_8 = 0;
  return 0;
}


