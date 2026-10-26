/* Firmware entry: 0x4804ae6a */

void FUN_ram_4804ae6a(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xac) != '\0') {
    return;
  }
  if ((byte)(*(char *)(param_1 + 0xa0) - 3U) < 2) {
    return;
  }
  if ((byte)(*(char *)(param_1 + 0xa2) - 5U) < 5) {
    return;
  }
  if (*(char *)(param_1 + 0xa5) != '\0') {
    *(undefined1 *)(param_1 + 0xa5) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    uVar1 = 0;
LAB_ram_4804aef0:
    FUN_ram_4804a9c8(param_1,param_2,uVar1,7);
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  if (((*(char *)(param_1 + 0x97) != '\0') && (*(char *)(param_1 + 0x98) != '\0')) &&
     (1 < *(byte *)(param_1 + 0x9a))) {
    uVar2 = 2;
    if (*(char *)(param_1 + 0x99) != *(char *)(param_1 + 0x9b)) goto LAB_ram_4804aec6;
    if ((byte)(*(char *)(param_1 + 0x99) - 3U) < 4) {
      if ((uint)(param_2 - *(int *)(param_1 + 0x9c)) < 0x3e9) {
        if ((((*(char *)(param_1 + 9) != '\0') && (*(char *)(param_1 + 10) != '\0')) &&
            ((*(char *)(param_1 + 0xc) == '\0' &&
             ((*(char *)(param_1 + 0xd) != '\0' && (*(char *)(param_1 + 0xe) == '\0')))))) &&
           ((*(char *)(param_1 + 0xf) == '\0' &&
            ((((*(char *)(param_1 + 0x10) != '\0' && (*(char *)(param_1 + 0xb) != '\0')) &&
              (*(char *)(param_1 + 0x2c) != '\0')) &&
             ((uint)(param_2 - *(int *)(param_1 + 0x30)) < 0x12d)))))) {
          *(undefined2 *)(param_1 + 0xb8) = 0;
          *(undefined4 *)(param_1 + 0xb4) = 0;
          iVar3 = *(int *)(param_1 + 0xb0) + 1;
          *(undefined1 *)(param_1 + 0xa5) = 1;
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          *(int *)(param_1 + 0xb0) = iVar3;
          *(undefined1 *)(param_1 + 0xa6) = 0;
          iVar3 = param_2;
          if (param_2 == 0) {
            iVar3 = 1;
          }
          *(int *)(param_1 + 0xa8) = iVar3;
          *(undefined4 *)(param_1 + 0xa0) = 0x20002;
          if (*(char *)(param_1 + 6) == '\0') {
            return;
          }
          iVar3 = FUN_ram_4804a56e(param_1,4,1,0,param_2);
          if (iVar3 != 0) {
            return;
          }
          uVar1 = 5;
          goto LAB_ram_4804aef0;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      goto LAB_ram_4804aec6;
    }
  }
  uVar2 = 2;
LAB_ram_4804aec6:
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa3) = uVar2;
  return;
}


