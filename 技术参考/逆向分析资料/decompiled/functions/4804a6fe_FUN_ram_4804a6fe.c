/* Firmware entry: 0x4804a6fe */

void FUN_ram_4804a6fe(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0xa2) != '\t') && (*(char *)(param_1 + 0xa2) != '\x04')) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(int *)(param_1 + 300) != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if ((((*(char *)(param_1 + 0xae) == '\0') && (*(char *)(param_1 + 0x85) != '\0')) &&
      ((uint)(param_2 - *(int *)(param_1 + 0x8c)) < 0x12d)) && (*(char *)(param_1 + 0x89) == '\0'))
  {
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined2 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
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
    *(undefined2 *)(param_1 + 0xac) = 0;
    *(undefined2 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa2) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xb9) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xa6) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined1 *)(param_1 + 0xae) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 10) == '\0')) ||
     ((*(char *)(param_1 + 0xc) != '\0' ||
      ((*(char *)(param_1 + 0xf) != '\0' || (*(char *)(param_1 + 0x10) == '\0')))))) {
    cVar2 = *(char *)(param_1 + 0xa3);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined2 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
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
    *(undefined1 *)(param_1 + 0xa5) = 0;
    *(undefined1 *)(param_1 + 0xa6) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined2 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xb9) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(char *)(param_1 + 0xa3) = cVar2;
    *(undefined2 *)(param_1 + 0xa0) = 5;
    *(undefined1 *)(param_1 + 0xa2) = 10;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(char *)(param_1 + 0xae) == '\0') {
    if ((*(char *)(param_1 + 0x2c) == '\0') || (300 < (uint)(param_2 - *(int *)(param_1 + 0x30))))
    goto LAB_ram_4804a918;
    if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x3c)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    uVar3 = 7;
  }
  else {
    uVar3 = 6;
    if (*(char *)(param_1 + 0x50) == '\0') {
LAB_ram_4804a918:
      if (*(int *)(param_1 + 0x100) == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if ((uint)(param_2 - *(int *)(param_1 + 0x100)) < 0x3e9) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      *(undefined4 *)(param_1 + 300) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined2 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
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
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined2 *)(param_1 + 0xac) = 0;
      *(undefined1 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined1 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined2 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined1 *)(param_1 + 0xb9) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined1 *)(param_1 + 0xa6) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0x30a0005;
      *(undefined2 *)(param_1 + 0xa4) = 1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  iVar1 = FUN_ram_4804a56e(param_1,uVar3,0,1,param_2);
  if (iVar1 == 0) {
    cVar2 = *(char *)(param_1 + 0xa3);
    if (cVar2 == '\0') {
      cVar2 = '\x05';
    }
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined2 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
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
    *(undefined1 *)(param_1 + 0xa5) = 0;
    *(undefined1 *)(param_1 + 0xa6) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined2 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0xb9) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(char *)(param_1 + 0xa3) = cVar2;
    *(undefined2 *)(param_1 + 0xa0) = 5;
    *(undefined1 *)(param_1 + 0xa2) = 10;
  }
  return;
}


