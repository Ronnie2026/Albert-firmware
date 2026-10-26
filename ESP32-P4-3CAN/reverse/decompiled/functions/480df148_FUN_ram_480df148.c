/* Firmware entry: 0x480df148 */

void FUN_ram_480df148(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *(int *)(param_1 + 0x58);
  piVar3 = (int *)(iVar7 + 0x60c);
  do {
    iVar4 = *piVar3 + 1;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *piVar3 = iVar4;
    piVar3 = piVar3 + 0x2c;
  } while ((int *)(iVar7 + 0x81c) != piVar3);
  iVar4 = *(int *)(param_1 + 0xdcc) + 1;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0xdcc) = iVar4;
  if (param_2 == 0) {
    if (*(char *)(iVar7 + 0x9fa) != '\0') {
      *(undefined1 *)(iVar7 + 0x9fd) = 3;
      *(undefined1 *)(iVar7 + 0x9fe) = 6;
      *(undefined2 *)(iVar7 + 0x9fa) = 0;
      if ((*(byte *)(iVar7 + 0x9d8) < 8) &&
         (*(int *)(iVar7 + 0x9e0) != 0 || *(int *)(iVar7 + 0x9e4) != 0)) {
        iVar5 = (uint)*(byte *)(iVar7 + 0x9d8) * 0x120;
        iVar4 = iVar7 + iVar5;
        if ((*(char *)(iVar4 + 0x70d6) != '\0') &&
           (((*(int *)(iVar4 + 0x70c8) == *(int *)(iVar7 + 0x9e0) &&
             (*(int *)(iVar4 + 0x70cc) == *(int *)(iVar7 + 0x9e4))) &&
            (*(char *)(iVar4 + 0x70d8) == '\0')))) {
          *(undefined1 *)(iVar4 + 0x70d7) = 0;
          *(undefined **)(iVar7 + iVar5 + 0x70d8) = &misa;
          iVar4 = iVar5 + 0x3678 + iVar7 + 0x3a40;
          if ((*(int *)(iVar4 + 0x30) != 0 || *(int *)(iVar4 + 0x34) != 0) &&
             (uVar2 = (uint)*(byte *)(iVar4 + 0x29), uVar2 != 0xff)) {
            cVar1 = *(char *)(iVar4 + 0x28);
            iVar5 = 2;
            if (cVar1 == '\x02') {
              iVar5 = 1;
            }
            else if (cVar1 != '\x04') {
              if (cVar1 != '\x01') goto LAB_ram_480df218;
              iVar5 = 0;
            }
            if (uVar2 < 0x18) {
              if (uVar2 < 0x10) {
                iVar5 = iVar5 * 0x1228 + uVar2 * 0xe8;
              }
              else {
                iVar5 = (uVar2 - 0x10) * 0x120;
                iVar6 = iVar7 + iVar5;
                if ((*(char *)(iVar6 + 0x70d6) == '\0') || (*(char *)(iVar6 + 0x70b8) != cVar1))
                goto LAB_ram_480df218;
                iVar5 = iVar5 + 14000;
              }
              iVar5 = iVar5 + iVar7 + 0x3a40;
              if (((*(int *)(iVar5 + 0xd8) == *(int *)(iVar4 + 0x30)) &&
                  (*(int *)(iVar5 + 0xdc) == *(int *)(iVar4 + 0x34))) &&
                 (*(char *)(iVar5 + 0xe6) == '\x01')) {
                FUN_ram_4804691a();
              }
            }
          }
        }
      }
    }
LAB_ram_480df218:
    *(undefined1 *)(param_1 + 0xd68) = 0;
    if (*(int *)(param_1 + 0xd78) == 0) goto LAB_ram_480df19a;
    if (*(int *)(param_1 + 0xda0) == 0) {
      FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0xd78) = 0;
      goto LAB_ram_480df19a;
    }
  }
  else if ((*(int *)(param_1 + 0xd78) == 0) || (*(int *)(param_1 + 0xda0) == 0))
  goto LAB_ram_480df19a;
  FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xd78) = 0;
  *(undefined4 *)(param_1 + 0xd7c) = 0;
  *(undefined4 *)(param_1 + 0xd84) = 0;
  *(undefined4 *)(param_1 + 0xd88) = 0;
  *(undefined4 *)(param_1 + 0xd8c) = 0;
  *(undefined4 *)(param_1 + 0xd90) = 0;
  *(undefined4 *)(param_1 + 0xd98) = 0;
  *(undefined4 *)(param_1 + 0xd9c) = 0;
  *(undefined4 *)(param_1 + 0xda0) = 0;
  *(undefined4 *)(param_1 + 0xd80) = 8;
  *(undefined4 *)(param_1 + 0xd94) = 0x10000;
LAB_ram_480df19a:
  cVar1 = *(char *)(param_1 + 0xd08);
  if ((cVar1 == '\0') && (cVar1 = '\x01', *(int *)(param_1 + 0xd5c) == 0)) {
    cVar1 = *(int *)(param_1 + 0xd24) != 0;
  }
  *(undefined1 *)(param_1 + 0xd08) = 0;
  *(undefined4 *)(param_1 + 0xd24) = 0;
  *(undefined1 *)(param_1 + 0xd28) = 3;
  if (param_1 + 0xd14 != param_1 + 0xd18) {
    *(undefined1 *)(param_1 + 0xd14) = 0;
    *(undefined1 *)(param_1 + 0xd15) = 0;
    *(undefined1 *)(param_1 + 0xd16) = 0;
    *(undefined1 *)(param_1 + 0xd17) = 0;
  }
  *(undefined4 *)(param_1 + 0xd5c) = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0xd68) = 1;
  }
  return;
}


