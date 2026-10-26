/* Firmware entry: 0x4804b736 */

void FUN_ram_4804b736(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 1) {
    if (param_1[0x78] != '\0') {
      param_1[0x79] = '\0';
      return;
    }
    if ((param_1[0x7a] == '\0') || (3000 < (uint)(param_3 - *(int *)(param_1 + 0x7c)))) {
      *(int *)(param_1 + 0x7c) = param_3;
      param_1[0x7a] = '\x01';
      param_1[0x78] = '\x01';
      param_1[0x79] = '\0';
      param_1[0xa1] = '\x02';
      return;
    }
    param_1[0x7a] = '\0';
    param_1[0x81] = '\x01';
    param_1[0x78] = '\x01';
    param_1[0x79] = '\0';
    param_1[0xa1] = '\x05';
  }
  else if (param_2 == 2) {
    if ((param_1[0x79] != '\0') || (*param_1 == '\0')) {
      param_1[0x78] = '\0';
      param_1[0x79] = '\x01';
      return;
    }
    param_1[0x7a] = '\0';
    param_1[0x80] = '\x01';
    param_1[0x81] = '\0';
    param_1[0xa1] = '\x04';
    param_1[0x78] = '\0';
    param_1[0x79] = '\x01';
  }
  else {
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    if (param_2 == 0) {
      if (param_1[0x80] != '\0') {
        param_1[0x80] = '\0';
        FUN_ram_4804ae6a(param_1,param_3);
        return;
      }
      if (param_1[0x81] != '\0') {
        param_1[0x81] = '\0';
        param_1[0xa1] = '\0';
        if (((param_1[0xa0] != '\x04') && (cVar1 = param_1[0xa2], cVar1 != '\t')) &&
           (cVar1 != '\x04')) {
          if (((param_1[0xac] != '\0') || (param_1[0xa0] == '\x03')) || ((byte)(cVar1 - 6U) < 3)) {
            param_1[0xac] = '\0';
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
            param_1[0xae] = '\x01';
            if ((*(int *)(param_1 + 300) != 0) && (param_1[0x135] == '\0')) {
              *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
              param_1[300] = '\0';
              param_1[0x12d] = '\0';
              param_1[0x12e] = '\0';
              param_1[0x12f] = '\0';
              param_1[0x130] = '\0';
              param_1[0x131] = '\0';
              param_1[0x132] = '\0';
              param_1[0x133] = '\0';
              param_1[0x134] = '\0';
              param_1[0x148] = '\0';
              param_1[0x149] = '\0';
              param_1[0x14a] = '\0';
              param_1[0x14b] = '\0';
              param_1[0x14c] = '\0';
              param_1[0x14d] = '\0';
              param_1[0x14e] = '\0';
              param_1[0x14f] = '\0';
            }
            if ((param_1[0x128] != '\0') && (param_1[0x106] == '\0')) {
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
            }
            FUN_ram_4804a9c8(param_1,param_3,0,6);
            return;
          }
          if (param_1[1] != '\0') {
            iVar2 = FUN_ram_48031012(param_1 + 8);
            if ((iVar2 == 0) || (param_1[0x50] == '\0')) {
              param_1[0xa3] = '\x01';
            }
            else if (param_1[0x18] != '\0') {
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
              if ((*(int *)(param_1 + 300) != 0) && (param_1[0x135] == '\0')) {
                *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
                param_1[300] = '\0';
                param_1[0x12d] = '\0';
                param_1[0x12e] = '\0';
                param_1[0x12f] = '\0';
                param_1[0x130] = '\0';
                param_1[0x131] = '\0';
                param_1[0x132] = '\0';
                param_1[0x133] = '\0';
                param_1[0x134] = '\0';
                param_1[0x148] = '\0';
                param_1[0x149] = '\0';
                param_1[0x14a] = '\0';
                param_1[0x14b] = '\0';
                param_1[0x14c] = '\0';
                param_1[0x14d] = '\0';
                param_1[0x14e] = '\0';
                param_1[0x14f] = '\0';
              }
              if ((param_1[0x128] != '\0') && (param_1[0x106] == '\0')) {
                param_1[0x128] = '\0';
                memset(param_1 + 0x104,0,0x24);
              }
              iVar2 = *(int *)(param_1 + 0xb0) + 1;
              if (iVar2 == 0) {
                iVar2 = 1;
              }
              *(undefined **)(param_1 + 0xac) = &sedeleg;
              *(int *)(param_1 + 0xb0) = iVar2;
              param_1[0xdc] = '\x01';
              param_1[0xe5] = '\x01';
              iVar2 = param_3;
              if (param_3 == 0) {
                iVar2 = 1;
              }
              *(int *)(param_1 + 200) = iVar2;
              param_1[0xd8] = '\0';
              param_1[0xd9] = '\0';
              param_1[0xda] = '\0';
              param_1[0xdb] = '\0';
              *(int *)(param_1 + 0xe0) = param_3;
              param_1[0xec] = '\0';
              param_1[0xed] = '\0';
              param_1[0xf0] = '\0';
              param_1[0xf1] = '\0';
              param_1[0xf2] = '\0';
              param_1[0xf3] = '\0';
              param_1[0xf4] = '\0';
              param_1[0xf5] = '\0';
              param_1[0xf6] = '\0';
              param_1[0xf7] = '\0';
              param_1[0xf8] = '\0';
              param_1[0xf9] = '\0';
              param_1[0xfa] = '\0';
              param_1[0xfb] = '\0';
              param_1[0xfc] = '\0';
              param_1[0xfd] = '\0';
              param_1[0xfe] = '\0';
              param_1[0xff] = '\0';
              param_1[0xa0] = '\x03';
              param_1[0xa1] = '\x06';
              param_1[0xa2] = '\a';
              param_1[0xa3] = '\0';
            }
          }
        }
      }
    }
  }
  return;
}


