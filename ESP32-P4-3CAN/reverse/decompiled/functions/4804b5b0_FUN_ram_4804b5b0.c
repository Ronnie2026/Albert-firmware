/* Firmware entry: 0x4804b5b0 */

void FUN_ram_4804b5b0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xa0) == '\x04') {
    if (*(char *)(param_1 + 0xae) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xac) != '\0') goto LAB_ram_4804b620;
    cVar3 = *(char *)(param_1 + 0xa2);
  }
  else {
    if ((*(char *)(param_1 + 0xac) != '\0') || (*(char *)(param_1 + 0xa0) == '\x03'))
    goto LAB_ram_4804b620;
    cVar3 = *(char *)(param_1 + 0xa2);
  }
  if ((cVar3 == '\x05') || ((byte)(cVar3 - 6U) < 3)) {
LAB_ram_4804b620:
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
    if ((*(int *)(param_1 + 300) != 0) && (*(char *)(param_1 + 0x135) == '\0')) {
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 300);
      *(undefined4 *)(param_1 + 300) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined1 *)(param_1 + 0x134) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    if ((*(char *)(param_1 + 0x128) != '\0') && (*(char *)(param_1 + 0x106) == '\0')) {
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
    FUN_ram_4804a9c8(param_1,param_3,0,6);
    return;
  }
  cVar1 = *(char *)(param_1 + 0xa1);
  if (cVar1 == '\x05') {
    *(undefined1 *)(param_1 + 0xa1) = 0;
    if (*(char *)(param_1 + 0xa5) == '\0') {
      cVar3 = '\x01';
    }
    else {
      *(undefined1 *)(param_1 + 0xa0) = 2;
      if (cVar3 != '\x02') {
        cVar3 = '\x03';
      }
    }
    *(char *)(param_1 + 0xa2) = cVar3;
    *(undefined1 *)(param_1 + 0x70) = 0;
    return;
  }
  if (cVar1 == '\x04') {
    FUN_ram_4804ae6a(param_1,param_3);
    return;
  }
  if (cVar1 != '\x03') {
    if ((cVar3 == '\x01') && (*(char *)(param_1 + 0x89) == '\x03')) {
      *(undefined1 *)(param_1 + 0xa0) = 1;
      return;
    }
    return;
  }
  if ((uint)(param_2 - *(int *)(param_1 + 0x6c)) < 0x191) {
    *(int *)(param_1 + 0x74) = param_2 + 600;
    *(undefined1 *)(param_1 + 0xa1) = 2;
    if (*(char *)(param_1 + 0xa5) == '\0') {
LAB_ram_4804b722:
      uVar2 = 1;
      goto LAB_ram_4804b704;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xa1) = 0;
    if (*(char *)(param_1 + 0xa5) == '\0') {
      if (*(char *)(param_1 + 0x89) == '\x03') {
        *(undefined1 *)(param_1 + 0xa0) = 1;
      }
      goto LAB_ram_4804b722;
    }
    *(undefined1 *)(param_1 + 0xa0) = 2;
  }
  uVar2 = 3;
  if (cVar3 == '\x02') {
    uVar2 = 2;
  }
LAB_ram_4804b704:
  *(undefined1 *)(param_1 + 0xa2) = uVar2;
  return;
}


