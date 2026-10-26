/* Firmware entry: 0x480574d6 */

char FUN_ram_480574d6(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == '\0') {
    return '\0';
  }
  if (param_1[0x6b] == '\0') {
    return '\0';
  }
  cVar1 = param_1[0x6c];
  if (cVar1 == '\0') {
    return '\0';
  }
  cVar2 = param_1[0xc];
  if (param_1[0x6d] == '\0') {
    return '\0';
  }
  cVar3 = param_1[0x70];
  if (cVar3 == '\0') {
    if (cVar2 != '\0') {
      return '\0';
    }
  }
  else {
    if ((param_1[0x6a] == '\0') && ((uint)(param_2 - *(int *)(param_1 + 0x2c)) < 0x1f5)) {
      if ((uint)(param_2 - *(int *)(param_1 + 0x30)) < 0x1f5) {
        uVar4 = (uint)*(ushort *)(param_1 + 0x4a);
        if ((cVar2 != '\0') && (uVar8 = *(uint *)(param_1 + 8), uVar8 != 0)) {
          if (param_1[0x6f] == '\0') {
            uVar5 = 0x32;
            uVar4 = uVar4 * 0x32;
          }
          else {
            uVar5 = uVar4 * 0x274a6 + 1000;
            uVar4 = __udivdi3(uVar5,(uint)(uVar5 < uVar4 * 0x274a6) + uVar4 / 0x6840,2000,0);
            uVar5 = 0x51;
          }
          if (uVar8 < uVar4) {
            uVar4 = uVar4 - uVar8;
          }
          else {
            uVar4 = uVar8 - uVar4;
          }
          if (uVar4 <= uVar5) {
            param_1[0x69] = '\0';
            param_1[0x72] = '\x01';
          }
          goto LAB_ram_480575d0;
        }
        if (param_1[0x6f] == '\0') {
          iVar7 = 50000;
          uVar8 = 100000;
        }
        else {
          iVar7 = 0x13a53;
          uVar8 = 0x274a6;
        }
        if (*(int *)(param_1 + 8) == 0) {
          iVar6 = ((uint)(byte)param_1[1] * 1000 + 100000) * (uint)*(ushort *)(param_1 + 0x48);
        }
        else {
          iVar6 = *(int *)(param_1 + 8) * 1000;
        }
        uVar8 = (uint)(iVar7 + iVar6) / uVar8;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        uVar8 = (uVar8 & 0x7fff) * 2;
        if ((uVar8 <= uVar4 + 1) && (uVar4 <= uVar8 + 1)) {
          param_1[0x69] = '\0';
          param_1[0x72] = '\x01';
        }
      }
      if (cVar2 != '\0') {
LAB_ram_480575d0:
        if (cVar3 == '\0') {
          return '\0';
        }
        if (param_1[0x6a] != '\0') {
          return '\0';
        }
        if (500 < (uint)(param_2 - *(int *)(param_1 + 0x2c))) {
          return '\0';
        }
        if (500 < (uint)(param_2 - *(int *)(param_1 + 0x30))) {
          return '\0';
        }
        iVar7 = *(int *)(param_1 + 0x24) + 1;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        *(int *)(param_1 + 0x24) = iVar7;
        param_1[0x74] = '\0';
        param_1[0x60] = '\0';
        param_1[0x61] = '\0';
        param_1[0x5a] = '\0';
        param_1[0x5b] = '\0';
        if (param_1[0x75] == '\0') {
          param_1[0x10] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x18] = '\0';
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          param_1[0x20] = '\0';
          param_1[0x21] = '\0';
        }
        param_1[0x7d] = '\0';
        param_1[0x7e] = '\0';
        param_1[0x71] = '\0';
        return cVar1;
      }
      cVar2 = param_1[0x72];
      goto joined_r0x480576ba;
    }
    if (cVar2 != '\0') goto LAB_ram_480575d0;
  }
  cVar2 = param_1[0x72];
joined_r0x480576ba:
  if ((((cVar2 != '\0') && (param_1[0x6d] != '\0')) && (param_1[0x70] != '\0')) &&
     (((param_1[0x6a] == '\0' && ((uint)(param_2 - *(int *)(param_1 + 0x2c)) < 0x1f5)) &&
      ((uint)(param_2 - *(int *)(param_1 + 0x30)) < 0x1f5)))) {
    iVar7 = *(int *)(param_1 + 0x24) + 1;
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0x24) = iVar7;
    param_1[0x74] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    if (param_1[0x75] == '\0') {
      param_1[0x10] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
    }
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x71] = '\x01';
    return cVar1;
  }
  return '\0';
}


