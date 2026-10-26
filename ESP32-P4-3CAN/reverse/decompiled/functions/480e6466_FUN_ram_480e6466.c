/* Firmware entry: 0x480e6466 */

void FUN_ram_480e6466(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  char cVar16;
  undefined4 *puVar17;
  byte bVar18;
  char *pcVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  byte bVar26;
  char *pcVar27;
  char cVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uStack_cc;
  byte local_c8 [16];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 local_90 [2];
  byte abStack_86 [2];
  undefined4 uStack_84;
  byte abStack_7e [74];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar16 = *(char *)((int)param_2 + 0xd);
  iVar29 = 2;
  if (cVar16 == '\x02') {
    iVar29 = 1;
  }
  else if (cVar16 != '\x04') {
    if (cVar16 != '\x01') {
      return;
    }
    iVar29 = 0;
  }
  iVar3 = FUN_ram_48025ba6();
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  cVar16 = *(char *)(param_1 + 0x128c);
  *(int *)(param_1 + 0x1294) = iVar3;
  if ((byte)(cVar16 - 1U) < 3) {
    bVar8 = *(byte *)(param_1 + 0xc);
    if (bVar8 != 0) {
      piVar1 = (int *)(iVar29 * 0x60 + 0x298 + param_1);
      pcVar27 = (char *)(param_1 + 0x158);
      bVar26 = 0;
      do {
        while ((*(int *)(pcVar27 + -0x144) != *param_2 ||
               ((pcVar27[-0x140] & *(byte *)((int)param_2 + 0xd)) == 0))) {
LAB_ram_480e657c:
          bVar26 = bVar26 + 1;
          pcVar27 = pcVar27 + 0x50;
          piVar1 = piVar1 + 0x48;
          if (bVar8 <= bVar26) goto LAB_ram_480e658e;
        }
        pcVar19 = pcVar27 + -0x148;
        puVar17 = local_90;
        do {
          uVar23 = *(undefined4 *)(pcVar19 + 4);
          uVar4 = *(undefined4 *)(pcVar19 + 8);
          *puVar17 = *(undefined4 *)pcVar19;
          uVar5 = *(undefined4 *)(pcVar19 + 0xc);
          puVar17[1] = uVar23;
          puVar17[2] = uVar4;
          puVar17[3] = uVar5;
          pcVar19 = pcVar19 + 0x10;
          puVar17 = puVar17 + 4;
        } while (pcVar19 != pcVar27 + -0xf8);
        if ((pcVar27[-0x148] == '\0') || (uVar14 = (uint)*(byte *)(param_2 + 1), 8 < uVar14))
        goto LAB_ram_480e657c;
        if (uVar14 != 0) {
          pbVar6 = (byte *)((int)param_2 + 5);
          puVar17 = local_90;
          do {
            pbVar11 = (byte *)((int)puVar17 + 0x12);
            pbVar15 = (byte *)((int)puVar17 + 10);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            if (((*pbVar6 ^ *pbVar11) & *pbVar15) != 0) goto LAB_ram_480e657c;
            pbVar6 = pbVar6 + 1;
          } while (puVar17 != (undefined4 *)((int)local_90 + uVar14));
        }
        iVar29 = param_2[4];
        if ((*(char *)((int)param_2 + 0xe) == '\0') && (iVar29 == 0)) {
          cVar28 = '\0';
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
          cVar16 = (char)piVar1[0x13];
          cVar28 = pcVar27[-0x148];
          if ((cVar16 != '\0') && (cVar28 = cVar16, (iVar29 - piVar1[0x12]) - 1000U < 0x7ffffc18)) {
            uVar14 = (uint)(iVar29 - piVar1[0x12]) / 1000;
            if (piVar1[0x15] != 0) {
              uVar14 = uVar14 + piVar1[0x15] * 3 >> 2;
            }
            piVar1[0x15] = uVar14;
            uVar14 = (uint)*(byte *)(param_2 + 1);
            uVar2 = 1;
          }
        }
        if ((*(char *)((int)piVar1 + 0x5e) == '\0') || (*(byte *)(piVar1 + 0x17) != uVar14)) {
          *(char *)(piVar1 + 0x17) = (char)uVar14;
          *(undefined1 *)((int)piVar1 + 0x5d) = 1;
        }
        else if (*(char *)((int)piVar1 + 0x5d) != -1) {
          *(char *)((int)piVar1 + 0x5d) = *(char *)((int)piVar1 + 0x5d) + '\x01';
        }
        iVar12 = param_2[1];
        iVar20 = param_2[2];
        iVar31 = param_2[3];
        iVar30 = param_2[4];
        iVar25 = param_2[5];
        iVar24 = param_2[6];
        iVar7 = param_2[7];
        iVar22 = param_2[8];
        *piVar1 = *param_2;
        *(char *)((int)piVar1 + 0x4b) = (char)((uint)iVar29 >> 0x18);
        piVar1[1] = iVar12;
        piVar1[2] = iVar20;
        piVar1[3] = iVar31;
        piVar1[4] = iVar30;
        piVar1[5] = iVar25;
        piVar1[6] = iVar24;
        piVar1[7] = iVar7;
        piVar1[8] = iVar22;
        *(char *)(piVar1 + 0x12) = (char)iVar29;
        *(char *)((int)piVar1 + 0x49) = (char)((uint)iVar29 >> 8);
        *(char *)((int)piVar1 + 0x4a) = (char)((uint)iVar29 >> 0x10);
        *(undefined1 *)(piVar1 + 0x13) = uVar2;
        iVar20 = FUN_ram_48025b94();
        iVar7 = 0;
        if ((cVar28 != '\0') && (-1 < iVar20 - iVar29)) {
          iVar7 = iVar3 - (uint)(iVar20 - iVar29) / 1000;
        }
        piVar1[0x14] = iVar7;
        cVar16 = *(char *)(param_1 + 0x128c);
        piVar1[0x16] = piVar1[0x16] + 1;
        *(bool *)((int)piVar1 + 0x5e) = *(byte *)(param_2 + 1) - 1 < 8;
        if (((((cVar16 == '\x02') && (bVar26 < *(byte *)(param_1 + 0x154))) && (*pcVar27 != '\0'))
            && (((byte)pcVar27[9] < 9 && (*param_2 == *(int *)(pcVar27 + 4))))) &&
           ((uVar14 = (uint)*(byte *)(param_2 + 1), uVar14 == (byte)pcVar27[9] &&
            ((pcVar27[8] & *(byte *)((int)param_2 + 0xd)) != 0)))) {
          if (uVar14 != 0) {
            pbVar15 = (byte *)((int)param_2 + 5);
            pbVar6 = pbVar15 + uVar14;
            pbVar11 = (byte *)(pcVar27 + 0x12);
            do {
              bVar8 = *pbVar15;
              pbVar15 = pbVar15 + 1;
              if (((bVar8 ^ *pbVar11) & pbVar11[-8]) != 0) {
                bVar8 = *(byte *)(param_1 + 0xc);
                goto LAB_ram_480e6868;
              }
              pbVar11 = pbVar11 + 1;
            } while (pbVar15 != pbVar6);
          }
          uStack_cc = uStack_cc & 0xffff0000;
          FUN_ram_4805d88e(local_c8 + 0xc,pcVar27,param_2,uStack_cc);
          if (local_c8[0xc] == '\0') goto LAB_ram_480e6864;
          piVar1[9] = iStack_b8;
          piVar1[10] = iStack_b4;
          piVar1[0xb] = iStack_b0;
          piVar1[0xc] = iStack_ac;
          piVar1[0xd] = iStack_a8;
          piVar1[0xe] = iStack_a4;
          piVar1[0xf] = iStack_a0;
          piVar1[0x10] = iStack_9c;
          piVar1[0x11] = iStack_98;
          bVar8 = *(byte *)(param_1 + 0xc);
        }
        else {
LAB_ram_480e6864:
          bVar8 = *(byte *)(param_1 + 0xc);
        }
LAB_ram_480e6868:
        bVar26 = bVar26 + 1;
        pcVar27 = pcVar27 + 0x50;
        piVar1 = piVar1 + 0x48;
      } while (bVar26 < bVar8);
LAB_ram_480e658e:
      cVar16 = *(char *)(param_1 + 0x128c);
    }
    if ((cVar16 == '\x03') && (*(char *)(param_1 + 0x1298) != '\0')) {
      pbVar6 = (byte *)(param_1 + 0x718);
      bVar8 = 0;
      uVar14 = 0;
      do {
        if (pbVar6[1] == *(byte *)((int)param_2 + 0xd)) {
          bVar26 = *pbVar6;
          iVar20 = (uint)bVar26 * 0x50;
          iVar29 = param_1 + iVar20;
          if (*(int *)(iVar29 + 0x15c) == *param_2) {
            uVar10 = (uint)*(byte *)(param_2 + 1);
            if (uVar10 == *(byte *)(iVar29 + 0x161)) {
              if (((*(char *)(iVar29 + 0x158) != '\0') && (uVar10 < 9)) &&
                 ((pbVar6[1] & *(byte *)(iVar29 + 0x160)) != 0)) {
                if (uVar10 != 0) {
                  pbVar15 = (byte *)((int)param_2 + 5);
                  pbVar21 = (byte *)(iVar20 + 0x16a + param_1);
                  pbVar11 = pbVar15 + uVar10;
                  do {
                    bVar9 = *pbVar15;
                    pbVar15 = pbVar15 + 1;
                    if (((bVar9 ^ *pbVar21) & pbVar21[-8]) != 0) goto LAB_ram_480e65c0;
                    pbVar21 = pbVar21 + 1;
                  } while (pbVar11 != pbVar15);
                }
                iVar29 = param_2[4];
                if ((*(char *)((int)param_2 + 0xe) == '\0') && (iVar29 == 0)) {
                  pbVar6[0xdc] = 0;
                  pbVar6[0xdd] = 0;
                  pbVar6[0xde] = 0;
                  pbVar6[0xdf] = 0;
                  pbVar6[0xe0] = 0;
                  pbVar6[0xf1] = 1;
                  FUN_ram_48025b94();
LAB_ram_480e6670:
                  iVar29 = 0;
                }
                else {
                  bVar9 = (byte)((uint)iVar29 >> 8);
                  bVar13 = (byte)((uint)iVar29 >> 0x10);
                  bVar18 = (byte)((uint)iVar29 >> 0x18);
                  if ((pbVar6[0xe0] == 0) ||
                     ((uVar10 = iVar29 - *(int *)(pbVar6 + 0xdc), (int)uVar10 < 0 || (uVar10 < 1000)
                      ))) {
                    pbVar6[0xdc] = (byte)iVar29;
                    pbVar6[0xf1] = 1;
                    pbVar6[0xe0] = 1;
                    pbVar6[0xdd] = bVar9;
                    pbVar6[0xde] = bVar13;
                    pbVar6[0xdf] = bVar18;
                    iVar20 = FUN_ram_48025b94();
                    uVar10 = iVar20 - iVar29;
                  }
                  else {
                    uVar10 = uVar10 / 1000;
                    if (*(int *)(pbVar6 + 0xe4) != 0) {
                      uVar10 = uVar10 + *(int *)(pbVar6 + 0xe4) * 3 >> 2;
                    }
                    *(uint *)(pbVar6 + 0xe4) = uVar10;
                    pbVar6[0xdc] = (byte)iVar29;
                    pbVar6[0xf1] = 1;
                    pbVar6[0xe0] = 1;
                    pbVar6[0xdd] = bVar9;
                    pbVar6[0xde] = bVar13;
                    pbVar6[0xdf] = bVar18;
                    iVar20 = FUN_ram_48025b94();
                    uVar10 = iVar20 - iVar29;
                  }
                  if ((int)uVar10 < 0) goto LAB_ram_480e6670;
                  iVar29 = iVar3 - uVar10 / 1000;
                }
                *(int *)(pbVar6 + 0xd8) = iVar29;
                iVar12 = param_2[7];
                iVar31 = *param_2;
                iVar30 = param_2[1];
                iVar29 = param_2[2];
                iVar25 = param_2[3];
                iVar24 = param_2[4];
                iVar20 = param_2[5];
                iVar7 = param_2[6];
                *(int *)(pbVar6 + 0x2c) = param_2[8];
                iVar22 = (uint)bVar26 * 0x50 + param_1;
                *(int *)(pbVar6 + 0xc) = iVar31;
                *(int *)(pbVar6 + 0x10) = iVar30;
                *(int *)(pbVar6 + 0x14) = iVar29;
                *(int *)(pbVar6 + 0x18) = iVar25;
                *(int *)(pbVar6 + 0x1c) = iVar24;
                *(int *)(pbVar6 + 0x20) = iVar20;
                *(int *)(pbVar6 + 0x24) = iVar7;
                *(int *)(pbVar6 + 0x28) = iVar12;
                cVar16 = *(char *)(iVar22 + 0x182);
                *(int *)(pbVar6 + 0x60) = *(int *)(pbVar6 + 0x60) + 1;
                pbVar6[9] = 1;
                if (cVar16 == '\x01') {
                  iVar29 = *(int *)(iVar22 + 0x1a0);
                  if (iVar29 == 0) {
                    if (uVar14 < 0xc) {
                      local_c8[uVar14] = bVar8;
                      uVar14 = uVar14 + 1 & 0xff;
                    }
                  }
                  else {
                    if (pbVar6[0xf0] != 0) {
                      *(int *)(pbVar6 + 0x90) = *(int *)(pbVar6 + 0x90) + 1;
                    }
                    iVar20 = param_2[4];
                    pbVar6[0xf0] = 1;
                    *(int *)(pbVar6 + 0xec) = iVar29 + iVar20;
                    fence();
                    *(undefined1 *)(param_1 + 0x1299) = 1;
                  }
                }
              }
            }
            else {
              *(int *)(pbVar6 + 0x84) = *(int *)(pbVar6 + 0x84) + 1;
            }
          }
        }
LAB_ram_480e65c0:
        bVar8 = bVar8 + 1;
        pbVar6 = pbVar6 + 0xf4;
        if (*(byte *)(param_1 + 0x1298) <= bVar8) {
          pbVar6 = local_c8;
          FUN_ram_4ff3ee10(param_1);
          pbVar11 = pbVar6 + uVar14;
          if (uVar14 != 0) {
            do {
              bVar8 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              FUN_ram_480e5530(param_1,bVar8,iVar3,param_3,1);
            } while (pbVar6 != pbVar11);
          }
          return;
        }
      } while( true );
    }
  }
  FUN_ram_4ff3ee10(param_1);
  return;
}


