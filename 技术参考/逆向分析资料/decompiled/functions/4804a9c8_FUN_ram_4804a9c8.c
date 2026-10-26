/* Firmware entry: 0x4804a9c8 */

void FUN_ram_4804a9c8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    *(char *)(param_1 + 0xa3) = (char)param_3;
  }
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (((*(char *)(param_1 + 0xae) == '\0') && (*(char *)(param_1 + 0xac) == '\0')) &&
     (*(char *)(param_1 + 0xa0) != '\x03')) {
    if (param_4 == 6) {
      *(undefined1 *)(param_1 + 0xae) = 1;
LAB_ram_4804ab88:
      *(undefined1 *)(param_1 + 0xac) = 0;
      uVar2 = 0;
      uVar3 = 9;
    }
    else {
      if (param_4 == 7) goto LAB_ram_4804ab70;
LAB_ram_4804aa0c:
      uVar2 = 7;
      uVar3 = 9;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xae) = 1;
    if (param_4 != 7) {
      if (param_4 != 6) goto LAB_ram_4804aa0c;
      goto LAB_ram_4804ab88;
    }
LAB_ram_4804ab70:
    *(undefined1 *)(param_1 + 0xa5) = 0;
    *(undefined1 *)(param_1 + 0xa6) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    uVar2 = 7;
    uVar3 = 4;
  }
  *(undefined1 *)(param_1 + 0xa1) = uVar2;
  *(undefined1 *)(param_1 + 0xa2) = uVar3;
  *(undefined1 *)(param_1 + 0xa0) = 4;
  if (*(int *)(param_1 + 0x100) == 0) {
    iVar5 = param_2;
    if (param_2 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x100) = iVar5;
  }
  iVar5 = *(int *)(param_1 + 300);
  if (iVar5 == 0) {
LAB_ram_4804aa5a:
    if (*(char *)(param_1 + 0x128) != '\0') goto LAB_ram_4804aa5c;
LAB_ram_4804aa8e:
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    if (((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 10) == '\0')) ||
       (*(char *)(param_1 + 0xc) != '\0')) {
      cVar4 = *(char *)(param_1 + 0xa3);
      if (cVar4 == '\0') {
        cVar4 = '\x01';
      }
    }
    else {
LAB_ram_4804aace:
      if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(param_1 + 0x10) != '\0')) {
        if (*(char *)(param_1 + 0xae) == '\0') {
          if (*(char *)(param_1 + 0x2c) == '\0') {
            return;
          }
          if (300 < (uint)(param_2 - *(int *)(param_1 + 0x30))) {
            return;
          }
        }
        else if (*(char *)(param_1 + 0x50) == '\0') {
          return;
        }
        iVar1 = FUN_ram_4804a56e(param_1,param_4,0,1);
        if (iVar1 != 0) {
          return;
        }
        cVar4 = *(char *)(param_1 + 0xa3);
        if (cVar4 == '\0') {
          cVar4 = '\x05';
        }
        if ((iVar5 != 0) && (*(int *)(param_1 + 0x150) == 0)) {
          *(int *)(param_1 + 0x150) = iVar5;
        }
        *(undefined4 *)(param_1 + 300) = 0;
        *(undefined4 *)(param_1 + 0x130) = 0;
        *(undefined2 *)(param_1 + 0x134) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0x14c) = 0;
        *(undefined1 *)(param_1 + 0x128) = 0;
        goto LAB_ram_4804aafc;
      }
      cVar4 = *(char *)(param_1 + 0xa3);
      if (cVar4 == '\0') {
        cVar4 = '\x01';
      }
      if (iVar5 != 0) goto LAB_ram_4804abde;
    }
  }
  else {
    if (*(char *)(param_1 + 0x135) == '\0') {
      *(int *)(param_1 + 0x150) = iVar5;
      *(undefined4 *)(param_1 + 300) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined1 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      iVar5 = 0;
      goto LAB_ram_4804aa5a;
    }
    if (*(char *)(param_1 + 0x128) == '\0') {
      return;
    }
LAB_ram_4804aa5c:
    if (*(char *)(param_1 + 0x106) == '\0') {
      *(undefined1 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    if (iVar5 == 0) goto LAB_ram_4804aa8e;
    if (*(char *)(param_1 + 0x135) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    if (((*(char *)(param_1 + 9) != '\0') && (*(char *)(param_1 + 10) != '\0')) &&
       (*(char *)(param_1 + 0xc) == '\0')) goto LAB_ram_4804aace;
    cVar4 = *(char *)(param_1 + 0xa3);
    if (cVar4 == '\0') {
      cVar4 = '\x01';
    }
LAB_ram_4804abde:
    if (*(int *)(param_1 + 0x150) == 0) {
      *(int *)(param_1 + 0x150) = iVar5;
    }
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
LAB_ram_4804aafc:
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(char *)(param_1 + 0xa3) = cVar4;
  *(undefined2 *)(param_1 + 0xa0) = 5;
  *(undefined1 *)(param_1 + 0xa2) = 10;
  return;
}


