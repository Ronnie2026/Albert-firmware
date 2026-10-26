/* Firmware entry: 0x4814ac3a */

int FUN_ram_4814ac3a(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = -1;
  piVar3 = &DAT_ram_4ff6d06c;
  iVar6 = 0;
  do {
    iVar5 = *piVar3;
    if ((iVar5 != 0) && (iVar2 = *(int *)(iVar5 + 0x14), iVar2 != 0)) {
      if (param_1 == 0) {
        if (((*(byte *)(iVar2 + 0xe7) & 1) != 0) && ((*(byte *)(iVar2 + 0xe7) >> 2 & 1) != 0))
        goto LAB_ram_4814acc4;
      }
      else if (iVar2 == param_1) {
LAB_ram_4814acc4:
        if (*(char *)(iVar5 + 0x24) != '\x01') {
          if (*(char *)(iVar5 + 0x24) == '\x02') {
            return iVar6;
          }
          if (iVar1 == -1) {
            iVar1 = iVar6;
          }
        }
      }
    }
    uVar7 = iVar6 + 1;
    piVar3 = piVar3 + 3;
    iVar6 = (int)(uVar7 * 0x1000000) >> 0x18;
    if ((uVar7 & 0xff) == 3) {
      if (iVar1 != -1) {
        return iVar1;
      }
      iVar1 = (int)DAT_ram_4ff6e231;
      if (param_1 == 0) {
        iVar6 = (iVar1 + 1) * 0x1000000;
        iVar1 = iVar6 >> 0x18;
        if (iVar1 < 3) {
          DAT_ram_4ff6e231 = (char)((uint)iVar6 >> 0x18);
        }
        else {
          DAT_ram_4ff6e231 = '\0';
          iVar1 = 0;
        }
      }
      cVar4 = '\x03';
      do {
        cVar4 = cVar4 + -1;
        if (((&DAT_ram_4ff6d06c)[iVar1 * 3] != 0) &&
           (iVar6 = *(int *)((&DAT_ram_4ff6d06c)[iVar1 * 3] + 0x14), iVar6 != 0)) {
          if (param_1 == 0) {
            if (((*(byte *)(iVar6 + 0xe7) & 1) != 0) && ((*(byte *)(iVar6 + 0xe7) >> 2 & 1) != 0)) {
              gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
              return iVar1;
            }
          }
          else if (param_1 == iVar6) {
            return iVar1;
          }
        }
        iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
        if (2 < iVar1) {
          iVar1 = 0;
        }
      } while (cVar4 != '\0');
      return -1;
    }
  } while( true );
}


