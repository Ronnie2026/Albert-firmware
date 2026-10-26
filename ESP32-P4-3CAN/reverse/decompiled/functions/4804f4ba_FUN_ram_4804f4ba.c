/* Firmware entry: 0x4804f4ba */

uint * FUN_ram_4804f4ba(uint *param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  uint *puVar20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,300);
  if (param_2[10] == '\0') {
    if (param_2[0xc] == '\0') goto LAB_ram_4804f4f8;
    uVar16 = (uint)(byte)param_1[0x31];
    if (uVar16 != 0) goto LAB_ram_4804fd32;
    uVar16 = 1;
    uVar13 = 0;
LAB_ram_4804fdae:
    *(char *)(param_1 + 0x31) = (char)uVar16;
    param_1[uVar13 + 0x19] = 0x102;
LAB_ram_4804fdc0:
    puVar4 = param_1 + 0x19;
    uVar13 = 0;
    puVar20 = puVar4;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x102 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13 + 0x19] != 0x103) && (uVar16 < 0x18)) {
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            iVar9 = uVar16 + 0x18;
            iVar7 = uVar16 + 0x19;
            uVar11 = uVar16 + 1;
            uVar16 = uVar11 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
            param_1[uVar13 + 0x19] = 0x103;
            *(char *)(param_1 + 0x31) = (char)uVar11;
          }
          goto LAB_ram_4804fe46;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xff;
      *(char *)(param_1 + 0x31) = (char)uVar12;
      param_1[uVar13 + 0x19] = 0x103;
    }
LAB_ram_4804fe46:
    uVar13 = 0;
    puVar20 = puVar4;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x319 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13 + 0x19] != 0x31a) && (uVar16 < 0x18)) {
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            iVar9 = uVar16 + 0x18;
            iVar7 = uVar16 + 0x19;
            uVar11 = uVar16 + 1;
            uVar16 = uVar11 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
            param_1[uVar13 + 0x19] = 0x31a;
            *(char *)(param_1 + 0x31) = (char)uVar11;
          }
          goto LAB_ram_4804feca;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xff;
      *(char *)(param_1 + 0x31) = (char)uVar12;
      param_1[uVar13 + 0x19] = 0x31a;
    }
LAB_ram_4804feca:
    uVar13 = 0;
    do {
      uVar12 = *puVar4;
      puVar4 = puVar4 + 1;
      if (0x3c1 < uVar12) {
        if (uVar13 < uVar16) {
          iVar19 = uVar13 * 4;
          if ((param_1[uVar13 + 0x19] == 0x3c2) || (0x17 < uVar16)) goto LAB_ram_4804f4f8;
          uVar13 = uVar16 - uVar13 & 0xff;
          iVar7 = -(uVar13 - 1 & 0xff);
          FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                           uVar13 << 2);
          goto LAB_ram_4804ff42;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (0x17 < uVar16) goto LAB_ram_4804f4f8;
    iVar19 = uVar13 << 2;
LAB_ram_4804ff42:
    *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x3c2;
    cVar17 = param_2[0xb];
    *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
    if (cVar17 == '\0') goto LAB_ram_4804f500;
LAB_ram_4804ff56:
    uVar14 = 2;
    uVar16 = 2;
    param_1[1] = 0x3f5;
    *(undefined1 *)(param_1 + 0x18) = 1;
    *param_1 = 0x118;
  }
  else {
    cVar17 = param_2[0xc];
    uVar16 = 1;
    param_1[0x19] = 0x679;
    *(undefined1 *)(param_1 + 0x31) = 1;
    if (cVar17 != '\0') {
LAB_ram_4804fd32:
      puVar20 = param_1 + 0x19;
      uVar13 = 0;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x101 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] == 0x102) || (0x17 < uVar16)) goto LAB_ram_4804fdc0;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            iVar9 = uVar16 + 0x18;
            iVar7 = uVar16 + 0x19;
            uVar16 = uVar16 + 1 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
            goto LAB_ram_4804fdae;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x102;
      }
      goto LAB_ram_4804fdc0;
    }
LAB_ram_4804f4f8:
    if (param_2[0xb] != '\0') goto LAB_ram_4804ff56;
LAB_ram_4804f500:
    uVar14 = 1;
    *param_1 = 0x118;
    uVar16 = 1;
  }
  puVar4 = param_1 + 0x19;
  *(undefined1 *)(param_1 + 0x18) = uVar14;
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x256 < uVar12) {
      if (uVar13 < uVar16) {
        iVar19 = uVar13 * 4;
        if (param_1[uVar13] == 599) goto LAB_ram_4804f592;
        uVar13 = uVar16 - uVar13 & 0xff;
        uVar12 = (uVar13 - 1 & 0xff) * -4 >> 2;
        FUN_ram_4ff4522c(param_1 + uVar16 + uVar12,param_1 + (uVar16 - 1) + uVar12,uVar13 << 2);
        goto LAB_ram_4804f584;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  iVar19 = uVar13 << 2;
LAB_ram_4804f584:
  uVar16 = uVar16 + 1;
  *(char *)(param_1 + 0x18) = (char)uVar16;
  *(undefined4 *)(iVar19 + (int)param_1) = 599;
LAB_ram_4804f592:
  uVar13 = (uint)(byte)param_1[0x31];
  uVar12 = 0;
  puVar20 = puVar4;
  if (uVar13 == 0) {
    uVar13 = 1;
    param_1[0x19] = 0x3b6;
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  else {
    do {
      uVar11 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x3b5 < uVar11) {
        if (uVar12 < uVar13) {
          if ((param_1[uVar12 + 0x19] != 0x3b6) && (uVar13 < 0x18)) {
            uVar11 = uVar13 - uVar12 & 0xff;
            iVar19 = -(uVar11 - 1 & 0xff);
            iVar9 = uVar13 + 0x18;
            iVar7 = uVar13 + 0x19;
            uVar15 = uVar13 + 1;
            uVar13 = uVar15 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar11 << 2);
            param_1[uVar12 + 0x19] = 0x3b6;
            *(char *)(param_1 + 0x31) = (char)uVar15;
          }
          goto LAB_ram_4804f61e;
        }
        break;
      }
      uVar12 = uVar12 + 1 & 0xff;
    } while (uVar12 != uVar13);
    if (uVar13 < 0x18) {
      uVar11 = uVar13 + 1;
      uVar13 = uVar11 & 0xff;
      *(char *)(param_1 + 0x31) = (char)uVar11;
      param_1[uVar12 + 0x19] = 0x3b6;
    }
  }
LAB_ram_4804f61e:
  uVar12 = 0;
  puVar20 = puVar4;
  do {
    uVar11 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x4e1 < uVar11) {
      if (uVar12 < uVar13) {
        iVar19 = uVar12 * 4;
        if ((param_1[uVar12 + 0x19] == 0x4e2) || (0x17 < uVar13)) goto LAB_ram_4804f6a6;
        uVar12 = uVar13 - uVar12 & 0xff;
        iVar7 = -(uVar12 - 1 & 0xff);
        FUN_ram_4ff4522c(param_1 + uVar13 + 0x19 + iVar7,param_1 + uVar13 + 0x18 + iVar7,uVar12 << 2
                        );
        goto LAB_ram_4804f698;
      }
      break;
    }
    uVar12 = uVar12 + 1 & 0xff;
  } while (uVar12 != uVar13);
  if (uVar13 < 0x18) {
    iVar19 = uVar12 << 2;
LAB_ram_4804f698:
    *(char *)(param_1 + 0x31) = (char)uVar13 + '\x01';
    *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x4e2;
  }
LAB_ram_4804f6a6:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x345 < uVar12) break;
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  if (uVar13 < uVar16) {
    if (param_1[uVar13] != 0x346) {
      uVar12 = uVar16 - uVar13 & 0xff;
      iVar19 = -(uVar12 - 1 & 0xff);
      iVar7 = uVar16 - 1;
      iVar9 = iVar19 + uVar16;
      uVar16 = uVar16 + 1;
      FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
      param_1[uVar13] = 0x346;
      *(char *)(param_1 + 0x18) = (char)uVar16;
    }
  }
  else {
    uVar16 = uVar16 + 1;
    *(char *)(param_1 + 0x18) = (char)uVar16;
    param_1[uVar13] = 0x346;
  }
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x292 < uVar12) {
      if (uVar13 < uVar16) {
        if (param_1[uVar13] != 0x293) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar7 = uVar16 - 1;
          iVar9 = iVar19 + uVar16;
          uVar16 = uVar16 + 1;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
          param_1[uVar13] = 0x293;
          *(char *)(param_1 + 0x18) = (char)uVar16;
        }
        goto LAB_ram_4804f760;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  uVar16 = uVar16 + 1;
  *(char *)(param_1 + 0x18) = (char)uVar16;
  param_1[uVar13] = 0x293;
LAB_ram_4804f760:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (600 < uVar12) {
      if (uVar13 < uVar16) {
        if (param_1[uVar13] != 0x259) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar7 = uVar16 - 1;
          iVar9 = iVar19 + uVar16;
          uVar16 = uVar16 + 1;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
          param_1[uVar13] = 0x259;
          *(char *)(param_1 + 0x18) = (char)uVar16;
        }
        goto LAB_ram_4804f7de;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  uVar16 = uVar16 + 1;
  *(char *)(param_1 + 0x18) = (char)uVar16;
  param_1[uVar13] = 0x259;
LAB_ram_4804f7de:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x388 < uVar12) {
      if (uVar13 < uVar16) {
        if (param_1[uVar13] != 0x389) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar7 = uVar16 - 1;
          iVar9 = iVar19 + uVar16;
          uVar16 = uVar16 + 1;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
          param_1[uVar13] = 0x389;
          *(char *)(param_1 + 0x18) = (char)uVar16;
        }
        goto LAB_ram_4804f85c;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  uVar16 = uVar16 + 1;
  *(char *)(param_1 + 0x18) = (char)uVar16;
  param_1[uVar13] = 0x389;
LAB_ram_4804f85c:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x398 < uVar12) {
      if (uVar13 < uVar16) {
        if (param_1[uVar13] != 0x399) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar7 = uVar16 - 1;
          iVar9 = iVar19 + uVar16;
          uVar16 = uVar16 + 1;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
          param_1[uVar13] = 0x399;
          *(char *)(param_1 + 0x18) = (char)uVar16;
        }
        goto LAB_ram_4804f8da;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  uVar16 = uVar16 + 1;
  *(char *)(param_1 + 0x18) = (char)uVar16;
  param_1[uVar13] = 0x399;
LAB_ram_4804f8da:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x3f7 < uVar12) {
      if (uVar13 < uVar16) {
        if (param_1[uVar13] != 0x3f8) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar7 = uVar16 - 1;
          iVar9 = iVar19 + uVar16;
          uVar11 = uVar16 + 1;
          uVar16 = uVar11 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
          param_1[uVar13] = 0x3f8;
          *(char *)(param_1 + 0x18) = (char)uVar11;
        }
        goto LAB_ram_4804f956;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  uVar12 = uVar16 + 1;
  uVar16 = uVar12 & 0xff;
  *(char *)(param_1 + 0x18) = (char)uVar12;
  param_1[uVar13] = 0x3f8;
LAB_ram_4804f956:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x3fc < uVar12) {
      if (uVar13 < uVar16) {
        if (param_1[uVar13] != 0x3fd) {
          uVar11 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar11 - 1 & 0xff);
          iVar7 = uVar16 - 1;
          iVar9 = iVar19 + uVar16;
          uVar12 = uVar16 + 1;
          uVar16 = uVar12 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar11 << 2);
          param_1[uVar13] = 0x3fd;
          *(char *)(param_1 + 0x18) = (char)uVar12;
        }
        goto LAB_ram_4804f9d4;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  uVar12 = uVar16 + 1;
  uVar16 = uVar12 & 0xff;
  *(char *)(param_1 + 0x18) = (char)uVar12;
  param_1[uVar13] = 0x3fd;
LAB_ram_4804f9d4:
  uVar13 = 0;
  puVar20 = param_1;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x448 < uVar12) {
      if (uVar13 < uVar16) {
        iVar19 = uVar13 * 4;
        if (param_1[uVar13] == 0x449) goto LAB_ram_4804fa54;
        uVar13 = uVar16 - uVar13 & 0xff;
        iVar7 = -(uVar13 - 1 & 0xff);
        FUN_ram_4ff4522c(param_1 + iVar7 + uVar16,param_1 + (uVar16 - 1) + iVar7,uVar13 << 2);
        goto LAB_ram_4804fa46;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  iVar19 = uVar13 << 2;
LAB_ram_4804fa46:
  *(char *)(param_1 + 0x18) = (char)uVar16 + '\x01';
  *(undefined4 *)(iVar19 + (int)param_1) = 0x449;
LAB_ram_4804fa54:
  cVar17 = param_2[0x1c];
  if ((cVar17 != '\0') || (param_2[0x1d] != '\0')) {
    uVar16 = (uint)(byte)param_1[0x31];
    uVar13 = 0;
    puVar20 = puVar4;
    if (uVar16 == 0) {
      uVar16 = 1;
      param_1[0x19] = 0x213;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    else {
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x212 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x213) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x213;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_4804faee;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x213;
      }
    }
LAB_ram_4804faee:
    uVar13 = 0;
    puVar20 = puVar4;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x3c1 < uVar12) {
        if (uVar13 < uVar16) {
          iVar19 = uVar13 * 4;
          if ((param_1[uVar13 + 0x19] == 0x3c2) || (0x17 < uVar16)) goto LAB_ram_4804fb76;
          uVar13 = uVar16 - uVar13 & 0xff;
          iVar7 = -(uVar13 - 1 & 0xff);
          FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                           uVar13 << 2);
          goto LAB_ram_4804fb68;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      iVar19 = uVar13 << 2;
LAB_ram_4804fb68:
      *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
      *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x3c2;
    }
LAB_ram_4804fb76:
    if (cVar17 != '\0') {
      bVar1 = (byte)param_1[0x4a];
      uVar16 = (uint)bVar1;
      if (uVar16 == 0) {
        cVar17 = '\x01';
        uVar13 = 0;
      }
      else {
        puVar20 = param_1 + 0x32;
        uVar13 = 0;
        do {
          uVar12 = *puVar20;
          puVar20 = puVar20 + 1;
          if (0x285 < uVar12) {
            if (uVar13 < uVar16) {
              if ((param_1[uVar13 + 0x32] == 0x286) || (0x17 < uVar16)) goto LAB_ram_4804fc12;
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              cVar17 = bVar1 + 1;
              FUN_ram_4ff4522c(param_1 + uVar16 + 0x32 + iVar19,param_1 + uVar16 + 0x31 + iVar19,
                               uVar12 << 2);
              goto LAB_ram_4804fc00;
            }
            break;
          }
          uVar13 = uVar13 + 1 & 0xff;
        } while (uVar16 != uVar13);
        if (0x17 < uVar16) goto LAB_ram_4804fc12;
        cVar17 = bVar1 + 1;
      }
LAB_ram_4804fc00:
      *(char *)(param_1 + 0x4a) = cVar17;
      param_1[uVar13 + 0x32] = 0x286;
    }
  }
LAB_ram_4804fc12:
  if (param_2[6] == '\0') {
    cVar17 = param_2[1];
    cVar18 = *param_2;
    if (cVar17 == '\0') goto LAB_ram_4804fc2c;
    uVar16 = (uint)(byte)param_1[0x18];
    if (uVar16 != 0) goto LAB_ram_48050e1c;
    cVar3 = '\x01';
    uVar13 = 0;
LAB_ram_48050e8c:
    *(char *)(param_1 + 0x18) = cVar3;
    param_1[uVar13] = 0x118;
LAB_ram_48050e9e:
    if (cVar18 == '\f') {
LAB_ram_48051c26:
      FUN_ram_4804f284(puVar4,0x229);
      cVar18 = '\f';
      goto LAB_ram_4804fc38;
    }
    bVar1 = (byte)param_1[0x31];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar3 = '\x01';
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x3c1 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] == 0x3c2) || (0x17 < uVar16)) goto LAB_ram_4804fc38;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar19,param_1 + uVar16 + 0x18 + iVar19,
                             uVar12 << 2);
            goto LAB_ram_48050f26;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (0x17 < uVar16) goto LAB_ram_4804fc38;
      cVar3 = bVar1 + 1;
    }
LAB_ram_48050f26:
    param_1[uVar13 + 0x19] = 0x3c2;
    cVar8 = param_2[4];
    *(char *)(param_1 + 0x31) = cVar3;
    if (cVar8 != '\0') goto LAB_ram_48050f42;
LAB_ram_4804fc42:
    if (param_2[5] == '\0') goto LAB_ram_4804fc4a;
    uVar16 = (uint)(byte)param_1[0x18];
    if (uVar16 == 0) {
      uVar16 = 1;
      *param_1 = 0x118;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
LAB_ram_4804ff7a:
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x117 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] != 0x118) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar7 = uVar16 - 1;
              iVar9 = iVar19 + uVar16;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
              param_1[uVar13] = 0x118;
              *(char *)(param_1 + 0x18) = (char)uVar11;
            }
            goto LAB_ram_4804fffc;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x18) = (char)uVar12;
        param_1[uVar13] = 0x118;
      }
    }
LAB_ram_4804fffc:
    uVar13 = 0;
    puVar20 = param_1;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x256 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13] != 599) && (uVar16 < 0x18)) {
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            iVar7 = uVar16 - 1;
            iVar9 = iVar19 + uVar16;
            uVar11 = uVar16 + 1;
            uVar16 = uVar11 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar12 << 2);
            param_1[uVar13] = 599;
            *(char *)(param_1 + 0x18) = (char)uVar11;
          }
          goto LAB_ram_4805007e;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xff;
      *(char *)(param_1 + 0x18) = (char)uVar12;
      param_1[uVar13] = 599;
    }
LAB_ram_4805007e:
    uVar13 = 0;
    puVar20 = param_1;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x144 < uVar12) {
        if (uVar13 < uVar16) {
          iVar19 = uVar13 * 4;
          if ((param_1[uVar13] == 0x145) || (0x17 < uVar16)) goto LAB_ram_48050104;
          uVar13 = uVar16 - uVar13 & 0xff;
          iVar7 = -(uVar13 - 1 & 0xff);
          FUN_ram_4ff4522c(param_1 + iVar7 + uVar16,param_1 + (uVar16 - 1) + iVar7,uVar13 << 2);
          goto LAB_ram_480500f6;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      iVar19 = uVar13 << 2;
LAB_ram_480500f6:
      *(char *)(param_1 + 0x18) = (char)uVar16 + '\x01';
      *(undefined4 *)(iVar19 + (int)param_1) = 0x145;
    }
LAB_ram_48050104:
    if (cVar18 == '\f') {
      FUN_ram_4804f284(puVar4,0x229);
      uVar16 = (uint)(byte)param_1[0x31];
      if (uVar16 != 0) goto LAB_ram_4805019c;
      param_1[0x19] = 0x678;
      *(undefined1 *)(param_1 + 0x31) = 1;
      bVar2 = true;
    }
    else {
      uVar16 = (uint)(byte)param_1[0x31];
      uVar13 = 0;
      puVar20 = puVar4;
      if (uVar16 == 0) {
        uVar16 = 1;
        param_1[0x19] = 0x3c2;
        *(undefined1 *)(param_1 + 0x31) = 1;
      }
      else {
        do {
          uVar12 = *puVar20;
          puVar20 = puVar20 + 1;
          if (0x3c1 < uVar12) {
            if (uVar13 < uVar16) {
              if ((param_1[uVar13 + 0x19] != 0x3c2) && (uVar16 < 0x18)) {
                uVar12 = uVar16 - uVar13 & 0xff;
                iVar19 = -(uVar12 - 1 & 0xff);
                iVar9 = uVar16 + 0x18;
                iVar7 = uVar16 + 0x19;
                uVar11 = uVar16 + 1;
                uVar16 = uVar11 & 0xff;
                FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
                param_1[uVar13 + 0x19] = 0x3c2;
                *(char *)(param_1 + 0x31) = (char)uVar11;
              }
              goto LAB_ram_4805019c;
            }
            break;
          }
          uVar13 = uVar13 + 1 & 0xff;
        } while (uVar13 != uVar16);
        if (uVar16 < 0x18) {
          uVar12 = uVar16 + 1;
          uVar16 = uVar12 & 0xff;
          *(char *)(param_1 + 0x31) = (char)uVar12;
          param_1[uVar13 + 0x19] = 0x3c2;
        }
      }
LAB_ram_4805019c:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x677 < uVar12) {
          if (uVar13 < uVar16) {
            iVar19 = uVar13 * 4;
            if ((param_1[uVar13 + 0x19] == 0x678) || (0x17 < uVar16)) goto LAB_ram_48050224;
            uVar13 = uVar16 - uVar13 & 0xff;
            iVar7 = -(uVar13 - 1 & 0xff);
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                             uVar13 << 2);
            goto LAB_ram_48050216;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        iVar19 = uVar13 << 2;
LAB_ram_48050216:
        *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
        *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x678;
      }
LAB_ram_48050224:
      if (cVar18 == '\x0e') {
        FUN_ram_4804f284(param_1 + 0x32,0x255);
        FUN_ram_4804f284(param_1 + 0x32,299);
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
  }
  else {
    bVar1 = (byte)param_1[0x18];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar17 = '\x01';
      uVar13 = 0;
LAB_ram_48050df8:
      *(char *)(param_1 + 0x18) = cVar17;
      param_1[uVar13] = 599;
    }
    else {
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x256 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] == 599) || (0x17 < uVar16)) goto LAB_ram_48050e08;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar17 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
            goto LAB_ram_48050df8;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar16 != uVar13);
      if (uVar16 < 0x18) {
        cVar17 = bVar1 + 1;
        goto LAB_ram_48050df8;
      }
    }
LAB_ram_48050e08:
    cVar17 = param_2[1];
    cVar18 = *param_2;
    if (cVar17 != '\0') {
      uVar16 = (uint)(byte)param_1[0x18];
LAB_ram_48050e1c:
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x117 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] == 0x118) || (0x17 < uVar16)) goto LAB_ram_48050e9e;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = (char)uVar16 + '\x01';
            FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
            goto LAB_ram_48050e8c;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        cVar3 = (char)uVar16 + '\x01';
        goto LAB_ram_48050e8c;
      }
      goto LAB_ram_48050e9e;
    }
LAB_ram_4804fc2c:
    cVar17 = '\0';
    if (cVar18 == '\f') {
      if (param_2[2] == '\0') {
        cVar17 = '\0';
        goto LAB_ram_4804fc38;
      }
      uVar16 = (uint)(byte)param_1[0x18];
      cVar17 = '\0';
      if (uVar16 != 0) goto LAB_ram_48050e1c;
      *param_1 = 0x118;
      *(undefined1 *)(param_1 + 0x18) = 1;
      cVar17 = '\0';
      goto LAB_ram_48051c26;
    }
LAB_ram_4804fc38:
    if (param_2[4] == '\0') goto LAB_ram_4804fc42;
LAB_ram_48050f42:
    bVar1 = (byte)param_1[0x18];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar3 = '\x01';
      uVar13 = 0;
LAB_ram_48050fba:
      *(char *)(param_1 + 0x18) = cVar3;
      param_1[uVar13] = 0x118;
    }
    else {
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x117 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] == 0x118) || (0x17 < uVar16)) goto LAB_ram_48050fcc;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
            goto LAB_ram_48050fba;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        cVar3 = bVar1 + 1;
        goto LAB_ram_48050fba;
      }
    }
LAB_ram_48050fcc:
    if (param_2[5] != '\0') {
      uVar16 = (uint)(byte)param_1[0x18];
      goto LAB_ram_4804ff7a;
    }
LAB_ram_4804fc4a:
    bVar2 = false;
  }
  if (param_2[8] != '\0') {
    bVar1 = (byte)param_1[0x31];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar3 = '\x01';
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x3c1 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] == 0x3c2) || (0x17 < uVar16)) goto LAB_ram_4804fc56;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar19,param_1 + uVar16 + 0x18 + iVar19,
                             uVar12 << 2);
            goto LAB_ram_4805118e;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (0x17 < uVar16) goto LAB_ram_4804fc56;
      cVar3 = bVar1 + 1;
    }
LAB_ram_4805118e:
    *(char *)(param_1 + 0x31) = cVar3;
    param_1[uVar13 + 0x19] = 0x3c2;
  }
LAB_ram_4804fc56:
  if (param_2[9] == '\0') {
LAB_ram_4804fc60:
    if (param_2[0xd] != '\0') {
      uVar16 = (uint)(byte)param_1[0x31];
      if (uVar16 != 0) goto LAB_ram_48051208;
      uVar16 = 1;
      param_1[0x19] = 0x82;
      *(undefined1 *)(param_1 + 0x31) = 1;
LAB_ram_48051284:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x131 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x132) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x132;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_48051300;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x132;
      }
LAB_ram_48051300:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x291 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x292) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x292;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_4805137c;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x292;
      }
LAB_ram_4805137c:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x2e0 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x2e1) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x2e1;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_480513f8;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x2e1;
      }
LAB_ram_480513f8:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x311 < uVar12) {
          if (uVar13 < uVar16) {
            iVar19 = uVar13 * 4;
            if ((param_1[uVar13 + 0x19] == 0x312) || (0x17 < uVar16)) goto LAB_ram_4804fc6a;
            uVar13 = uVar16 - uVar13 & 0xff;
            iVar7 = -(uVar13 - 1 & 0xff);
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                             uVar13 << 2);
            goto LAB_ram_48051472;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        iVar19 = uVar13 << 2;
LAB_ram_48051472:
        *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
        *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x312;
      }
    }
  }
  else {
    bVar1 = (byte)param_1[0x18];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar3 = '\x01';
      uVar13 = 0;
LAB_ram_48051056:
      *(char *)(param_1 + 0x18) = cVar3;
      param_1[uVar13] = 0x3f5;
    }
    else {
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x3f4 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] == 0x3f5) || (0x17 < uVar16)) goto LAB_ram_48051066;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
            goto LAB_ram_48051056;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        cVar3 = bVar1 + 1;
        goto LAB_ram_48051056;
      }
    }
LAB_ram_48051066:
    if (cVar18 == '\f') {
      FUN_ram_4804f284(puVar4,0x249);
      goto LAB_ram_4804fc60;
    }
    bVar1 = (byte)param_1[0x31];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar3 = '\x01';
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x3c1 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] == 0x3c2) || (0x17 < uVar16)) goto LAB_ram_4804fc60;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar19,param_1 + uVar16 + 0x18 + iVar19,
                             uVar12 << 2);
            goto LAB_ram_480510ec;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (0x17 < uVar16) goto LAB_ram_4804fc60;
      cVar3 = bVar1 + 1;
    }
LAB_ram_480510ec:
    cVar8 = param_2[0xd];
    *(char *)(param_1 + 0x31) = cVar3;
    param_1[uVar13 + 0x19] = 0x3c2;
    if (cVar8 != '\0') {
      uVar16 = (uint)(byte)param_1[0x31];
LAB_ram_48051208:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x81 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x82) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x82;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_48051284;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x82;
      }
      goto LAB_ram_48051284;
    }
  }
LAB_ram_4804fc6a:
  cVar3 = param_2[0xe];
  if (cVar3 != '\0') {
    uVar16 = (uint)(byte)param_1[0x18];
    puVar20 = (uint *)&UNK_ram_481f51ec;
    if (uVar16 == 0) {
      uVar13 = 0x111;
      uVar16 = 1;
      uVar12 = 0;
      goto LAB_ram_4804fc98;
    }
    cVar8 = '\0';
    uVar13 = 0x111;
    do {
      uVar12 = 0;
      puVar6 = param_1;
      do {
        uVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        if (uVar13 <= uVar11) {
          if (uVar12 < uVar16) {
            if ((param_1[uVar12] == uVar13) || (0x17 < uVar16)) goto LAB_ram_4804fca4;
            uVar11 = uVar16 - uVar12 & 0xff;
            iVar19 = -(uVar11 - 1 & 0xff);
            iVar7 = uVar16 - 1;
            iVar9 = iVar19 + uVar16;
            uVar16 = uVar16 + 1 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar9,param_1 + iVar7 + iVar19,uVar11 << 2);
            goto LAB_ram_4804fc98;
          }
          break;
        }
        uVar12 = uVar12 + 1 & 0xff;
      } while (uVar12 != uVar16);
      if (uVar16 < 0x18) {
        uVar16 = uVar16 + 1 & 0xff;
LAB_ram_4804fc98:
        param_1[uVar12] = uVar13;
        cVar8 = cVar3;
      }
LAB_ram_4804fca4:
      puVar20 = puVar20 + 1;
      if (puVar20 == (uint *)&UNK_ram_481f5210) goto LAB_ram_48050242;
      uVar13 = *puVar20 & 0x7ff;
    } while( true );
  }
LAB_ram_480503de:
  if (param_2[0xf] == '\0') goto LAB_ram_480503e6;
LAB_ram_4805075c:
  bVar1 = (byte)param_1[0x18];
  uVar16 = (uint)bVar1;
  if (uVar16 == 0) {
    cVar3 = '\x01';
    uVar13 = 0;
LAB_ram_480507de:
    *(char *)(param_1 + 0x18) = cVar3;
    param_1[uVar13] = 0x118;
  }
  else {
    uVar13 = 0;
    puVar20 = param_1;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x117 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13] == 0x118) || (0x17 < uVar16)) goto LAB_ram_480507ee;
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          cVar3 = bVar1 + 1;
          FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
          goto LAB_ram_480507de;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar16 != uVar13);
    if (uVar16 < 0x18) {
      cVar3 = bVar1 + 1;
      goto LAB_ram_480507de;
    }
  }
LAB_ram_480507ee:
  uVar16 = (uint)(byte)param_1[0x31];
  uVar13 = 0;
  puVar20 = puVar4;
  if (uVar16 == 0) {
    uVar16 = 1;
    param_1[0x19] = 0x273;
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  else {
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x272 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13 + 0x19] != 0x273) && (uVar16 < 0x18)) {
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            iVar9 = uVar16 + 0x18;
            iVar7 = uVar16 + 0x19;
            uVar11 = uVar16 + 1;
            uVar16 = uVar11 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
            param_1[uVar13 + 0x19] = 0x273;
            *(char *)(param_1 + 0x31) = (char)uVar11;
          }
          goto LAB_ram_4805087a;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar16 != uVar13);
    if (uVar16 < 0x18) {
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xff;
      *(char *)(param_1 + 0x31) = (char)uVar12;
      param_1[uVar13 + 0x19] = 0x273;
    }
  }
LAB_ram_4805087a:
  uVar13 = 0;
  puVar20 = puVar4;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x3c1 < uVar12) {
      if (uVar13 < uVar16) {
        if ((param_1[uVar13 + 0x19] != 0x3c2) && (uVar16 < 0x18)) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar9 = uVar16 + 0x18;
          iVar7 = uVar16 + 0x19;
          uVar11 = uVar16 + 1;
          uVar16 = uVar11 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
          param_1[uVar13 + 0x19] = 0x3c2;
          *(char *)(param_1 + 0x31) = (char)uVar11;
        }
        goto LAB_ram_480508fe;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  if (uVar16 < 0x18) {
    uVar12 = uVar16 + 1;
    uVar16 = uVar12 & 0xff;
    *(char *)(param_1 + 0x31) = (char)uVar12;
    param_1[uVar13 + 0x19] = 0x3c2;
  }
LAB_ram_480508fe:
  uVar13 = 0;
  puVar20 = puVar4;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x3e2 < uVar12) {
      if (uVar13 < uVar16) {
        iVar19 = uVar13 * 4;
        if ((param_1[uVar13 + 0x19] == 0x3e3) || (0x17 < uVar16)) goto LAB_ram_480503e6;
        uVar13 = uVar16 - uVar13 & 0xff;
        iVar7 = -(uVar13 - 1 & 0xff);
        FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,uVar13 << 2
                        );
        goto LAB_ram_48050978;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  if (0x17 < uVar16) goto LAB_ram_480503e6;
  iVar19 = uVar13 << 2;
LAB_ram_48050978:
  cVar3 = param_2[0x10];
  *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
  *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x3e3;
  if (cVar3 != '\0') {
    uVar16 = (uint)(byte)param_1[0x31];
    goto LAB_ram_48051618;
  }
  goto LAB_ram_480503f0;
LAB_ram_48050242:
  if (cVar8 != '\0') {
    *(char *)(param_1 + 0x18) = (char)uVar16;
  }
  uVar16 = (uint)(byte)param_1[0x31];
  uVar13 = 0;
  puVar20 = puVar4;
  if (uVar16 == 0) {
    uVar16 = 1;
    param_1[0x19] = 0x273;
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  else {
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x272 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13 + 0x19] != 0x273) && (uVar16 < 0x18)) {
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            iVar9 = uVar16 + 0x18;
            iVar7 = uVar16 + 0x19;
            uVar11 = uVar16 + 1;
            uVar16 = uVar11 & 0xff;
            FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
            param_1[uVar13 + 0x19] = 0x273;
            *(char *)(param_1 + 0x31) = (char)uVar11;
          }
          goto LAB_ram_480502d4;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar16 != uVar13);
    if (uVar16 < 0x18) {
      uVar12 = uVar16 + 1;
      uVar16 = uVar12 & 0xff;
      *(char *)(param_1 + 0x31) = (char)uVar12;
      param_1[uVar13 + 0x19] = 0x273;
    }
  }
LAB_ram_480502d4:
  uVar13 = 0;
  puVar20 = puVar4;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x3c1 < uVar12) {
      if (uVar13 < uVar16) {
        if ((param_1[uVar13 + 0x19] != 0x3c2) && (uVar16 < 0x18)) {
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          iVar9 = uVar16 + 0x18;
          iVar7 = uVar16 + 0x19;
          uVar11 = uVar16 + 1;
          uVar16 = uVar11 & 0xff;
          FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
          param_1[uVar13 + 0x19] = 0x3c2;
          *(char *)(param_1 + 0x31) = (char)uVar11;
        }
        goto LAB_ram_48050358;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  if (uVar16 < 0x18) {
    uVar12 = uVar16 + 1;
    uVar16 = uVar12 & 0xff;
    *(char *)(param_1 + 0x31) = (char)uVar12;
    param_1[uVar13 + 0x19] = 0x3c2;
  }
LAB_ram_48050358:
  uVar13 = 0;
  puVar20 = puVar4;
  do {
    uVar12 = *puVar20;
    puVar20 = puVar20 + 1;
    if (0x3e2 < uVar12) {
      if (uVar13 < uVar16) {
        iVar19 = uVar13 * 4;
        if ((param_1[uVar13 + 0x19] == 0x3e3) || (0x17 < uVar16)) goto LAB_ram_4805074e;
        uVar13 = uVar16 - uVar13 & 0xff;
        iVar7 = -(uVar13 - 1 & 0xff);
        FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,uVar13 << 2
                        );
        goto LAB_ram_480503ca;
      }
      break;
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while (uVar13 != uVar16);
  if (uVar16 < 0x18) {
    iVar19 = uVar13 << 2;
LAB_ram_480503ca:
    *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
    *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x3e3;
    goto LAB_ram_480503de;
  }
LAB_ram_4805074e:
  if (param_2[0xf] != '\0') goto LAB_ram_4805075c;
LAB_ram_480503e6:
  if (param_2[0x10] != '\0') {
    uVar16 = (uint)(byte)param_1[0x31];
    if (uVar16 == 0) {
      uVar16 = 1;
      param_1[0x19] = 0x273;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    else {
LAB_ram_48051618:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x272 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x273) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x273;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_48051694;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x273;
      }
    }
LAB_ram_48051694:
    uVar13 = 0;
    puVar20 = puVar4;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x3e2 < uVar12) {
        if (uVar13 < uVar16) {
          iVar19 = uVar13 * 4;
          if ((param_1[uVar13 + 0x19] == 0x3e3) || (0x17 < uVar16)) goto LAB_ram_480503f0;
          uVar13 = uVar16 - uVar13 & 0xff;
          iVar7 = -(uVar13 - 1 & 0xff);
          FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                           uVar13 << 2);
          goto LAB_ram_4805170e;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      iVar19 = uVar13 << 2;
LAB_ram_4805170e:
      *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
      *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x3e3;
    }
  }
LAB_ram_480503f0:
  if (param_2[0x11] == '\0') {
LAB_ram_480503f8:
    if (param_2[0x12] != '\0') {
      uVar16 = (uint)(byte)param_1[0x31];
      if (uVar16 == 0) {
        uVar16 = 1;
        param_1[0x19] = 0x4e2;
        *(undefined1 *)(param_1 + 0x31) = 1;
      }
      else {
LAB_ram_4805148c:
        uVar13 = 0;
        puVar20 = puVar4;
        do {
          uVar12 = *puVar20;
          puVar20 = puVar20 + 1;
          if (0x4e1 < uVar12) {
            if (uVar13 < uVar16) {
              if ((param_1[uVar13 + 0x19] != 0x4e2) && (uVar16 < 0x18)) {
                uVar12 = uVar16 - uVar13 & 0xff;
                iVar19 = -(uVar12 - 1 & 0xff);
                iVar9 = uVar16 + 0x18;
                iVar7 = uVar16 + 0x19;
                uVar11 = uVar16 + 1;
                uVar16 = uVar11 & 0xff;
                FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
                param_1[uVar13 + 0x19] = 0x4e2;
                *(char *)(param_1 + 0x31) = (char)uVar11;
              }
              goto LAB_ram_48051508;
            }
            break;
          }
          uVar13 = uVar13 + 1 & 0xff;
        } while (uVar13 != uVar16);
        if (uVar16 < 0x18) {
          uVar12 = uVar16 + 1;
          uVar16 = uVar12 & 0xff;
          *(char *)(param_1 + 0x31) = (char)uVar12;
          param_1[uVar13 + 0x19] = 0x4e2;
        }
      }
LAB_ram_48051508:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x4e2 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x4e3) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x4e3;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_48051584;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x4e3;
      }
LAB_ram_48051584:
      uVar13 = 0;
      puVar20 = puVar4;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x4f2 < uVar12) {
          if (uVar13 < uVar16) {
            iVar19 = uVar13 * 4;
            if ((param_1[uVar13 + 0x19] == 0x4f3) || (0x17 < uVar16)) goto LAB_ram_48050402;
            uVar13 = uVar16 - uVar13 & 0xff;
            iVar7 = -(uVar13 - 1 & 0xff);
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                             uVar13 << 2);
            goto LAB_ram_480515fe;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        iVar19 = uVar13 << 2;
LAB_ram_480515fe:
        *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
        *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x4f3;
      }
    }
  }
  else {
    bVar1 = (byte)param_1[0x18];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar3 = '\x01';
      uVar13 = 0;
LAB_ram_48050c5a:
      *(char *)(param_1 + 0x18) = cVar3;
      param_1[uVar13] = 0x118;
    }
    else {
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x117 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] == 0x118) || (0x17 < uVar16)) goto LAB_ram_48050c6a;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar3 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
            goto LAB_ram_48050c5a;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar16 != uVar13);
      if (uVar16 < 0x18) {
        cVar3 = bVar1 + 1;
        goto LAB_ram_48050c5a;
      }
    }
LAB_ram_48050c6a:
    uVar16 = (uint)(byte)param_1[0x31];
    uVar13 = 0;
    puVar20 = puVar4;
    if (uVar16 == 0) {
      uVar16 = 1;
      param_1[0x19] = 0x273;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    else {
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x272 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x19] != 0x273) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x18;
              iVar7 = uVar16 + 0x19;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x19] = 0x273;
              *(char *)(param_1 + 0x31) = (char)uVar11;
            }
            goto LAB_ram_48050cf0;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar16 != uVar13);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x31) = (char)uVar12;
        param_1[uVar13 + 0x19] = 0x273;
      }
    }
LAB_ram_48050cf0:
    uVar13 = 0;
    puVar20 = puVar4;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x3e2 < uVar12) {
        if (uVar13 < uVar16) {
          iVar19 = uVar13 * 4;
          if ((param_1[uVar13 + 0x19] == 0x3e3) || (0x17 < uVar16)) goto LAB_ram_480503f8;
          uVar13 = uVar16 - uVar13 & 0xff;
          iVar7 = -(uVar13 - 1 & 0xff);
          FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar7,param_1 + uVar16 + 0x18 + iVar7,
                           uVar13 << 2);
          goto LAB_ram_48050d62;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (0x17 < uVar16) goto LAB_ram_480503f8;
    iVar19 = uVar13 << 2;
LAB_ram_48050d62:
    cVar3 = param_2[0x12];
    *(char *)(param_1 + 0x31) = (char)uVar16 + '\x01';
    *(undefined4 *)((int)param_1 + iVar19 + 100) = 0x3e3;
    if (cVar3 != '\0') {
      uVar16 = (uint)(byte)param_1[0x31];
      goto LAB_ram_4805148c;
    }
  }
LAB_ram_48050402:
  if (param_2[0x13] == '\0') {
    if (bVar2) goto LAB_ram_480505a2;
LAB_ram_48050724:
    cVar17 = param_2[7];
    if (cVar17 == '\0') goto LAB_ram_480506d8;
    uVar16 = (uint)(byte)param_1[0x4a];
    if (uVar16 != 0) goto LAB_ram_480505ba;
    param_1[0x32] = 0x30a;
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  else {
    cVar3 = param_2[0x16];
    cVar8 = cVar3;
    if (cVar17 == '\0') {
      if ((cVar3 == '\0') && (cVar8 = param_2[0x17], param_2[0x17] == '\0')) {
        cVar8 = param_2[0x19];
        goto joined_r0x480517d4;
      }
    }
    else if (((cVar3 == '\0') && (cVar8 = param_2[0x17], param_2[0x17] == '\0')) &&
            (cVar8 = param_2[0x19], param_2[3] == '\0')) {
joined_r0x480517d4:
      if (cVar8 == '\0') goto LAB_ram_480505a2;
    }
    bVar1 = (byte)param_1[0x18];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar17 = '\x01';
      uVar13 = 0;
LAB_ram_48050498:
      *(char *)(param_1 + 0x18) = cVar17;
      param_1[uVar13] = 0x118;
    }
    else {
      uVar13 = 0;
      puVar20 = param_1;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x117 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13] == 0x118) || (0x17 < uVar16)) goto LAB_ram_480504a8;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar17 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + iVar19 + uVar16,param_1 + (uVar16 - 1) + iVar19,uVar12 << 2);
            goto LAB_ram_48050498;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        cVar17 = bVar1 + 1;
        goto LAB_ram_48050498;
      }
    }
LAB_ram_480504a8:
    if (cVar18 == '\f') {
      FUN_ram_4804f284(puVar4,0x229);
    }
    else {
      bVar1 = (byte)param_1[0x31];
      uVar16 = (uint)bVar1;
      if (uVar16 == 0) {
        cVar17 = '\x01';
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        puVar20 = puVar4;
        do {
          uVar12 = *puVar20;
          puVar20 = puVar20 + 1;
          if (0x677 < uVar12) {
            if (uVar13 < uVar16) {
              if ((param_1[uVar13 + 0x19] == 0x678) || (0x17 < uVar16)) goto joined_r0x48050546;
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              cVar17 = bVar1 + 1;
              FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar19,param_1 + uVar16 + 0x18 + iVar19,
                               uVar12 << 2);
              goto LAB_ram_48050536;
            }
            break;
          }
          uVar13 = uVar13 + 1 & 0xff;
        } while (uVar13 != uVar16);
        if (0x17 < uVar16) goto joined_r0x48050546;
        cVar17 = bVar1 + 1;
      }
LAB_ram_48050536:
      *(char *)(param_1 + 0x31) = cVar17;
      param_1[uVar13 + 0x19] = 0x678;
    }
joined_r0x48050546:
    if ((cVar8 != '\0') && (FUN_ram_4804f284(param_1,599), param_2[0x15] == '\0')) {
      FUN_ram_4804f284(param_1,0x145);
    }
    if (cVar3 == '\0') {
      if (param_2[0x17] == '\0') {
        if (param_2[0x19] == '\0') goto LAB_ram_480505a2;
        goto LAB_ram_480517e8;
      }
      if (param_2[0x18] != '\0') goto LAB_ram_48050562;
      if (param_2[0x19] != '\0') goto LAB_ram_480517e8;
    }
    else {
LAB_ram_48050562:
      FUN_ram_4804f284(param_1,0x129);
      if (param_2[0x19] != '\0') {
LAB_ram_480517e8:
        FUN_ram_4804f284(puVar4,0x3c2);
      }
      if (param_2[0x17] == '\0') goto LAB_ram_480505a2;
    }
    if (*param_2 == '\f') {
      puVar5 = &DAT_ram_481f51dc;
      do {
        uVar10 = *puVar5;
        puVar5 = puVar5 + 1;
        FUN_ram_4804f284(param_1,uVar10);
      } while (puVar5 != (undefined4 *)&UNK_ram_481f51ec);
      FUN_ram_4804f284(puVar4,0x2ba);
    }
    else {
      FUN_ram_4804f284(param_1 + 0x32,0x255);
      FUN_ram_4804f284(param_1 + 0x32,299);
    }
LAB_ram_480505a2:
    if (param_2[0x14] == '\0') goto LAB_ram_48050724;
    uVar16 = (uint)(byte)param_1[0x4a];
    cVar17 = param_2[7];
    if (uVar16 == 0) {
      cVar18 = '\x01';
      uVar13 = 0;
LAB_ram_4805062e:
      *(char *)(param_1 + 0x4a) = cVar18;
      param_1[uVar13 + 0x32] = 0x30a;
    }
    else {
LAB_ram_480505ba:
      puVar20 = param_1 + 0x32;
      uVar13 = 0;
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x309 < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x32] == 0x30a) || (0x17 < uVar16)) goto LAB_ram_48050640;
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar18 = (char)uVar16 + '\x01';
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x32 + iVar19,param_1 + uVar16 + 0x31 + iVar19,
                             uVar12 << 2);
            goto LAB_ram_4805062e;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        cVar18 = (char)uVar16 + '\x01';
        goto LAB_ram_4805062e;
      }
    }
LAB_ram_48050640:
    if (cVar17 == '\0') goto LAB_ram_480506d8;
  }
  bVar1 = (byte)param_1[0x31];
  uVar16 = (uint)bVar1;
  if (uVar16 == 0) {
    cVar17 = '\x01';
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    puVar20 = puVar4;
    do {
      uVar12 = *puVar20;
      puVar20 = puVar20 + 1;
      if (0x3a0 < uVar12) {
        if (uVar13 < uVar16) {
          if ((param_1[uVar13 + 0x19] == 0x3a1) || (0x17 < uVar16)) goto LAB_ram_480506d8;
          uVar12 = uVar16 - uVar13 & 0xff;
          iVar19 = -(uVar12 - 1 & 0xff);
          cVar17 = bVar1 + 1;
          FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar19,param_1 + uVar16 + 0x18 + iVar19,
                           uVar12 << 2);
          goto LAB_ram_480506c8;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (0x17 < uVar16) goto LAB_ram_480506d8;
    cVar17 = bVar1 + 1;
  }
LAB_ram_480506c8:
  *(char *)(param_1 + 0x31) = cVar17;
  param_1[uVar13 + 0x19] = 0x3a1;
LAB_ram_480506d8:
  if (param_2[0x1a] != '\0') {
    uVar16 = (uint)(byte)param_1[0x4a];
    puVar6 = param_1 + 0x32;
    uVar13 = 0;
    puVar20 = puVar6;
    if (uVar16 == 0) {
      uVar16 = 1;
      param_1[0x32] = 0x370;
      *(undefined1 *)(param_1 + 0x4a) = 1;
    }
    else {
      do {
        uVar12 = *puVar20;
        puVar20 = puVar20 + 1;
        if (0x36f < uVar12) {
          if (uVar13 < uVar16) {
            if ((param_1[uVar13 + 0x32] != 0x370) && (uVar16 < 0x18)) {
              uVar12 = uVar16 - uVar13 & 0xff;
              iVar19 = -(uVar12 - 1 & 0xff);
              iVar9 = uVar16 + 0x31;
              iVar7 = uVar16 + 0x32;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11 & 0xff;
              FUN_ram_4ff4522c(param_1 + iVar7 + iVar19,param_1 + iVar9 + iVar19,uVar12 << 2);
              param_1[uVar13 + 0x32] = 0x370;
              *(char *)(param_1 + 0x4a) = (char)uVar11;
            }
            goto LAB_ram_48050b54;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (uVar16 < 0x18) {
        uVar12 = uVar16 + 1;
        uVar16 = uVar12 & 0xff;
        *(char *)(param_1 + 0x4a) = (char)uVar12;
        param_1[uVar13 + 0x32] = 0x370;
      }
    }
LAB_ram_48050b54:
    uVar13 = 0;
    do {
      uVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      if (0x39a < uVar12) {
        if (uVar13 < uVar16) {
          iVar19 = uVar13 * 4;
          if ((param_1[uVar13 + 0x32] == 0x39b) || (0x17 < uVar16)) goto LAB_ram_480506e0;
          uVar13 = uVar16 - uVar13 & 0xff;
          iVar7 = -(uVar13 - 1 & 0xff);
          FUN_ram_4ff4522c(param_1 + uVar16 + 0x32 + iVar7,param_1 + uVar16 + 0x31 + iVar7,
                           uVar13 << 2);
          goto LAB_ram_48050bd0;
        }
        break;
      }
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 != uVar16);
    if (uVar16 < 0x18) {
      iVar19 = uVar13 << 2;
LAB_ram_48050bd0:
      *(char *)(param_1 + 0x4a) = (char)uVar16 + '\x01';
      *(undefined4 *)((int)param_1 + iVar19 + 200) = 0x39b;
    }
  }
LAB_ram_480506e0:
  if (param_2[0x1b] != '\0') {
    bVar1 = (byte)param_1[0x31];
    uVar16 = (uint)bVar1;
    if (uVar16 == 0) {
      cVar17 = '\x01';
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar12 = *puVar4;
        puVar4 = puVar4 + 1;
        if (0x3fc < uVar12) {
          if (uVar13 < uVar16) {
            if (param_1[uVar13 + 0x19] == 0x3fd) {
              return param_1;
            }
            if (0x17 < uVar16) {
              return param_1;
            }
            uVar12 = uVar16 - uVar13 & 0xff;
            iVar19 = -(uVar12 - 1 & 0xff);
            cVar17 = bVar1 + 1;
            FUN_ram_4ff4522c(param_1 + uVar16 + 0x19 + iVar19,param_1 + uVar16 + 0x18 + iVar19,
                             uVar12 << 2);
            goto LAB_ram_48050ab0;
          }
          break;
        }
        uVar13 = uVar13 + 1 & 0xff;
      } while (uVar13 != uVar16);
      if (0x17 < uVar16) {
        return param_1;
      }
      cVar17 = bVar1 + 1;
    }
LAB_ram_48050ab0:
    *(char *)(param_1 + 0x31) = cVar17;
    param_1[uVar13 + 0x19] = 0x3fd;
  }
  return param_1;
}


