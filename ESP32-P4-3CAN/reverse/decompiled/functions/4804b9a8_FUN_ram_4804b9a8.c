/* Firmware entry: 0x4804b9a8 */

void FUN_ram_4804b9a8(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 7) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xa2) != '\x05') {
    return;
  }
  if (*(int *)(param_1 + 300) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    return;
  }
  if (((((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 10) == '\0')) ||
       (*(char *)(param_1 + 0xc) != '\0')) ||
      ((*(char *)(param_1 + 0xd) == '\0' || (*(char *)(param_1 + 0xe) != '\0')))) ||
     ((*(char *)(param_1 + 0xf) != '\0' ||
      ((*(char *)(param_1 + 0x10) == '\0' || (*(char *)(param_1 + 0x50) == '\0')))))) {
    if ((*(char *)(param_1 + 0xa0) == '\x04') && (*(char *)(param_1 + 0xae) != '\0')) {
      *(undefined1 *)(param_1 + 0xa3) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)(param_1 + 0xae) = 1;
    FUN_ram_4804a9c8(param_1,param_2,1,6);
    return;
  }
  if ((*(int *)(param_1 + 0xd0) == 0) || ((uint)(param_2 - *(int *)(param_1 + 0xd0)) < 0x3e9)) {
    bVar1 = *(byte *)(param_1 + 0xcc);
    if (bVar1 == 4) {
      if (param_2 - *(int *)(param_1 + 0xd4) < 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xcc) = 5;
      iVar3 = FUN_ram_4804a56e(param_1,1,0,1,param_2);
    }
    else {
      if (4 < bVar1) {
        if (bVar1 != 6) {
          return;
        }
        if (*(char *)(param_1 + 0x85) == '\0') {
          return;
        }
        if (300 < (uint)(param_2 - *(int *)(param_1 + 0x8c))) {
          return;
        }
        if (*(char *)(param_1 + 0x86) == '\0') {
          return;
        }
        if (*(byte *)(param_1 + 0x88) < 2) {
          return;
        }
        if (*(char *)(param_1 + 0x87) != *(char *)(param_1 + 0x89)) {
          return;
        }
        if (*(char *)(param_1 + 0x87) != '\0') {
          return;
        }
LAB_ram_4804bb2c:
        *(int *)(param_1 + 0xe0) = param_2;
        *(undefined1 *)(param_1 + 0xcc) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 0;
        *(undefined1 *)(param_1 + 0xa2) = 7;
        *(undefined1 *)(param_1 + 0xdc) = 1;
        *(undefined2 *)(param_1 + 0xe4) = 0x100;
        return;
      }
      if (bVar1 == 1) {
        iVar3 = FUN_ram_4804a56e(param_1,1,0,1,param_2);
      }
      else {
        if (bVar1 != 2) {
          return;
        }
        if (*(char *)(param_1 + 0x85) == '\0') {
          return;
        }
        if (300 < (uint)(param_2 - *(int *)(param_1 + 0x8c))) {
          return;
        }
        if (*(char *)(param_1 + 0x86) == '\0') {
          return;
        }
        if (*(byte *)(param_1 + 0x88) < 2) {
          return;
        }
        cVar2 = *(char *)(param_1 + 0x89);
        if (*(char *)(param_1 + 0x87) != cVar2) {
          return;
        }
        if (cVar2 == '\x05') {
          return;
        }
        if (cVar2 == '\0') goto LAB_ram_4804bb2c;
        if (cVar2 != '\x03') {
          return;
        }
        *(undefined1 *)(param_1 + 0xcc) = 3;
        iVar3 = FUN_ram_4804a56e(param_1,0xd,1,0,param_2);
      }
    }
    if (iVar3 != 0) {
      return;
    }
    uVar4 = 5;
  }
  else {
    *(undefined1 *)(param_1 + 0xa4) = 6;
    uVar4 = 0xf;
  }
  FUN_ram_4804ac7e(param_1,param_2,uVar4);
  return;
}


