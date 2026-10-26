/* Firmware entry: 0x48054722 */

void FUN_ram_48054722(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_1 + 0xf0);
  *(short *)(param_1 + 0xec) = (short)param_2;
  if ((((bVar1 == 0) || (*(int *)(param_1 + 0xf4) == 0)) ||
      (500 < param_3 - *(int *)(param_1 + 0xf4))) || (*(ushort *)(param_1 + 0xee) < 0xb)) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined2 *)(param_1 + 0x128) = 0;
    return;
  }
  if (((*(int *)(param_1 + 0x10c) == 0 || 800 < (uint)(param_3 - *(int *)(param_1 + 0x10c))) &&
      (*(int *)(param_1 + 0x110) == 0 || 800 < (uint)(param_3 - *(int *)(param_1 + 0x110)))) &&
     (*(int *)(param_1 + 0x108) == 0 || 800 < (uint)(param_3 - *(int *)(param_1 + 0x108)))) {
    bVar1 = *(int *)(param_1 + 0x11c) != 0 && (uint)(param_3 - *(int *)(param_1 + 0x11c)) < 0x321 ||
            (*(int *)(param_1 + 0x118) != 0 && (uint)(param_3 - *(int *)(param_1 + 0x118)) < 0x321
            || *(int *)(param_1 + 0x114) != 0 && (uint)(param_3 - *(int *)(param_1 + 0x114)) < 0x321
            );
LAB_ram_480547ba:
    if (-0xdac < param_2) {
      *(undefined4 *)(param_1 + 0x124) = 0;
      *(undefined1 *)(param_1 + 0x129) = 0;
      if ((param_2 <= (int)((uint)*(ushort *)(param_1 + 0xc) * -0xa0000) >> 0x10 & bVar1) != 0) {
        if (*(int *)(param_1 + 0x120) == 0) {
          iVar2 = param_3;
          if (param_3 == 0) {
            iVar2 = 1;
          }
          *(int *)(param_1 + 0x120) = iVar2;
        }
        if (((*(char *)(param_1 + 0x128) != '\0') ||
            ((uint)(param_3 - *(int *)(param_1 + 0x120)) < 300)) ||
           (*(char *)(param_1 + 0xc3) == '\0')) {
          return;
        }
        if (*(char *)(param_1 + 8) == '\0') {
          *(undefined1 *)(param_1 + 0x4e) = 1;
          return;
        }
        if (*(char *)(param_1 + 0xac) == '\0') {
          if ((*(int *)(param_1 + 0x14) != 0) &&
             ((uint)(param_3 - *(int *)(param_1 + 0x14)) < 0x2ef)) {
            if (*(char *)(param_1 + 0x48) == '\0') {
              *(undefined1 *)(param_1 + 0x4a) = 0;
              *(undefined2 *)(param_1 + 0x54) = 0;
              *(undefined1 *)(param_1 + 0x57) = 0;
              *(undefined1 *)(param_1 + 0x5d) = 0;
              *(undefined4 *)(param_1 + 0x50) = 0;
              *(undefined2 *)(param_1 + 0x48) = 1;
            }
            else {
              if (*(char *)(param_1 + 0x4c) != '\0') {
                *(undefined1 *)(param_1 + 0x4e) = 4;
                return;
              }
              *(undefined1 *)(param_1 + 0x49) = 0;
            }
            *(undefined1 *)(param_1 + 0x4e) = 0;
            *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
            *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
            *(undefined1 *)(param_1 + 0x4b) = 3;
            *(undefined **)(param_1 + 0x4c) = &sedeleg;
            *(undefined1 *)(param_1 + 0x128) = 1;
            return;
          }
          *(undefined1 *)(param_1 + 0x4e) = 3;
          return;
        }
        *(undefined1 *)(param_1 + 0x4e) = 8;
        return;
      }
      goto LAB_ram_48054860;
    }
  }
  else if ((int)((uint)*(ushort *)(param_1 + 0xe) * -0xa0000) >> 0x10 < param_2)
  goto LAB_ram_480547ba;
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = param_3;
    if (param_3 == 0) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x124) = iVar2;
  }
  if (((*(char *)(param_1 + 0x129) == '\0') && (0x95 < (uint)(param_3 - *(int *)(param_1 + 0x124))))
     && (*(char *)(param_1 + 0xc3) != '\0')) {
    if (*(char *)(param_1 + 8) == '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 1;
    }
    else if (*(char *)(param_1 + 0xac) == '\0') {
      if ((*(int *)(param_1 + 0x14) == 0) || (0x2ee < (uint)(param_3 - *(int *)(param_1 + 0x14)))) {
        *(undefined1 *)(param_1 + 0x4e) = 3;
      }
      else {
        if (*(char *)(param_1 + 0x48) == '\0') {
          *(undefined1 *)(param_1 + 0x4a) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined1 *)(param_1 + 0x57) = 0;
          *(undefined1 *)(param_1 + 0x5d) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined2 *)(param_1 + 0x48) = 1;
        }
        else {
          if (1 < *(byte *)(param_1 + 0x4c)) {
            *(undefined1 *)(param_1 + 0x4e) = 4;
            goto LAB_ram_48054860;
          }
          *(undefined1 *)(param_1 + 0x49) = 0;
        }
        *(undefined1 *)(param_1 + 0x4e) = 0;
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
        *(undefined1 *)(param_1 + 0x4b) = 6;
        *(undefined2 *)(param_1 + 0x4c) = 0x202;
        *(undefined1 *)(param_1 + 0x129) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x4e) = 8;
    }
  }
LAB_ram_48054860:
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}


