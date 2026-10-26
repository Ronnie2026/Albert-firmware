/* Firmware entry: 0x4804afca */

void FUN_ram_4804afca(char *param_1,uint param_2,int param_3,int param_4,int *param_5,int param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  char cVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 300) != param_3) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x130) != param_4) {
    return;
  }
  if (param_2 == 1) {
    return;
  }
  cVar7 = param_1[0x135];
  bVar1 = param_1[0x134];
  iVar3 = *(int *)(param_1 + 0x148);
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  param_1[0x14c] = '\0';
  param_1[0x14d] = '\0';
  param_1[0x14e] = '\0';
  param_1[0x14f] = '\0';
  param_1[0x134] = '\0';
  param_1[0x135] = '\0';
  param_1[0x148] = '\0';
  param_1[0x149] = '\0';
  param_1[0x14a] = '\0';
  param_1[0x14b] = '\0';
  if (param_2 != 0) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    bVar5 = bVar1 - 2;
    if (param_2 == 4) {
      param_1[0xa4] = '\x04';
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
      param_1[0xa3] = '\x06';
      if ((bVar5 < 2) || (bVar1 == 5)) {
        if (cVar7 == '\0') {
LAB_ram_4804b188:
          *(int *)(param_1 + 0xe8) = param_6 + 5;
          param_1[0xe5] = '\x01';
          return;
        }
      }
      else {
        cVar8 = '\x06';
        if (cVar7 == '\0') goto LAB_ram_4804b06c;
      }
    }
    else {
      if (param_2 == 8) {
        param_1[0xa3] = '\x01';
      }
      else if (param_2 == 3) {
        param_1[0xa3] = '\t';
      }
      else {
        param_1[0xa3] = '\x05';
        if ((8 < param_2) || ((0x128U >> (param_2 & 0x1f) & 1) == 0)) {
          if (cVar7 == '\0') {
            cVar8 = '\x05';
            if (bVar1 == 5 || 1 >= bVar5) goto LAB_ram_4804b188;
            goto LAB_ram_4804b06c;
          }
          goto LAB_ram_4804b08c;
        }
      }
      if ((cVar7 == '\0') && (bVar1 != 5 && 1 < bVar5)) {
        cVar8 = param_1[0xa3];
LAB_ram_4804b06c:
        FUN_ram_4804a9c8(param_1,param_6,cVar8,'\a' - param_1[0xac]);
        return;
      }
    }
LAB_ram_4804b08c:
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
    param_1[0x108] = '\0';
    param_1[0x109] = '\0';
    param_1[0x10a] = '\0';
    param_1[0x10b] = '\0';
    param_1[0x10c] = '\0';
    param_1[0x10d] = '\0';
    param_1[0x10e] = '\0';
    param_1[0x10f] = '\0';
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xa0] = '\x05';
    param_1[0xa1] = '\0';
    param_1[0x128] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    param_1[0xac] = '\0';
    param_1[0xad] = '\0';
    param_1[0xcc] = '\0';
    param_1[0xd0] = '\0';
    param_1[0xd1] = '\0';
    param_1[0xd2] = '\0';
    param_1[0xd3] = '\0';
    param_1[0xd4] = '\0';
    param_1[0xd5] = '\0';
    param_1[0xd6] = '\0';
    param_1[0xd7] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xe0] = '\0';
    param_1[0xe1] = '\0';
    param_1[0xe2] = '\0';
    param_1[0xe3] = '\0';
    param_1[0xe4] = '\0';
    param_1[0xe5] = '\0';
    param_1[0xe8] = '\0';
    param_1[0xe9] = '\0';
    param_1[0xea] = '\0';
    param_1[0xeb] = '\0';
    param_1[0x100] = '\0';
    param_1[0x101] = '\0';
    param_1[0x102] = '\0';
    param_1[0x103] = '\0';
    param_1[0xa2] = '\n';
    return;
  }
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  if (((((*param_5 == 0x249) && (iVar3 != 0)) && (param_1[0x2c] != '\0')) &&
      ((iVar3 == *(int *)(param_1 + 0x34) &&
       (FUN_ram_4ff45158(param_1 + 0x1c,param_5,0xe), param_1[0x50] != '\0')))) &&
     ((*(int *)(param_1 + 0x40) == *param_5 && (param_1[0x45] == *(char *)((int)param_5 + 5))))) {
    FUN_ram_4ff45158(param_1 + 0x40,param_5,0xe);
  }
  if (bVar1 == 8) {
    param_1[0xb9] = '\0';
    param_1[0xa0] = '\x02';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\x02';
    param_1[0xa3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    param_1[0xa5] = '\x01';
    param_1[0xa6] = '\x01';
    return;
  }
  if (8 < bVar1) {
    if (bVar1 == 0xb) {
      param_1[0xb9] = '\x02';
      *(int *)(param_1 + 0xbc) = param_6;
      param_1[0xc4] = '\0';
      return;
    }
    if (bVar1 < 0xc) {
      if (bVar1 != 9) {
        param_1[0xb9] = '\x01';
        *(int *)(param_1 + 0xbc) = param_6;
        return;
      }
      param_1[0xb9] = '\x02';
      param_1[0x86] = '\0';
      param_1[0x87] = '\x05';
      param_1[0x88] = '\0';
      param_1[0x89] = '\x05';
      *(int *)(param_1 + 0xbc) = param_6;
      param_1[0xc4] = '\0';
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
      return;
    }
    if (bVar1 == 0xc) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
      return;
    }
    if (bVar1 != 0xd) {
      return;
    }
    *(int *)(param_1 + 0xd4) = param_6 + 0xb4;
    param_1[0xcc] = '\x04';
    return;
  }
  if (bVar1 == 4) {
    param_1[0xa6] = '\x01';
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    return;
  }
  if (bVar1 < 5) {
    if (bVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 2);
      param_1[0xa2] = '\x06';
      *(int *)(param_1 + 0xd8) = param_6;
      param_1[0xe8] = '\0';
      param_1[0xe9] = '\0';
      param_1[0xea] = '\0';
      param_1[0xeb] = '\0';
      param_1[0xe4] = '\x01';
      param_1[0xe5] = '\0';
      if (uVar4 < 0x65) {
        if (uVar4 == 0) {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 100;
      }
      *(uint *)(param_1 + 0xe0) = uVar4 + param_6;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
      return;
    }
    if (bVar1 == 3) {
      uVar4 = (uint)*(ushort *)(param_1 + 2);
      param_1[0xa2] = '\a';
      *(int *)(param_1 + 0xd8) = param_6;
      param_1[0xe8] = '\0';
      param_1[0xe9] = '\0';
      param_1[0xea] = '\0';
      param_1[0xeb] = '\0';
      param_1[0xe4] = '\0';
      param_1[0xe5] = '\0';
      if (uVar4 < 0x65) {
        if (uVar4 == 0) {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 100;
      }
      *(uint *)(param_1 + 0xe0) = uVar4 + param_6;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(ushort *)(param_1 + 4);
      if (*(short *)(param_1 + 0xec) == -1) {
        if (uVar2 == 0) {
          return;
        }
      }
      else {
        uVar6 = *(short *)(param_1 + 0xec) + 1;
        *(ushort *)(param_1 + 0xec) = uVar6;
        if (uVar2 == 0) {
          return;
        }
        if (uVar6 < uVar2) {
          return;
        }
      }
      if (param_1[0xad] == '\0') {
        if ((param_1[0x128] != '\0') && (param_1[0x106] == '\0')) {
          param_1[0x128] = '\0';
          memset(param_1 + 0x104,0,0x24);
        }
        param_1[0xa0] = '\x03';
        param_1[0xa1] = '\a';
        param_1[0xac] = '\0';
        param_1[0xdc] = '\0';
        param_1[0xe0] = '\0';
        param_1[0xe1] = '\0';
        param_1[0xe2] = '\0';
        param_1[0xe3] = '\0';
        param_1[0xd8] = '\0';
        param_1[0xd9] = '\0';
        param_1[0xda] = '\0';
        param_1[0xdb] = '\0';
        param_1[0xa2] = '\b';
        return;
      }
      FUN_ram_4804ac7e(param_1,param_6,0);
      return;
    }
    if (bVar1 != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
    if (param_1[0xa2] != '\x05') {
      return;
    }
    cVar7 = '\x06';
    if (param_1[0xcc] == '\x01') {
      cVar7 = '\x02';
    }
    param_1[0xcc] = cVar7;
    return;
  }
  if (bVar1 == 5) {
    param_1[0xe8] = '\0';
    param_1[0xe9] = '\0';
    param_1[0xea] = '\0';
    param_1[0xeb] = '\0';
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
    return;
  }
  param_1[0x128] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  cVar7 = '\0';
  if (param_1[7] == '\0') {
    if (param_1[0xae] != '\0') goto LAB_ram_4804b252;
  }
  else {
    cVar8 = '\0';
    if ((((param_1[0x97] == '\0') || (param_1[0x98] == '\0')) || ((byte)param_1[0x9a] < 2)) ||
       (((param_1[0x99] != param_1[0x9b] || (3 < (byte)(param_1[0x9b] - 3U))) ||
        ((1000 < (uint)(param_6 - *(int *)(param_1 + 0x9c)) || (param_1[0xae] == '\0'))))))
    goto LAB_ram_4804b270;
LAB_ram_4804b252:
    if (param_1[0xa5] != '\0') {
      cVar8 = '\0';
      if ((*param_1 != '\0') && (iVar3 = FUN_ram_48031012(param_1 + 8), iVar3 != 0)) {
        cVar8 = '\x02';
        cVar7 = '\x03';
      }
      goto LAB_ram_4804b270;
    }
  }
  cVar8 = '\0';
LAB_ram_4804b270:
  param_1[0xb9] = '\0';
  param_1[0xa0] = cVar8;
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = cVar7;
  param_1[0xdc] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xe1] = '\0';
  param_1[0xe2] = '\0';
  param_1[0xe3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0xae] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  return;
}


