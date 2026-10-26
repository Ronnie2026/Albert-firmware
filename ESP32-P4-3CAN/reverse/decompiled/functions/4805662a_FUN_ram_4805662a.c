/* Firmware entry: 0x4805662a */

void FUN_ram_4805662a(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = (undefined1)param_5;
  uVar3 = (undefined1)param_3;
  if (*(char *)(param_1 + 0x8e) == '\0') {
    if (*(char *)(param_1 + 0x86) == '\0') {
      *(undefined1 *)(param_1 + 0x8e) = uVar3;
      *(uint *)(param_1 + 0x44) = param_2;
      *(int *)(param_1 + 0x48) = param_4;
      *(undefined1 *)(param_1 + 0x95) = uVar8;
      return;
    }
    if (param_4 - *(int *)(param_1 + 0x5c) < 0) {
      return;
    }
    if (param_3 == 0) goto LAB_ram_4805672c;
    *(uint *)(param_1 + 0x44) = param_2;
    *(int *)(param_1 + 0x48) = param_4;
    *(undefined1 *)(param_1 + 0x95) = uVar8;
    *(undefined1 *)(param_1 + 0x8e) = 1;
LAB_ram_4805665a:
    if (*(char *)(param_1 + 0x89) != '\0') {
      cVar2 = *(char *)(param_1 + 0x90);
      cVar10 = *(char *)(param_1 + 0x87);
      if (cVar2 == '\0') {
        cVar4 = *(char *)(param_1 + 0x8a);
        uVar9 = *(uint *)(param_1 + 0x4c);
        uVar5 = *(uint *)(param_1 + 0x50);
        if (cVar10 == '\0') goto LAB_ram_48056772;
joined_r0x48056ae6:
        if (cVar4 == '\0') goto LAB_ram_480568c6;
        if (cVar10 != '\0') goto LAB_ram_4805682a;
LAB_ram_480566cc:
        if (param_2 <= uVar5 + 0x32) {
LAB_ram_480566d4:
          if (param_2 < uVar5) {
            uVar1 = *(uint *)(param_1 + 0x4c);
            if (*(uint *)(param_1 + 0x4c) < param_2) {
              uVar1 = param_2;
            }
            if (uVar1 != uVar5) {
              *(uint *)(param_1 + 0x50) = uVar1;
              *(undefined1 *)(param_1 + 0x87) = 0;
              iVar7 = *(int *)(param_1 + 0x38) + 1;
              if (iVar7 == 0) {
                iVar7 = 1;
              }
              *(int *)(param_1 + 0x38) = iVar7;
            }
            *(int *)(param_1 + 0x58) = param_4;
          }
        }
        if (uVar9 < param_2) {
          param_2 = param_2 - uVar9;
          goto LAB_ram_4805679a;
        }
      }
      else {
LAB_ram_4805666c:
        if ((cVar10 == '\0') || (param_4 - *(int *)(param_1 + 0x60) < 0)) {
LAB_ram_48056852:
          cVar4 = *(char *)(param_1 + 0x8a);
LAB_ram_48056856:
          if (cVar2 != '\0') goto LAB_ram_48056864;
          goto joined_r0x48056858;
        }
        uVar9 = *(uint *)(param_1 + 0x6c);
        uVar1 = uVar9 - param_2;
        if (uVar9 < param_2) {
          uVar1 = param_2 - uVar9;
        }
        uVar5 = *(uint *)(param_1 + 0x68);
        uVar11 = uVar9 - uVar5;
        if (uVar9 < uVar5) {
          uVar11 = uVar5 - uVar9;
        }
        uVar5 = *(uint *)(param_1 + 0x50);
        uVar9 = *(uint *)(param_1 + 0x4c);
        uVar6 = 100;
        if (uVar5 <= uVar9) {
          uVar6 = (-(uint)(param_5 == 0) & 0xffffffe1) + 0x51;
        }
        if (uVar1 <= uVar6) {
          *(undefined2 *)(param_1 + 0x90) = 0x100;
          cVar4 = *(char *)(param_1 + 0x8a);
          cVar10 = cVar2;
          goto joined_r0x48056ae6;
        }
        if (uVar1 + 0x32 < uVar11) {
          *(uint *)(param_1 + 0x68) = param_2;
          *(int *)(param_1 + 100) = param_4;
          *(undefined1 *)(param_1 + 0x91) = 1;
          goto LAB_ram_48056852;
        }
        if (*(char *)(param_1 + 0x8f) == '\0') {
          uVar1 = param_4 - *(int *)(param_1 + 100);
          if (*(char *)(param_1 + 0x91) == '\0') {
LAB_ram_480569dc:
            if (uVar1 < 500) goto LAB_ram_48056852;
            goto LAB_ram_480569e4;
          }
LAB_ram_48056a1c:
          if (cVar2 == '\0') {
            if (uVar1 < 500) {
              cVar4 = *(char *)(param_1 + 0x8a);
              goto joined_r0x48056858;
            }
            *(undefined1 *)(param_1 + 0x8a) = 1;
            goto LAB_ram_480566cc;
          }
          uVar11 = (uint)*(ushort *)(param_1 + 0x80) << 1;
          if (uVar11 < 500) {
            uVar11 = 500;
          }
          if (uVar1 < uVar11) {
            cVar4 = *(char *)(param_1 + 0x8a);
            goto LAB_ram_48056772;
          }
          *(undefined1 *)(param_1 + 0x8a) = 1;
        }
        else {
          if (*(char *)(param_1 + 0x91) != '\0') {
            uVar1 = param_4 - *(int *)(param_1 + 100);
            goto LAB_ram_48056a1c;
          }
          if (uVar1 <= uVar11 + 0x32) {
            uVar1 = param_4 - *(int *)(param_1 + 100);
            goto LAB_ram_480569dc;
          }
LAB_ram_480569e4:
          *(undefined1 *)(param_1 + 0x8a) = 1;
          if (cVar2 == '\0') goto LAB_ram_480566cc;
        }
        if (uVar9 < param_2) goto LAB_ram_48056974;
        *(undefined1 *)(param_1 + 0x8f) = 0;
        *(undefined1 *)(param_1 + 0x89) = 0;
        if (uVar9 != uVar5) goto LAB_ram_48056782;
LAB_ram_4805683c:
        *(int *)(param_1 + 0x58) = param_4;
      }
LAB_ram_48056796:
      param_2 = uVar9 - param_2;
      goto LAB_ram_4805679a;
    }
LAB_ram_4805686c:
    cVar4 = *(char *)(param_1 + 0x8a);
    if (cVar4 != '\0') {
      cVar10 = *(char *)(param_1 + 0x87);
      cVar2 = '\0';
      if (*(char *)(param_1 + 0x90) != '\0') goto LAB_ram_4805666c;
      if (cVar10 != '\0') {
        uVar9 = *(uint *)(param_1 + 0x4c);
        uVar5 = *(uint *)(param_1 + 0x50);
        cVar10 = '\0';
        goto joined_r0x48056ae6;
      }
joined_r0x48056858:
      if (cVar4 == '\0') {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x4c);
      uVar5 = *(uint *)(param_1 + 0x50);
      goto LAB_ram_480566cc;
    }
    if ((*(char *)(param_1 + 0x8c) == '\0') || (*(char *)(param_1 + 0x8d) == '\0')) {
      cVar4 = *(char *)(param_1 + 0x90);
      cVar10 = *(char *)(param_1 + 0x87);
joined_r0x48056a0c:
      cVar2 = '\0';
      if (cVar4 != '\0') goto LAB_ram_4805666c;
      if (cVar10 == '\0') {
        return;
      }
      uVar9 = *(uint *)(param_1 + 0x4c);
      uVar5 = *(uint *)(param_1 + 0x50);
      cVar10 = '\0';
    }
    else {
      if (500 < (uint)(param_4 - *(int *)(param_1 + 0x40))) {
        cVar4 = *(char *)(param_1 + 0x90);
        cVar10 = *(char *)(param_1 + 0x87);
        goto joined_r0x48056a0c;
      }
      uVar9 = *(uint *)(param_1 + 0x4c);
      if (uVar9 < *(uint *)(param_1 + 0x3c)) {
        uVar5 = *(uint *)(param_1 + 0x50);
        if ((*(uint *)(param_1 + 0x3c) <= uVar5) ||
           (param_2 <= (-(uint)(param_5 == 0) & 0xffffffe1) + 0x51 + uVar9)) {
          cVar10 = *(char *)(param_1 + 0x87);
          cVar2 = '\0';
          if (*(char *)(param_1 + 0x90) != '\0') goto LAB_ram_4805666c;
          if (cVar10 == '\0') {
            return;
          }
          cVar10 = '\0';
          goto LAB_ram_480568c6;
        }
        *(undefined1 *)(param_1 + 0x8b) = 1;
        *(undefined1 *)(param_1 + 0x8f) = 1;
        *(undefined1 *)(param_1 + 0x93) = 0;
        *(undefined2 *)(param_1 + 0x90) = 0;
        FUN_ram_480565b2(param_1,param_4);
        cVar2 = *(char *)(param_1 + 0x89);
        cVar4 = *(char *)(param_1 + 0x8a);
        if (*(char *)(param_1 + 0x87) != '\0') {
          uVar9 = *(uint *)(param_1 + 0x4c);
          uVar5 = *(uint *)(param_1 + 0x50);
          cVar10 = cVar2;
          goto joined_r0x48056ae6;
        }
        goto LAB_ram_48056856;
      }
      cVar10 = *(char *)(param_1 + 0x87);
      cVar2 = '\0';
      if (*(char *)(param_1 + 0x90) != '\0') goto LAB_ram_4805666c;
      if (cVar10 == '\0') {
        return;
      }
      uVar5 = *(uint *)(param_1 + 0x50);
      cVar10 = '\0';
    }
LAB_ram_480568c6:
    if (uVar9 < uVar5) {
      uVar11 = (uint)*(ushort *)(param_1 + 0x7c);
      uVar6 = (uint)*(byte *)(param_1 + 0x83);
      uVar1 = 0;
      if ((uVar11 != 0) && (uVar11 * 100 < uVar5)) {
        uVar1 = ((uVar5 + uVar11 * -100) * uVar6 + (uVar11 - 1)) / uVar11;
        if (*(byte *)(param_1 + 0x84) < uVar1) {
          uVar1 = (uint)*(byte *)(param_1 + 0x84);
        }
        uVar1 = uVar1 & 0xff;
      }
      uVar6 = ((uVar6 - 1) + uVar1 * uVar11) / uVar6 + uVar11 * 100;
      if (uVar6 < param_2) {
        uVar1 = param_2 - uVar6;
        uVar11 = 100;
      }
      else {
        uVar1 = uVar6 - param_2;
        uVar11 = 100;
      }
    }
    else {
      uVar1 = uVar9 - param_2;
      if (uVar9 < param_2) {
        uVar1 = param_2 - uVar9;
      }
      uVar11 = (-(uint)(param_5 == 0) & 0xffffffe1) + 0x51;
      uVar6 = uVar9;
    }
    if (uVar11 < uVar1) {
      *(int *)(param_1 + 100) = param_4;
      *(uint *)(param_1 + 0x68) = param_2;
      *(uint *)(param_1 + 0x6c) = uVar6;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    if (cVar10 == '\0') {
      return;
    }
    if (param_2 <= uVar9) {
      cVar10 = '\0';
      goto LAB_ram_48056776;
    }
LAB_ram_48056958:
    if (uVar5 <= param_2) {
      return;
    }
    *(uint *)(param_1 + 0x50) = param_2;
    *(undefined1 *)(param_1 + 0x87) = 0;
    iVar7 = *(int *)(param_1 + 0x38) + 1;
    *(undefined1 *)(param_1 + 0x91) = 1;
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x38) = iVar7;
      goto LAB_ram_480567d4;
    }
LAB_ram_480567d0:
    iVar7 = 1;
  }
  else {
    if (param_4 - *(int *)(param_1 + 0x48) < 0) {
      return;
    }
    if (*(char *)(param_1 + 0x86) == '\0') {
      if (param_3 == 0) goto LAB_ram_4805672c;
      param_3 = 0;
      if (*(byte *)(param_1 + 0x95) == param_5) {
        *(uint *)(param_1 + 0x44) = param_2;
        *(int *)(param_1 + 0x48) = param_4;
        return;
      }
    }
    else {
      if (param_4 - *(int *)(param_1 + 0x5c) < 0) {
        return;
      }
      if (param_3 == 0) {
LAB_ram_4805672c:
        *(undefined1 *)(param_1 + 0x8e) = 0;
        *(uint *)(param_1 + 0x44) = param_2;
        *(int *)(param_1 + 0x48) = param_4;
        *(undefined1 *)(param_1 + 0x95) = uVar8;
        return;
      }
      if (*(byte *)(param_1 + 0x95) == param_5) {
        *(uint *)(param_1 + 0x44) = param_2;
        *(int *)(param_1 + 0x48) = param_4;
        goto LAB_ram_4805665a;
      }
    }
    *(undefined1 *)(param_1 + 0x87) = 0;
    *(int *)(param_1 + 0x58) = param_4;
    *(undefined1 *)(param_1 + 0x90) = 0;
    iVar7 = *(int *)(param_1 + 0x34) + 1;
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0x34) = iVar7;
    iVar7 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar7;
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 0x8e) = uVar3;
      *(uint *)(param_1 + 0x44) = param_2;
      *(int *)(param_1 + 0x48) = param_4;
      *(undefined1 *)(param_1 + 0x95) = uVar8;
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x8e) = uVar3;
      *(uint *)(param_1 + 0x44) = param_2;
      *(int *)(param_1 + 0x48) = param_4;
      *(undefined1 *)(param_1 + 0x95) = uVar8;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x89) == '\0') goto LAB_ram_4805686c;
    cVar10 = *(char *)(param_1 + 0x87);
    cVar4 = *(char *)(param_1 + 0x8a);
    if (cVar10 != '\0') {
      uVar9 = *(uint *)(param_1 + 0x4c);
      uVar5 = *(uint *)(param_1 + 0x50);
      if (cVar4 == '\0') goto LAB_ram_480568c6;
LAB_ram_4805682a:
      if (uVar9 < param_2) goto LAB_ram_48056974;
      *(undefined1 *)(param_1 + 0x8f) = 0;
      *(undefined1 *)(param_1 + 0x89) = 0;
      cVar10 = '\x01';
      if (uVar9 != uVar5) goto LAB_ram_48056782;
      goto LAB_ram_4805683c;
    }
LAB_ram_48056864:
    uVar9 = *(uint *)(param_1 + 0x4c);
    uVar5 = *(uint *)(param_1 + 0x50);
LAB_ram_48056772:
    cVar10 = cVar4;
    if (param_2 <= uVar9) {
LAB_ram_48056776:
      *(undefined1 *)(param_1 + 0x8f) = 0;
      *(undefined1 *)(param_1 + 0x89) = 0;
      if (uVar5 != uVar9) {
LAB_ram_48056782:
        *(uint *)(param_1 + 0x50) = uVar9;
        *(undefined1 *)(param_1 + 0x87) = 0;
        iVar7 = *(int *)(param_1 + 0x38) + 1;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        *(int *)(param_1 + 0x38) = iVar7;
      }
      *(int *)(param_1 + 0x58) = param_4;
      if (cVar10 == '\0') {
        return;
      }
      goto LAB_ram_48056796;
    }
    if (cVar10 == '\0') goto LAB_ram_48056958;
LAB_ram_48056974:
    if (param_2 <= uVar5 + 0x32) goto LAB_ram_480566d4;
    param_2 = param_2 - uVar9;
LAB_ram_4805679a:
    if ((-(uint)(param_5 == 0) & 0xffffffe1) + 0x51 < param_2) {
      return;
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x8f) = 0;
    *(undefined1 *)(param_1 + 0x89) = 0;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    if (*(uint *)(param_1 + 0x50) == uVar9) goto LAB_ram_480567d4;
    *(uint *)(param_1 + 0x50) = uVar9;
    *(undefined1 *)(param_1 + 0x87) = 0;
    iVar7 = *(int *)(param_1 + 0x38) + 1;
    if (iVar7 == 0) goto LAB_ram_480567d0;
  }
  *(int *)(param_1 + 0x38) = iVar7;
LAB_ram_480567d4:
  *(int *)(param_1 + 0x58) = param_4;
  return;
}


