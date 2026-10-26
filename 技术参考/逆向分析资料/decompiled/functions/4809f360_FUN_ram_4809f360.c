/* Firmware entry: 0x4809f360 */

int FUN_ram_4809f360(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char acStack_88 [2];
  char cStack_86;
  char cStack_4d;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 + 0x378;
  FUN_ram_48052b10(acStack_88,iVar1,param_2);
  FUN_ram_4ff3ec14(iVar1,0xffffffff);
  iVar2 = *(int *)(param_1 + 0x3b8);
  FUN_ram_4ff3ee10(iVar1);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((*(char *)(iVar1 + 0xa22) != '\0') && (*(int *)(param_1 + 0x524) != iVar2)) {
    cVar8 = (cStack_86 != '\x02') + '\x01';
    *(undefined1 *)(iVar1 + 0xa26) = 5;
    *(undefined2 *)(iVar1 + 0xa22) = 0;
    *(char *)(iVar1 + 0xa25) = cVar8;
    if (*(byte *)(iVar1 + 0xa00) < 8) {
      if (*(int *)(iVar1 + 0xa08) != 0 || *(int *)(iVar1 + 0xa0c) != 0) {
        iVar9 = (uint)*(byte *)(iVar1 + 0xa00) * 0x120;
        iVar4 = iVar1 + iVar9;
        if ((((*(char *)(iVar4 + 0x70d6) != '\0') &&
             (*(int *)(iVar4 + 0x70c8) == *(int *)(iVar1 + 0xa08))) &&
            (*(int *)(iVar4 + 0x70cc) == *(int *)(iVar1 + 0xa0c))) &&
           (*(char *)(iVar4 + 0x70d8) == '\0')) {
          iVar9 = iVar9 + 0x3678 + iVar1 + 0x3a40;
          iVar10 = *(int *)(iVar9 + 0x30);
          iVar11 = *(int *)(iVar9 + 0x34);
          *(char *)(iVar4 + 0x70d9) = cVar8;
          *(undefined1 *)(iVar4 + 0x70d7) = 0;
          *(undefined1 *)(iVar4 + 0x70d8) = 1;
          if ((iVar10 != 0 || iVar11 != 0) && (uVar5 = (uint)*(byte *)(iVar9 + 0x29), uVar5 != 0xff)
             ) {
            cVar8 = *(char *)(iVar9 + 0x28);
            iVar4 = 2;
            if (cVar8 == '\x02') {
              iVar4 = 1;
            }
            else if (cVar8 != '\x04') {
              if (cVar8 != '\x01') goto LAB_ram_4809f4b8;
              iVar4 = 0;
            }
            if (uVar5 < 0x18) {
              if (uVar5 < 0x10) {
                iVar4 = iVar4 * 0x1228 + uVar5 * 0xe8;
              }
              else {
                iVar4 = (uVar5 - 0x10) * 0x120;
                iVar9 = iVar1 + iVar4;
                if ((*(char *)(iVar9 + 0x70d6) == '\0') || (*(char *)(iVar9 + 0x70b8) != cVar8))
                goto LAB_ram_4809f4b8;
                iVar4 = iVar4 + 14000;
              }
              iVar4 = iVar4 + iVar1 + 0x3a40;
              if (((*(int *)(iVar4 + 0xd8) == iVar10) && (*(int *)(iVar4 + 0xdc) == iVar11)) &&
                 (*(char *)(iVar4 + 0xe6) == '\x01')) {
                FUN_ram_4804691a();
              }
            }
          }
        }
      }
    }
  }
LAB_ram_4809f4b8:
  if (((cStack_4d == '\x01') || (cStack_86 == '\x01')) || (acStack_88[0] != '\0')) {
    iVar1 = FUN_ram_4805c396(*(undefined4 *)(param_1 + 0x58),1,2,0xe);
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x524) = iVar2;
    return iVar1;
  }
  if (cStack_4d != '\x02') {
    if (cStack_4d == '\x03') {
      if (cStack_86 != '\x02') goto LAB_ram_4809f520;
    }
    else {
      if (cStack_86 == '\x03') {
LAB_ram_4809f520:
        uVar3 = *(undefined4 *)(param_1 + 0x58);
        uVar6 = 2;
        uVar7 = 7;
        goto LAB_ram_4809f4dc;
      }
      if (cStack_86 != '\x02') {
        return 0;
      }
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar6 = 1;
  uVar7 = 0;
LAB_ram_4809f4dc:
  FUN_ram_4805c6b0(uVar3,1,uVar6,uVar7);
  return 0;
}


