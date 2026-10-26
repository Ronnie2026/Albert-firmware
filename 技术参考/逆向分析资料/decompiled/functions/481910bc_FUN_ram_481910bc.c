/* Firmware entry: 0x481910bc */

/* WARNING: Removing unreachable block (ram,0x4819144a) */

undefined4 FUN_ram_481910bc(undefined1 *param_1,int param_2,int param_3,ushort *param_4)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_4 = 0;
  param_4[1] = 0;
  puVar2 = param_1 + param_2;
  if (param_3 == 0) {
    uVar4 = 0x17;
    uVar10 = 0;
    if (param_1 < puVar2) goto LAB_ram_4819110c;
  }
  else {
    if (puVar2 <= param_1) {
      return 1;
    }
    uVar4 = 0x1b;
LAB_ram_4819110c:
    iVar12 = 0;
    iVar3 = 7;
    puVar13 = param_1;
    do {
      uVar4 = FUN_ram_4818d326(uVar4,*puVar13);
      sVar1 = (short)param_1;
      if (uVar4 == 0x1d) {
        iVar12 = 1;
        iVar11 = 1;
LAB_ram_48191140:
        if (iVar11 == iVar3) {
LAB_ram_48191210:
          param_4[iVar3 * 2 + 3] = param_4[iVar3 * 2 + 3] + 1;
        }
        else {
LAB_ram_48191144:
          iVar3 = iVar11;
          param_4[iVar3 * 2 + 2] = (short)puVar13 - sVar1;
          param_4[iVar3 * 2 + 3] = 1;
          *param_4 = *param_4 | (ushort)(1 << iVar3);
        }
      }
      else {
        if (uVar4 < 0x1e) {
          if (uVar4 == 0x18) {
            iVar11 = 0;
          }
          else {
            if (uVar4 < 0x19) {
              return 1;
            }
            iVar11 = 1;
            if (uVar4 != 0x1c) goto LAB_ram_48191168;
          }
          goto LAB_ram_48191140;
        }
        if (uVar4 == 0x20) {
          iVar11 = 4;
          goto LAB_ram_48191140;
        }
        if (uVar4 < 0x21) {
          if (uVar4 != 0x1e) goto LAB_ram_48191168;
          iVar11 = 3;
          if (iVar3 == 3) goto LAB_ram_48191210;
          goto LAB_ram_48191144;
        }
        iVar11 = 5;
        if (uVar4 != 0x21) goto LAB_ram_48191140;
      }
LAB_ram_48191168:
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
    uVar10 = *param_4;
    if ((uVar10 & 3) == 1) {
      return 1;
    }
    if ((uVar10 & 2) == 0) {
      if (param_3 != 0) {
        return 1;
      }
    }
    else {
      pbVar6 = param_1 + (uint)param_4[5] + (uint)param_4[4];
      pbVar9 = param_1 + param_4[4];
      param_4[5] = 0;
      uVar4 = (iVar12 - 1U & 2) + 2;
      if (pbVar6 <= pbVar9) {
        return 1;
      }
      bVar7 = *pbVar9;
LAB_ram_48191260:
      uVar8 = (uint)bVar7;
      if (8 < uVar4) {
        iVar12 = 0xb;
        goto LAB_ram_48191302;
      }
      if (uVar4 == 4) goto LAB_ram_48191346;
      while (uVar4 != 5) {
        if (uVar8 == 0x40) {
          pbVar9 = pbVar9 + 1;
          if (pbVar6 == pbVar9) {
            return 1;
          }
          uVar8 = (uint)*pbVar9;
LAB_ram_48191346:
          if (uVar8 != 0x5b) {
            if (((0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) && (9 < (uVar8 - 0x30 & 0xff))) &&
               (1 < (uVar8 - 0x2d & 0xff))) {
              return 1;
            }
            param_4[4] = (short)pbVar9 - sVar1;
            goto LAB_ram_48191386;
          }
          pbVar9 = pbVar9 + 1;
          if (pbVar6 == pbVar9) {
            return 1;
          }
          uVar8 = (uint)*pbVar9;
          uVar4 = 5;
        }
        else {
          if (0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) {
            if (uVar8 < 0x3e) {
              if (uVar8 < 0x21) {
                return 1;
              }
              if ((0x17ffbff9U >> (uVar8 - 0x21 & 0x1f) & 1) == 0) {
                return 1;
              }
            }
            else if ((uVar8 != 0x5f) && (uVar8 != 0x7e)) {
              return 1;
            }
          }
          if (uVar4 == 3) {
            uVar10 = param_4[0xf] + 1;
          }
          else {
            param_4[0xe] = (short)pbVar9 - sVar1;
            *param_4 = *param_4 | 0x40;
            uVar10 = 1;
          }
          param_4[0xf] = uVar10;
          pbVar9 = pbVar9 + 1;
          if (pbVar6 == pbVar9) {
            return 1;
          }
          uVar4 = 3;
          uVar8 = (uint)*pbVar9;
        }
      }
      if (((10 < (uVar8 - 0x30 & 0xff)) && (5 < ((uVar8 | 0x20) - 0x61 & 0xff))) && (uVar8 != 0x2e))
      {
        return 1;
      }
      param_4[4] = (short)pbVar9 - sVar1;
      do {
        pbVar9 = pbVar9 + 1;
        param_4[5] = param_4[5] + 1;
        if (pbVar6 == pbVar9) {
          return 1;
        }
        bVar7 = *pbVar9;
        if (bVar7 == 0x5d) goto LAB_ram_48191454;
      } while ((((byte)(bVar7 - 0x30) < 0xb) || ((byte)((bVar7 | 0x20) + 0x9f) < 6)) ||
              (bVar7 == 0x2e));
      if (bVar7 != 0x25) {
        return 1;
      }
      iVar12 = 9;
      while( true ) {
        pbVar9 = pbVar9 + 1;
        param_4[5] = param_4[5] + 1;
        if (pbVar6 == pbVar9) {
          return 1;
        }
        uVar8 = (uint)*pbVar9;
LAB_ram_48191302:
        if (iVar12 != 10) {
          if (iVar12 != 0xb) goto LAB_ram_4819130a;
          iVar12 = 0xb;
          while( true ) {
            if (9 < (uVar8 - 0x30 & 0xff)) {
              return 1;
            }
            if (iVar12 == 0xc) {
              uVar10 = param_4[7] + 1;
            }
            else {
              param_4[6] = (short)pbVar9 - sVar1;
              uVar10 = 1;
              *param_4 = *param_4 | 4;
            }
            param_4[7] = uVar10;
            pbVar9 = pbVar9 + 1;
            if (pbVar6 == pbVar9) break;
            uVar8 = (uint)*pbVar9;
            iVar12 = 0xc;
          }
          goto LAB_ram_48191460;
        }
        if (uVar8 == 0x5d) break;
LAB_ram_4819130a:
        iVar3 = 10;
        iVar12 = 10;
        if (0x19 < ((uVar8 | 0x20) - 0x61 & 0xff)) {
          iVar12 = iVar3;
          if (uVar8 < 0x3a) {
            if (uVar8 < 0x25) {
              return 1;
            }
            if ((0x1ffb01U >> (uVar8 - 0x25 & 0x1f) & 1) == 0) {
              return 1;
            }
          }
          else if ((uVar8 != 0x5f) && (uVar8 != 0x7e)) {
            return 1;
          }
        }
      }
LAB_ram_48191454:
      pbVar9 = pbVar9 + 1;
      if (pbVar6 != pbVar9) {
        bVar7 = *pbVar9;
        goto LAB_ram_481913c6;
      }
LAB_ram_48191460:
      uVar10 = *param_4;
      if (param_3 != 0) {
        if (uVar10 != 6) {
          return 1;
        }
        goto LAB_ram_4819147e;
      }
    }
  }
  if ((uVar10 & 4) == 0) {
    return 0;
  }
LAB_ram_4819147e:
  uVar5 = strtoul(param_1 + param_4[6],(char **)0x0,10);
  if (0xffff < uVar5) {
    return 1;
  }
  param_4[1] = (ushort)uVar5;
  return 0;
  while( true ) {
    bVar7 = *pbVar9;
    if (((0x19 < (byte)((bVar7 | 0x20) + 0x9f)) && (9 < (byte)(bVar7 - 0x30))) &&
       (1 < (byte)(bVar7 - 0x2d))) break;
LAB_ram_48191386:
    pbVar9 = pbVar9 + 1;
    param_4[5] = param_4[5] + 1;
    if (pbVar6 == pbVar9) goto LAB_ram_48191460;
  }
LAB_ram_481913c6:
  if (bVar7 != 0x3a) {
    return 1;
  }
  pbVar9 = pbVar9 + 1;
  if (pbVar9 == pbVar6) {
    return 1;
  }
  bVar7 = *pbVar9;
  uVar4 = 0xb;
  goto LAB_ram_48191260;
}


