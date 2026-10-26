/* Firmware entry: 0x48056aec */

void FUN_ram_48056aec(char *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[0x6c] != '\0') {
    if (param_5 - *(int *)(param_1 + 0x2c) < 0) {
      return;
    }
    if (500 < (uint)(param_5 - *(int *)(param_1 + 0x2c))) {
      param_1[0x60] = '\0';
      param_1[0x61] = '\0';
      param_1[0x5a] = '\0';
      param_1[0x5b] = '\0';
      if (param_1[0x75] == '\0') {
        iVar7 = *(int *)(param_1 + 0x24) + 1;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        *(int *)(param_1 + 0x24) = iVar7;
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
      param_1[0x6c] = '\0';
      *(int *)(param_1 + 0x44) = param_5;
      param_1[0x6a] = '\x01';
    }
  }
  if ((param_4 == 0) || (param_2 != 6)) {
    if (param_1[0x6b] == '\0') {
      param_1[0x6c] = (char)param_4;
      *(int *)(param_1 + 0x2c) = param_5;
      goto LAB_ram_48056b3c;
    }
    iVar7 = 0;
LAB_ram_48056b68:
    iVar6 = *(int *)(param_1 + 0x24) + 1;
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x24) = iVar6;
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
    param_1[0x7a] = '\0';
    param_1[0x79] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x71] = '\0';
    param_1[0x66] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x6b] = (char)iVar7;
    param_1[0x6c] = (char)param_4;
    *(int *)(param_1 + 0x2c) = param_5;
    param_1[0x72] = '\0';
    param_1[0x73] = '\x01';
    if (iVar7 == 0) goto LAB_ram_48056b3c;
  }
  else {
    iVar7 = param_4;
    if (param_1[0x6b] == '\0') goto LAB_ram_48056b68;
    *(int *)(param_1 + 0x2c) = param_5;
    param_1[0x6c] = '\x01';
  }
  if (0x99 < (param_3 - 1 & 0xffff)) {
LAB_ram_48056b3c:
    if (param_1[0x70] != '\0') {
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
    }
    param_1[0x70] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\x01';
    return;
  }
  cVar2 = param_1[0x70];
  cVar4 = cVar2;
  if (cVar2 == '\0') {
    cVar8 = '\0';
    cVar2 = '\0';
  }
  else {
    if (*(ushort *)(param_1 + 0x48) == param_3) goto LAB_ram_48056ca2;
    if (*(ushort *)(param_1 + 0x48) < param_3) {
      cVar8 = '\x01';
      cVar4 = '\0';
    }
    else {
      cVar2 = '\0';
      cVar8 = '\x02';
    }
  }
  param_1[0x67] = cVar8;
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
  param_1[0x7a] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x71] = '\0';
  param_1[0x66] = '\0';
  param_1[0x65] = '\0';
  param_1[100] = cVar4;
  param_1[0x69] = cVar2;
  param_1[0x68] = '\0';
  *(int *)(param_1 + 0x44) = param_5;
  param_1[0x72] = '\0';
  param_1[0x73] = '\x01';
  param_1[0x6a] = '\x01';
LAB_ram_48056ca2:
  *(short *)(param_1 + 0x48) = (short)param_3;
  param_1[0x70] = '\x01';
  if (*param_1 == '\0') {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (param_1[0x6d] == '\0') {
    return;
  }
  if (param_1[0x6a] != '\0') {
    return;
  }
  if (500 < (uint)(param_5 - *(int *)(param_1 + 0x30))) {
    return;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x4a);
  if ((param_1[0xc] == '\0') || (uVar1 = *(uint *)(param_1 + 8), uVar1 == 0)) {
    if (param_1[0x6f] == '\0') {
      iVar7 = 50000;
      uVar1 = 100000;
    }
    else {
      iVar7 = 0x13a53;
      uVar1 = 0x274a6;
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar6 = ((uint)(byte)param_1[1] * 1000 + 100000) * param_3;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) * 1000;
    }
    uVar1 = (uint)(iVar6 + iVar7) / uVar1;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    uVar1 = (uVar1 & 0x7fff) * 2;
    if (uVar5 + 1 < uVar1) {
      return;
    }
    if (uVar1 + 1 < uVar5) {
      return;
    }
  }
  else {
    if (param_1[0x6f] == '\0') {
      uVar3 = 0x32;
      uVar5 = uVar5 * 0x32;
    }
    else {
      uVar3 = uVar5 * 0x274a6 + 1000;
      uVar5 = __udivdi3(uVar3,(uint)(uVar3 < uVar5 * 0x274a6) + uVar5 / 0x6840,2000,0);
      uVar3 = 0x51;
    }
    if (uVar1 < uVar5) {
      uVar5 = uVar5 - uVar1;
    }
    else {
      uVar5 = uVar1 - uVar5;
    }
    if (uVar3 < uVar5) {
      return;
    }
  }
  param_1[0x69] = '\0';
  param_1[0x72] = '\x01';
  return;
}


