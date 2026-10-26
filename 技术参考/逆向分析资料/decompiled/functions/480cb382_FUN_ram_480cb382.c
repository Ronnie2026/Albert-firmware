/* Firmware entry: 0x480cb382 */

void FUN_ram_480cb382(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)((int)param_1 + 0x35a);
  if (bVar1 == 10) {
    iVar3 = *param_1;
    if (*(char *)(iVar3 + 0xa9a) != '\0') {
      *(undefined1 *)(iVar3 + 0xa9d) = 2;
      *(undefined2 *)(iVar3 + 0xa9a) = 0;
      *(undefined1 *)(iVar3 + 0xa9e) = 7;
      if ((*(byte *)(iVar3 + 0xa78) < 8) &&
         (*(int *)(iVar3 + 0xa80) != 0 || *(int *)(iVar3 + 0xa84) != 0)) {
        iVar6 = (uint)*(byte *)(iVar3 + 0xa78) * 0x120;
        iVar5 = iVar3 + iVar6;
        if ((*(char *)(iVar5 + 0x70d6) != '\0') &&
           (((*(int *)(iVar5 + 0x70c8) == *(int *)(iVar3 + 0xa80) &&
             (*(int *)(iVar5 + 0x70cc) == *(int *)(iVar3 + 0xa84))) &&
            (*(char *)(iVar5 + 0x70d8) == '\0')))) {
          *(undefined1 *)(iVar5 + 0x70d7) = 0;
          *(undefined2 *)(iVar3 + iVar6 + 0x70d8) = 0x201;
          iVar5 = iVar6 + 0x3678 + iVar3 + 0x3a40;
          if ((*(int *)(iVar5 + 0x30) != 0 || *(int *)(iVar5 + 0x34) != 0) &&
             (uVar4 = (uint)*(byte *)(iVar5 + 0x29), uVar4 != 0xff)) {
            cVar2 = *(char *)(iVar5 + 0x28);
            iVar6 = 2;
            if (cVar2 == '\x02') {
              iVar6 = 1;
            }
            else if ((cVar2 != '\x04') && (iVar6 = 0, cVar2 != '\x01')) {
              return;
            }
            if (uVar4 < 0x18) {
              if (uVar4 < 0x10) {
                iVar6 = uVar4 * 0xe8 + iVar6 * 0x1228;
              }
              else {
                iVar6 = iVar3 + (uVar4 - 0x10) * 0x120;
                if (*(char *)(iVar6 + 0x70d6) == '\0') {
                  return;
                }
                if (*(char *)(iVar6 + 0x70b8) != cVar2) {
                  return;
                }
                iVar6 = (uVar4 - 0x10) * 0x120 + 14000;
              }
              iVar6 = iVar6 + iVar3 + 0x3a40;
              if (((*(int *)(iVar6 + 0xd8) == *(int *)(iVar5 + 0x30)) &&
                  (*(int *)(iVar6 + 0xdc) == *(int *)(iVar5 + 0x34))) &&
                 (*(char *)(iVar6 + 0xe6) == '\x01')) {
                FUN_ram_4804691a();
                return;
              }
            }
          }
        }
      }
    }
  }
  else if ((((2 < (byte)((char)param_1[0xd6] - 2U)) &&
            ((*(char *)((int)param_1 + 0x35d) == '\0' || (bVar1 != 3)))) && (param_1[0x1e7] == 0))
          && (((param_1[0x1ec] == 0 && (bVar1 < 2)) &&
              ((iVar3 = *param_1, *(char *)(iVar3 + 0xa9a) != '\0' &&
               (*(char *)(iVar3 + 0xa9b) != '\0')))))) {
    FUN_ram_4805c6b0(iVar3,4,1,0);
    return;
  }
  return;
}


