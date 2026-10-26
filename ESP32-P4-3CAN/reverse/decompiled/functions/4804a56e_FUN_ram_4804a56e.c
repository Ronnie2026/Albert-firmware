/* Firmware entry: 0x4804a56e */

char FUN_ram_4804a56e(int param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint auStack_30 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x128) != '\0') {
    return '\0';
  }
  if (*(int *)(param_1 + 300) != 0) {
    return '\0';
  }
  if (param_4 == 0) {
    if ((((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 10) == '\0')) ||
        (*(char *)(param_1 + 0xc) != '\0')) || (*(char *)(param_1 + 0xd) == '\0'))
    goto LAB_ram_4804a596;
    cVar2 = *(char *)(param_1 + 0xe);
  }
  else {
    if ((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 10) == '\0'))
    goto LAB_ram_4804a596;
    cVar2 = *(char *)(param_1 + 0xc);
  }
  if (((cVar2 != '\0') || (*(char *)(param_1 + 0xf) != '\0')) ||
     (cVar2 = *(char *)(param_1 + 0x10), cVar2 == '\0')) {
LAB_ram_4804a596:
    cVar2 = '\t';
    if (*(char *)(param_1 + 0xf) == '\0') {
      cVar2 = (-(*(char *)(param_1 + 0xe) == '\0') & 0xf7U) + 10;
    }
    *(char *)(param_1 + 0xa3) = cVar2;
    return '\0';
  }
  auStack_30[0] = 0;
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  auStack_30[3] = 0;
  if ((param_2 < 0xe) && ((0x206eU >> (param_2 & 0x1f) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x50) != '\0') &&
       (iVar1 = FUN_ram_4804a006(param_1 + 0x40,param_3,auStack_30), iVar1 != 0)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
LAB_ram_4804a638:
      *(char *)(param_1 + 0x105) = (char)param_3;
      *(char *)(param_1 + 0x114) = (char)(param_4 << 1);
      *(char *)(param_1 + 0x107) = (char)param_2;
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xb0);
      *(undefined1 *)(param_1 + 0x104) = 1;
      *(char *)(param_1 + 0x106) = (char)param_4;
      *(int *)(param_1 + 0x110) = param_5;
      *(uint *)(param_1 + 0x10c) = *(int *)(param_1 + 0xb0) * -0x61c8864f ^ auStack_30[0];
      FUN_ram_4ff45158(param_1 + 0x118,auStack_30,0xe);
      *(undefined1 *)(param_1 + 0x128) = 1;
      return cVar2;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x2c) == '\0') || (300 < (uint)(param_5 - *(int *)(param_1 + 0x30)))) {
      *(undefined1 *)(param_1 + 0xa3) = 3;
      *(undefined1 *)(param_1 + 0xa4) = 1;
      return '\0';
    }
    iVar1 = FUN_ram_4804a006(param_1 + 0x1c,param_3,auStack_30);
    if (iVar1 != 0) goto LAB_ram_4804a638;
  }
  *(undefined1 *)(param_1 + 0xa3) = 0xb;
  return '\0';
}


