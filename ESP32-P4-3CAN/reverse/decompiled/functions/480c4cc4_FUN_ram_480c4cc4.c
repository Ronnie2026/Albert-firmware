/* Firmware entry: 0x480c4cc4 */

void FUN_ram_480c4cc4(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0x1d8) == '\0') || (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x1dc)))
  {
    *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
    goto LAB_ram_480c4cea;
  }
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  cVar12 = *(char *)(param_2 + 8);
  uVar14 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1fc) = 0x10000;
  *(undefined4 *)(param_1 + 0x1e8) = 8;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x20e) = 0;
  sVar3 = *(short *)(param_1 + 0x20a);
  cVar1 = *(char *)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined2 *)(param_1 + 0x20a) = 0;
  *(undefined2 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x330) = uVar6;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x2da) = 0;
  if (cVar12 == '\0') {
    *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
    goto LAB_ram_480c4cea;
  }
  if (cVar1 != '\0') {
    cVar12 = *(char *)(param_1 + 0x172);
    *(bool *)(param_1 + 0x181) = sVar3 != 0;
    *(short *)(param_1 + 0x17c) = sVar3;
    if (cVar12 == '\x06') {
      if (*(char *)(param_1 + 0x20d) != '\0') {
        if (*(char *)(param_1 + 0x1ac) == '\0') {
          *(undefined4 *)(param_1 + 0x1b0) = param_3;
          *(undefined1 *)(param_1 + 0x1ac) = 1;
        }
        *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
        if (*(char *)(param_1 + 0x1d4) == '\0') {
          uVar4 = *(ushort *)(param_1 + 0x1a6);
          if ((*(ushort *)(param_1 + 0x1a8) <= uVar4) ||
             (*(ushort *)(param_1 + 0x1a6) = uVar4 + 1,
             *(ushort *)(param_1 + 0x1a8) <= (ushort)(uVar4 + 1))) {
            sVar9 = *(short *)(param_1 + 0x130);
            iVar13 = (int)*(char *)(param_1 + 0x1a4);
            sVar10 = *(short *)(param_1 + 0x12e);
            if (sVar9 == 0) {
              if (iVar13 == 0) {
LAB_ram_480c4f38:
                if (sVar10 != 0) {
                  iVar7 = 1;
                  goto LAB_ram_480c4e30;
                }
              }
              else if (iVar13 < 0) {
                iVar7 = iVar13 * -0x1000000 >> 0x18;
                if (iVar7 < 0) goto LAB_ram_480c4f38;
                if (sVar10 != 0) goto LAB_ram_480c4e30;
              }
              else if (sVar10 != 0) {
                uVar5 = 4;
                goto LAB_ram_480c4f5a;
              }
LAB_ram_480c4f2e:
              *(undefined1 *)(param_1 + 0x1a4) = 0;
              *(undefined2 *)(param_1 + 0x1a6) = 0;
LAB_ram_480c4ee2:
              *(undefined4 *)(param_1 + 0x1a8) = 0;
              *(undefined2 *)(param_1 + 0x17e) = 0;
              *(undefined4 *)(param_1 + 0x1d4) = 0;
            }
            else {
              if (sVar10 == 0) {
                if (iVar13 == 0) {
                  iVar7 = -1;
                }
                else {
                  if (iVar13 < 0) {
                    uVar5 = 4;
                    sVar10 = sVar9;
LAB_ram_480c4f5a:
                    *(undefined2 *)(param_1 + 0x1a6) = 0;
                    *(short *)(param_1 + 0x1a8) = sVar10;
                    *(undefined2 *)(param_1 + 0x1aa) = 0;
                    *(undefined2 *)(param_1 + 0x17e) = 0;
                    *(undefined4 *)(param_1 + 0x1d4) = 0;
                    *(undefined1 *)(param_1 + 0x174) = uVar5;
                    goto LAB_ram_480c4e50;
                  }
                  iVar7 = iVar13 * -0x1000000 >> 0x18;
                }
              }
              else {
                iVar7 = iVar13 * -0x1000000 >> 0x18;
                if (iVar7 == 0) goto LAB_ram_480c4f2e;
                if (iVar13 == iVar7) {
                  uVar5 = 3;
                  if (iVar13 < 0) {
                    sVar10 = sVar9;
                  }
                  goto LAB_ram_480c4f5a;
                }
              }
LAB_ram_480c4e30:
              *(char *)(param_1 + 0x1d6) = *(char *)(param_1 + 0x1a4);
              *(char *)(param_1 + 0x1d7) = (char)iVar7;
              *(undefined2 *)(param_1 + 0x1a6) = 0;
              *(undefined4 *)(param_1 + 0x1a8) = 0;
              *(undefined2 *)(param_1 + 0x17e) = 0;
              *(undefined2 *)(param_1 + 0x1d4) = 1;
              *(undefined1 *)(param_1 + 0x174) = 5;
            }
          }
        }
        else {
          bVar2 = *(byte *)(param_1 + 0x1d5);
          if ((9 < bVar2) || (*(byte *)(param_1 + 0x1d5) = bVar2 + 1, bVar2 == 9)) {
            cVar12 = *(char *)(param_1 + 0x1d7);
            *(undefined2 *)(param_1 + 0x1a6) = 0;
            *(char *)(param_1 + 0x1a4) = cVar12;
            if (cVar12 < '\0') {
              sVar9 = *(short *)(param_1 + 0x130);
              sVar10 = sVar9;
            }
            else {
              if (cVar12 == '\0') goto LAB_ram_480c4ee2;
              sVar9 = *(short *)(param_1 + 0x12e);
              sVar10 = *(short *)(param_1 + 0x130);
            }
            *(short *)(param_1 + 0x1a8) = sVar9;
            *(undefined2 *)(param_1 + 0x1aa) = 0;
            *(undefined2 *)(param_1 + 0x17e) = 0;
            *(undefined4 *)(param_1 + 0x1d4) = 0;
            cVar12 = '\x04';
            if (sVar10 != 0) {
              cVar12 = (*(short *)(param_1 + 0x12e) == 0) + '\x03';
            }
            *(char *)(param_1 + 0x174) = cVar12;
          }
        }
      }
    }
    else if ((((cVar12 == '\x03') || (cVar12 == '\f')) && (*(char *)(param_1 + 0x182) != '\0')) &&
            (iVar13 = (int)*(short *)(param_1 + 0x17e), iVar13 != 0)) {
      if (*(char *)(param_1 + 0x182) < '\0') {
        sVar9 = *(short *)(param_1 + 0x11e);
        sVar10 = *(short *)(param_1 + 0x120);
      }
      else {
        sVar9 = *(short *)(param_1 + 0x122);
        sVar10 = *(short *)(param_1 + 0x124);
      }
      iVar11 = (int)sVar9;
      iVar7 = (int)sVar10;
      if (iVar11 != iVar7) {
        if (iVar13 < iVar7) {
          if (iVar11 < iVar13) {
            iVar8 = (int)*(char *)(param_1 + 0x180);
          }
          else {
            iVar8 = 1;
            *(undefined1 *)(param_1 + 0x180) = 1;
          }
        }
        else {
          iVar8 = -1;
          *(undefined1 *)(param_1 + 0x180) = 0xff;
        }
        iVar13 = iVar13 + iVar8;
        if ((iVar11 <= iVar13) && (sVar9 = sVar10, iVar13 <= iVar7)) {
          sVar9 = (short)((uint)(iVar13 * 0x10000) >> 0x10);
        }
        *(short *)(param_1 + 0x17e) = sVar9;
      }
    }
  }
LAB_ram_480c4e50:
  *(byte *)(param_1 + 0x2cf) = *(byte *)(param_1 + 0x1ef) & 0xf;
  *(short *)(param_1 + 0x2ee) = sVar3;
  *(undefined4 *)(param_1 + 0x2d0) = uVar14;
  *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 1;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
LAB_ram_480c4cea:
  FUN_ram_4ff3ec14(*(undefined4 *)(param_1 + 0x68),0xffffffff);
  iVar13 = *(int *)(param_1 + 100);
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (*(char *)(param_2 + 8) == '\0') {
      *(int *)(iVar13 + 0x21c) = *(int *)(iVar13 + 0x21c) + 1;
    }
    else {
      *(int *)(iVar13 + 0x218) = *(int *)(iVar13 + 0x218) + 1;
    }
  }
  else {
    *(int *)(iVar13 + 0x220) = *(int *)(iVar13 + 0x220) + 1;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar13 + 0x238) = *(undefined4 *)(param_2 + 0x18);
  FUN_ram_4ff3ee10(uVar6);
  return;
}


