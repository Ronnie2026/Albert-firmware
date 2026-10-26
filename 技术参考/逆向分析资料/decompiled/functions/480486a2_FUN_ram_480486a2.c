/* Firmware entry: 0x480486a2 */

void FUN_ram_480486a2(undefined4 *param_1,byte *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar2 = (char)param_3[3];
  cVar1 = *(char *)((int)param_3 + 9);
  if ((char)param_3[1] == '\0') {
    if ((((*(char *)((int)param_3 + 0xb) == '\0') && (cVar2 == '\0')) &&
        (*(char *)((int)param_3 + 0xd) == '\0')) && (*(char *)((int)param_3 + 0xe) == '\0')) {
      if (((cVar1 == '\0') || (bVar11 = *param_2, bVar11 != 5)) &&
         ((*(char *)((int)param_3 + 10) == '\0' || (bVar11 = *param_2, bVar11 != 6)))) {
        bVar3 = param_2[0x14];
        *param_2 = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        param_2[0x20] = 0;
        param_2[0x21] = 0;
        param_2[0x22] = 0;
        param_2[0x23] = 0;
        param_2[0x24] = 0;
        param_2[0x25] = 0;
        param_2[0x26] = 0;
        param_2[0x27] = 0;
        param_2[0x28] = 0;
        param_2[0x29] = 0;
        param_2[0x2a] = 0;
        param_2[0x2b] = 0;
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        param_2[0x2e] = 0;
        param_2[0x2f] = 0;
        param_2[0x30] = 0;
        param_2[0x31] = 0;
        param_2[0x32] = 0;
        param_2[0x33] = 0;
        param_2[0x34] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        *param_1 = 0;
        *(undefined1 *)((int)param_1 + 5) = 0;
        *(undefined2 *)((int)param_1 + 6) = 0;
        *(byte *)(param_1 + 1) = bVar3;
        uVar4 = 0;
        iVar8 = 0;
        iVar12 = 0;
        goto LAB_ram_480489f4;
      }
      bVar14 = param_2[0x14];
      param_2[8] = 0;
      if (bVar14 != 0) {
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        param_2[0x2e] = 0;
        param_2[0x2f] = 0;
        param_2[0x19] = 0;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        param_2[0x20] = 0;
        param_2[0x21] = 0;
        param_2[0x22] = 0;
        param_2[0x23] = 0;
        param_2[0x24] = 0;
        bVar3 = 0;
        goto LAB_ram_480486ea;
      }
      param_2[0x19] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      bVar3 = bVar14;
      if (cVar1 == '\0') goto LAB_ram_4804884a;
LAB_ram_48048bfa:
      iVar8 = *(int *)(param_2 + 0xc);
      if (*(char *)((int)param_3 + 10) != '\0') {
LAB_ram_4804880a:
        if (*(char *)((int)param_3 + 0xe) != '\0') goto LAB_ram_48048812;
      }
LAB_ram_48048bc2:
      if (bVar11 != 6) goto LAB_ram_48048860;
      *param_2 = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      bVar11 = 0;
    }
    else {
      bVar14 = param_2[0x14];
      bVar11 = *param_2;
      param_2[8] = 0;
      bVar3 = bVar14;
      if (bVar14 != 0) {
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        param_2[0x2e] = 0;
        param_2[0x2f] = 0;
        bVar3 = 0;
      }
      param_2[0x19] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      if (bVar11 == 1) {
        *param_2 = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        if (cVar2 != '\0') goto LAB_ram_480487b8;
        if ((cVar1 != '\0') && (*(char *)((int)param_3 + 0xd) != '\0')) {
          iVar8 = *(int *)(param_2 + 0xc);
          goto LAB_ram_480487ea;
        }
        bVar11 = 0;
LAB_ram_48048c6c:
        if ((*(char *)((int)param_3 + 10) == '\0') || (*(char *)((int)param_3 + 0xe) == '\0')) {
          bVar11 = *param_2;
          iVar8 = *(int *)(param_2 + 0xc);
          goto LAB_ram_48048864;
        }
        iVar8 = *(int *)(param_2 + 0xc);
LAB_ram_48048812:
        if (bVar11 != 0) goto LAB_ram_48048860;
        iVar7 = param_3[9];
        iVar12 = param_3[8];
        if (iVar8 != -1) {
          iVar8 = iVar8 + 1;
          *(int *)(param_2 + 0xc) = iVar8;
        }
        *(int *)(param_2 + 4) = iVar7;
        bVar11 = 0;
        if ((char)iVar12 == '\0') {
          bVar11 = 6;
        }
        *param_2 = bVar11;
      }
      else {
LAB_ram_480486ea:
        if (bVar11 != 3) goto joined_r0x48048718;
        bVar11 = 2;
        *param_2 = 2;
        if (cVar2 == '\0') {
          if (cVar1 != '\0') {
            if (*(char *)((int)param_3 + 0xd) != '\0') goto LAB_ram_48048d9a;
            if (*(char *)((int)param_3 + 10) != '\0') {
              iVar8 = *(int *)(param_2 + 0xc);
              bVar11 = 2;
              goto LAB_ram_4804880a;
            }
          }
        }
        else if (cVar1 != '\0') goto LAB_ram_48048c6c;
        iVar8 = *(int *)(param_2 + 0xc);
        bVar11 = 2;
      }
    }
  }
  else {
    bVar11 = *param_2;
    bVar3 = param_2[0x14];
    bVar14 = 0;
joined_r0x48048718:
    if (cVar2 == '\0') {
      if (bVar11 == 4) {
        *param_2 = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        iVar8 = *(int *)(param_2 + 0xc);
        bVar11 = 0;
        goto joined_r0x48048bf4;
      }
      if (cVar1 == '\0') goto LAB_ram_4804884a;
      if (*(char *)((int)param_3 + 0xd) == '\0') goto LAB_ram_48048bfa;
      if (bVar11 == 0) {
        iVar8 = *(int *)(param_2 + 0xc);
        goto LAB_ram_480487ea;
      }
LAB_ram_48048d9a:
      iVar8 = *(int *)(param_2 + 0xc);
      if (*(char *)((int)param_3 + 10) == '\0') goto LAB_ram_48048bc2;
LAB_ram_48048da4:
      if (*(char *)((int)param_3 + 0xe) == '\0') goto LAB_ram_48048bc2;
    }
    else if (bVar11 == 0) {
LAB_ram_480487b8:
      iVar8 = *(int *)(param_2 + 0xc);
      iVar12 = param_3[9];
      bVar11 = *(byte *)(param_3 + 8);
      if (iVar8 != -1) {
        iVar8 = iVar8 + 1;
        *(int *)(param_2 + 0xc) = iVar8;
      }
      bVar11 = (bVar11 ^ 1) << 2;
      *param_2 = bVar11;
      *(int *)(param_2 + 4) = iVar12;
joined_r0x48048bf4:
      if ((cVar1 == '\0') || (*(char *)((int)param_3 + 0xd) == '\0')) {
        if ((*(char *)((int)param_3 + 10) != '\0') && (*(char *)((int)param_3 + 0xe) != '\0'))
        goto LAB_ram_48048812;
      }
      else {
        if (bVar11 == 0) {
LAB_ram_480487ea:
          iVar12 = param_3[9];
          *param_2 = -((char)param_3[8] == '\0') & 5;
          cVar2 = *(char *)((int)param_3 + 10);
          *(int *)(param_2 + 4) = iVar12;
          goto joined_r0x48048804;
        }
        if (*(char *)((int)param_3 + 10) != '\0') {
          bVar11 = 4;
          goto LAB_ram_48048da4;
        }
      }
    }
    else {
      if (cVar1 != '\0') {
        if ((*(char *)((int)param_3 + 10) == '\0') || (*(char *)((int)param_3 + 0xe) == '\0')) {
          iVar8 = *(int *)(param_2 + 0xc);
          goto LAB_ram_48048bc2;
        }
        iVar8 = *(int *)(param_2 + 0xc);
        goto LAB_ram_48048864;
      }
LAB_ram_4804884a:
      if (bVar11 != 5) goto LAB_ram_48048bfa;
      cVar2 = *(char *)((int)param_3 + 10);
      *param_2 = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      iVar8 = *(int *)(param_2 + 0xc);
joined_r0x48048804:
      if (cVar2 != '\0') {
        bVar11 = *param_2;
        goto LAB_ram_4804880a;
      }
    }
LAB_ram_48048860:
    bVar11 = *param_2;
  }
LAB_ram_48048864:
  cVar2 = *(char *)((int)param_3 + 5);
  if (cVar2 == '\0') {
    param_2[8] = 0;
  }
  cVar1 = *(char *)((int)param_3 + 6);
  if (cVar1 == '\0') {
    if (param_2[0x24] == 1) {
      param_2[0x19] = 0;
      param_2[0x24] = 0;
    }
    else if (param_2[0x24] == 3) {
      param_2[0x24] = 2;
    }
    if (bVar11 == 1) {
      *param_2 = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      bVar11 = 0;
    }
    else if (bVar11 == 3) {
      bVar11 = 2;
      *param_2 = 2;
    }
  }
  bVar13 = *(byte *)((int)param_3 + 7);
  if (bVar13 == 0) {
    if (bVar3 != 0) {
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      bVar14 = *(byte *)((int)param_3 + 0xf);
      param_2[0x2c] = 0;
      param_2[0x2d] = 0;
      param_2[0x2e] = 0;
      param_2[0x2f] = 0;
      if (bVar14 != 0) {
        bVar3 = 0;
        goto LAB_ram_48048a00;
      }
      param_2[0x16] = 0;
      param_2[0x19] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x24] = 0;
      bVar14 = bVar3;
LAB_ram_480488d2:
      bVar3 = 0;
      cVar1 = *(char *)((int)param_3 + 0x1e);
      goto joined_r0x480488d6;
    }
    if (*(char *)((int)param_3 + 0xf) == '\0') {
      param_2[0x16] = 0;
      param_2[0x19] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x24] = 0;
      goto LAB_ram_480488d2;
    }
LAB_ram_48048a00:
    bVar10 = *(byte *)(param_3 + 4);
    if (1 < (byte)(bVar10 - 1)) {
      if (bVar10 != 4) {
        param_2[0x19] = 0;
        param_2[0x1c] = 0;
        param_2[0x1d] = 0;
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        param_2[0x24] = 0;
        goto LAB_ram_48048b2c;
      }
      if ((param_2[0x16] == 0) || (param_2[0x17] == 4)) {
        if (param_2[0x19] != 0) {
          if (*param_3 - *(int *)(param_2 + 0x1c) < 1) {
            if (*(char *)((int)param_3 + 0x11) == '\0') goto LAB_ram_48048b2c;
LAB_ram_48048ddc:
            if ((param_3[6] != *(int *)(param_2 + 0x20)) &&
               ((int)((uint)*(byte *)(param_3 + 2) * 100) <= param_3[5])) {
              bVar6 = param_2[0x24];
              param_2[0x19] = 0;
              param_2[0x24] = 0;
              if ((bVar6 != 0) && (bVar11 == 0)) {
                iVar7 = param_3[9];
                iVar12 = param_3[8];
                if ((bVar6 != 5) && (iVar8 != -1)) {
                  iVar8 = iVar8 + 1;
                  *(int *)(param_2 + 0xc) = iVar8;
                }
                bVar11 = bVar6 & -((char)iVar12 == '\0');
                *param_2 = bVar11;
                *(int *)(param_2 + 4) = iVar7;
              }
            }
          }
          else {
            param_2[0x19] = 0;
            param_2[0x24] = 0;
          }
        }
        goto LAB_ram_48048b2c;
      }
      if (bVar3 == 0) {
        if (((cVar1 == '\0') || (*(char *)((int)param_3 + 0xb) != '\0')) || (bVar11 != 0))
        goto LAB_ram_48048a66;
        if (param_2[0x18] != 2) {
          iVar12 = param_3[9];
          bVar11 = *(byte *)(param_3 + 8);
          if (iVar8 != -1) {
            iVar8 = iVar8 + 1;
            *(int *)(param_2 + 0xc) = iVar8;
          }
          bVar11 = bVar11 ^ 1;
          *param_2 = bVar11;
          *(int *)(param_2 + 4) = iVar12;
          goto LAB_ram_48048a66;
        }
        iVar12 = param_3[6];
        *(int *)(param_2 + 0x1c) = *param_3 + 15000;
        param_2[0x19] = 1;
        *(int *)(param_2 + 0x20) = iVar12;
        param_2[0x24] = 1;
        param_2[0x16] = 1;
        param_2[0x17] = 4;
      }
      else {
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        param_2[0x2e] = 0;
        param_2[0x2f] = 0;
        bVar14 = bVar3;
        if ((cVar1 == '\0') || (*(char *)((int)param_3 + 0xb) != '\0')) {
          if (bVar11 == 0) {
            bVar11 = 2;
            goto LAB_ram_48048a42;
          }
        }
        else if (bVar11 == 0) {
          bVar11 = 3;
LAB_ram_48048a42:
          iVar7 = param_3[9];
          iVar12 = param_3[8];
          if (iVar8 != -1) {
            iVar8 = iVar8 + 1;
            *(int *)(param_2 + 0xc) = iVar8;
          }
          bVar11 = bVar11 & -((char)iVar12 == '\0');
          *param_2 = bVar11;
          *(int *)(param_2 + 4) = iVar7;
        }
LAB_ram_48048a66:
        if (param_2[0x19] != 0) {
          if (0 < *param_3 - *(int *)(param_2 + 0x1c)) {
            param_2[0x19] = 0;
            param_2[0x24] = 0;
            param_2[0x16] = 1;
            param_2[0x17] = 4;
            goto LAB_ram_48048a76;
          }
          if (*(char *)((int)param_3 + 0x11) != '\0') {
            bVar3 = 0;
            goto LAB_ram_48048ddc;
          }
        }
        param_2[0x16] = 1;
        param_2[0x17] = 4;
      }
LAB_ram_48048a76:
      bVar3 = 1;
      goto LAB_ram_4804899e;
    }
    param_2[0x18] = bVar10;
    param_2[0x19] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x24] = 0;
LAB_ram_48048b2c:
    param_2[0x17] = bVar10;
    param_2[0x16] = 1;
    if (bVar3 == 0) goto LAB_ram_48048a76;
    bVar6 = 1999 < (uint)(*param_3 - *(int *)(param_2 + 0x2c));
    if ((((bVar10 != param_2[0x15]) || (bVar10 != 2)) || (*(byte *)(param_3 + 7) == 0)) ||
       ((bVar10 = *(byte *)((int)param_3 + 0x1d), bVar3 = *(byte *)(param_3 + 7), bVar10 == 0 ||
        (bVar6 = bVar10, bVar3 = bVar10, 1999 < (uint)(*param_3 - *(int *)(param_2 + 0x2c))))))
    goto LAB_ram_48048990;
    bVar3 = *(byte *)((int)param_3 + 0x1e);
    bVar6 = bVar3;
    if (bVar3 != 0) goto LAB_ram_480488dc;
    bVar3 = param_2[8];
    iVar12 = *(int *)(param_2 + 0x10);
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
LAB_ram_48048938:
    if (bVar11 == 0) {
LAB_ram_48048b10:
      bVar13 = param_2[0x34];
      uVar4 = *(undefined4 *)(param_2 + 0x30);
      bVar11 = 0;
      bVar10 = bVar3;
    }
    else {
      bVar13 = param_2[0x34];
      uVar4 = *(undefined4 *)(param_2 + 0x30);
      bVar10 = 1;
    }
LAB_ram_48048944:
    uVar5 = 1;
    uVar9 = 1;
    bVar6 = *(byte *)((int)param_3 + 0x21) ^ 1;
  }
  else {
    if (*(char *)((int)param_3 + 0xf) != '\0') goto LAB_ram_48048a00;
    param_2[0x16] = 0;
    param_2[0x19] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x24] = 0;
    if (bVar3 == 0) goto LAB_ram_480488d2;
    bVar6 = 1999 < (uint)(*param_3 - *(int *)(param_2 + 0x2c));
    bVar3 = 0;
LAB_ram_48048990:
    param_2[0x34] = bVar6;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    bVar14 = 1;
LAB_ram_4804899e:
    cVar1 = *(char *)((int)param_3 + 0x1e);
joined_r0x480488d6:
    if (cVar1 == '\0') {
      param_2[0x25] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x2a] = 0;
      param_2[0x2b] = 0;
      iVar12 = *(int *)(param_2 + 0x10);
      bVar6 = 0;
      if (bVar3 == 0) {
        bVar3 = param_2[8];
        goto LAB_ram_480489c2;
      }
LAB_ram_48048924:
      if ((char)param_3[4] != '\x01') goto LAB_ram_4804892e;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      param_2[0x19] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      if (bVar11 == 0) {
        bVar3 = param_2[8];
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        if (bVar3 == 0) {
          bVar13 = param_2[0x34];
          bVar3 = 0;
          uVar4 = *(undefined4 *)(param_2 + 0x30);
          bVar10 = 0;
          if (bVar6 == 0) {
            uVar5 = 0;
            bVar6 = 0;
            uVar9 = 0;
            goto LAB_ram_480489d4;
          }
          goto LAB_ram_48048944;
        }
      }
      else {
        *param_2 = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
      }
      if (iVar12 != -1) {
        iVar12 = iVar12 + 1;
        *(int *)(param_2 + 0x10) = iVar12;
      }
      bVar3 = 0;
      if (bVar6 != 0) goto LAB_ram_48048b10;
LAB_ram_48048cc4:
      bVar13 = param_2[0x34];
      uVar4 = *(undefined4 *)(param_2 + 0x30);
      bVar11 = 0;
      uVar5 = 0;
      uVar9 = 0;
      bVar6 = 0;
      bVar10 = bVar3;
    }
    else {
      bVar6 = 0;
LAB_ram_480488dc:
      if (*(char *)((int)param_3 + 0x1f) == '\0') {
        if (param_2[0x25] == 0) goto LAB_ram_4804891a;
        bVar10 = bVar6;
        if (param_2[0x26] == 0) {
          if ((uint)(*param_3 - *(int *)(param_2 + 0x28)) < 0x5dc) {
            if (((bVar13 != 0) && (bVar10 = bVar13, bVar6 == 0)) &&
               ((bVar10 = bVar6, bVar3 != 0 &&
                (((*(byte *)(param_3 + 4) != 4 && (param_2[0x27] == *(byte *)(param_3 + 4))) &&
                 (param_2[0x27] == 2)))))) {
              if (((char)param_3[7] == '\0') || (*(char *)((int)param_3 + 0x1d) == '\0')) {
                bVar10 = 0;
              }
              else if (*(char *)((int)param_3 + 0x21) == '\0') {
                *(int *)(param_2 + 0x2c) = *param_3;
                param_2[0x30] = 0;
                param_2[0x31] = 0;
                param_2[0x32] = 0;
                param_2[0x33] = 0;
                param_2[0x34] = 0;
                param_2[0x14] = 1;
                param_2[0x15] = 2;
                bVar10 = bVar13;
              }
            }
          }
          else if (cVar2 != '\0') {
            param_2[8] = param_2[8] ^ 1;
          }
        }
        param_2[0x25] = 0;
        param_2[0x26] = 0;
        param_2[0x27] = 0;
        param_2[0x28] = 0;
        param_2[0x29] = 0;
        param_2[0x2a] = 0;
        param_2[0x2b] = 0;
        iVar12 = *(int *)(param_2 + 0x10);
        bVar6 = bVar10;
joined_r0x48048ad8:
        if (bVar3 != 0) goto LAB_ram_48048924;
      }
      else {
        if (param_2[0x25] != 0) {
          if ((param_2[0x26] == 0) && (0x5db < (uint)(*param_3 - *(int *)(param_2 + 0x28)))) {
            if (cVar2 != '\0') {
              param_2[8] = param_2[8] ^ 1;
            }
            param_2[0x26] = 1;
          }
LAB_ram_4804891a:
          iVar12 = *(int *)(param_2 + 0x10);
          goto joined_r0x48048ad8;
        }
        param_2[0x25] = 1;
        param_2[0x26] = 0;
        iVar7 = *param_3;
        if (bVar3 != 0) {
          bVar3 = *(byte *)(param_3 + 4);
          iVar12 = *(int *)(param_2 + 0x10);
          *(int *)(param_2 + 0x28) = iVar7;
          param_2[0x27] = bVar3;
          goto LAB_ram_48048924;
        }
        iVar12 = *(int *)(param_2 + 0x10);
        param_2[0x27] = 0;
        *(int *)(param_2 + 0x28) = iVar7;
      }
LAB_ram_4804892e:
      bVar3 = param_2[8];
      if (bVar6 != 0) goto LAB_ram_48048938;
LAB_ram_480489c2:
      if (bVar11 == 0) {
        if (bVar3 == 0) goto LAB_ram_48048cc4;
        bVar13 = param_2[0x34];
        uVar9 = 0;
        uVar4 = *(undefined4 *)(param_2 + 0x30);
        bVar6 = 0;
        uVar5 = 3;
        bVar10 = bVar3;
      }
      else {
        bVar13 = param_2[0x34];
        uVar4 = *(undefined4 *)(param_2 + 0x30);
        uVar5 = 2;
        uVar9 = 0;
        bVar6 = 0;
        bVar10 = 1;
      }
    }
  }
LAB_ram_480489d4:
  *(undefined1 *)param_1 = uVar5;
  *(byte *)((int)param_1 + 1) = bVar11;
  *(byte *)((int)param_1 + 2) = bVar10;
  *(byte *)((int)param_1 + 3) = bVar6;
  *(byte *)(param_1 + 1) = bVar14;
  *(byte *)((int)param_1 + 5) = bVar3;
  *(undefined1 *)((int)param_1 + 6) = uVar9;
  *(byte *)((int)param_1 + 7) = bVar13;
LAB_ram_480489f4:
  param_1[2] = uVar4;
  param_1[3] = iVar8;
  param_1[4] = iVar12;
  return;
}


