/* Firmware entry: 0x4808a6b8 */

undefined4
FUN_ram_4808a6b8(void *param_1,uint param_2,int param_3,uint param_4,int param_5,byte *param_6,
                int param_7,undefined1 *param_8)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  void *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_8 = 0;
  bVar1 = *(byte *)((int)param_1 + 0xc0);
  if (bVar1 < 5) {
    if (param_2 == 0) goto LAB_ram_4808a89c;
  }
  else {
    if ((uint)(param_7 - *(int *)((int)param_1 + 0xc4)) < 30000) {
      return 2;
    }
    *(undefined1 *)((int)param_1 + 0xc0) = 0;
    if (param_2 == 0) {
      *(undefined1 *)((int)param_1 + 0xc0) = 1;
      return 1;
    }
  }
  if ((param_4 - 1 < 0x3f) && (param_2 < 0x40)) {
    uVar12 = param_4 ^ param_2;
    uVar3 = 0;
    do {
      uVar11 = 0;
      if (uVar3 < param_2) {
        uVar11 = (uint)*(byte *)(param_3 + uVar3);
      }
      if (uVar3 < param_4) {
        uVar11 = uVar11 ^ *(byte *)(param_5 + uVar3);
      }
      uVar3 = uVar3 + 1;
      uVar12 = uVar12 | uVar11;
    } while (uVar3 != 0x3f);
    if (uVar12 == 0) {
      *(undefined1 *)((int)param_1 + 0xc0) = 0;
      __s = param_1;
      do {
        if ((*(char *)((int)__s + 0x2c) != '\0') &&
           ((0x240c83ff < (uint)(param_7 - *(int *)((int)__s + 0x24)) ||
            (0xa4cb7ff < (uint)(param_7 - *(int *)((int)__s + 0x28)))))) {
          memset(__s,0,0x2d);
        }
        __s = (void *)((int)__s + 0x30);
      } while (__s != (void *)((int)param_1 + 0xc0));
      iVar6 = 0;
      iVar13 = iVar6;
      if (*(char *)((int)param_1 + 0x2c) != '\0') {
        piVar7 = (int *)((int)param_1 + 0x54);
        iVar5 = 1;
        uVar3 = param_7 - *(int *)((int)param_1 + 0x24);
        do {
          iVar13 = iVar5;
          if ((char)piVar7[2] == '\0') break;
          if (uVar3 < (uint)(param_7 - *piVar7)) {
            uVar3 = param_7 - *piVar7;
            iVar6 = iVar5;
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 0xc;
          iVar13 = iVar6;
        } while (iVar5 != 4);
      }
      iVar6 = iVar13 * 0x30;
      pcVar4 = (char *)(iVar6 + 1 + (int)param_1);
      pbVar8 = param_6;
      do {
        pbVar9 = pbVar8 + 1;
        pcVar4[-1] = "0123456789abcdef"[*pbVar8 >> 4];
        *pcVar4 = "0123456789abcdef"[*pbVar8 & 0xf];
        pcVar4 = pcVar4 + 2;
        pbVar8 = pbVar9;
      } while (pbVar9 != param_6 + 0x10);
      *(undefined1 *)((int)param_1 + iVar13 * 0x30 + 0x20) = 0;
      puVar10 = (undefined1 *)((int)param_1 + iVar6);
      do {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *param_8 = uVar2;
        param_8 = param_8 + 1;
      } while ((undefined1 *)((int)param_1 + iVar6 + 0x21) != puVar10);
      *(int *)((int)param_1 + iVar13 * 0x30 + 0x28) = param_7;
      *(int *)((int)param_1 + iVar13 * 0x30 + 0x24) = param_7;
      *(undefined1 *)((int)param_1 + iVar13 * 0x30 + 0x2c) = 1;
      return 0;
    }
  }
  bVar1 = *(byte *)((int)param_1 + 0xc0);
LAB_ram_4808a89c:
  *(byte *)((int)param_1 + 0xc0) = bVar1 + 1;
  if ((byte)(bVar1 + 1) == '\x05') {
    *(int *)((int)param_1 + 0xc4) = param_7;
  }
  return 1;
}


