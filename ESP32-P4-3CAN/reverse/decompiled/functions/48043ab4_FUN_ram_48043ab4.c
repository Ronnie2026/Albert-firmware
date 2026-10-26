/* Firmware entry: 0x48043ab4 */

void FUN_ram_48043ab4(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *__s;
  char cVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x37c) == '\0') {
    return;
  }
  if ((*param_2 != *(int *)(param_1 + 0x3d4)) || (param_2[1] != *(int *)(param_1 + 0x3bc))) {
    return;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x1f0);
  iVar9 = uVar8 * 0x30;
  __s = (void *)(iVar9 + 0x1f8 + param_1);
  *(byte *)(param_1 + 0x1f0) = *(byte *)(param_1 + 0x1f0) + 1 & 3;
  memset(__s,0,0x2d);
  iVar7 = param_1 + iVar9;
  *(int *)(iVar7 + 0x1f8) = *param_2;
  iVar10 = param_1 + 0x385;
  *(int *)(iVar7 + 0x1fc) = param_2[1];
  *(undefined4 *)(iVar7 + 0x200) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(iVar7 + 0x204) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(iVar7 + 0x20c) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(iVar7 + 0x208) = *(undefined4 *)(param_1 + 0x3ac);
  *(int *)(iVar7 + 0x210) = param_2[6];
  *(int *)(iVar7 + 0x214) = param_2[7];
  *(int *)(iVar7 + 0x218) = param_2[4];
  *(byte *)(iVar7 + 0x21c) = (*(byte *)(param_1 + 0x38b) & 1) << 5 | *(byte *)(param_1 + 0x38a) >> 3
  ;
  FUN_ram_4ff4522c(iVar9 + 0x21d + param_1,iVar10,7);
  if ((char)param_2[5] != '\0') {
    iVar9 = *(int *)(param_1 + 0x1b4);
    *(undefined1 *)(iVar7 + 0x224) = 4;
    *(int *)(param_1 + 0x1b4) = iVar9 + 1;
    FUN_ram_4ff45158(param_1 + 0x2b8,__s,0x2d);
    *(undefined1 *)(param_1 + 0x1a2) = 1;
    goto LAB_ram_48043c72;
  }
  *(undefined1 *)(param_1 + 0x1a2) = 0;
  cVar11 = (char)param_2[2];
  if (cVar11 == '\0') {
    if (*(char *)((int)param_2 + 9) != '\0') goto LAB_ram_48043bc8;
    iVar9 = *(int *)(param_1 + 0x1b0);
    *(undefined1 *)(iVar7 + 0x224) = 3;
    *(int *)(param_1 + 0x1b0) = iVar9 + 1;
LAB_ram_48043be2:
    cVar11 = '\0';
LAB_ram_48043be4:
    FUN_ram_4ff45158(param_1 + 0x2b8,__s,0x2d);
    FUN_ram_48042e98(param_1);
    cVar1 = *(char *)((int)param_2 + 9);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x3c0);
    if ((cVar1 == '\0') &&
       (cVar1 = *(char *)(param_1 + 0x19d), *(char *)(param_1 + 0x19d) = cVar1 + '\x01',
       2 < (byte)(cVar1 + 1U))) {
      if (*(char *)(param_1 + 0x19f) == '\0') {
        *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
      }
      *(undefined1 *)(param_1 + 0x19f) = 1;
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x31c);
    }
  }
  else {
    if (*(char *)((int)param_2 + 9) != '\0') {
LAB_ram_48043bc8:
      iVar7 = *(int *)(param_1 + 0x1b8);
      *(undefined1 *)(uVar8 * 0x30 + param_1 + 0x224) = 5;
      *(int *)(param_1 + 0x1b8) = iVar7 + 1;
      goto LAB_ram_48043be2;
    }
    if (param_2[4] < 0) {
      iVar9 = *(int *)(param_1 + 0x1ac);
      *(undefined1 *)(iVar7 + 0x224) = 2;
      *(int *)(param_1 + 0x1ac) = iVar9 + 1;
      goto LAB_ram_48043be4;
    }
    iVar9 = *(int *)(param_1 + 0x1a8);
    *(undefined1 *)(iVar7 + 0x224) = 1;
    *(int *)(param_1 + 0x1a8) = iVar9 + 1;
    *(undefined1 *)(param_1 + 0x19d) = 0;
  }
  if ((((param_2[1] == *(int *)(param_1 + 800)) &&
       (*(int *)(param_1 + 0x3c0) == *(int *)(param_1 + 0x31c))) &&
      (*(int *)(param_1 + 0x3a4) == *(int *)(param_1 + 0x318))) &&
     (*(int *)(param_1 + 0x3cc) == *(int *)(param_1 + 0xd8))) {
    if (*(char *)(param_1 + 0x3d1) == '\0') {
      if (cVar11 != '\0') {
        *(ushort *)(param_1 + 0x13e) =
             *(ushort *)(param_1 + 0x3c4) << 8 | *(ushort *)(param_1 + 0x3c4) >> 8;
        *(undefined2 *)(param_1 + 0x13c) = *(undefined2 *)(param_1 + 0x3c6);
        bVar2 = *(byte *)(uVar8 * 0x30 + param_1 + 0x21c);
        iVar7 = param_1 + 0x141;
        uVar8 = 0;
        do {
          if ((bVar2 >> (uVar8 & 0x1f) & 1) != 0) {
            iVar7 = FUN_ram_4ff4522c(iVar7,iVar10,5);
          }
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 5;
        } while (uVar8 != 6);
        *(undefined1 *)(param_1 + 0x37c) = 0;
        *(byte *)(param_1 + 0x140) = bVar2 | *(byte *)(param_1 + 0x140);
        goto LAB_ram_48043c72;
      }
    }
    else if (cVar11 != '\0') {
      iVar7 = param_2[3];
      uVar8 = 0;
      if (*(char *)(param_1 + 2) != '\0') {
        uVar5 = 0;
        if ((*(char *)(param_1 + 0x124) != '\0') &&
           ((uint)(iVar7 - *(int *)(param_1 + 0x128)) < 0x5dd)) {
          uVar5 = 1;
          if ((*(char *)(param_1 + 0x114) == '\0') &&
             (uVar5 = 0, *(char *)(param_1 + 0x115) != '\0')) {
            uVar5 = (uint)((uint)(iVar7 - *(int *)(param_1 + 0x118)) <
                          (uint)*(ushort *)(param_1 + 6));
          }
          if ((*(char *)(param_1 + 0x11c) != '\0') ||
             ((*(char *)(param_1 + 0x11d) != '\0' &&
              ((uint)(iVar7 - *(int *)(param_1 + 0x120)) < (uint)*(ushort *)(param_1 + 6))))) {
            uVar5 = uVar5 | 2;
          }
        }
        uVar6 = 0;
        uVar8 = 0;
        do {
          uVar3 = uVar6 & 0x1f;
          uVar4 = uVar6 & 0xf;
          uVar6 = uVar6 + 1;
          if ((*(byte *)(param_1 + 4) >> uVar3 & 1) != 0) {
            uVar8 = uVar5 << (uVar4 << 1) & 0xff | uVar8;
          }
        } while (uVar6 != 3);
      }
      if (*(byte *)(param_1 + 0x3c5) == uVar8) {
        if (*(char *)(param_1 + 8) == '\0') {
          if ((*(byte *)(param_1 + 0x3c6) == 0) && (*(char *)(param_1 + 0x3c7) == '\0')) {
            iVar7 = *(int *)(param_1 + 0x3c8);
            iVar9 = 0;
LAB_ram_48043d60:
            if (iVar9 == iVar7) {
              *(undefined1 *)(param_1 + 0x37c) = 0;
              *(undefined1 *)(param_1 + 0x13e) = 0;
              *(undefined2 *)(param_1 + 0x13c) = 0;
              *(undefined1 *)(param_1 + 0x324) = 0;
              iVar7 = param_1 + 0x141;
              do {
                iVar7 = FUN_ram_4ff4522c(iVar7,iVar10,5);
                iVar7 = iVar7 + 5;
              } while (param_1 + 0x15f != iVar7);
              *(undefined1 *)(param_1 + 0x140) = 0x3f;
              goto LAB_ram_48043c72;
            }
          }
        }
        else {
          uVar8 = 0;
          if ((((*(char *)(param_1 + 0x132) != '\0') &&
               ((uint)(iVar7 - *(int *)(param_1 + 0x134)) < 0x1f5)) &&
              (uVar8 = (uint)*(byte *)(param_1 + 0x130), *(char *)(param_1 + 9) == '\0')) &&
             (uVar8 == 3)) {
            uVar8 = 0;
          }
          uVar5 = 0;
          uVar6 = 0;
          do {
            uVar3 = uVar6 & 0x1f;
            uVar4 = uVar6 & 0xf;
            uVar6 = uVar6 + 1;
            if ((*(byte *)(param_1 + 0xb) >> uVar3 & 1) != 0) {
              uVar5 = (uVar8 & 3) << (uVar4 << 1) & 0xff | uVar5;
            }
          } while (uVar6 != 3);
          if ((*(byte *)(param_1 + 0x3c6) == uVar5) &&
             (bVar2 = *(byte *)(param_1 + 0x3c7), uVar8 = FUN_ram_48031a00(param_1,iVar7),
             bVar2 == uVar8)) {
            iVar9 = FUN_ram_48032060(param_1,iVar7);
            iVar7 = *(int *)(param_1 + 0x3c8);
            goto LAB_ram_48043d60;
          }
        }
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x140) =
         ~*(byte *)(uVar8 * 0x30 + param_1 + 0x21c) & *(byte *)(param_1 + 0x140);
  }
  *(undefined1 *)(param_1 + 0x37c) = 0;
LAB_ram_48043c72:
  FUN_ram_480439fa(param_1);
  return;
}


