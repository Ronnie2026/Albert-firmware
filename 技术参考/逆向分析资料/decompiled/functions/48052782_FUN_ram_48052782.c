/* Firmware entry: 0x48052782 */

void FUN_ram_48052782(int param_1,int param_2,byte param_3,uint param_4,int param_5,byte param_6)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  piVar6 = (int *)(param_1 + 0xa8);
  iVar8 = 0;
  while (((char)piVar6[5] == '\0' || (*piVar6 != param_2))) {
    iVar8 = iVar8 + 1;
    piVar6 = piVar6 + 8;
    if (iVar8 == 8) {
LAB_ram_480527ca:
      FUN_ram_4ff3ee10(param_1);
      return;
    }
  }
  *(int *)(param_1 + 8) = param_5;
  if (*(char *)(param_1 + 0x3b) == '\0') {
    if ((*(char *)(param_1 + 0x25) == '\0') || (*(char *)(param_1 + 0x30) == '\0')) {
LAB_ram_48052918:
      if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_ram_48052818;
      iVar4 = *(int *)(param_1 + 0x14);
    }
    else {
      uVar5 = (uint)*(byte *)(param_1 + 0x26) * 60000;
      iVar4 = *(int *)(param_1 + 100);
      if ((uint)(param_5 - iVar4) < uVar5) goto LAB_ram_48052918;
      *(uint *)(param_1 + 0x68) = uVar5;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined1 *)(param_1 + 0x25) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      iVar7 = *(int *)(param_1 + 0xc) + 1;
      *(undefined1 *)(param_1 + 0x31) = 1;
      *(undefined1 *)(param_1 + 0x39) = 1;
      iVar4 = iVar4 + uVar5;
      if (iVar7 == 0) {
        iVar7 = 1;
      }
      *(int *)(param_1 + 0x14) = iVar4;
      *(int *)(param_1 + 0xc) = iVar7;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      *(undefined2 *)(param_1 + 0x1e) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined2 *)(param_1 + 0x36) = 0x300;
    }
    if (9999 < (uint)(param_5 - iVar4)) {
      *(undefined1 *)(param_1 + 0x37) = 0;
      *(undefined1 *)(param_1 + 0x25) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x1e) = 0;
      *(undefined **)(param_1 + 0x18) = &mideleg;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x18) == '\x01') && (9999 < (uint)(param_5 - *(int *)(param_1 + 0x14)))
       ) {
      *(undefined1 *)(param_1 + 0x37) = 0;
      *(undefined1 *)(param_1 + 0x25) = 0;
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x1e) = 0;
      *(undefined **)(param_1 + 0x18) = &mideleg;
    }
    if ((*(char *)(param_1 + 0x3b) == '\x01') && (200 < (uint)(param_5 - *(int *)(param_1 + 0x48))))
    {
      *(undefined1 *)(param_1 + 0x3b) = 3;
      *(undefined1 *)(param_1 + 0x3c) = 3;
    }
  }
LAB_ram_48052818:
  iVar4 = param_1 + iVar8 * 0x20;
  iVar7 = *(int *)(iVar4 + 0xb8);
  cVar1 = *(char *)(iVar4 + 0xb0);
  iVar9 = *(int *)(iVar4 + 0xac);
  iVar8 = *(int *)(iVar4 + 0xb4);
  *(undefined4 *)(iVar4 + 0xa8) = 0;
  *(undefined4 *)(iVar4 + 0xb8) = 0;
  *(undefined1 *)(iVar4 + 0xb0) = 0;
  *(undefined4 *)(iVar4 + 0xac) = 0;
  *(undefined4 *)(iVar4 + 0xb4) = 0;
  *(undefined2 *)(iVar4 + 0xbc) = 0;
  *(undefined4 *)(iVar4 + 0xc0) = 0;
  *(undefined4 *)(iVar4 + 0xc4) = 0;
  param_6 = param_6 & param_4 < 0x40000000;
  param_3 = param_6 & param_3;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) + -1;
  }
  *(byte *)(param_1 + 0x34) = param_3;
  *(char *)(param_1 + 0x3a) = cVar1;
  *(undefined1 *)(param_1 + 0x32) = 1;
  iVar4 = param_5;
  if (param_5 == 0) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x6c) = iVar4;
  *(uint *)(param_1 + 0x98) = param_4;
  if (param_3 == 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  else {
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  }
  if (cVar1 == '\x01') {
    if ((((*(char *)(param_1 + 0x25) != '\0') && (*(int *)(param_1 + 0x40) == iVar9)) &&
        (iVar7 == 0 && iVar8 == 0)) && (*(char *)(param_1 + 0x3b) == '\0')) {
      *(undefined1 *)(param_1 + 0x33) = 1;
      *(byte *)(param_1 + 0x35) = param_3;
      if (param_3 == 0) {
        *(undefined1 *)(param_1 + 0x39) = 3;
      }
      else {
        *(undefined1 *)(param_1 + 0x39) = 0;
        if (*(char *)(param_1 + 0x30) == '\0') {
          *(undefined1 *)(param_1 + 0x30) = 1;
          *(int *)(param_1 + 100) = param_5;
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
      }
    }
    goto LAB_ram_480527ca;
  }
  if (cVar1 != '\x02') goto LAB_ram_480527ca;
  if (((iVar7 != 0) && (*(int *)(param_1 + 0xc) == iVar7)) &&
     ((*(int *)(param_1 + 0x10) == iVar9 && (*(char *)(param_1 + 0x18) == '\x01')))) {
    cVar1 = *(char *)(param_1 + 0x1b);
    *(char *)(param_1 + 0x1b) = cVar1 + '\x01';
    if (param_3 == 0) {
      if (*(char *)(param_1 + 0x19) == '\0') {
        *(byte *)(param_1 + 0x19) = '\x02' - param_6;
      }
    }
    else {
      *(char *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1c) + '\x01';
    }
    if ((*(char *)(param_1 + 0x1a) == '\x03') && (cVar1 == '\x02')) {
      if (*(char *)(param_1 + 0x1c) == '\x03') {
        *(undefined1 *)(param_1 + 0x37) = 0;
        *(undefined1 *)(param_1 + 0x25) = 0;
        *(undefined1 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x18) = 2;
        if (*(char *)(param_1 + 0x1e) != '\0') {
          *(undefined1 *)(param_1 + 0x1e) = 0;
          *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x1d);
          iVar4 = *(int *)(param_1 + 0x40) + 1;
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          *(int *)(param_1 + 0x40) = iVar4;
          *(undefined1 *)(param_1 + 0x20) = 0;
          *(undefined1 *)(param_1 + 0x39) = 0;
          *(undefined1 *)(param_1 + 0x36) = 0;
          *(undefined1 *)(param_1 + 0x2b) = 0;
          *(undefined1 *)(param_1 + 0x33) = 0;
          *(undefined1 *)(param_1 + 0x35) = 0;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(undefined2 *)(param_1 + 0x30) = 0;
          *(undefined1 *)(param_1 + 0x25) = 1;
          *(undefined2 *)(param_1 + 0x28) = 1;
          goto LAB_ram_480528ae;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 3;
        *(undefined1 *)(param_1 + 0x37) = 0;
        *(undefined1 *)(param_1 + 0x25) = 0;
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      *(undefined1 *)(param_1 + 0x1e) = 0;
    }
  }
LAB_ram_480528ae:
  if (((iVar8 == 0) || (*(int *)(param_1 + 0x44) != iVar8)) || (*(char *)(param_1 + 0x3b) != '\x01')
     ) goto LAB_ram_480527ca;
  uVar5 = param_5 - *(int *)(param_1 + 0x48);
  if (param_3 == 0) {
    uVar3 = 2;
    if (200 < uVar5) goto LAB_ram_48052a78;
  }
  else {
    if (uVar5 < 0xc9) {
      bVar2 = *(byte *)(param_1 + 0x3e);
      if ((bVar2 < *(byte *)(param_1 + 0x3d)) &&
         (*(byte *)(param_1 + 0x3e) = bVar2 + 1, (byte)(bVar2 + 1) < *(byte *)(param_1 + 0x3d))) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x37) = 0;
        *(undefined1 *)(param_1 + 0x3b) = 2;
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      goto LAB_ram_480527ca;
    }
LAB_ram_48052a78:
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 0x3c) = uVar3;
  *(undefined1 *)(param_1 + 0x3b) = 3;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  goto LAB_ram_480527ca;
}


