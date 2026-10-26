/* Firmware entry: 0x4809df80 */

int FUN_ram_4809df80(int *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x32) {
    if (*(char *)(param_3 + 1) == '\f') {
      return (*(byte *)(param_3 + 0x11) * param_2 + 3 >> 2) + param_2 * 100;
    }
    if (*(char *)(param_3 + 1) == '\x0e') {
      uVar6 = (uint)*(byte *)(param_3 + 0x24);
      if (0xf0 < uVar6) {
        uVar6 = 0xf0;
      }
      uVar6 = uVar6 >> 2;
      goto LAB_ram_4809dfbc;
    }
    if ((((char)param_1[0xa0] != '\0') && (*(char *)((int)param_1 + 0x281) != '\0')) &&
       (*(char *)((int)param_1 + 0x282) != '\0')) {
LAB_ram_4809e0e0:
      uVar6 = 10;
      if ((uint)(param_4 - param_1[0xa2]) < 0x5dd) {
        cVar1 = *(char *)((int)param_1 + 0x285);
        if ((char)param_1[0xa1] == '\0') {
          uVar6 = (uint)*(byte *)(param_3 + 0x9d);
          if (0x3c < uVar6) {
            uVar6 = 0x3c;
          }
        }
        else if (*(char *)((int)param_1 + 0x283) != '\0') {
          uVar6 = 0x3c;
          if (cVar1 < '=') {
            uVar6 = (int)cVar1 & ~(int)cVar1 >> 0x1f;
          }
          uVar6 = uVar6 & 0xff;
        }
      }
      if (0x31 < param_2) goto LAB_ram_4809dfac;
    }
    uVar6 = (uint)*(byte *)(param_3 + 0x9c);
  }
  else {
    iVar5 = *param_1;
    cVar1 = *(char *)(iVar5 + 0x36);
    if (*(char *)(param_3 + 1) == '\f') {
      if ((cVar1 != '\0') || (*(char *)(iVar5 + 0x37) == '\0')) {
        if (0x8b < param_2) goto LAB_ram_4809e06a;
        uVar6 = param_2 - 0x6e;
        if (*(char *)(param_3 + 0x12) == '\0') {
          uVar7 = (uint)*(byte *)((int)param_1 + 0x17d);
          uVar4 = (uint)*(ushort *)(param_3 + 0x62);
          if (uVar7 == 3) {
            if (uVar6 < 10) goto LAB_ram_4809e0ce;
            goto LAB_ram_4809e222;
          }
          uVar3 = (uint)*(ushort *)(param_3 + 0x60);
          if (uVar7 < 3) {
            uVar2 = *(ushort *)(param_3 + 0x5e);
            uVar3 = uVar4;
            uVar4 = (uint)*(ushort *)(param_3 + 0x60);
            goto LAB_ram_4809e13c;
          }
LAB_ram_4809e1a6:
          uVar4 = uVar3;
          if (uVar6 < 10) goto LAB_ram_4809e0ce;
          uVar7 = 1;
        }
        else {
          uVar7 = (uint)*(byte *)(param_3 + 0x13);
          if (uVar7 == 3) {
            if (uVar6 < 10) {
              uVar4 = (uint)*(ushort *)(param_3 + 0x62);
              goto LAB_ram_4809e0ce;
            }
LAB_ram_4809e222:
            uVar7 = 2;
          }
          else {
            uVar3 = (uint)*(ushort *)(param_3 + 0x60);
            if (2 < uVar7) goto LAB_ram_4809e1a6;
            uVar2 = *(ushort *)(param_3 + 0x5e);
            uVar3 = (uint)*(ushort *)(param_3 + 0x62);
            uVar4 = (uint)*(ushort *)(param_3 + 0x60);
LAB_ram_4809e13c:
            if (uVar6 < 10) {
              if ((uVar7 != 1) && (uVar4 = uVar3, uVar7 != 2)) {
                uVar4 = (uint)uVar2;
              }
              goto LAB_ram_4809e0ce;
            }
          }
        }
        iVar5 = 0;
        if (((0x3b < (int)param_2) && (iVar5 = 1, 0x45 < (int)param_2)) &&
           (iVar5 = 2, 0x4f < (int)param_2)) {
          if ((int)param_2 < 0x5a) {
            iVar5 = 3;
          }
          else if ((int)param_2 < 100) {
            iVar5 = 4;
          }
          else {
            iVar5 = (0x77 < (int)param_2) + 5;
          }
        }
        uVar4 = (uint)*(ushort *)((uVar7 * 7 + iVar5) * 2 + param_3 + 0x34);
LAB_ram_4809e0ce:
        return uVar4 * 100;
      }
    }
    else if (*(char *)(param_3 + 1) == '\x0e') {
      if ((cVar1 != '\0') || (*(char *)(iVar5 + 0x37) == '\0')) {
        if (param_2 < 0x8c) {
          if (param_2 - 0x6e < 10) {
            uVar4 = (uint)*(ushort *)(param_3 + 0x22);
          }
          else {
            iVar5 = 0;
            if (((0x3b < (int)param_2) && (iVar5 = 1, 0x45 < (int)param_2)) &&
               ((iVar5 = 2, 0x4f < (int)param_2 &&
                ((iVar5 = 3, 0x59 < (int)param_2 && (iVar5 = 4, 99 < (int)param_2)))))) {
              iVar5 = (0x77 < (int)param_2) + 5;
            }
            uVar4 = (uint)*(ushort *)(iVar5 * 2 + param_3 + 0x14);
          }
          goto LAB_ram_4809e0ce;
        }
        goto LAB_ram_4809e06a;
      }
    }
    else if (cVar1 != '\0') {
      if (param_2 < 0x8c) {
        if (0x3333 < (param_2 * -0x3333 & 0xffff)) {
          return 0;
        }
        return (uint)*(ushort *)(iVar5 + (param_2 / 5) * 2 + 0x36) * 100;
      }
LAB_ram_4809e06a:
      return param_2 * 100;
    }
    if ((char)param_1[0xa0] == '\0') {
      uVar6 = 10;
    }
    else {
      uVar6 = 10;
      if ((*(char *)((int)param_1 + 0x281) != '\0') && (*(char *)((int)param_1 + 0x282) != '\0'))
      goto LAB_ram_4809e0e0;
    }
  }
LAB_ram_4809dfac:
  if (0x3c < uVar6) {
    uVar6 = 0x3c;
  }
LAB_ram_4809dfbc:
  return (uVar6 + 100 & 0xff) * param_2;
}


