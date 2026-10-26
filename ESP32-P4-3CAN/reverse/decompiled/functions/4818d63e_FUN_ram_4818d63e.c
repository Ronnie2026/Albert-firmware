/* Firmware entry: 0x4818d63e */

/* WARNING: Removing unreachable block (ram,0x4818e60e) */

byte * FUN_ram_4818d63e(uint *param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  size_t __n;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbStack_64;
  byte *pbStack_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar19 = param_1[5];
  if ((uVar19 & 0x7f000000) != 0) {
    return (byte *)0x0;
  }
  uVar22 = *param_1;
  uVar12 = uVar22 >> 10;
  uVar13 = uVar12 & 0x7f;
  if (param_4 == (byte *)0x0) {
    if (uVar13 < 0x16) {
      if ((uVar13 == 0) || ((0x200026U >> (uVar12 & 0x1f) & 1) == 0)) {
LAB_ram_4818dcea:
        param_1[5] = param_1[5] & 0x80ffffff | 0xb000000;
        return (byte *)0x1;
      }
    }
    else {
      if (uVar13 != 0x40) goto LAB_ram_4818dcea;
      if (((code *)param_2[7] != (code *)0x0) && (iVar7 = (*(code *)param_2[7])(), iVar7 != 0)) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
      }
    }
    return (byte *)0x0;
  }
  if (uVar13 == 0x2e) {
    pbStack_5c = (byte *)0x0;
    pbStack_60 = (byte *)0x0;
    pbStack_64 = (byte *)0x0;
    pbStack_58 = param_3;
  }
  else if (uVar13 == 0x33) {
    pbStack_5c = (byte *)0x0;
    pbStack_60 = (byte *)0x0;
    pbStack_58 = (byte *)0x0;
    pbStack_64 = param_3;
  }
  else if (uVar13 == 0x13) {
    pbStack_60 = (byte *)0x0;
    pbStack_64 = (byte *)0x0;
    pbStack_58 = (byte *)0x0;
    pbStack_5c = param_3;
  }
  else if ((uVar13 + 0x68 & 0x7f) < 0xb) {
    pbStack_5c = (byte *)0x0;
    pbStack_64 = (byte *)0x0;
    pbStack_58 = (byte *)0x0;
    pbStack_60 = param_3;
  }
  else {
    pbStack_5c = (byte *)0x0;
    pbStack_60 = (byte *)0x0;
    pbStack_64 = (byte *)0x0;
    pbStack_58 = (byte *)0x0;
  }
  pbVar20 = param_3 + (int)param_4;
  if (param_3 != pbVar20) {
    pbVar23 = (byte *)0x0;
    pbVar21 = param_3;
LAB_ram_4818d6e4:
    uVar19 = (uint)*pbVar21;
    if ((0x3b < uVar13) || (uVar12 = param_1[1], param_1[1] = uVar12 + 1, uVar12 + 1 < 0x14001)) {
LAB_ram_4818d6fc:
      pbVar8 = pbVar21;
      if (uVar13 == 0x26) goto LAB_ram_4818efd8;
      if (0x26 < uVar13) {
        if (uVar13 != 0x34) goto LAB_ram_4818d9d4;
        uVar13 = *param_1 >> 0x11 & 0x7f;
        if ((uVar19 != 0x20) && (uVar19 != 9)) {
LAB_ram_4818e5d8:
          if (uVar13 == 0x15) {
            *param_1 = *param_1 | 0x10;
          }
          else if (uVar13 < 0x16) {
            if (uVar13 == 0x13) {
              *param_1 = *param_1 | 4;
            }
            else if (uVar13 == 0x14) {
              *param_1 = *param_1 | 8;
            }
          }
          else if (uVar13 == 0x16) {
            *param_1 = *param_1 | 0x20;
          }
          uVar13 = 0x2d;
          pbVar8 = pbVar21;
LAB_ram_4818d9d4:
          while (pbVar21 = pbVar8, uVar13 < 0x35) {
            while (uVar13 != 0x2d) {
              if (uVar13 < 0x2e) {
                if (uVar13 == 0x2a) {
                  if (9 < (uVar19 - 0x30 & 0xff)) goto LAB_ram_4818f556;
                  *(short *)((int)param_1 + 0x12) = (short)(uVar19 - 0x30);
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x2b;
                  goto LAB_ram_4818d754;
                }
                if (0x2a < uVar13) {
                  if (uVar13 != 0x2b) {
                    if (uVar19 != 10) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x17000000;
                      uVar13 = 0x2c;
                      goto LAB_ram_4818d974;
                    }
                    pbVar21 = pbVar8 + 1;
                    uVar13 = 0x2d;
                    goto LAB_ram_4818d754;
                  }
                  if (uVar19 == 0xd) {
                    pbVar21 = pbVar8 + 1;
                    uVar13 = 0x2c;
                    goto LAB_ram_4818d754;
                  }
                  if (uVar19 == 10) {
                    pbVar21 = pbVar8 + 1;
                    uVar13 = 0x2d;
                    goto LAB_ram_4818d754;
                  }
                  if (((uVar19 - 0x30 & 0xff) < 10) &&
                     (uVar19 = (uint)*(ushort *)((int)param_1 + 0x12) * 10 + -0x30 + uVar19,
                     *(short *)((int)param_1 + 0x12) = (short)(uVar19 * 0x10000 >> 0x10),
                     (uVar19 & 0xffff) < 1000)) {
                    pbVar21 = pbVar8 + 1;
                    goto LAB_ram_4818d754;
                  }
                  param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
                  uVar13 = 0x2b;
                  goto LAB_ram_4818d974;
                }
                if (uVar13 == 0x28) {
                  if (8 < (uVar19 - 0x31 & 0xff)) goto LAB_ram_4818f556;
                  *(short *)(param_1 + 4) = (short)uVar19 + -0x30;
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x29;
                  goto LAB_ram_4818d754;
                }
                if (uVar13 != 0x29) {
                  if (uVar19 != 0x2f) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
                    uVar13 = 0x27;
                    goto LAB_ram_4818d974;
                  }
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x28;
                  goto LAB_ram_4818d754;
                }
                if (uVar19 == 0x2e) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x2a;
                  goto LAB_ram_4818d754;
                }
                if (((uVar19 - 0x30 & 0xff) < 10) &&
                   (uVar19 = (uint)(ushort)param_1[4] * 10 + -0x30 + uVar19,
                   *(short *)(param_1 + 4) = (short)(uVar19 * 0x10000 >> 0x10),
                   (uVar19 & 0xffff) < 1000)) {
                  pbVar21 = pbVar8 + 1;
                  goto LAB_ram_4818d754;
                }
                param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
                uVar13 = 0x29;
                goto LAB_ram_4818d974;
              }
              if (uVar13 != 0x31) {
                if (0x31 < uVar13) {
                  if (uVar13 == 0x32) goto LAB_ram_4818e182;
                  uVar12 = *param_1;
                  uVar19 = uVar12 >> 0x11 & 0x7f;
                  if (pbVar20 != pbVar8) goto LAB_ram_4818ddba;
                  uVar13 = 0x33;
                  pbVar21 = pbVar20;
                  goto LAB_ram_4818f8da;
                }
                if (uVar13 != 0x2f) {
                  if (uVar13 != 0x30) {
                    pbVar18 = pbVar8;
                    if (pbVar20 != pbVar8) goto LAB_ram_4818dc6a;
                    pbVar18 = pbVar20;
                    if (param_1[1] < 0x14001) goto LAB_ram_4818f7f4;
                    goto LAB_ram_4818f48a;
                  }
                  if (uVar19 != 10) goto LAB_ram_4818fb62;
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x31;
                  goto LAB_ram_4818d754;
                }
                if (uVar19 == 0xd) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x30;
                  goto LAB_ram_4818d754;
                }
                if (uVar19 < 0xe) {
                  if (uVar19 != 9) {
                    if (uVar19 != 10) goto LAB_ram_4818e182;
                    pbVar21 = pbVar8 + 1;
                    uVar13 = 0x31;
                    goto LAB_ram_4818d754;
                  }
                }
                else if (uVar19 != 0x20) goto LAB_ram_4818e182;
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              if (uVar19 == 0x20) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x2f;
                goto LAB_ram_4818d754;
              }
              if (uVar19 == 9) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x2f;
                goto LAB_ram_4818d754;
              }
              uVar13 = *param_1;
              uVar12 = uVar13 >> 0x11 & 0x7f;
              if (uVar12 == 0x15) {
                *param_1 = uVar13 | 0x10;
              }
              else if (uVar12 < 0x16) {
                if (uVar12 == 0x13) {
                  *param_1 = uVar13 | 4;
                }
                else if (uVar12 == 0x14) {
                  *param_1 = uVar13 | 8;
                }
              }
              else if (uVar12 == 0x16) {
                *param_1 = uVar13 | 0x20;
              }
              if (pbStack_64 == (byte *)0x0) {
                if ((param_1[5] & 0x7f000000) != 0) goto LAB_ram_481900d8;
                pbVar18 = pbVar8;
                if (pbVar8 == (byte *)0x0) break;
              }
              else {
                pbVar18 = pbStack_64;
                if ((param_1[5] & 0x7f000000) != 0) {
LAB_ram_481900d8:
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x702,"http_parser_execute",
                                   "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                }
              }
              pbStack_64 = pbVar18;
              uVar13 = 0x2d;
              pcVar16 = (code *)param_2[4];
              if (pcVar16 != (code *)0x0) {
                *param_1 = *param_1 & 0xfffe03ff | 0xb400;
                iVar7 = (*pcVar16)(param_1,pbStack_64,(int)pbVar8 - (int)pbStack_64);
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818fd84;
                pbStack_64 = (byte *)0x0;
                goto LAB_ram_4818d6fc;
              }
              pbStack_64 = (byte *)0x0;
            }
            if (uVar19 == 0xd) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 0x3a;
              goto LAB_ram_4818d754;
            }
            if (uVar19 != 10) {
              bVar2 = (&DAT_ram_4823aa4c)[uVar19];
              if (bVar2 == 0) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x18000000;
                uVar13 = 0x2d;
                goto LAB_ram_4818d974;
              }
              if (pbStack_58 == (byte *)0x0) {
                pbStack_58 = pbVar8;
              }
              pbVar21 = pbVar8 + 1;
              if (bVar2 == 0x74) {
                sVar10 = 7;
              }
              else if (bVar2 < 0x75) {
                sVar10 = 1;
                if (bVar2 != 99) {
                  if (bVar2 == 0x70) {
                    sVar10 = 5;
                  }
                  else {
                    sVar10 = 0;
                  }
                }
              }
              else {
                sVar10 = (ushort)(bVar2 == 0x75) << 3;
              }
              *(ushort *)((int)param_1 + 2) = *(ushort *)((int)param_1 + 2) & 0x8001 | sVar10 << 1;
              uVar13 = 0x2e;
              goto LAB_ram_4818d754;
            }
            uVar13 = 0x3a;
LAB_ram_4818df46:
            if (uVar13 == 0x39) {
              uVar12 = *param_1 >> 2;
              if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x7e8,"http_parser_execute",
                                 "parser->flags & F_CHUNKED");
              }
              if (uVar19 != 10) {
                uVar13 = 0x39;
                goto LAB_ram_4818fb62;
              }
              param_1[1] = 0;
              uVar13 = 0x3c;
              if (param_1[2] == 0 && param_1[3] == 0) {
                *param_1 = *param_1 & 0xfffffc03 | (uVar12 & 0xff | 0x10) << 2;
                uVar13 = 0x2d;
              }
              if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x7f3,"http_parser_execute",
                                 "HTTP_PARSER_ERRNO(parser) == HPE_OK");
              }
              pcVar16 = (code *)param_2[8];
              if (pcVar16 == (code *)0x0) {
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
              iVar7 = (*pcVar16)(param_1);
              if (iVar7 != 0) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x9000000;
              }
              uVar13 = *param_1 >> 10 & 0x7f;
              if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
              pbVar21 = pbVar8 + 1;
              goto LAB_ram_4818d754;
            }
            if (uVar19 != 10) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
              uVar13 = 0x3a;
              goto LAB_ram_4818d974;
            }
            uVar19 = *param_1 >> 2;
            if ((uVar19 & 0x10) == 0) {
              if (((uVar19 & 1) != 0) && ((char)uVar19 < '\0')) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x1a000000;
                uVar13 = 0x3a;
                goto LAB_ram_4818d974;
              }
              if ((uVar19 & 0x28) == 0x28) {
                uVar19 = 1;
              }
              else {
                uVar19 = (uint)(*(char *)((int)param_1 + 0x16) == '\x05');
              }
              param_1[5] = uVar19 << 0x1f | param_1[5] & 0x7fffffff;
              if ((code *)param_2[5] != (code *)0x0) {
                iVar7 = (*(code *)param_2[5])(param_1);
                if (iVar7 != 1) {
                  if (iVar7 != 2) {
                    if (iVar7 == 0) goto LAB_ram_48190bf8;
                    uVar19 = *param_1 & 0xfffe03ff | 0xec00;
                    pbVar8 = pbVar8 + -(int)param_3;
                    param_1[5] = param_1[5] & 0x80ffffff | 0x5000000;
                    goto LAB_ram_4818d9a2;
                  }
                  param_1[5] = param_1[5] | 0x80000000;
                }
                *param_1 = *param_1 | 0x100;
              }
LAB_ram_48190bf8:
              uVar19 = param_1[5];
              if ((uVar19 >> 0x18 & 0x7f) == 0) goto LAB_ram_4818ee52;
              uVar19 = *param_1 & 0xfffe03ff | 0xec00;
              pbVar8 = pbVar8 + -(int)param_3;
              goto LAB_ram_4818d9a2;
            }
            uVar12 = param_1[5];
            if ((uVar12 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x70e,"http_parser_execute",
                               "HTTP_PARSER_ERRNO(parser) == HPE_OK");
            }
            pcVar16 = (code *)param_2[9];
            if (pcVar16 == (code *)0x0) goto LAB_ram_48190236;
            *param_1 = *param_1 & 0xfffe03ff | 0x10400;
            iVar7 = (*pcVar16)(param_1);
            if (iVar7 != 0) {
              param_1[5] = param_1[5] & 0x80ffffff | 0xa000000;
            }
            uVar12 = *param_1;
            uVar13 = uVar12 >> 10 & 0x7f;
            if ((param_1[5] >> 0x18 & 0x7f) != 0) {
LAB_ram_4818fd84:
              return pbVar8 + -(int)param_3;
            }
            if (uVar13 == 0x26) goto LAB_ram_48190d7e;
            if (uVar13 < 0x27) goto LAB_ram_4818f5b6;
            if (uVar13 == 0x34) {
              uVar13 = uVar12 >> 0x11 & 0x7f;
              uVar19 = 10;
              goto LAB_ram_4818e5d8;
            }
            uVar19 = 10;
          }
          if (uVar13 == 0x3b) {
            if (uVar19 != 10) goto LAB_ram_4818fb62;
            uVar19 = param_1[5];
LAB_ram_4818ee52:
            uVar12 = *param_1;
            param_1[1] = 0;
            uVar13 = uVar12 >> 2;
            if ((uVar13 & 1) == 0) {
              uVar11 = param_1[2];
              if ((param_1[3] + 1 == (uint)(uVar11 == 0)) && (0xfffffffd < uVar11 - 1)) {
                if ((int)uVar19 < 0) {
LAB_ram_481902aa:
                  iVar7 = FUN_ram_4818d5ce(param_1);
                  uVar13 = 1;
                  if (iVar7 != 0) {
                    uVar13 = (-(uint)((uVar12 & 3) != 0) & 0xfffffff0) + 0x15;
                  }
                  if ((uVar19 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_ram_4ff44e88("http_parser.c",0x751,"http_parser_execute",
                                     "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                  }
                  pcVar16 = (code *)param_2[7];
                  uVar13 = uVar13 & 0x7f;
                  if (pcVar16 != (code *)0x0) {
                    *param_1 = uVar13 << 10 | *param_1 & 0xfffe03ff;
                    iVar7 = (*pcVar16)(param_1);
                    if (iVar7 != 0) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
                    }
                    uVar13 = *param_1 >> 10 & 0x7f;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                  }
                  uVar19 = *param_1;
                  goto LAB_ram_48190318;
                }
                if ((uVar13 & 0x40) == 0) {
                  if (uVar11 == 0 && param_1[3] == 0) {
                    iVar7 = FUN_ram_4818d5ce(param_1);
                    uVar13 = 1;
                    if (iVar7 != 0) {
                      uVar13 = (-(uint)((uVar12 & 3) != 0) & 0xfffffff0) + 0x15;
                    }
                    if ((uVar19 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_ram_4ff44e88("http_parser.c",0x75f,"http_parser_execute",
                                       "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                    }
                    pcVar16 = (code *)param_2[7];
                    if (pcVar16 == (code *)0x0) {
                      pbVar21 = pbVar8 + 1;
                      goto LAB_ram_4818d754;
                    }
                    *param_1 = *param_1 & 0xfffe03ff | (uVar13 & 0x7f) << 10;
                    iVar7 = (*pcVar16)(param_1);
                    if (iVar7 != 0) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
                    }
                    uVar13 = *param_1 >> 10 & 0x7f;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                    pbVar21 = pbVar8 + 1;
                  }
                  else {
                    iVar7 = FUN_ram_4818d584(param_1);
                    if (iVar7 != 0) {
                      pbVar21 = pbVar8 + 1;
                      uVar13 = 0x40;
                      goto LAB_ram_4818d754;
                    }
                    iVar7 = FUN_ram_4818d5ce(param_1);
                    uVar13 = 1;
                    if (iVar7 != 0) {
                      uVar13 = (-(uint)((uVar12 & 3) != 0) & 0xfffffff0) + 0x15;
                    }
                    if ((uVar19 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_ram_4ff44e88("http_parser.c",0x767,"http_parser_execute",
                                       "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                    }
                    pcVar16 = (code *)param_2[7];
                    if (pcVar16 == (code *)0x0) {
                      pbVar21 = pbVar8 + 1;
                      goto LAB_ram_4818d754;
                    }
                    *param_1 = *param_1 & 0xfffe03ff | (uVar13 & 0x7f) << 10;
                    iVar7 = (*pcVar16)(param_1);
                    if (iVar7 != 0) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
                    }
                    uVar13 = *param_1 >> 10 & 0x7f;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                    pbVar21 = pbVar8 + 1;
                  }
                  goto LAB_ram_4818d754;
                }
              }
              else {
                if ((int)uVar19 < 0) {
                  if ((*(char *)((int)param_1 + 0x16) == '\x05') || ((uVar13 & 0x40) != 0))
                  goto LAB_ram_481902aa;
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x3f;
                  goto LAB_ram_4818d754;
                }
                if ((uVar13 & 0x40) == 0) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x3f;
                  goto LAB_ram_4818d754;
                }
              }
            }
            else {
              if ((int)uVar19 < 0) {
                if ((*(char *)((int)param_1 + 0x16) == '\x05') || ((uVar13 & 0x40) != 0))
                goto LAB_ram_481902aa;
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x36;
                goto LAB_ram_4818d754;
              }
              if ((uVar13 & 0x40) == 0) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x36;
                goto LAB_ram_4818d754;
              }
            }
            iVar7 = FUN_ram_4818d5ce(param_1);
            uVar13 = 1;
            if (iVar7 != 0) {
              uVar13 = (-(uint)((uVar12 & 3) != 0) & 0xfffffff0) + 0x15;
            }
            if ((uVar19 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x757,"http_parser_execute",
                               "HTTP_PARSER_ERRNO(parser) == HPE_OK");
            }
            pcVar16 = (code *)param_2[7];
            if (pcVar16 == (code *)0x0) {
              pbVar21 = pbVar8 + 1;
              goto LAB_ram_4818d754;
            }
            *param_1 = *param_1 & 0xfffe03ff | (uVar13 & 0x7f) << 10;
            iVar7 = (*pcVar16)(param_1);
            if (iVar7 != 0) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
            }
            uVar13 = *param_1 >> 10 & 0x7f;
            if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
            pbVar21 = pbVar8 + 1;
            goto LAB_ram_4818d754;
          }
          if (uVar13 < 0x3c) {
            if (uVar13 == 0x38) {
              if ((*param_1 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x7dd,"http_parser_execute",
                                 "parser->flags & F_CHUNKED");
              }
              pbVar21 = pbVar8 + 1;
              if (uVar19 == 0xd) {
                uVar13 = 0x39;
              }
              goto LAB_ram_4818d754;
            }
            if (0x38 < uVar13) goto LAB_ram_4818df46;
            if (uVar13 == 0x36) {
              if (param_1[1] != 1) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x7a8,"http_parser_execute","parser->nread == 1");
              }
              if ((*param_1 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x7a9,"http_parser_execute",
                                 "parser->flags & F_CHUNKED");
              }
              uVar19 = (uint)(char)(&UNK_ram_4823a94c)[uVar19];
              if (uVar19 == 0xffffffff) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x1b000000;
                goto LAB_ram_4818d974;
              }
              param_1[2] = uVar19;
              param_1[3] = (int)uVar19 >> 0x1f;
              pbVar21 = pbVar8 + 1;
              uVar13 = 0x37;
              goto LAB_ram_4818d754;
            }
            if (uVar13 != 0x37) {
              if (uVar19 == 10) goto LAB_ram_4818daae;
              param_1[5] = param_1[5] & 0x80ffffff | 0x17000000;
              uVar13 = 0x35;
              goto LAB_ram_4818d974;
            }
            if ((*param_1 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x7ba,"http_parser_execute",
                               "parser->flags & F_CHUNKED");
            }
            if (uVar19 == 0xd) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 0x39;
              goto LAB_ram_4818d754;
            }
            uVar12 = (uint)(char)(&UNK_ram_4823a94c)[uVar19];
            if (uVar12 == 0xffffffff) {
              if (uVar19 == 0x3b) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x38;
                goto LAB_ram_4818d754;
              }
              if (uVar19 != 0x20) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x1b000000;
                uVar13 = 0x37;
                goto LAB_ram_4818d974;
              }
              pbVar21 = pbVar8 + 1;
              uVar13 = 0x38;
              goto LAB_ram_4818d754;
            }
            uVar15 = param_1[2];
            uVar11 = param_1[3];
            uVar19 = uVar15 * 0x10 + uVar12;
            if ((0xfffffff < uVar11) || ((uVar11 == 0xfffffff && (uVar15 == 0xffffffff)))) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
              uVar13 = 0x37;
              goto LAB_ram_4818d974;
            }
            param_1[2] = uVar19;
            param_1[3] = (uint)(uVar19 < uVar12) +
                         ((int)uVar12 >> 0x1f) + (uVar11 << 4 | uVar15 >> 0x1c);
            pbVar21 = pbVar8 + 1;
            goto LAB_ram_4818d754;
          }
          if (uVar13 == 0x3f) {
            uVar14 = param_1[3];
            uVar11 = (int)pbVar20 - (int)pbVar8;
            uVar12 = (int)uVar11 >> 0x1f;
            uVar15 = param_1[2];
            if ((uVar14 < uVar12) || ((uVar12 == uVar14 && (uVar15 < uVar11)))) {
              uVar12 = uVar14;
              uVar11 = uVar15;
            }
            if ((uVar14 + 1 == (uint)(uVar15 == 0)) && (0xfffffffd < uVar15 - 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x777,"http_parser_execute",
                               "parser->content_length != 0 && parser->content_length != ULLONG_MAX"
                              );
            }
            if (pbVar23 == (byte *)0x0) {
              pbVar23 = pbVar8;
            }
            uVar17 = uVar15 - uVar11;
            uVar12 = (uVar14 - uVar12) - (uint)(uVar15 < uVar17);
            param_1[3] = uVar12;
            param_1[2] = uVar17;
            pbVar21 = pbVar8 + (uVar11 - 1);
            if (uVar17 != 0 || uVar12 != 0) {
              pbVar21 = pbVar8 + uVar11;
              goto LAB_ram_4818d754;
            }
            uVar12 = param_1[5];
            if ((uVar12 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x78f,"http_parser_execute",
                               "HTTP_PARSER_ERRNO(parser) == HPE_OK");
            }
            if (pbVar23 != (byte *)0x0) {
              pcVar16 = (code *)param_2[6];
              if (pcVar16 != (code *)0x0) {
                *param_1 = *param_1 & 0xfffe03ff | 0x10400;
                iVar7 = (*pcVar16)(param_1,pbVar23,pbVar21 + (1 - (int)pbVar23));
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                  return pbVar21 + -(int)param_3;
                }
                pbVar23 = (byte *)0x0;
                goto LAB_ram_4818d6fc;
              }
              pbVar23 = (byte *)0x0;
            }
LAB_ram_48190236:
            iVar7 = FUN_ram_4818d5ce(param_1);
            uVar13 = 1;
            pbVar8 = pbVar21;
            if (iVar7 != 0) {
              uVar13 = (uint)((*param_1 & 3) == 0) * 0x10 + 5;
            }
          }
          else {
            if (uVar13 < 0x40) {
              if (uVar13 == 0x3d) {
                if ((*param_1 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x80f,"http_parser_execute",
                                   "parser->flags & F_CHUNKED");
                }
                if (param_1[2] != 0 || param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x810,"http_parser_execute",
                                   "parser->content_length == 0");
                }
                if (uVar19 != 0xd) goto LAB_ram_4818fb62;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x813,"http_parser_execute",
                                   "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                }
                if (pbVar23 == (byte *)0x0) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x3e;
                  goto LAB_ram_4818d754;
                }
                pcVar16 = (code *)param_2[6];
                if (pcVar16 == (code *)0x0) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x3e;
                  pbVar23 = (byte *)0x0;
                  goto LAB_ram_4818d754;
                }
                *param_1 = *param_1 & 0xfffe03ff | 0xf800;
                iVar7 = (*pcVar16)(param_1,pbVar23,(int)pbVar8 - (int)pbVar23);
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                pbVar21 = pbVar8 + 1;
                pbVar23 = (byte *)0x0;
              }
              else if (uVar13 == 0x3e) {
                if ((*param_1 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x817,"http_parser_execute",
                                   "parser->flags & F_CHUNKED");
                }
                if (uVar19 != 10) goto LAB_ram_4818fb62;
                param_1[1] = 0;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x81b,"http_parser_execute",
                                   "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                }
                pcVar16 = (code *)param_2[9];
                if (pcVar16 == (code *)0x0) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x36;
                  goto LAB_ram_4818d754;
                }
                *param_1 = *param_1 & 0xfffe03ff | 0xd800;
                iVar7 = (*pcVar16)(param_1);
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0xa000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                pbVar21 = pbVar8 + 1;
              }
              else {
                uVar11 = param_1[3];
                uVar19 = (int)pbVar20 - (int)pbVar8;
                uVar13 = (int)uVar19 >> 0x1f;
                uVar12 = param_1[2];
                if ((uVar11 < uVar13) || ((uVar13 == uVar11 && (uVar12 < uVar19)))) {
                  uVar19 = uVar12;
                  uVar13 = uVar11;
                }
                if ((*param_1 >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x7fc,"http_parser_execute",
                                   "parser->flags & F_CHUNKED");
                }
                if ((uVar11 + 1 == (uint)(uVar12 == 0)) && (0xfffffffd < uVar12 - 1)) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x7fd,"http_parser_execute",
                                   "parser->content_length != 0 && parser->content_length != ULLONG_MAX"
                                  );
                }
                if (pbVar23 == (byte *)0x0) {
                  pbVar23 = pbVar8;
                }
                uVar15 = uVar12 - uVar19;
                uVar13 = (uVar11 - uVar13) - (uint)(uVar12 < uVar15);
                pbVar21 = pbVar8 + uVar19;
                param_1[3] = uVar13;
                uVar13 = (uVar15 == 0 && uVar13 == 0) + 0x3c;
                param_1[2] = uVar15;
              }
              goto LAB_ram_4818d754;
            }
            if (uVar13 == 0x40) {
              if (pbVar23 == (byte *)0x0) {
                pbVar23 = pbVar8;
              }
              goto LAB_ram_4818d75e;
            }
            if (uVar13 != 0x41) goto LAB_ram_481907fc;
            uVar12 = param_1[5];
            iVar7 = FUN_ram_4818d5ce(param_1);
            uVar13 = 1;
            if (iVar7 != 0) {
              uVar13 = (-(uint)((*param_1 & 3) != 0) & 0xfffffff0) + 0x15;
            }
            if ((uVar12 & 0x7f000000) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x79f,"http_parser_execute",
                               "HTTP_PARSER_ERRNO(parser) == HPE_OK");
            }
          }
          pcVar16 = (code *)param_2[7];
          if (pcVar16 != (code *)0x0) {
            *param_1 = *param_1 & 0xfffe03ff | (uVar13 & 0x7f) << 10;
            iVar7 = (*pcVar16)(param_1);
            if (iVar7 != 0) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x7000000;
            }
            uVar12 = param_1[5];
            uVar13 = *param_1 >> 10 & 0x7f;
            if ((uVar12 >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
          }
          if (-1 < (int)uVar12) {
            pbVar21 = pbVar8 + 1;
            goto LAB_ram_4818d754;
          }
          uVar19 = *param_1;
          uVar13 = uVar13 & 0x7f;
LAB_ram_48190318:
          uVar19 = uVar19 & 0xfffe03ff | uVar13 << 10;
          pbVar8 = pbVar8 + (1 - (int)param_3);
          goto LAB_ram_4818d9a2;
        }
LAB_ram_4818e182:
        if (pbStack_64 == (byte *)0x0) {
          pbStack_64 = pbVar8;
        }
        uVar12 = *param_1;
        *param_1 = uVar12 & 0x80ffffff;
        uVar11 = (uVar12 & 0x80ffffff) >> 0x11 & 0x7f;
        uVar13 = uVar19 | 0x20;
        if (uVar11 == 0xb) {
          pbVar21 = pbVar8 + 1;
          if (uVar13 == 99) {
            *param_1 = uVar12 & 0x8001ffff | 0x1a0000;
            uVar13 = 0x33;
          }
          else {
            *param_1 = uVar12 & 0x8001ffff;
            uVar13 = 0x33;
          }
          goto LAB_ram_4818d754;
        }
        if (uVar11 < 0xc) {
          if (uVar11 == 9) {
            pbVar21 = pbVar8 + 1;
            if (uVar13 == 0x6b) {
              iVar7 = 0xf;
            }
            else {
              if (uVar13 == 99) {
                *param_1 = uVar12 & 0x8001ffff | 0x200000;
                uVar13 = 0x33;
                goto LAB_ram_4818d754;
              }
              iVar7 = (uVar13 != 0x75) + 0x11;
            }
            *param_1 = *param_1 & 0xff01ffff | iVar7 << 0x11;
            uVar13 = 0x33;
            goto LAB_ram_4818d754;
          }
          if (uVar11 == 10) {
            uVar19 = uVar19 - 0x30;
            if (9 < (uVar19 & 0xff)) {
              uVar13 = 0x33;
              param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
              goto LAB_ram_4818d974;
            }
            param_1[2] = uVar19;
            param_1[3] = (int)uVar19 >> 0x1f;
            pbVar21 = pbVar8 + 1;
            uVar13 = 0x33;
            goto LAB_ram_4818d754;
          }
        }
        else {
          if (uVar11 == 0xc) {
            pbVar21 = pbVar8 + 1;
            *param_1 = uVar12 & 0x8001ffff | 0x80;
            uVar13 = 0x33;
            goto LAB_ram_4818d754;
          }
          if (uVar11 == 0xe) {
            pbVar21 = pbVar8 + 1;
            uVar13 = 0x33;
            goto LAB_ram_4818d754;
          }
        }
        pbVar21 = pbVar8 + 1;
        *param_1 = *param_1 & 0xff01ffff;
        uVar13 = 0x33;
        goto LAB_ram_4818d754;
      }
      if (uVar13 == 0xf) {
        if (uVar19 == 0x20) {
          pbVar21 = pbVar21 + 1;
          uVar13 = 0x10;
          goto LAB_ram_4818d754;
        }
        if (9 < (uVar19 - 0x30 & 0xff)) {
LAB_ram_48190432:
          param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
          uVar13 = 0xf;
          pbVar8 = pbVar21;
          goto LAB_ram_4818d974;
        }
        uVar19 = (uint)*(ushort *)((int)param_1 + 0x12) * 10 + -0x30 + uVar19;
        *(short *)((int)param_1 + 0x12) = (short)(uVar19 * 0x10000 >> 0x10);
        if ((uVar19 & 0xffff) < 1000) {
          pbVar21 = pbVar21 + 1;
          goto LAB_ram_4818d754;
        }
LAB_ram_4818f556:
        param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
        goto LAB_ram_4818d974;
      }
      if (uVar13 < 0x10) {
        if (uVar13 == 8) {
          if (uVar19 == 0x54) {
            pbVar21 = pbVar21 + 1;
            uVar13 = 9;
            goto LAB_ram_4818d754;
          }
LAB_ram_48190a1a:
          param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
          uVar13 = 8;
          pbVar8 = pbVar21;
          goto LAB_ram_4818d974;
        }
LAB_ram_4818d71c:
        if (uVar13 < 9) {
          if (uVar13 == 4) {
            if (uVar19 == 0x54) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 9;
              *param_1 = *param_1 & 0xfffffffc | 1;
            }
            else {
              if (uVar19 != 0x45) goto LAB_ram_4818f4bc;
              pbVar21 = pbVar8 + 1;
              *param_1 = *param_1 & 0x80fffffc | 0x2000000;
              *(undefined1 *)((int)param_1 + 0x16) = 2;
              uVar13 = 0x16;
            }
            goto LAB_ram_4818d754;
          }
          if (uVar13 < 5) {
            if (uVar13 != 2) {
              if (uVar13 == 3) {
                pbVar21 = pbVar8 + 1;
                if (uVar19 == 0x43) {
                  uVar13 = 7;
                  *param_1 = *param_1 & 0xfffffffc | 1;
                }
                goto LAB_ram_4818d754;
              }
              if (uVar13 != 1) {
LAB_ram_481907fc:
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x81f,"http_parser_execute",
                                 "0 && \"unhandled state\"");
              }
              if (uVar19 == 0xd) {
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              if (uVar19 == 10) {
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              param_1[5] = param_1[5] & 0x80ffffff | 0xd000000;
              goto LAB_ram_4818d974;
            }
            if (uVar19 == 0xd) {
              pbVar21 = pbVar8 + 1;
              goto LAB_ram_4818d754;
            }
            if (uVar19 == 10) {
              pbVar21 = pbVar8 + 1;
              goto LAB_ram_4818d754;
            }
            uVar13 = *param_1;
            param_1[3] = 0xffffffff;
            param_1[2] = 0xffffffff;
            *param_1 = uVar13 & 0xfffffc03;
            if (uVar19 == 0x48) {
              if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x2de,"http_parser_execute",
                                 "HTTP_PARSER_ERRNO(parser) == HPE_OK");
              }
              pcVar16 = (code *)*param_2;
              if (pcVar16 == (code *)0x0) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 4;
              }
              else {
                *param_1 = uVar13 & 0xfffe0003 | 0x1000;
                iVar7 = (*pcVar16)(param_1);
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x1000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                pbVar21 = pbVar8 + 1;
              }
              goto LAB_ram_4818d754;
            }
            if (uVar19 == 0x49) {
              if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x2e2,"http_parser_execute",
                                 "HTTP_PARSER_ERRNO(parser) == HPE_OK");
              }
              pcVar16 = (code *)*param_2;
              if (pcVar16 == (code *)0x0) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 3;
              }
              else {
                *param_1 = *param_1 & 0xfffe03ff | 0xc00;
                iVar7 = (*pcVar16)(param_1);
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x1000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                pbVar21 = pbVar8 + 1;
              }
              goto LAB_ram_4818d754;
            }
            *param_1 = uVar13 & 0xfffffc00;
LAB_ram_4818e050:
            uVar13 = *param_1;
            param_1[2] = 0xffffffff;
            *param_1 = uVar13 & 0xfffffc03;
            param_1[3] = 0xffffffff;
            if (0x19 < ((uVar19 | 0x20) - 0x61 & 0xff)) goto LAB_ram_48190384;
            *param_1 = uVar13 & 0x80fffc03 | 0x1000000;
            *(undefined1 *)((int)param_1 + 0x16) = 0;
            if (uVar19 == 0x4d) {
              *(undefined1 *)((int)param_1 + 0x16) = 10;
            }
            else if (uVar19 < 0x4e) {
              if (uVar19 != 0x44) {
                if (uVar19 < 0x45) {
                  if (uVar19 == 0x42) {
                    *(undefined1 *)((int)param_1 + 0x16) = 0x10;
                  }
                  else if (uVar19 == 0x43) {
                    *(undefined1 *)((int)param_1 + 0x16) = 5;
                  }
                  else {
                    if (uVar19 != 0x41) goto LAB_ram_48190384;
                    *(undefined1 *)((int)param_1 + 0x16) = 0x13;
                  }
                }
                else if (uVar19 == 0x48) {
                  *(undefined1 *)((int)param_1 + 0x16) = 2;
                }
                else if (uVar19 == 0x4c) {
                  *(undefined1 *)((int)param_1 + 0x16) = 9;
                }
                else {
                  if (uVar19 != 0x47) goto LAB_ram_48190384;
                  *(undefined1 *)((int)param_1 + 0x16) = 1;
                }
              }
            }
            else if (uVar19 == 0x52) {
              *(undefined1 *)((int)param_1 + 0x16) = 0x14;
            }
            else if (uVar19 < 0x53) {
              if (uVar19 == 0x4f) {
                *(undefined1 *)((int)param_1 + 0x16) = 6;
              }
              else if (uVar19 == 0x50) {
                *(undefined1 *)((int)param_1 + 0x16) = 3;
              }
              else {
                if (uVar19 != 0x4e) {
LAB_ram_48190384:
                  param_1[5] = param_1[5] & 0x80ffffff | 0x10000000;
                  uVar13 = 0x15;
                  goto LAB_ram_4818d974;
                }
                *(undefined1 *)((int)param_1 + 0x16) = 0x19;
              }
            }
            else if (uVar19 == 0x54) {
              *(undefined1 *)((int)param_1 + 0x16) = 7;
            }
            else if (uVar19 == 0x55) {
              *(undefined1 *)((int)param_1 + 0x16) = 0xf;
            }
            else {
              if (uVar19 != 0x53) goto LAB_ram_48190384;
              *(undefined1 *)((int)param_1 + 0x16) = 0x1a;
            }
            if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x3f9,"http_parser_execute",
                               "HTTP_PARSER_ERRNO(parser) == HPE_OK");
            }
            pcVar16 = (code *)*param_2;
            if (pcVar16 == (code *)0x0) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 0x16;
            }
            else {
              *param_1 = *param_1 & 0xfffe03ff | 0x5800;
              iVar7 = (*pcVar16)(param_1);
              if (iVar7 != 0) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x1000000;
              }
              uVar13 = *param_1 >> 10 & 0x7f;
              if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
              pbVar21 = pbVar8 + 1;
            }
            goto LAB_ram_4818d754;
          }
          if (uVar13 == 6) {
            if (uVar19 == 0x43) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 7;
              goto LAB_ram_4818d754;
            }
          }
          else {
            if (uVar13 != 7) {
              param_1[3] = 0xffffffff;
              *param_1 = *param_1 & 0xfffffc03;
              param_1[2] = 0xffffffff;
              if (uVar19 == 0x48) {
                uVar13 = 8;
              }
              else if (uVar19 < 0x49) {
                if ((uVar19 != 10) && (uVar19 != 0xd)) goto LAB_ram_4818dd5c;
                uVar13 = 5;
              }
              else {
                if (uVar19 != 0x49) {
LAB_ram_4818dd5c:
                  param_1[5] = param_1[5] & 0x80ffffff | 0x1c000000;
                  uVar13 = 5;
                  goto LAB_ram_4818d974;
                }
                uVar13 = 6;
              }
              if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x319,"http_parser_execute",
                                 "HTTP_PARSER_ERRNO(parser) == HPE_OK");
              }
              pcVar16 = (code *)*param_2;
              if (pcVar16 == (code *)0x0) {
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
              iVar7 = (*pcVar16)(param_1);
              if (iVar7 != 0) {
                param_1[5] = param_1[5] & 0x80ffffff | 0x1000000;
              }
              uVar13 = *param_1 >> 10 & 0x7f;
              if ((param_1[5] >> 0x18 & 0x7f) == 0) {
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              goto LAB_ram_4818e628;
            }
            if (uVar19 == 0x59) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 0xf;
              goto LAB_ram_4818d754;
            }
          }
        }
        else {
          if (uVar13 == 0xc) {
            if (9 < (uVar19 - 0x30 & 0xff)) goto LAB_ram_4818f556;
            *(short *)(param_1 + 4) = (short)(uVar19 - 0x30);
            pbVar21 = pbVar8 + 1;
            uVar13 = 0xd;
            goto LAB_ram_4818d754;
          }
          if (0xc < uVar13) {
            if (uVar13 != 0xd) {
              if (9 < (uVar19 - 0x30 & 0xff)) {
                param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
                uVar13 = 0xe;
                goto LAB_ram_4818d974;
              }
              *(short *)((int)param_1 + 0x12) = (short)(uVar19 - 0x30);
              pbVar21 = pbVar8 + 1;
              uVar13 = 0xf;
              goto LAB_ram_4818d754;
            }
            if (uVar19 == 0x2e) {
              pbVar21 = pbVar8 + 1;
              uVar13 = 0xe;
              goto LAB_ram_4818d754;
            }
            if (((uVar19 - 0x30 & 0xff) < 10) &&
               (uVar19 = (uint)(ushort)param_1[4] * 10 + -0x30 + uVar19,
               *(short *)(param_1 + 4) = (short)(uVar19 * 0x10000 >> 0x10), (uVar19 & 0xffff) < 1000
               )) {
              pbVar21 = pbVar8 + 1;
              goto LAB_ram_4818d754;
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0xe000000;
            uVar13 = 0xd;
            goto LAB_ram_4818d974;
          }
          if (uVar13 != 10) {
            if (uVar13 == 0xb) {
              if (uVar19 != 0x2f) goto LAB_ram_4818fb62;
              pbVar21 = pbVar8 + 1;
              uVar13 = 0xc;
              goto LAB_ram_4818d754;
            }
            if (uVar19 != 0x54) {
              param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
              uVar13 = 9;
              goto LAB_ram_4818d974;
            }
            pbVar21 = pbVar8 + 1;
            uVar13 = 10;
            goto LAB_ram_4818d754;
          }
          if (uVar19 == 0x50) {
            pbVar21 = pbVar8 + 1;
            uVar13 = 0xb;
            goto LAB_ram_4818d754;
          }
        }
      }
      else {
        if (uVar13 == 0x16) {
          if (uVar19 == 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x10000000;
            goto LAB_ram_4818d974;
          }
          uVar12 = *param_1;
LAB_ram_4818effa:
          uVar13 = (uint)*(byte *)((int)param_1 + 0x16);
          uVar15 = uVar12 >> 0x18 & 0x7f;
          uVar11 = (uint)(byte)(&PTR_s_DELETE_ram_481cbed0_ram_4823ab4c)[uVar13][uVar15];
          if (uVar19 == 0x20) {
            if (uVar11 != 0) {
              if (uVar11 != 0x20) goto LAB_ram_4818f732;
              goto LAB_ram_4818f0ac;
            }
            uVar13 = 0x17;
          }
          else {
            if (uVar11 != uVar19) {
              if (((uVar19 | 0x20) - 0x61 & 0xff) < 0x1a) {
                uVar19 = uVar13 << 0x10 | uVar15 << 8 | uVar19;
                if (uVar19 == 0xa014f) {
                  *(undefined1 *)((int)param_1 + 0x16) = 0xb;
                }
                else if (uVar19 < 0xa0150) {
                  if (uVar19 == 0x50148) {
                    *(undefined1 *)((int)param_1 + 0x16) = 0x16;
                  }
                  else if (uVar19 < 0x50149) {
                    if (uVar19 == 0x30155) {
                      *(undefined1 *)((int)param_1 + 0x16) = 4;
                    }
                    else if (uVar19 < 0x30156) {
                      if (uVar19 == 0x30141) {
                        *(undefined1 *)((int)param_1 + 0x16) = 0x1c;
                      }
                      else {
                        if (uVar19 != 0x30152) goto LAB_ram_4818f732;
                        *(undefined1 *)((int)param_1 + 0x16) = 0xc;
                      }
                    }
                    else {
                      if (uVar19 != 0x40252) {
LAB_ram_4818f732:
                        param_1[5] = param_1[5] & 0x80ffffff | 0x10000000;
                        uVar13 = 0x16;
                        goto LAB_ram_4818d974;
                      }
                      *(undefined1 *)((int)param_1 + 0x16) = 0x1d;
                    }
                  }
                  else if (uVar19 == 0x90149) {
                    *(undefined1 *)((int)param_1 + 0x16) = 0x1f;
                  }
                  else if (uVar19 == 0xa0145) {
                    *(undefined1 *)((int)param_1 + 0x16) = 0x17;
                  }
                  else {
                    if (uVar19 != 0x50250) goto LAB_ram_4818f732;
                    *(undefined1 *)((int)param_1 + 0x16) = 8;
                  }
                }
                else if (uVar19 == 0xf0253) {
                  *(undefined1 *)((int)param_1 + 0x16) = 0x1b;
                }
                else if (uVar19 < 0xf0254) {
                  if (uVar19 == 0xc0450) {
                    *(undefined1 *)((int)param_1 + 0x16) = 0xd;
                  }
                  else if (uVar19 < 0xc0451) {
                    if (uVar19 == 0xa0241) {
                      *(undefined1 *)((int)param_1 + 0x16) = 0x15;
                    }
                    else {
                      if (uVar19 != 0xa0341) goto LAB_ram_4818f732;
                      *(undefined1 *)((int)param_1 + 0x16) = 0x1e;
                    }
                  }
                  else {
                    if (uVar19 != 0xf0242) goto LAB_ram_4818f732;
                    *(undefined1 *)((int)param_1 + 0x16) = 0x12;
                  }
                }
                else if (uVar19 == 0x140242) {
                  *(undefined1 *)((int)param_1 + 0x16) = 0x11;
                }
                else if (uVar19 == 0x1a0145) {
                  *(undefined1 *)((int)param_1 + 0x16) = 0xe;
                }
                else {
                  if (uVar19 != 0xf0349) goto LAB_ram_4818f732;
                  *(undefined1 *)((int)param_1 + 0x16) = 0x20;
                }
              }
              else {
                if (((uVar19 != 0x2d) || ((uVar12 & 0x7f000000) != 0x1000000)) || (uVar13 != 10))
                goto LAB_ram_4818f732;
                *(undefined1 *)((int)param_1 + 0x16) = 0x18;
              }
            }
LAB_ram_4818f0ac:
            uVar13 = 0x16;
          }
          pbVar21 = pbVar8 + 1;
          *param_1 = (uVar15 + 1 & 0x7f) << 0x18 | *param_1 & 0x80ffffff;
          goto LAB_ram_4818d754;
        }
LAB_ram_4818da28:
        if (uVar13 < 0x17) {
          if (uVar13 != 0x13) {
            if (0x13 < uVar13) {
              if (uVar13 == 0x14) {
                if (uVar19 != 10) goto LAB_ram_4818fb62;
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x2d;
              }
              else if (uVar19 == 0xd) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x15;
              }
              else {
                if (uVar19 != 10) goto LAB_ram_4818e050;
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x15;
              }
              goto LAB_ram_4818d754;
            }
            if (uVar13 != 0x11) {
              if (uVar13 == 0x12) {
                pbVar21 = pbVar8 + 1;
                if (uVar19 == 0xd) {
                  uVar13 = 0x14;
                }
                else if (uVar19 == 10) {
                  uVar13 = 0x2d;
                }
                else {
                  if (pbStack_5c == (byte *)0x0) {
                    pbStack_5c = pbVar8;
                  }
                  *param_1 = *param_1 & 0x80ffffff;
                  uVar13 = 0x13;
                }
                goto LAB_ram_4818d754;
              }
              if ((uVar19 - 0x30 & 0xff) < 10) {
                *(short *)(param_1 + 5) = (short)(uVar19 - 0x30);
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x11;
                goto LAB_ram_4818d754;
              }
              if (uVar19 != 0x20) {
                param_1[5] = param_1[5] & 0x80ffffff | 0xf000000;
                uVar13 = 0x10;
                goto LAB_ram_4818d974;
              }
              pbVar21 = pbVar8 + 1;
              uVar13 = 0x10;
              goto LAB_ram_4818d754;
            }
            if ((uVar19 - 0x30 & 0xff) < 10) {
              uVar19 = (uint)(ushort)param_1[5] * 10 + -0x30 + uVar19;
              *(short *)(param_1 + 5) = (short)(uVar19 * 0x10000 >> 0x10);
              if ((uVar19 & 0xffff) < 1000) {
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
            }
            else {
              if (uVar19 == 0xd) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x14;
                goto LAB_ram_4818d754;
              }
              if (uVar19 == 0x20) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x12;
                goto LAB_ram_4818d754;
              }
              if (uVar19 == 10) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x2d;
                goto LAB_ram_4818d754;
              }
            }
            param_1[5] = param_1[5] & 0x80ffffff | 0xf000000;
            uVar13 = 0x11;
            goto LAB_ram_4818d974;
          }
          if (uVar19 != 0xd) {
            if (uVar19 == 10) {
              if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_ram_4ff44e88("http_parser.c",0x3c8,"http_parser_execute",
                                 "HTTP_PARSER_ERRNO(parser) == HPE_OK");
              }
              if (pbStack_5c == (byte *)0x0) {
                pbVar21 = pbVar8 + 1;
                uVar13 = 0x2d;
              }
              else {
                pcVar16 = (code *)param_2[2];
                if (pcVar16 == (code *)0x0) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x2d;
                  pbStack_5c = (byte *)0x0;
                }
                else {
                  *param_1 = *param_1 & 0xfffe03ff | 0xb400;
                  iVar7 = (*pcVar16)(param_1,pbStack_5c,(int)pbVar8 - (int)pbStack_5c);
                  if (iVar7 != 0) {
                    param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
                  }
                  uVar13 = *param_1 >> 10 & 0x7f;
                  if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                  pbVar21 = pbVar8 + 1;
                  pbStack_5c = (byte *)0x0;
                }
              }
            }
            else {
              pbVar21 = pbVar8 + 1;
            }
            goto LAB_ram_4818d754;
          }
          if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("http_parser.c",0x3c2,"http_parser_execute",
                             "HTTP_PARSER_ERRNO(parser) == HPE_OK");
          }
          if (pbStack_5c == (byte *)0x0) {
            pbVar21 = pbVar8 + 1;
            uVar13 = 0x14;
            goto LAB_ram_4818d754;
          }
          pcVar16 = (code *)param_2[2];
          if (pcVar16 == (code *)0x0) {
            pbVar21 = pbVar8 + 1;
            uVar13 = 0x14;
            pbStack_5c = (byte *)0x0;
            goto LAB_ram_4818d754;
          }
          *param_1 = *param_1 & 0xfffe03ff | 0x5000;
          iVar7 = (*pcVar16)(param_1,pbStack_5c,(int)pbVar8 - (int)pbStack_5c);
          if (iVar7 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
          }
          uVar13 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) == 0) {
            pbVar21 = pbVar8 + 1;
            pbStack_5c = (byte *)0x0;
            goto LAB_ram_4818d754;
          }
LAB_ram_4818e628:
          return pbVar8 + (1 - (int)param_3);
        }
        if (uVar13 == 0x23) {
          if (uVar19 == 0x20) {
            pbVar21 = pbVar8 + 1;
            goto LAB_ram_4818d754;
          }
          if (uVar19 == 0x48) {
            pbVar21 = pbVar8 + 1;
            uVar13 = 0x24;
            goto LAB_ram_4818d754;
          }
LAB_ram_4818f4bc:
          param_1[5] = param_1[5] & 0x80ffffff | 0x1c000000;
          goto LAB_ram_4818d974;
        }
        if (uVar13 < 0x24) {
          if (0x1b < uVar13) {
            if (uVar19 == 0xd) {
              uVar13 = 0x2c;
            }
            else {
              if (uVar19 == 0x20) {
                if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("http_parser.c",0x46a,"http_parser_execute",
                                   "HTTP_PARSER_ERRNO(parser) == HPE_OK");
                }
                if (pbStack_60 == (byte *)0x0) {
                  pbVar21 = pbVar8 + 1;
                  uVar13 = 0x23;
                }
                else {
                  pcVar16 = (code *)param_2[1];
                  if (pcVar16 == (code *)0x0) {
                    pbVar21 = pbVar8 + 1;
                    uVar13 = 0x23;
                    pbStack_60 = (byte *)0x0;
                  }
                  else {
                    *param_1 = *param_1 & 0xfffe03ff | 0x8c00;
                    iVar7 = (*pcVar16)(param_1,pbStack_60,(int)pbVar8 - (int)pbStack_60);
                    if (iVar7 != 0) {
                      param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
                    }
                    uVar13 = *param_1 >> 10 & 0x7f;
                    if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                    pbVar21 = pbVar8 + 1;
                    pbStack_60 = (byte *)0x0;
                  }
                }
                goto LAB_ram_4818d754;
              }
              if (uVar19 != 10) {
                uVar13 = FUN_ram_4818d326(uVar13,uVar19);
                if (uVar13 == 1) goto LAB_ram_4818fdaa;
                pbVar21 = pbVar8 + 1;
                goto LAB_ram_4818d754;
              }
              uVar13 = 0x2d;
            }
            param_1[4] = 0x90000;
            if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("http_parser.c",0x473,"http_parser_execute",
                               "HTTP_PARSER_ERRNO(parser) == HPE_OK");
            }
            if (pbStack_60 == (byte *)0x0) {
              pbVar21 = pbVar8 + 1;
            }
            else {
              pcVar16 = (code *)param_2[1];
              if (pcVar16 == (code *)0x0) {
                pbVar21 = pbVar8 + 1;
                pbStack_60 = (byte *)0x0;
              }
              else {
                *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
                iVar7 = (*pcVar16)(param_1,pbStack_60,(int)pbVar8 - (int)pbStack_60);
                if (iVar7 != 0) {
                  param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
                }
                uVar13 = *param_1 >> 10 & 0x7f;
                if ((param_1[5] >> 0x18 & 0x7f) != 0) goto LAB_ram_4818e628;
                pbVar21 = pbVar8 + 1;
                pbStack_60 = (byte *)0x0;
              }
            }
            goto LAB_ram_4818d754;
          }
          if (uVar13 != 0x17) {
            if (((uVar19 - 10 & 0xff) < 0x17) && ((0x400009U >> (uVar19 - 10 & 0x1f) & 1) != 0)) {
              uVar13 = uVar13 & 0x7f;
              param_1[5] = param_1[5] & 0x80ffffff | 0x11000000;
              goto LAB_ram_4818d974;
            }
            uVar13 = FUN_ram_4818d326(uVar13,uVar19);
            if (uVar13 != 1) {
              pbVar21 = pbVar8 + 1;
              goto LAB_ram_4818d754;
            }
LAB_ram_4818fdaa:
            param_1[5] = param_1[5] & 0x80ffffff | 0x11000000;
            uVar13 = 1;
            goto LAB_ram_4818d974;
          }
          if (uVar19 == 0x20) {
            pbVar21 = pbVar8 + 1;
            goto LAB_ram_4818d754;
          }
          if (pbStack_60 == (byte *)0x0) {
            pbStack_60 = pbVar8;
          }
          uVar9 = 0x17;
          if (*(char *)((int)param_1 + 0x16) == '\x05') {
            uVar9 = 0x1b;
          }
          uVar13 = FUN_ram_4818d326(uVar9,uVar19);
          if (uVar13 == 1) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x11000000;
            goto LAB_ram_4818d974;
          }
          pbVar21 = pbVar8 + 1;
          goto LAB_ram_4818d754;
        }
        if (uVar13 != 0x24) {
          if (uVar19 != 0x54) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
            uVar13 = 0x25;
            goto LAB_ram_4818d974;
          }
          pbVar21 = pbVar8 + 1;
          uVar13 = 0x26;
          goto LAB_ram_4818d754;
        }
        if (uVar19 == 0x54) {
          pbVar21 = pbVar8 + 1;
          uVar13 = 0x25;
          goto LAB_ram_4818d754;
        }
      }
LAB_ram_4818fb62:
      param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
      goto LAB_ram_4818d974;
    }
LAB_ram_4818d95e:
    uVar13 = uVar13 & 0x7f;
    param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
    pbVar8 = pbVar21;
    goto LAB_ram_4818d974;
  }
  pbVar23 = (byte *)0x0;
  bVar3 = pbStack_58 != (byte *)0x0;
  bVar4 = pbStack_64 != (byte *)0x0;
  bVar5 = pbStack_60 != (byte *)0x0;
  bVar6 = pbStack_5c != (byte *)0x0;
  goto LAB_ram_4818d792;
LAB_ram_4818efd8:
  if (uVar19 == 0x50) {
    pbVar21 = pbVar21 + 1;
    uVar13 = 0x27;
LAB_ram_4818d754:
    if (pbVar21 == pbVar20) goto LAB_ram_4818d75e;
    goto LAB_ram_4818d6e4;
  }
LAB_ram_48190d7e:
  param_1[5] = param_1[5] & 0x80ffffff | 0x1e000000;
  uVar13 = 0x26;
  goto LAB_ram_4818d974;
LAB_ram_4818ddba:
  uVar13 = (uint)*pbVar21;
  if (uVar13 == 0xd) {
    uVar13 = *param_1;
    uVar12 = uVar19 << 0x11 | uVar13 & 0xff01ffff;
    *param_1 = uVar12;
    if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("http_parser.c",0x603,"http_parser_execute",
                       "HTTP_PARSER_ERRNO(parser) == HPE_OK");
    }
    if (pbStack_64 == (byte *)0x0) {
      uVar13 = 0x35;
    }
    else {
      pcVar16 = (code *)param_2[4];
      if (pcVar16 == (code *)0x0) {
        uVar13 = 0x35;
        pbStack_64 = (byte *)0x0;
      }
      else {
        *param_1 = uVar19 << 0x11 | uVar13 & 0xff0003ff | 0xd400;
        iVar7 = (*pcVar16)(param_1,pbStack_64,(int)pbVar21 - (int)pbStack_64);
        if (iVar7 != 0) {
          param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
        }
        uVar12 = *param_1;
        uVar13 = uVar12 >> 10 & 0x7f;
        if ((param_1[5] >> 0x18 & 0x7f) != 0) {
          return pbVar21 + (1 - (int)param_3);
        }
        pbStack_64 = (byte *)0x0;
      }
    }
LAB_ram_4818f8da:
    uVar11 = param_1[1];
    *param_1 = uVar12 & 0xff01ffff | uVar19 << 0x11;
    param_1[1] = (uint)(pbVar21 + (uVar11 - (int)pbVar8));
    if (pbVar21 + (uVar11 - (int)pbVar8) < (byte *)0x14001) {
      if (pbVar20 != pbVar21) {
        pbVar21 = pbVar21 + 1;
        goto LAB_ram_4818d754;
      }
      goto LAB_ram_4818d75e;
    }
    goto LAB_ram_4818d95e;
  }
  if (uVar13 == 10) goto LAB_ram_4818f93a;
  if (-1 < (int)uVar22) {
    if (uVar13 == 9) {
      if (uVar19 == 0xf) {
        uVar12 = 0x29;
        goto LAB_ram_4818e9ba;
      }
      if (0xf < uVar19) {
        if (uVar19 == 0x12) {
LAB_ram_4818f2d2:
          pbVar18 = pbVar21 + 1;
        }
        else {
          if (uVar19 < 0x13) {
            uVar12 = 0x29;
            goto joined_r0x4818e752;
          }
          if ((uVar19 == 0x13) || (2 < uVar19 - 0x14)) goto LAB_ram_4818e9ae;
          pbVar18 = pbVar21 + 1;
          uVar19 = 0x12;
        }
        goto LAB_ram_4818de40;
      }
      if (uVar19 == 10) goto LAB_ram_4818fdde;
      if (10 < uVar19) {
        if (uVar19 != 0xd) {
          if ((uVar19 != 0xe) && (uVar19 == 0xb)) goto LAB_ram_4818f252;
          goto LAB_ram_4818e9ae;
        }
        uVar12 = 0x29;
        goto LAB_ram_4818ea0a;
      }
      if (uVar19 != 0) {
        if (uVar19 == 9) goto LAB_ram_4818f252;
        goto LAB_ram_4818e9ae;
      }
LAB_ram_4818e67e:
      __n = (int)pbVar20 - (int)pbVar21;
      if (0x14000 < __n) {
        __n = 0x14000;
      }
      pbVar18 = memchr(pbVar21,0xd,__n);
      pbVar21 = memchr(pbVar21,10,__n);
      if (pbVar18 != (byte *)0x0) {
        if ((pbVar21 == (byte *)0x0) || (pbVar18 < pbVar21)) {
          uVar19 = 0;
          goto LAB_ram_4818de40;
        }
LAB_ram_4818e6d0:
        uVar19 = 0;
        pbVar18 = pbVar21;
        goto LAB_ram_4818de40;
      }
      if (pbVar21 != (byte *)0x0) goto LAB_ram_4818e6d0;
      uVar19 = 0;
      goto LAB_ram_4818de52;
    }
    if ((0x1f < uVar13) && (uVar13 != 0x7f)) goto LAB_ram_4818ddea;
    param_1[5] = param_1[5] & 0x80ffffff | 0x18000000;
LAB_ram_4818fd0a:
    uVar13 = 0x33;
    pbVar8 = pbVar21;
    goto LAB_ram_4818d974;
  }
LAB_ram_4818ddea:
  uVar12 = uVar13 | 0x20;
  if (uVar19 == 0xf) {
LAB_ram_4818e9ba:
    pbVar18 = pbVar21 + 1;
    uVar19 = 0x12;
    uVar11 = (*param_1 >> 0x18) + 1;
    uVar13 = uVar11 & 0x7f;
    *param_1 = *param_1 & 0x80ffffff | uVar13 << 0x18;
    uVar11 = uVar11 & 0x7f;
    if (((uVar11 < 0xb) && ((byte)"keep-alive"[uVar11] == uVar12)) && (uVar19 = 0x14, uVar13 != 9))
    {
LAB_ram_4818ea00:
      pbVar18 = pbVar21 + 1;
      uVar19 = 0xf;
    }
  }
  else if (uVar19 < 0x10) {
    if (uVar19 == 0xb) {
LAB_ram_4818f252:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("http_parser.c",0x632,"http_parser_execute","0 && \"Shouldn\'t get here.\"");
    }
    if (uVar19 < 0xc) {
      if (uVar19 == 9) goto LAB_ram_4818f252;
      if (uVar19 == 10) {
        if (uVar13 == 0x20) goto LAB_ram_4818f2d2;
        uVar13 = uVar13 - 0x30;
        if ((uVar13 & 0xff) < 10) {
          uVar15 = param_1[2];
          uVar12 = param_1[3];
          uVar11 = uVar15 * 10 + uVar13;
          if ((uVar12 < 0x1999999a) && ((uVar12 != 0x19999999 || (uVar15 < 0x99999999)))) {
            param_1[2] = uVar11;
            param_1[3] = (uint)(uVar11 < uVar13) +
                         (uVar15 * 5 >> 0x1f |
                         ((uint)(uVar15 * 5 < uVar15 * 4) + (uVar15 >> 0x1e | uVar12 << 2) + uVar12)
                         * 2) + ((int)uVar13 >> 0x1f);
            pbVar18 = pbVar21 + 1;
            goto LAB_ram_4818de40;
          }
        }
LAB_ram_4818fdde:
        param_1[5] = param_1[5] & 0x80ffffff | 0x19000000;
        *param_1 = *param_1 & 0xff01ffff | 0x140000;
        goto LAB_ram_4818fd0a;
      }
      if (uVar19 == 0) goto LAB_ram_4818e67e;
LAB_ram_4818e9ae:
      uVar19 = 0;
      pbVar18 = pbVar21 + 1;
    }
    else if (uVar19 == 0xd) {
LAB_ram_4818ea0a:
      pbVar18 = pbVar21 + 1;
      uVar11 = (*param_1 >> 0x18) + 1;
      uVar13 = uVar11 & 0x7f;
      *param_1 = *param_1 & 0x80ffffff | uVar13 << 0x18;
      uVar11 = uVar11 & 0x7f;
      uVar19 = 0;
      if (((uVar11 < 8) && ((byte)"chunked"[uVar11] == uVar12)) && (uVar19 = 0x13, uVar13 != 6)) {
        uVar19 = 0xd;
      }
    }
    else {
      if (uVar19 != 0xe) goto LAB_ram_4818e9ae;
      pbVar18 = pbVar21 + 1;
      if (uVar12 == 0x6b) goto LAB_ram_4818ea00;
      if (uVar12 == 0x75) goto LAB_ram_4818e620;
      if (uVar12 == 99) goto LAB_ram_4818e79e;
      if ((&DAT_ram_4823aa4c)[uVar12] != '\0') goto LAB_ram_4818e80e;
      uVar19 = -(uint)((*pbVar21 & 0xdf) == 0) & 0xe;
    }
  }
  else if (uVar19 == 0x12) {
    pbVar18 = pbVar21 + 1;
    if (uVar13 == 0x2c) {
      *param_1 = *param_1 & 0x80ffffff;
      uVar19 = 0xe;
    }
  }
  else if (uVar19 < 0x13) {
joined_r0x4818e752:
    if (uVar19 == 0x10) {
      pbVar18 = pbVar21 + 1;
      uVar11 = (*param_1 >> 0x18) + 1;
      uVar13 = uVar11 & 0x7f;
      *param_1 = *param_1 & 0x80ffffff | uVar13 << 0x18;
      uVar11 = uVar11 & 0x7f;
      uVar19 = 0x12;
      if (((uVar11 < 6) && ((byte)"close"[uVar11] == uVar12)) && (uVar19 = 0x15, uVar13 != 4)) {
LAB_ram_4818e79e:
        uVar19 = 0x10;
        pbVar18 = pbVar21 + 1;
      }
    }
    else {
      pbVar18 = pbVar21 + 1;
      uVar11 = (*param_1 >> 0x18) + 1;
      uVar13 = uVar11 & 0x7f;
      *param_1 = *param_1 & 0x80ffffff | uVar13 << 0x18;
      uVar11 = uVar11 & 0x7f;
      uVar19 = 0x12;
      if (((uVar11 < 8) && ((byte)"pending_upgrade"[uVar11 + 8] == uVar12)) &&
         (uVar19 = 0x16, uVar13 != 6)) {
LAB_ram_4818e620:
        uVar19 = 0x11;
        pbVar18 = pbVar21 + 1;
      }
    }
  }
  else if (uVar19 == 0x13) {
    pbVar18 = pbVar21 + 1;
    if (uVar13 != 0x20) {
      uVar19 = 0;
    }
  }
  else {
    if (2 < uVar19 - 0x14) goto LAB_ram_4818e9ae;
    pbVar18 = pbVar21 + 1;
    if (uVar13 == 0x2c) {
      uVar13 = *param_1 >> 2 & 0xff;
      if (uVar19 == 0x14) {
        uVar12 = uVar13 | 2;
      }
      else {
        uVar12 = uVar13 | 8;
        if (uVar19 == 0x15) {
          uVar12 = uVar13 | 4;
        }
      }
      *param_1 = *param_1 & 0x80fffc03 | uVar12 << 2;
      uVar19 = 0xe;
    }
    else if (uVar13 != 0x20) {
LAB_ram_4818e80e:
      uVar19 = 0x12;
      pbVar18 = pbVar21 + 1;
    }
  }
LAB_ram_4818de40:
  pbVar21 = pbVar18;
  if (pbVar20 == pbVar18) {
LAB_ram_4818de52:
    uVar13 = param_1[1];
    *param_1 = *param_1 & 0xff01ffff | uVar19 << 0x11;
    param_1[1] = (uint)(pbVar20 + (uVar13 - (int)pbVar8));
    if ((byte *)0x14000 < pbVar20 + (uVar13 - (int)pbVar8)) {
      uVar13 = 0x33;
      pbVar21 = pbVar20;
      goto LAB_ram_4818d95e;
    }
    uVar13 = 0x33;
    goto LAB_ram_4818d75e;
  }
  goto LAB_ram_4818ddba;
LAB_ram_4818f93a:
  uVar13 = param_1[1];
  param_1[1] = (uint)(pbVar21 + (uVar13 - (int)pbVar8));
  if ((byte *)0x14000 < pbVar21 + (uVar13 - (int)pbVar8)) {
    param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
    uVar13 = 0x35;
    pbVar8 = pbVar21;
    goto LAB_ram_4818d974;
  }
  uVar13 = *param_1;
  *param_1 = uVar13 & 0xff01ffff | uVar19 << 0x11;
  if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("http_parser.c",0x60b,"http_parser_execute",
                     "HTTP_PARSER_ERRNO(parser) == HPE_OK");
  }
  if (pbStack_64 != (byte *)0x0) {
    pcVar16 = (code *)param_2[4];
    if (pcVar16 != (code *)0x0) {
      *param_1 = uVar13 & 0xff0003ff | uVar19 << 0x11 | 0xd400;
      iVar7 = (*pcVar16)(param_1,pbStack_64,(int)pbVar21 - (int)pbStack_64);
      if (iVar7 != 0) {
        param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
      }
      uVar12 = *param_1;
      uVar13 = uVar12 >> 10 & 0x7f;
      if ((param_1[5] >> 0x18 & 0x7f) != 0) {
        return pbVar21 + -(int)param_3;
      }
      pbVar8 = pbVar21;
      if (uVar13 == 0x26) goto LAB_ram_48190d7e;
      if (uVar13 < 0x27) {
        pbStack_64 = (byte *)0x0;
LAB_ram_4818f5b6:
        pbVar21 = pbVar8;
        if (uVar13 == 0xf) goto LAB_ram_48190432;
        if (0xf < uVar13) {
          uVar19 = 10;
          if (uVar13 != 0x16) goto LAB_ram_4818da28;
          goto LAB_ram_4818effa;
        }
        if (uVar13 == 8) goto LAB_ram_48190a1a;
        uVar19 = 10;
        goto LAB_ram_4818d71c;
      }
      if (uVar13 == 0x34) goto LAB_ram_48190fa4;
      pbStack_64 = (byte *)0x0;
      uVar19 = 10;
      goto LAB_ram_4818d9d4;
    }
    pbStack_64 = (byte *)0x0;
  }
LAB_ram_4818daae:
  pbVar21 = pbVar21 + 1;
  uVar13 = 0x34;
  goto LAB_ram_4818d754;
LAB_ram_48190fa4:
  uVar13 = uVar12 >> 0x11 & 0x7f;
  pbStack_64 = (byte *)0x0;
  uVar19 = 10;
  goto LAB_ram_4818e5d8;
LAB_ram_4818dc6a:
  do {
    uVar19 = (uint)*pbVar18;
    cVar1 = (&DAT_ram_4823aa4c)[uVar19];
    if (cVar1 == '\0') goto LAB_ram_4818f3b2;
    uVar13 = *param_1;
    uVar12 = uVar13 >> 0x11 & 0x7f;
    if (uVar12 == 5) {
      uVar12 = (uVar13 >> 0x18) + 1;
      uVar19 = uVar12 & 0x7f;
      *param_1 = uVar19 << 0x18 | uVar13 & 0x80ffffff;
      uVar12 = uVar12 & 0x7f;
      if ((0x10 < uVar12) || ("proxy-connection"[uVar12] != cVar1)) goto LAB_ram_4818dcd2;
      if (uVar19 == 0xf) {
LAB_ram_4818e720:
        *param_1 = *param_1 & 0xff01ffff | 0x120000;
      }
    }
    else if (uVar12 < 6) {
      if (uVar12 == 2) {
        *param_1 = uVar13 & 0x80ffffff | ((uVar13 >> 0x18) + 1 & 0x7f) << 0x18;
        iVar7 = 0;
        if (cVar1 == 'n') {
          iVar7 = 3;
        }
        *param_1 = *param_1 & 0xff01ffff | iVar7 << 0x11;
      }
      else if (uVar12 < 3) {
        if (uVar12 != 0) {
          *(ushort *)((int)param_1 + 2) =
               (ushort)(((uVar13 >> 0x18) + 1 & 0x7f) << 8) | (ushort)(cVar1 == 'o') << 2 |
               *(ushort *)((int)param_1 + 2) & 0x8001;
        }
      }
      else if (uVar12 == 3) {
        uVar19 = ((uVar13 >> 0x18) + 1 & 0x7f) << 0x18;
        *param_1 = uVar13 & 0x80ffffff | uVar19;
        if (cVar1 == 'n') {
          *param_1 = uVar13 & 0x8001ffff | uVar19 | 0x80000;
        }
        else if (cVar1 == 't') {
          *param_1 = uVar13 & 0x8001ffff | uVar19 | 0xc0000;
        }
        else {
          *param_1 = uVar13 & 0x8001ffff | uVar19;
        }
      }
      else {
        uVar12 = (uVar13 >> 0x18) + 1;
        uVar19 = uVar12 & 0x7f;
        *param_1 = uVar19 << 0x18 | uVar13 & 0x80ffffff;
        uVar12 = uVar12 & 0x7f;
        if ((10 < uVar12) || ("max_connection"[uVar12 + 4] != cVar1)) goto LAB_ram_4818dcd2;
        if (uVar19 == 9) goto LAB_ram_4818e720;
      }
    }
    else if (uVar12 == 8) {
      uVar12 = (uVar13 >> 0x18) + 1;
      uVar19 = uVar12 & 0x7f;
      *param_1 = uVar19 << 0x18 | uVar13 & 0x80ffffff;
      uVar12 = uVar12 & 0x7f;
      if ((7 < uVar12) || ("pending_upgrade"[uVar12 + 8] != cVar1)) goto LAB_ram_4818dcd2;
      if (uVar19 == 6) {
        *param_1 = uVar13 & 0x8001ffff | 0x6180000;
      }
    }
    else if (uVar12 < 9) {
      if (uVar12 == 6) {
        uVar11 = (uVar13 >> 0x18) + 1;
        uVar19 = uVar11 & 0x7f;
        uVar12 = uVar19 << 0x18 | uVar13 & 0x80ffffff;
        *param_1 = uVar12;
        uVar11 = uVar11 & 0x7f;
        if ((0xe < uVar11) || ("content-length"[uVar11] != cVar1)) goto LAB_ram_4818dcd2;
        if (uVar19 == 0xd) {
          if ((char)(uVar12 >> 2) < '\0') {
            param_1[5] = param_1[5] & 0x80ffffff | 0x1a000000;
            goto LAB_ram_48190e84;
          }
          *param_1 = *param_1 & 0xff01fc03 | 0x140000 | ((uVar13 & 0x3fc) >> 2 | 0x80) << 2;
        }
      }
      else {
        uVar12 = (uVar13 >> 0x18) + 1;
        uVar19 = uVar12 & 0x7f;
        *param_1 = uVar19 << 0x18 | uVar13 & 0x80ffffff;
        uVar12 = uVar12 & 0x7f;
        if ((uVar12 < 0x12) && ("transfer-encoding"[uVar12] == cVar1)) {
          if (uVar19 == 0x10) {
            *param_1 = uVar13 & 0x8001ffff | 0x10160000;
          }
        }
        else {
LAB_ram_4818dcd2:
          *param_1 = *param_1 & 0xff01ffff;
        }
      }
    }
    else {
      if (3 < (uVar12 + 0x77 & 0x7f)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("http_parser.c",0x59b,"http_parser_execute","0 && \"Unknown header_state\""
                        );
      }
      if (uVar19 != 0x20) goto LAB_ram_4818dcd2;
    }
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != pbVar20);
  uVar19 = param_1[1];
  param_1[1] = (uint)(pbVar20 + (uVar19 - (int)pbVar8));
  pbVar18 = pbVar20;
  if ((byte *)0x14000 < pbVar20 + (uVar19 - (int)pbVar8)) goto LAB_ram_4818f48a;
LAB_ram_4818f7f4:
  uVar13 = 0x2e;
  goto LAB_ram_4818d75e;
LAB_ram_4818f3b2:
  uVar13 = param_1[1];
  param_1[1] = (uint)(pbVar18 + (uVar13 - (int)pbVar8));
  if (pbVar18 + (uVar13 - (int)pbVar8) < (byte *)0x14001) {
    if (pbVar20 == pbVar18) {
      uVar13 = 0x2e;
      goto LAB_ram_4818d75e;
    }
    if (uVar19 == 0x3a) {
      if ((param_1[5] >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("http_parser.c",0x5a9,"http_parser_execute",
                         "HTTP_PARSER_ERRNO(parser) == HPE_OK");
      }
      pbVar21 = pbVar18 + 1;
      uVar13 = 0x2f;
      if (pbStack_58 != (byte *)0x0) {
        pcVar16 = (code *)param_2[3];
        if (pcVar16 == (code *)0x0) {
          pbVar21 = pbVar18 + 1;
          uVar13 = 0x2f;
          pbStack_58 = (byte *)0x0;
        }
        else {
          *param_1 = *param_1 & 0xfffe03ff | 0xbc00;
          iVar7 = (*pcVar16)(param_1,pbStack_58,(int)pbVar18 - (int)pbStack_58);
          if (iVar7 != 0) {
            param_1[5] = param_1[5] & 0x80ffffff | 0x3000000;
          }
          uVar13 = *param_1 >> 10 & 0x7f;
          if ((param_1[5] >> 0x18 & 0x7f) != 0) {
            return pbVar18 + (1 - (int)param_3);
          }
          pbVar21 = pbVar18 + 1;
          pbStack_58 = (byte *)0x0;
        }
      }
      goto LAB_ram_4818d754;
    }
    param_1[5] = param_1[5] & 0x80ffffff | 0x18000000;
LAB_ram_48190e84:
    uVar13 = 0x2e;
    pbVar8 = pbVar18;
  }
  else {
LAB_ram_4818f48a:
    param_1[5] = param_1[5] & 0x80ffffff | 0xc000000;
    uVar13 = 0x2e;
    pbVar8 = pbVar18;
  }
LAB_ram_4818d974:
  if ((param_1[5] >> 0x18 & 0x7f) == 0) {
    param_1[5] = param_1[5] & 0x80ffffff | 0x20000000;
  }
  uVar19 = *param_1 & 0xfffe03ff | uVar13 << 10;
  pbVar8 = pbVar8 + -(int)param_3;
LAB_ram_4818d9a2:
  *param_1 = uVar19;
  return pbVar8;
LAB_ram_4818d75e:
  bVar3 = pbStack_58 != (byte *)0x0;
  bVar5 = pbStack_60 != (byte *)0x0;
  bVar4 = pbStack_64 != (byte *)0x0;
  bVar6 = pbStack_5c != (byte *)0x0;
  if (1 < (byte)(bVar3 + bVar4 + bVar5 + (pbVar23 != (byte *)0x0) + bVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("http_parser.c",0x82f,"http_parser_execute",
                     "((header_field_mark ? 1 : 0) + (header_value_mark ? 1 : 0) + (url_mark ? 1 : 0) + (body_mark ? 1 : 0) + (status_mark ? 1 : 0)) <= 1"
                    );
  }
  uVar19 = param_1[5];
LAB_ram_4818d792:
  if ((uVar19 >> 0x18 & 0x7f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("http_parser.c",0x835,"http_parser_execute",
                     "HTTP_PARSER_ERRNO(parser) == HPE_OK");
  }
  uVar13 = uVar13 & 0x7f;
  if ((bVar3) && (pcVar16 = (code *)param_2[3], pcVar16 != (code *)0x0)) {
    *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
    iVar7 = (*pcVar16)(param_1,pbStack_58,(int)pbVar20 - (int)pbStack_58);
    if (iVar7 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x3000000;
    }
    uVar13 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) != 0) {
      return param_4;
    }
  }
  if ((bVar4) && (pcVar16 = (code *)param_2[4], pcVar16 != (code *)0x0)) {
    *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
    iVar7 = (*pcVar16)(param_1,pbStack_64,(int)pbVar20 - (int)pbStack_64);
    if (iVar7 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x4000000;
    }
    uVar13 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) != 0) {
      return param_4;
    }
  }
  if ((bVar5) && (pcVar16 = (code *)param_2[1], pcVar16 != (code *)0x0)) {
    *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
    iVar7 = (*pcVar16)(param_1,pbStack_60,(int)pbVar20 - (int)pbStack_60);
    if (iVar7 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x2000000;
    }
    uVar13 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) != 0) {
      return param_4;
    }
  }
  if ((pbVar23 != (byte *)0x0) && (pcVar16 = (code *)param_2[6], pcVar16 != (code *)0x0)) {
    *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
    iVar7 = (*pcVar16)(param_1,pbVar23,(int)pbVar20 - (int)pbVar23);
    if (iVar7 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x6000000;
    }
    uVar13 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) != 0) {
      return param_4;
    }
  }
  if ((bVar6) && (pcVar16 = (code *)param_2[2], pcVar16 != (code *)0x0)) {
    *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
    iVar7 = (*pcVar16)(param_1,pbStack_5c,(int)pbVar20 - (int)pbStack_5c);
    if (iVar7 != 0) {
      param_1[5] = param_1[5] & 0x80ffffff | 0x8000000;
    }
    uVar13 = *param_1 >> 10 & 0x7f;
    if ((param_1[5] >> 0x18 & 0x7f) != 0) {
      return param_4;
    }
  }
  *param_1 = *param_1 & 0xfffe03ff | uVar13 << 10;
  return param_4;
}


