/* Firmware entry: 0x4814aa92 */

int FUN_ram_4814aa92(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar2 = &DAT_ram_4ff6d320;
  pcVar6 = &DAT_ram_4ff6d320;
  iVar1 = 0;
  do {
    uVar4 = iVar1 + 1;
    if (*pcVar6 == '\0') {
      return iVar1;
    }
    iVar1 = (int)(uVar4 * 0x1000000) >> 0x18;
    pcVar6 = pcVar6 + 0x2c;
  } while ((uVar4 & 0xff) != 5);
  iVar1 = 0;
  pcVar6 = pcVar2;
  do {
    uVar4 = iVar1 + 1;
    if ((*pcVar6 == '\x03') && (pcVar6[1] == '\0')) goto LAB_ram_4814abc6;
    iVar1 = (int)(uVar4 * 0x1000000) >> 0x18;
    pcVar6 = pcVar6 + 0x2c;
  } while ((uVar4 & 0xff) != 5);
  iVar1 = 0;
  pcVar6 = pcVar2;
  do {
    uVar4 = iVar1 + 1;
    if ((*pcVar6 == '\x05') && (pcVar6[1] == '\0')) goto LAB_ram_4814abc6;
    iVar1 = (int)(uVar4 * 0x1000000) >> 0x18;
    pcVar6 = pcVar6 + 0x2c;
  } while ((uVar4 & 0xff) != 5);
  iVar1 = 0;
  pcVar6 = pcVar2;
  do {
    uVar4 = iVar1 + 1;
    if ((*pcVar6 == '\x04') && (pcVar6[1] == '\0')) goto LAB_ram_4814abc6;
    iVar1 = (int)(uVar4 * 0x1000000) >> 0x18;
    pcVar6 = pcVar6 + 0x2c;
  } while ((uVar4 & 0xff) != 5);
  iVar1 = -1;
  uVar4 = 0xffffffff;
  iVar3 = 0;
  pcVar6 = pcVar2;
  do {
    uVar5 = iVar3 + 1;
    if (((*pcVar6 == '\x02') && (pcVar6[1] == '\0')) && (*(uint *)(pcVar6 + 4) < uVar4)) {
      uVar4 = *(uint *)(pcVar6 + 4);
      iVar1 = iVar3;
    }
    iVar3 = (int)(uVar5 * 0x1000000) >> 0x18;
    pcVar6 = pcVar6 + 0x2c;
  } while ((uVar5 & 0xff) != 5);
  if (iVar1 == -1) {
    piVar7 = &DAT_ram_4ff6d31c;
    uVar4 = 0;
    iVar3 = 0;
    do {
      uVar5 = iVar3 + 1;
      if (((*piVar7 == 0) && ((char)piVar7[1] == '\x01')) &&
         ((*(char *)((int)piVar7 + 5) == '\0' && (uVar4 <= (uint)piVar7[2])))) {
        uVar4 = piVar7[2];
        iVar1 = iVar3;
      }
      iVar3 = (int)(uVar5 * 0x1000000) >> 0x18;
      piVar7 = piVar7 + 0xb;
    } while ((uVar5 & 0xff) != 5);
    if (iVar1 == -1) {
      uVar4 = 0;
      iVar3 = 0;
      do {
        uVar5 = iVar3 + 1;
        if (((*pcVar2 == '\x01') && (pcVar2[1] == '\0')) && (uVar4 <= *(uint *)(pcVar2 + 4))) {
          iVar1 = iVar3;
          uVar4 = *(uint *)(pcVar2 + 4);
        }
        iVar3 = (int)(uVar5 * 0x1000000) >> 0x18;
        pcVar2 = pcVar2 + 0x2c;
      } while ((uVar5 & 0xff) != 5);
      if (iVar1 == -1) {
        return -1;
      }
      if (iVar1 == 5) {
        return 5;
      }
      goto LAB_ram_4814abc6;
    }
  }
  if (iVar1 == 5) {
    return 5;
  }
LAB_ram_4814abc6:
  FUN_ram_4814aa20(iVar1);
  return iVar1;
}


