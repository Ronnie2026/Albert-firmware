/* Firmware entry: 0x48105d3a */

void FUN_ram_48105d3a(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 local_c4;
  undefined4 auStack_c0 [28];
  char cStack_4e;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  byte bStack_46;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar18 = (uint *)param_1[3];
  fence();
  uVar15 = *puVar18;
  do {
    uVar7 = uVar15 + 1;
    if ((int)uVar15 < 0) {
      return;
    }
    if ((uVar15 & 0xffff) == 0xffff) {
      return;
    }
    bVar13 = *puVar18 != uVar15;
    uVar15 = *puVar18;
  } while (bVar13);
  *puVar18 = uVar7;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar14 = (undefined4 *)(iVar2 + 0xb38);
  puVar12 = &local_c4;
  do {
    uVar4 = puVar14[1];
    uVar8 = puVar14[2];
    uVar10 = puVar14[3];
    *puVar12 = *puVar14;
    puVar12[1] = uVar4;
    puVar12[2] = uVar8;
    puVar12[3] = uVar10;
    puVar14 = puVar14 + 4;
    puVar12 = puVar12 + 4;
  } while (puVar14 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar12 = *puVar14;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  if (*(char *)((int)param_2 + 0xd) != '\x02') goto LAB_ram_48105de2;
  iVar2 = *param_2;
  if (iVar2 == 0x3c2) {
    if (((char)param_2[1] != '\b') || ((*(byte *)((int)param_2 + 5) & 3) != 1))
    goto LAB_ram_48105de2;
    iVar5 = param_2[6];
    iVar9 = param_2[7];
    iVar16 = param_2[8];
    iVar20 = param_2[1];
    iVar19 = param_2[2];
    iVar2 = param_2[3];
    iVar17 = param_2[4];
    param_1[0x59] = param_2[5];
    param_1[0x5a] = iVar5;
    param_1[0x5b] = iVar9;
    param_1[0x55] = iVar20;
    param_1[0x56] = iVar19;
    param_1[0x57] = iVar2;
    param_1[0x58] = iVar17;
    param_1[0x5c] = iVar16;
    param_1[0x54] = 0x3c2;
    *(undefined1 *)(param_1 + 0x5d) = 1;
    param_1[0x5e] = param_3;
    bVar6 = *(byte *)((int)param_2 + 7);
    bVar1 = *(byte *)(param_2 + 2);
    bVar3 = bVar1 & 0x3f;
    if ((bVar6 & 0x20) == 0) {
      uVar15 = bVar6 & 0x3f;
      if ((bVar1 & 0x20) != 0) goto LAB_ram_481060e6;
      if (((bVar6 | bVar1) & 0x3f) != 0) goto LAB_ram_48105efa;
      uVar15 = 0;
      bVar3 = 0;
    }
    else {
      uVar15 = (uint)(char)(bVar6 | 0xc0);
      if ((bVar1 & 0x20) != 0) {
LAB_ram_481060e6:
        bVar3 = bVar1 | 0xc0;
      }
LAB_ram_48105efa:
      param_1[0x89] = param_3;
      *(undefined1 *)(param_1 + 0x86) = 1;
    }
    bVar13 = false;
    if (((*param_2 == 0x3c2) && ((char)param_2[1] == '\b')) &&
       ((*(byte *)((int)param_2 + 5) & 3) == 1)) {
      if ((*(byte *)((int)param_2 + 6) & 0x30) == 0x20) {
        bVar13 = true;
      }
      else {
        bVar13 = ((*(byte *)((int)param_2 + 7) | *(byte *)(param_2 + 2)) & 0x3f) != 0;
      }
    }
    *(bool *)(param_1 + 0x5f) = bVar13;
    param_1[0x60] = param_3;
    if (local_c4._1_1_ != '\f') {
      bVar6 = *(byte *)((int)param_2 + 6);
      param_1[0x62] = param_3;
      bVar6 = bVar6 & 0x30;
      *(bool *)(param_1 + 0x61) = bVar6 == 0x20;
      if (bVar6 == 0x20) {
        if ((char)param_1[0x44] == '\0') {
          param_1[0x45] = param_3;
        }
      }
      else if (((char)param_1[0x44] != '\0') && ((uint)(param_3 - param_1[0x45]) < 0x191)) {
        *(undefined1 *)((int)param_1 + 0x112) = 1;
      }
      *(bool *)(param_1 + 0x44) = bVar6 == 0x20;
      param_1[0x46] = param_3;
    }
    if (cStack_4e != '\0') {
      iVar2 = *param_1;
      if (uVar15 == 0) {
        *(undefined1 *)(iVar2 + 0x90a8) = 0;
        if (bVar3 == 0) {
          *(undefined1 *)(iVar2 + 0x90a9) = 0;
        }
        else {
LAB_ram_48106152:
          if (*(char *)(iVar2 + 0x90a9) == '\0') {
            if ((char)bVar3 < '\x01') {
              uVar11 = 3;
              bStack_47 = bStack_46;
            }
            else {
              uVar11 = 2;
            }
            *(undefined1 *)(iVar2 + 0x90a9) = 1;
            goto LAB_ram_48105fa0;
          }
        }
      }
      else {
        if (bVar3 == 0) {
          *(undefined1 *)(iVar2 + 0x90a9) = 0;
          if (*(char *)(iVar2 + 0x90a8) != '\0') goto LAB_ram_48105fbc;
        }
        else if (*(char *)(iVar2 + 0x90a8) != '\0') goto LAB_ram_48106152;
        bStack_47 = bStack_48;
        if (0 < (int)uVar15) {
          bStack_47 = bStack_49;
        }
        uVar11 = (int)uVar15 < 1;
        *(undefined1 *)(iVar2 + 0x90a8) = 1;
LAB_ram_48105fa0:
        *(undefined1 *)(iVar2 + 0x9034) = uVar11;
        bVar3 = 4;
        *(int *)(iVar2 + 0x9038) = *(int *)(iVar2 + 0x9038) + 1;
        if (bStack_47 < 5) {
          *(byte *)(iVar2 + 0x903c) = bStack_47;
          if (bStack_47 == 3) {
            bVar3 = 1;
          }
          else if (bStack_47 == 4) {
            if (*(char *)(iVar2 + 0x8f9c) == '\x04') {
              bVar3 = 2;
            }
            else {
              bVar3 = bStack_47;
              if (2 < (byte)(*(char *)(iVar2 + 0x8f9c) - 1U)) goto LAB_ram_48105fbc;
            }
          }
          else if ((bStack_47 != 1) && (bVar3 = bStack_47, bStack_47 != 2)) goto LAB_ram_48105fbc;
          iVar5 = *(int *)(iVar2 + 0x9030) + 1;
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          *(int *)(iVar2 + 0x9030) = iVar5;
          FUN_ram_48105658(iVar2 + 0x84a8,bVar3,param_3,4);
        }
        else {
          *(undefined1 *)(iVar2 + 0x903c) = 0;
        }
      }
    }
LAB_ram_48105fbc:
    if (*(char *)((int)param_2 + 0xd) != '\x02') goto LAB_ram_48105de2;
    iVar2 = *param_2;
  }
  if (iVar2 == 0x229) {
    if ((((char)param_2[1] == '\x03') || ((char)param_2[1] == '\b')) &&
       (*(byte *)((int)param_2 + 5) ==
        ((&DAT_ram_48222ca8)[*(byte *)((int)param_2 + 6) >> 4 & 7] ^
        (&DAT_ram_48222cb0)[*(byte *)((int)param_2 + 6) & 0xf]))) {
      iVar21 = param_2[1];
      iVar20 = param_2[2];
      iVar19 = param_2[3];
      iVar2 = param_2[4];
      iVar17 = param_2[5];
      iVar16 = param_2[6];
      iVar5 = param_2[7];
      iVar9 = param_2[8];
      param_1[0x48] = *param_2;
      *(undefined1 *)(param_1 + 0x51) = 1;
      param_1[0x49] = iVar21;
      param_1[0x4a] = iVar20;
      param_1[0x4b] = iVar19;
      param_1[0x4c] = iVar2;
      param_1[0x4d] = iVar17;
      param_1[0x4e] = iVar16;
      param_1[0x4f] = iVar5;
      param_1[0x50] = iVar9;
      param_1[0x52] = param_3;
      if ((char)param_1[0x53] != -1) {
        *(char *)(param_1 + 0x53) = (char)param_1[0x53] + '\x01';
      }
      if (local_c4._1_1_ == '\f') {
        bVar3 = *(byte *)((int)param_2 + 6) >> 4;
        bVar6 = bVar3 & 7;
        if (((char)param_1[0x44] != '\0') &&
           ((param_1[0x46] == 0 || (0xfa < (uint)(param_3 - param_1[0x46]))))) {
          *(undefined1 *)((int)param_1 + 0x112) = 0;
          *(undefined1 *)(param_1 + 0x61) = 0;
          *(undefined1 *)(param_1 + 0x5f) = 0;
          *(undefined2 *)(param_1 + 0x44) = 0x100;
        }
        if (bVar6 < 5) {
          if (((char)param_2[1] == '\x03') || (bVar13 = false, (char)param_2[1] == '\b')) {
            bVar1 = *(byte *)((int)param_2 + 6);
            if (*(byte *)((int)param_2 + 5) ==
                ((&DAT_ram_48222ca8)[bVar1 >> 4 & 7] ^ (&DAT_ram_48222cb0)[bVar1 & 0xf])) {
              bVar13 = true;
              if ((bVar1 & 0x70) == 0) {
                bVar13 = (*(byte *)((int)param_2 + 7) & 3) != 0;
              }
            }
            else {
              bVar13 = false;
            }
          }
          *(bool *)(param_1 + 0x5f) = bVar13;
          param_1[0x60] = param_3;
          if (bVar6 == 4) {
            param_1[0x62] = param_3;
            *(undefined1 *)(param_1 + 0x61) = 1;
            if ((*(byte *)((int)param_1 + 0x111) == 0) && ((char)param_1[0x44] == '\0')) {
              param_1[0x45] = param_3;
            }
            *(byte *)(param_1 + 0x44) = *(byte *)((int)param_1 + 0x111) ^ 1;
            param_1[0x46] = param_3;
          }
          else if ((bVar3 & 7) == 0) {
            *(undefined1 *)(param_1 + 0x61) = 0;
            param_1[0x62] = param_3;
            if (((*(char *)((int)param_1 + 0x111) == '\0') && ((char)param_1[0x44] != '\0')) &&
               ((uint)(param_3 - param_1[0x45]) < 0x191)) {
              *(undefined1 *)((int)param_1 + 0x112) = 1;
            }
            *(undefined2 *)(param_1 + 0x44) = 0;
            param_1[0x46] = param_3;
          }
          else {
            *(undefined1 *)((int)param_1 + 0x112) = 0;
            *(undefined1 *)(param_1 + 0x61) = 0;
            param_1[0x62] = param_3;
            *(undefined2 *)(param_1 + 0x44) = 0x100;
          }
        }
        else {
          *(undefined1 *)((int)param_1 + 0x112) = 0;
          *(undefined1 *)(param_1 + 0x61) = 0;
          *(undefined1 *)(param_1 + 0x5f) = 0;
          *(undefined1 *)(param_1 + 0x51) = 0;
          *(undefined1 *)(param_1 + 0x53) = 0;
          *(undefined2 *)(param_1 + 0x44) = 0x100;
        }
        if (*(char *)(*param_1 + 0x8fde) != '\0') {
          FUN_ram_48104736(*param_1 + 0x84a8,&local_c4,param_3);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x53) = 0;
      if (local_c4._1_1_ == '\f') {
        *(undefined1 *)((int)param_1 + 0x112) = 0;
        *(undefined1 *)(param_1 + 0x61) = 0;
        *(undefined1 *)(param_1 + 0x5f) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0x100;
      }
    }
  }
LAB_ram_48105de2:
  fence();
  uVar15 = *puVar18;
  while( true ) {
    uVar7 = uVar15 - 1;
    if ((int)uVar15 < 0) {
      return;
    }
    if ((uVar15 & 0xffff) == 0) break;
    bVar13 = *puVar18 == uVar15;
    uVar15 = *puVar18;
    if (bVar13) {
      *puVar18 = uVar7;
      return;
    }
  }
  return;
}


