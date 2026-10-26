/* Firmware entry: 0x48049bb6 */

uint FUN_ram_48049bb6(char *param_1,char *param_2)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 10);
  cVar6 = param_2[0x11];
  sVar2 = *(short *)(param_2 + 0x16);
  param_1[0xf] = param_2[0x12];
  param_1[0xe] = cVar6;
  sVar8 = 1;
  if (sVar2 != 0) {
    sVar8 = sVar2;
  }
  iVar11 = *(int *)(param_2 + 0xc);
  *(short *)(param_1 + 0x16) = sVar8;
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  bVar1 = param_2[0x10];
  if (iVar11 == 0) {
LAB_ram_48049cb0:
    cVar6 = param_1[0x52];
    param_1[0x51] = bVar1;
    iVar11 = 0;
LAB_ram_48049cba:
    iVar12 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 0x40) = iVar12;
    if (param_1[0x58] == '\0') goto LAB_ram_48049c0c;
LAB_ram_48049cc4:
    if (iVar12 == *(int *)(param_1 + 0x88)) goto LAB_ram_48049c16;
    *(int *)(param_1 + 0x88) = iVar12;
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x8e] = '\0';
    param_1[0x8f] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x5c] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    if ((cVar6 != '\0') || (param_1[0x54] != '\0')) goto LAB_ram_48049c16;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    cVar7 = *param_2;
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0xb] = '\0';
    param_1[0x53] = '\0';
    iVar11 = 1;
    if (cVar7 == '\0') goto LAB_ram_48049d1c;
LAB_ram_48049c1e:
    if (param_2[1] == '\0') {
      *(undefined4 *)(param_1 + 0x78) = uVar5;
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x62] = '\0';
      param_1[99] = '\0';
      param_1[0x68] = '\0';
      param_1[0x69] = '\0';
      param_1[0x6a] = '\0';
      param_1[0x6b] = '\0';
      param_1[0x50] = '\0';
      param_1[0x51] = '\0';
      param_1[0x7c] = '\0';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x7f] = '\0';
      param_1[0x55] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      param_1[0x8e] = '\0';
      param_1[0x8f] = '\0';
      param_1[0x90] = '\0';
      param_1[0x91] = '\0';
      param_1[0x5c] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      param_1[0x66] = '\0';
      param_1[0x67] = '\0';
      param_1[0x6c] = '\0';
      param_1[0x6d] = '\0';
      param_1[0x6e] = '\0';
      param_1[0x6f] = '\0';
      param_1[0x70] = '\0';
      param_1[0x71] = '\0';
      param_1[0x72] = '\0';
      param_1[0x73] = '\0';
      param_1[0x74] = '\0';
      param_1[0x75] = '\0';
      param_1[0x76] = '\0';
      param_1[0x77] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      cVar7 = param_1[0x53];
      cVar4 = param_1[0x54];
      cVar10 = '\a';
      if ((cVar6 == '\0') && (cVar10 = '\b', cVar7 == '\0')) {
        cVar10 = cVar4 << 3;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x84);
      cVar3 = '\x02';
      goto LAB_ram_48049dce;
    }
    if (param_2[8] == '\0') {
      *(undefined4 *)(param_1 + 0x78) = uVar5;
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x62] = '\0';
      param_1[99] = '\0';
      param_1[0x68] = '\0';
      param_1[0x69] = '\0';
      param_1[0x6a] = '\0';
      param_1[0x6b] = '\0';
      param_1[0x50] = '\0';
      param_1[0x51] = '\0';
      param_1[0x7c] = '\0';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x7f] = '\0';
      param_1[0x55] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      param_1[0x8e] = '\0';
      param_1[0x8f] = '\0';
      param_1[0x90] = '\0';
      param_1[0x91] = '\0';
      param_1[0x5c] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      param_1[0x66] = '\0';
      param_1[0x67] = '\0';
      param_1[0x6c] = '\0';
      param_1[0x6d] = '\0';
      param_1[0x6e] = '\0';
      param_1[0x6f] = '\0';
      param_1[0x70] = '\0';
      param_1[0x71] = '\0';
      param_1[0x72] = '\0';
      param_1[0x73] = '\0';
      param_1[0x74] = '\0';
      param_1[0x75] = '\0';
      param_1[0x76] = '\0';
      param_1[0x77] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      cVar7 = param_1[0x53];
      cVar4 = param_1[0x54];
      cVar10 = '\a';
      if ((cVar6 == '\0') && (cVar10 = '\b', cVar7 == '\0')) {
        cVar10 = (-(cVar4 != '\0') & 7U) + 1;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x84);
      cVar3 = '\x03';
      goto LAB_ram_48049dce;
    }
    if (cVar6 != '\0') {
      param_1[0] = '\a';
      param_1[1] = '\0';
      FUN_ram_48049b14();
LAB_ram_48049e44:
      uVar13 = 0;
      iVar9 = 0;
      iVar12 = 0;
      goto LAB_ram_48049e22;
    }
    if ((param_1[0x56] != '\0') || (param_1[0x55] != '\0')) {
      param_1[0] = '\x06';
      param_1[1] = '\0';
      FUN_ram_48049b14();
      goto LAB_ram_48049e44;
    }
    if (param_1[0x53] != '\0') {
      *param_1 = '\b';
      FUN_ram_48049b14();
      goto LAB_ram_48049e44;
    }
    if (param_1[0x5c] == '\0') {
      param_1[0] = '\x05';
      param_1[1] = '\b';
      FUN_ram_48049b14();
      uVar13 = 1;
      iVar9 = 0;
      iVar12 = 0;
      goto LAB_ram_48049e22;
    }
    cVar6 = param_2[0x18];
    *param_1 = '\x05';
    if (cVar6 == '\0') {
      cVar6 = '\b';
LAB_ram_48049f48:
      param_1[1] = cVar6;
      FUN_ram_48049b14();
      uVar13 = 0;
      iVar9 = 0;
      iVar12 = 0;
      goto LAB_ram_48049e22;
    }
    if ((*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x70)) &&
       (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x74))) {
      uVar14 = *(uint *)(param_2 + 0x24);
      uVar13 = *(uint *)(param_2 + 0x20);
      if (((uVar14 <= *(uint *)(param_1 + 100)) &&
          ((*(uint *)(param_1 + 100) != uVar14 || (uVar13 <= *(uint *)(param_1 + 0x60))))) ||
         ((uVar14 <= *(uint *)(param_1 + 0x6c) &&
          ((*(uint *)(param_1 + 0x6c) != uVar14 || (uVar13 <= *(uint *)(param_1 + 0x68))))))) {
        cVar6 = '\t';
        goto LAB_ram_48049f48;
      }
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      cVar6 = param_2[0x19];
      *(uint *)(param_1 + 0x68) = uVar13;
      *(uint *)(param_1 + 0x6c) = uVar14;
      param_1[0x55] = '\0';
      param_1[0x56] = '\0';
      param_1[0xb] = '\0';
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      if ((cVar6 == '\0') || (param_2[0x1b] == '\0')) {
        param_1[1] = '\v';
        FUN_ram_48049b14();
      }
      else {
        cVar6 = param_2[0x1a];
        param_1[0x19] = '\x01';
        param_1[0x18] = cVar6;
        if (cVar6 == '\0') {
          param_1[1] = '\x0e';
          FUN_ram_48049b14();
        }
        else {
          iVar12 = 2;
          if (cVar6 == '\x01') {
            iVar12 = 4;
          }
          if (param_2[0x32] == '\0') {
            iVar11 = 1;
            iVar9 = 1;
            param_1[1] = '\0';
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
            param_1[0xb] = '\x01';
            param_1[0x55] = '\x01';
            FUN_ram_48049b14();
            uVar13 = 0;
            goto LAB_ram_48049e22;
          }
          param_1[1] = '\x10';
          FUN_ram_48049b14();
        }
      }
    }
    else {
      param_1[0x5c] = '\0';
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x62] = '\0';
      param_1[99] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      param_1[0x66] = '\0';
      param_1[0x67] = '\0';
      param_1[0x68] = '\0';
      param_1[0x69] = '\0';
      param_1[0x6a] = '\0';
      param_1[0x6b] = '\0';
      param_1[0x6c] = '\0';
      param_1[0x6d] = '\0';
      param_1[0x6e] = '\0';
      param_1[0x6f] = '\0';
      param_1[0x70] = '\0';
      param_1[0x71] = '\0';
      param_1[0x72] = '\0';
      param_1[0x73] = '\0';
      param_1[0x74] = '\0';
      param_1[0x75] = '\0';
      param_1[0x76] = '\0';
      param_1[0x77] = '\0';
      param_1[0x55] = '\0';
      param_1[0x56] = '\0';
      param_1[0xb] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0] = '\x01';
      param_1[1] = '\n';
      FUN_ram_48049b14();
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) == 0) {
      *(int *)(param_1 + 0x80) = iVar11;
      *(int *)(param_1 + 0x84) = iVar11;
      goto LAB_ram_48049cb0;
    }
    if (iVar11 != *(int *)(param_1 + 0x80)) {
      *(int *)(param_1 + 0x80) = iVar11;
      *(int *)(param_1 + 0x84) = iVar11;
      param_1[0x50] = bVar1 ^ 1;
      param_1[0] = '\x05';
      param_1[1] = '\b';
      param_1[0x51] = bVar1;
      param_1[0x7c] = '\0';
      param_1[0x7d] = '\0';
      param_1[0x7e] = '\0';
      param_1[0x7f] = '\0';
      *(undefined4 *)(param_1 + 0x78) = uVar5;
      param_1[0x52] = '\0';
      param_1[0x53] = '\0';
      param_1[0x54] = '\0';
      param_1[0x55] = '\0';
      param_1[0x56] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      param_1[0x8e] = '\0';
      param_1[0x8f] = '\0';
      param_1[0x90] = '\0';
      param_1[0x91] = '\0';
      param_1[0x5c] = '\0';
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x62] = '\0';
      param_1[99] = '\0';
      param_1[100] = '\0';
      param_1[0x65] = '\0';
      param_1[0x66] = '\0';
      param_1[0x67] = '\0';
      param_1[0x68] = '\0';
      param_1[0x69] = '\0';
      param_1[0x6a] = '\0';
      param_1[0x6b] = '\0';
      param_1[0x6c] = '\0';
      param_1[0x6d] = '\0';
      param_1[0x6e] = '\0';
      param_1[0x6f] = '\0';
      param_1[0x70] = '\0';
      param_1[0x71] = '\0';
      param_1[0x72] = '\0';
      param_1[0x73] = '\0';
      param_1[0x74] = '\0';
      param_1[0x75] = '\0';
      param_1[0x76] = '\0';
      param_1[0x77] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[2] = '\0';
      param_1[0xb] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      cVar6 = '\0';
      iVar11 = 1;
      goto LAB_ram_48049cba;
    }
    iVar12 = *(int *)(param_2 + 4);
    param_1[0x51] = bVar1;
    *(int *)(param_1 + 0x40) = iVar12;
    cVar6 = param_1[0x52];
    iVar11 = 0;
    if (param_1[0x58] != '\0') goto LAB_ram_48049cc4;
LAB_ram_48049c0c:
    *(int *)(param_1 + 0x88) = iVar12;
    param_1[0x58] = '\x01';
LAB_ram_48049c16:
    if (*param_2 != '\0') goto LAB_ram_48049c1e;
LAB_ram_48049d1c:
    *(undefined4 *)(param_1 + 0x78) = uVar5;
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x7c] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x7f] = '\0';
    param_1[0x55] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x8e] = '\0';
    param_1[0x8f] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x5c] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    cVar7 = param_1[0x53];
    cVar4 = param_1[0x54];
    cVar10 = '\a';
    if ((cVar6 == '\0') && (cVar10 = '\b', cVar7 == '\0')) {
      cVar10 = cVar4 << 3;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    cVar3 = '\x01';
LAB_ram_48049dce:
    *param_1 = cVar10;
    param_1[7] = cVar7;
    param_1[0x56] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[3] = '\0';
    param_1[6] = cVar6;
    param_1[8] = cVar4;
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    param_1[1] = cVar3;
  }
  uVar13 = 0;
  iVar11 = 1;
  iVar9 = 0;
  iVar12 = 0;
LAB_ram_48049e22:
  return iVar12 << 0x18 | uVar13 | iVar11 << 8 | iVar9 << 0x10;
}


