/* Firmware entry: 0x48048fea */

uint FUN_ram_48048fea(byte *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auStack_4 [2];
  byte bStack_2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar2 = *(byte *)(param_2 + 3);
  param_1[0x33] = bVar2;
  bVar5 = *(byte *)((int)param_2 + 0xd);
  bVar3 = 10;
  if ((bVar5 < 0xb) && (bVar3 = bVar5, bVar5 == 0)) {
    bVar3 = 1;
  }
  bVar5 = param_1[0x42];
  if (bVar5 == 0) {
    param_1[0x41] = bVar3;
    param_1[0x42] = 1;
LAB_ram_48049124:
    cVar1 = (char)param_2[1];
    bVar5 = 0;
  }
  else {
    if (param_1[0x41] == bVar3) goto LAB_ram_48049124;
    param_1[0x41] = bVar3;
    iVar6 = *(int *)(param_1 + 0x10) + 1;
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x10) = iVar6;
    param_1[7] = 0;
    cVar1 = (char)param_2[1];
    param_1[0x38] = 0;
  }
  if (cVar1 != '\0') {
    if ((param_1[0x40] == 0) && (param_1[0x40] = 1, param_1[6] == 2)) {
      if (*(int *)(param_1 + 0x10) + 1 == 0) {
        param_1[0x10] = 1;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
      }
      else {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
    if (*(char *)((int)param_2 + 5) != '\0') {
      bVar3 = param_1[8];
      if (bVar3 == 0) {
        cVar1 = *(char *)((int)param_2 + 6);
        if (*(char *)((int)param_2 + 0xb) == '\0') {
          if (3 < (byte)(cVar1 - 3U)) {
LAB_ram_480491ca:
            if ((bVar2 != 0) && (param_1[0x34] != 0)) {
              if (cVar1 != '\x01') {
                if (cVar1 == '\x02') {
                  if (*param_1 != 0xb) {
                    if (*param_1 == 0xc) {
                      if (param_1[0x36] == 0) goto LAB_ram_4804930a;
                      param_1[0x34] = 0;
                      param_1[0x35] = 0;
                      param_1[0x36] = 0;
                      param_1[0x37] = 0;
                      param_1[0x19] = 0;
                      param_1[0x30] = 0;
                      *param_1 = 3;
                    }
                    goto LAB_ram_4804920c;
                  }
                  goto LAB_ram_48049376;
                }
                goto LAB_ram_4804931e;
              }
              if (1 < (byte)(*param_1 - 4)) {
                if (param_1[0x3b] != 0) {
                  param_1[0x37] = 1;
                  param_1[0x32] = 0;
                  param_1[0x3c] = 0;
                  param_1[4] = 1;
                  param_1[0x3a] = 1;
                  param_1[5] = param_1[0x19];
                  param_1[2] = 0;
                  param_1[3] = 2;
                  *param_1 = 4;
                  _auStack_4 = CONCAT12(param_1[0x19],&sideleg);
                  goto LAB_ram_480491a4;
                }
LAB_ram_480493ba:
                param_1[0x3a] = 0;
                _auStack_4 = 0;
                *param_1 = 0xc;
                goto LAB_ram_480491a4;
              }
              goto LAB_ram_480493d6;
            }
            if (cVar1 != '\x02') {
LAB_ram_4804931e:
              bVar3 = 3;
              *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
              goto LAB_ram_48048ee6;
            }
            if (*param_1 == 0xb) {
LAB_ram_48049376:
              param_1[0x19] = 0;
              param_1[0x30] = 0;
              *param_1 = 3;
            }
            else if (*param_1 == 0xc) {
LAB_ram_4804930a:
              param_1[0x3a] = 0;
              goto LAB_ram_4804909c;
            }
LAB_ram_4804920c:
            if (bVar5 != 0) {
              bVar3 = 0;
              goto LAB_ram_48048ee6;
            }
            if ((*(char *)((int)param_2 + 7) == '\0') || ((char)param_2[2] == '\0')) {
              if ((param_1[0x3c] == 0) && (param_1[2] == 0)) {
                param_1[0x31] = 1;
              }
            }
            else {
              bVar5 = *param_1;
              if (param_1[0x31] == 0) {
LAB_ram_4804924a:
                if (bVar5 < 2) {
                  iVar6 = *(int *)(param_1 + 0x10);
                  if (*(int *)(param_1 + 0x14) != iVar6) goto LAB_ram_48049436;
LAB_ram_4804925c:
                  if ((param_1[0x38] != 0) && (param_1[0x41] <= param_1[7])) {
                    if (param_1[0x3d] == 0) {
                      if (*(char *)((int)param_2 + 9) == '\0') {
LAB_ram_480494f0:
                        bVar2 = *param_1;
                        if (1 < (byte)(bVar2 - 4)) {
                          if (bVar2 == 7) {
                            bVar2 = param_1[0x19];
                            goto LAB_ram_4804929c;
                          }
                          cVar1 = *(char *)((int)param_2 + 10);
                          param_1[0x3a] = 1;
                          if (cVar1 == '\0') {
LAB_ram_480495d6:
                            _auStack_4 = 0;
                            *param_1 = 2;
                            goto LAB_ram_480491a4;
                          }
                          if (bVar2 == 6) {
                            if (*param_2 - *(int *)(param_1 + 0x20) < 0) goto LAB_ram_4804909c;
                          }
                          else if (2 < bVar2) goto LAB_ram_4804958c;
                          param_1[0x19] = 0;
                          param_1[0x30] = 0;
                          *param_1 = 3;
                          goto LAB_ram_4804952c;
                        }
                        goto LAB_ram_4804909c;
                      }
                      param_1[0x3d] = 1;
                      if (1 < (byte)(bVar5 - 4)) {
                        if (param_1[0x3b] != 0) {
                          param_1[0x3e] = 1;
                          param_1[4] = 1;
                          param_1[0x3a] = 1;
                          param_1[5] = param_1[0x19];
                          param_1[3] = 2;
                          *param_1 = 4;
                          _auStack_4 = CONCAT12(param_1[0x19],&sideleg);
                          goto LAB_ram_480491a4;
                        }
LAB_ram_480494d8:
                        param_1[0x3a] = 0;
                        _auStack_4 = 0;
                        *param_1 = 10;
                        goto LAB_ram_480491a4;
                      }
                    }
                    else if (param_1[0x3b] == 0) {
                      if (*(char *)((int)param_2 + 9) == '\0') {
                        param_1[0x3d] = 0;
                        if (bVar5 != 10) goto LAB_ram_480494f0;
                        param_1[0x19] = 0;
                        param_1[0x30] = 0;
                        if ((bVar2 != 0) && (param_1[0x34] != 0)) {
                          if (param_1[0x36] == 0) goto LAB_ram_480493ba;
                          param_1[0x34] = 0;
                          param_1[0x35] = 0;
                          param_1[0x36] = 0;
                        }
                        cVar1 = *(char *)((int)param_2 + 10);
                        bVar2 = 3;
                        *param_1 = 3;
                        param_1[0x3a] = 1;
                        if (cVar1 == '\0') goto LAB_ram_480495d6;
LAB_ram_4804958c:
                        if (bVar2 == 3) {
                          if (param_1[0x30] != 0) {
                            if (*param_2 - *(int *)(param_1 + 0x1c) < 0) goto LAB_ram_4804909c;
                            param_1[0x30] = 0;
                          }
LAB_ram_4804952c:
                          bVar2 = param_1[0x19];
                          uVar8 = (uint)bVar2;
                          if (uVar8 < 2) {
                            bVar5 = (&DAT_ram_48222c88)[uVar8];
                            param_1[3] = 1;
                            param_1[5] = bVar2;
                            param_1[4] = bVar5;
                            *param_1 = 4;
                          }
                          else {
                            bVar2 = 0;
                            bVar5 = 0;
                          }
                          auStack_4 = (undefined1  [2])CONCAT11(bVar5,uVar8 < 2);
                          _auStack_4 = CONCAT12(bVar2,auStack_4);
                          goto LAB_ram_480491a4;
                        }
                        goto LAB_ram_4804909c;
                      }
                      param_1[0x3d] = 1;
                      if (1 < (byte)(bVar5 - 4)) goto LAB_ram_480494d8;
                    }
                    else {
                      if (1 < (byte)(bVar5 - 4)) {
                        bVar2 = param_1[0x19];
                        param_1[0x3e] = 1;
LAB_ram_4804929c:
                        param_1[4] = 1;
                        param_1[0x3a] = 1;
                        param_1[5] = bVar2;
                        param_1[3] = 2;
                        *param_1 = 4;
                        _auStack_4 = CONCAT12(bVar2,&sideleg);
                        goto LAB_ram_480491a4;
                      }
                      if (*(char *)((int)param_2 + 9) == '\0') {
                        param_1[0x3d] = 0;
                        goto LAB_ram_480494f0;
                      }
                    }
LAB_ram_480493d6:
                    _auStack_4 = 0;
                    param_1[0x3a] = 1;
                    goto LAB_ram_480491a4;
                  }
                }
                else {
                  if (1 < (byte)(bVar5 - 8)) goto LAB_ram_4804925c;
                  iVar6 = *(int *)(param_1 + 0x10);
                  if (*(int *)(param_1 + 0x14) == iVar6) goto LAB_ram_4804909c;
LAB_ram_48049436:
                  if (param_1[0x41] <= param_1[7]) {
                    bVar5 = 1;
                    param_1[4] = 0;
                    param_1[5] = 0;
                    param_1[0x18] = 0;
                    param_1[0x19] = 0;
                    param_1[0x1c] = 0;
                    param_1[0x1d] = 0;
                    param_1[0x1e] = 0;
                    param_1[0x1f] = 0;
                    param_1[0x20] = 0;
                    param_1[0x21] = 0;
                    param_1[0x22] = 0;
                    param_1[0x23] = 0;
                    param_1[0x30] = 0;
                    param_1[0x31] = 0;
                    param_1[0x32] = 0;
                    *(int *)(param_1 + 0x14) = iVar6;
                    param_1[0x34] = 0;
                    param_1[0x35] = 0;
                    param_1[0x36] = 0;
                    param_1[0x37] = 0;
                    param_1[0x3c] = 0;
                    param_1[0x3d] = 0;
                    param_1[0x3e] = 0;
                    param_1[0x3f] = 0;
                    param_1[0x38] = 1;
                    param_1[0x39] = 0;
                    param_1[0x3a] = 1;
                    param_1[0x3b] = 0;
                    param_1[0] = 1;
                    param_1[1] = 0;
                    param_1[2] = 0;
                    param_1[3] = 0;
                    goto LAB_ram_4804925c;
                  }
                }
                _auStack_4 = 0;
                *param_1 = 1;
                goto LAB_ram_480491a4;
              }
              if (1 < (byte)(bVar5 - 4)) {
                param_1[0x31] = 0;
                if (param_1[0x3b] != 0) {
                  param_1[0x30] = 0;
                  param_1[0x37] = bVar2;
                  param_1[0x32] = bVar2 ^ 1;
                  param_1[0x3c] = 0;
                  param_1[4] = 1;
                  param_1[0x3a] = 1;
                  param_1[0] = 4;
                  param_1[1] = 0;
                  param_1[2] = 0;
                  param_1[3] = 2;
                  param_1[5] = param_1[0x19];
                  _auStack_4 = CONCAT12(param_1[0x19],&sideleg);
                  goto LAB_ram_480491a4;
                }
                if (bVar5 != 3) goto LAB_ram_4804924a;
                param_1[0x19] = 0;
                goto LAB_ram_4804925c;
              }
            }
LAB_ram_4804909c:
            _auStack_4 = 0;
            goto LAB_ram_480491a4;
          }
        }
        else if (cVar1 != '\x06') {
          if (2 < (byte)(cVar1 - 3U)) goto LAB_ram_480491ca;
          if ((1 < (byte)(*param_1 - 4)) && (*param_1 != 0xb)) {
            param_1[0x3a] = 0;
            *param_1 = 0xb;
          }
          goto LAB_ram_4804909c;
        }
        bVar3 = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        param_1[8] = 0;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
      }
LAB_ram_48048ee6:
      if (1 < (byte)(*param_1 - 8)) {
        param_1[1] = bVar3;
        param_1[2] = bVar3;
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        param_1[0x32] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        param_1[0x3e] = 0;
        param_1[0x39] = 1;
        param_1[0x3c] = 1;
        if ((byte)(*param_1 - 4) < 2) {
          param_1[0x3a] = 1;
          _auStack_4 = 0;
          goto LAB_ram_48048f66;
        }
        if (param_1[0x3b] != 0) {
          param_1[4] = 1;
          param_1[0x3a] = 1;
          param_1[5] = param_1[0x19];
          param_1[3] = 2;
          *param_1 = 4;
          _auStack_4 = CONCAT12(param_1[0x19],&sideleg);
          goto LAB_ram_48048f66;
        }
        if (bVar3 == 0xb) {
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[0x34] = 0;
          param_1[0x35] = 0;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3a] = 0;
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          param_1[0x19] = 0;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
          *param_1 = 9;
        }
        else {
          *param_1 = 9;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[0x34] = 0;
          param_1[0x35] = 0;
          param_1[0x3c] = 0;
          param_1[0x3d] = 0;
          param_1[0x3a] = 0;
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          param_1[0x19] = 0;
          if ((bVar3 == 2) && (param_1[0x3f] == 0)) {
            param_1[0x3f] = 1;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          }
        }
      }
      _auStack_4 = 0;
LAB_ram_48048f66:
      return (uint)_auStack_4;
    }
    param_1[6] = 0xf;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    uVar7 = 1;
    if ((byte)(*param_1 - 8) < 2) {
LAB_ram_480492d4:
      bVar2 = 0;
      uVar7 = 0;
      uVar4 = 0;
    }
    else {
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x3e] = 0;
      param_1[0x39] = 1;
      param_1[0x3c] = 1;
      param_1[1] = 4;
      param_1[2] = 4;
      if ((byte)(*param_1 - 4) < 2) {
        param_1[0x3a] = 1;
        goto LAB_ram_480492d4;
      }
      if (param_1[0x3b] == 0) {
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3a] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x19] = 0;
        *param_1 = 9;
        goto LAB_ram_480492d4;
      }
      bVar2 = param_1[0x19];
      uVar4 = 2;
      param_1[4] = 1;
      *param_1 = 4;
      param_1[0x3a] = 1;
      param_1[5] = bVar2;
      param_1[3] = 2;
    }
    auStack_4 = (undefined1  [2])CONCAT11(uVar7,uVar4);
    _auStack_4 = CONCAT12(bVar2,auStack_4);
    goto LAB_ram_480491a4;
  }
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  param_1[8] = 0;
  uVar7 = 1;
  if ((byte)(*param_1 - 8) < 2) {
LAB_ram_480492be:
    bVar2 = 0;
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    param_1[1] = 1;
    param_1[2] = 1;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x3e] = 0;
    param_1[0x39] = 1;
    param_1[0x3c] = 1;
    if ((byte)(*param_1 - 4) < 2) {
      param_1[0x3a] = 1;
      goto LAB_ram_480492be;
    }
    if (param_1[0x3b] == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3a] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x19] = 0;
      *param_1 = 9;
      goto LAB_ram_480492be;
    }
    bVar2 = param_1[0x19];
    uVar4 = 2;
    param_1[4] = 1;
    param_1[0x3a] = 1;
    param_1[5] = bVar2;
    param_1[3] = 2;
    *param_1 = 4;
  }
  auStack_4 = (undefined1  [2])CONCAT11(uVar7,uVar4);
  _auStack_4 = CONCAT12(bVar2,auStack_4);
LAB_ram_480491a4:
  return (uint)_auStack_4;
}


