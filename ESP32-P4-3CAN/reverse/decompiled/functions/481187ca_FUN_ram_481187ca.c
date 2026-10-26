/* Firmware entry: 0x481187ca */

bool FUN_ram_481187ca(int param_1,int param_2,uint param_3,byte *param_4,byte *param_5,char *param_6
                     ,uint *param_7,uint param_8)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbStack_6c;
  byte *pbStack_60;
  byte *pbStack_58;
  uint uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_3 < 0x30001) && (param_5 < (byte *)0x30001)) && ((param_3 == 0 || (param_2 != 0))))
     && ((((param_5 == (byte *)0x0 || (param_4 != (byte *)0x0)) && (param_6 != (char *)0x0)) &&
         (sVar4 = strlen(param_6), sVar4 == 0x40)))) {
    pcVar8 = param_6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
        return false;
      }
    } while (pcVar8 != param_6 + 0x40);
    if ((param_8 < 0x1801) && (uVar9 = param_3 >> 5, uVar9 <= param_8)) {
      if (0x1f < param_3) {
        if (param_7 == (uint *)0x0) {
          return false;
        }
        puVar15 = param_7 + uVar9 * 2;
        pbVar10 = (byte *)(param_2 + 0x20);
        puVar7 = param_7;
        do {
          uVar14 = 0x811c9dc5;
          pbVar12 = pbVar10 + -0x20;
          do {
            pbVar3 = pbVar12;
            uVar14 = (*pbVar3 ^ uVar14) * 0x1000193;
            pbVar12 = pbVar3 + 1;
          } while (pbVar3 + 1 != pbVar10);
          *puVar7 = uVar14;
          puVar7[1] = (uint)(pbVar10 + (-0x20 - param_2));
          puVar7 = puVar7 + 2;
          pbVar10 = pbVar3 + 0x21;
        } while (puVar15 != puVar7);
        if (0x3f < param_3) {
          iVar5 = __clzsi2(uVar9);
          FUN_ram_481183d4(param_7,puVar15,(0x1f - iVar5) * 2,FUN_ram_4802c23c);
          puVar7 = param_7 + 2;
          if (uVar9 * 8 < 0x81) {
            do {
              uVar14 = *puVar7;
              if (uVar14 < *param_7) {
                uVar13 = puVar7[1];
LAB_ram_48118a54:
                iVar5 = (int)puVar7 - (int)param_7;
                if (iVar5 < 9) {
                  if (iVar5 == 8) {
                    *puVar7 = *param_7;
                    puVar7[1] = param_7[1];
                  }
                }
                else {
                  FUN_ram_4ff4522c((8 - iVar5) + (int)puVar7,param_7);
                }
                *param_7 = uVar14;
                param_7[1] = uVar13;
              }
              else {
                if ((uVar14 == *param_7) && (uVar13 = puVar7[1], uVar13 < param_7[1]))
                goto LAB_ram_48118a54;
                uStack_48 = *puVar7;
                uStack_44 = puVar7[1];
                puVar16 = puVar7;
                while( true ) {
                  puVar17 = puVar16 + -2;
                  iVar5 = FUN_ram_4802c23c(&uStack_48,puVar17);
                  if (iVar5 == 0) break;
                  *puVar16 = *puVar17;
                  puVar16[1] = puVar16[-1];
                  puVar16 = puVar17;
                }
                *puVar16 = uStack_48;
                puVar16[1] = uStack_44;
              }
              puVar7 = puVar7 + 2;
            } while (puVar15 != puVar7);
          }
          else {
            do {
              uVar14 = *puVar7;
              if (uVar14 < *param_7) {
                uVar13 = puVar7[1];
LAB_ram_481189de:
                iVar5 = (int)puVar7 - (int)param_7;
                if (iVar5 < 9) {
                  if (iVar5 == 8) {
                    *puVar7 = *param_7;
                    puVar7[1] = param_7[1];
                  }
                }
                else {
                  FUN_ram_4ff4522c((8 - iVar5) + (int)puVar7,param_7);
                }
                *param_7 = uVar14;
                param_7[1] = uVar13;
              }
              else {
                if ((uVar14 == *param_7) && (uVar13 = puVar7[1], uVar13 < param_7[1]))
                goto LAB_ram_481189de;
                uStack_48 = *puVar7;
                uStack_44 = puVar7[1];
                puVar16 = puVar7;
                while( true ) {
                  puVar17 = puVar16 + -2;
                  iVar5 = FUN_ram_4802c23c(&uStack_48,puVar17);
                  if (iVar5 == 0) break;
                  *puVar16 = *puVar17;
                  puVar16[1] = puVar16[-1];
                  puVar16 = puVar17;
                }
                *puVar16 = uStack_48;
                puVar16[1] = uStack_44;
              }
              puVar7 = puVar7 + 2;
            } while (param_7 + 0x20 != puVar7);
            puVar7 = param_7 + 0x1e;
            do {
              uStack_48 = puVar7[2];
              uStack_44 = puVar7[3];
              puVar16 = puVar7;
              while (iVar5 = FUN_ram_4802c23c(&uStack_48,puVar16), iVar5 != 0) {
                puVar16[2] = *puVar16;
                puVar16[3] = puVar16[1];
                puVar16 = puVar16 + -2;
              }
              puVar7 = puVar7 + 2;
              puVar16[2] = uStack_48;
              puVar16[3] = uStack_44;
            } while (puVar7 != puVar15 + -2);
          }
        }
      }
      FUN_ram_4808c96e(param_1,"encoding","copy-v1",7);
      sVar4 = strlen(param_6);
      FUN_ram_4808c96e(param_1,"base_sha256",param_6,sVar4);
      FUN_ram_480b2068(param_1,"size",param_5);
      FUN_ram_4808c832(param_1,"ops");
      if ((*(uint *)(param_1 + 8) < *(uint *)(param_1 + 4)) &&
         (*(uint *)(param_1 + 4) - 1 != *(uint *)(param_1 + 8))) {
        uStack_48 = 0;
        if (param_5 != (byte *)0x0) {
          pbStack_60 = (byte *)0x0;
          pbStack_58 = param_4;
          if (uVar9 != 0) {
LAB_ram_48118b50:
            if ((param_5 < (byte *)0x20) || (param_5 + -0x20 < pbStack_60)) {
              pbStack_58 = param_4 + (int)pbStack_60;
            }
            else {
              pbStack_58 = param_4 + (int)pbStack_60;
              pbVar10 = param_4 + (int)(pbStack_60 + 0x20);
              pbStack_6c = pbStack_58;
              do {
                uVar14 = 0x811c9dc5;
                pbVar12 = pbStack_6c;
                do {
                  bVar2 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                  uVar14 = (bVar2 ^ uVar14) * 0x1000193;
                } while (pbVar12 != pbVar10);
                uVar11 = 0;
                uVar13 = uVar9;
                while( true ) {
                  uVar6 = uVar13;
                  uVar13 = (uVar6 - uVar11 >> 1) + uVar11;
                  if (uVar6 <= uVar11) break;
                  if (param_7[uVar13 * 2] < uVar14) {
                    uVar11 = uVar13 + 1;
                    uVar13 = uVar6;
                  }
                }
                if (uVar11 < uVar9) {
                  puVar7 = param_7 + uVar11 * 2;
                  do {
                    if (uVar14 != *puVar7) break;
                    uVar13 = puVar7[1];
                    if ((uVar13 <= param_3 - 0x20) &&
                       (iVar5 = FUN_ram_4ff4511a(param_2 + uVar13,pbStack_6c,0x20), iVar5 == 0)) {
                      pbVar10 = pbVar10 + (-0x20 - (int)param_4);
                      if ((pbStack_60 < pbVar10) &&
                         (iVar5 = FUN_ram_480d6124(param_1,pbStack_58,(int)pbVar10 - (int)pbStack_60
                                                   ,&uStack_48), iVar5 == 0)) {
                        return false;
                      }
                      uVar14 = uStack_48;
                      iVar5 = 0x20;
                      if (uVar13 + 0x20 < param_3) goto LAB_ram_48118c4e;
                      goto LAB_ram_48118c60;
                    }
                    puVar7 = puVar7 + 2;
                  } while (param_7 + uVar9 * 2 != puVar7);
                }
                pbVar10 = pbVar10 + 1;
                pbStack_6c = pbStack_6c + 1;
              } while (param_4 + (int)(param_5 + 1) != pbVar10);
            }
          }
          iVar5 = FUN_ram_480d6124(param_1,pbStack_58,(int)param_5 - (int)pbStack_60,&uStack_48);
          if (iVar5 == 0) {
            return false;
          }
        }
LAB_ram_48118942:
        FUN_ram_4808c290(param_1);
        return *(uint *)(param_1 + 8) < *(uint *)(param_1 + 4) &&
               *(uint *)(param_1 + 4) - 1 != *(uint *)(param_1 + 8);
      }
    }
  }
  return false;
  while (iVar5 = iVar5 + 1, iVar5 + uVar13 < param_3) {
LAB_ram_48118c4e:
    if ((param_5 <= pbVar10 + iVar5) ||
       (*(byte *)(param_2 + uVar13 + iVar5) != param_4[(int)(pbVar10 + iVar5)])) break;
  }
  if (iVar5 == 0) {
    return false;
  }
LAB_ram_48118c60:
  if (0x1fff < uStack_48) {
    return false;
  }
  FUN_ram_4808c1ae(param_1);
  FUN_ram_4808c832(param_1,&DAT_ram_481d0aac);
  FUN_ram_48118312(param_1,uVar13);
  FUN_ram_48118312(param_1,iVar5);
  FUN_ram_4808c290(param_1);
  FUN_ram_4808c244(param_1);
  if (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 8)) {
    return false;
  }
  if (*(uint *)(param_1 + 4) - 1 == *(uint *)(param_1 + 8)) {
    return false;
  }
  uStack_48 = uVar14 + 1;
  pbStack_60 = pbVar10 + iVar5;
  if (param_5 <= pbStack_60) goto LAB_ram_48118942;
  goto LAB_ram_48118b50;
}


