/* Firmware entry: 0x4809e23a */

/* WARNING: Type propagation algorithm not settling */

char FUN_ram_4809e23a(int param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bStack_35;
  undefined4 auStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xb36) == '\0') {
    return '\x11';
  }
  cVar1 = *(char *)(param_1 + 0xb62);
  if ((param_2[0x71] == '\0') && (cVar1 != '\x05')) {
    return '\x01';
  }
  if (param_2[10] == '\0') {
    return '\x01';
  }
  if (param_2[0xc] == '\0') {
    return '\x01';
  }
  iVar6 = FUN_ram_48045922(*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x7cd4),2,0);
  if (iVar6 == 0) {
    return '\x01';
  }
  fence();
  if ((**(uint **)(param_1 + 0x6c) >> 0x10 & 3) != 2) {
    return '\x11';
  }
  if (*(int *)(param_1 + 0xaf8) == 0) {
    return '\b';
  }
  if (300 < (uint)(param_3 - *(int *)(param_1 + 0xaf8))) {
    return '\b';
  }
  cVar2 = param_2[1];
  iVar6 = *(int *)(param_1 + 0x58);
  if (cVar2 == '\f') {
    if (*(char *)(iVar6 + 0x7e14) == '\0') {
      return '\t';
    }
    if (*(byte *)(iVar6 + 0x7e1c) < 5) {
      return '\t';
    }
    iVar12 = *(int *)(iVar6 + 0x7e18);
  }
  else {
    if (*(byte *)(*(int *)(iVar6 + 0x7cd0) + 0x8fdc) < 5) {
      return '\t';
    }
    iVar12 = *(int *)(*(int *)(iVar6 + 0x7cd0) + 0x8fd8);
  }
  if (iVar12 == 0) {
    return '\t';
  }
  if (300 < (uint)(param_3 - iVar12)) {
    return '\t';
  }
  cVar3 = *(char *)(param_1 + 0xb62);
  if (cVar3 == '\x03') {
    cVar1 = param_2[8];
joined_r0x4809e4e8:
    if (cVar1 == '\0') {
      return '\x01';
    }
  }
  else {
    if ((((byte)(*(char *)(iVar6 + 0x7c58) - 3U) < 4) && (*(int *)(iVar6 + 0x7c64) != 0)) &&
       ((uint)(param_3 - *(int *)(iVar6 + 0x7c64)) < 0x1f5)) {
      return '\a';
    }
    if (param_3 - *(int *)(param_1 + 0xb6c) < 0) {
      return '\x06';
    }
    if (cVar3 == '\x04') {
      cVar4 = param_2[0x76];
joined_r0x4809e4ac:
      if (cVar4 == '\0') {
        return '\x01';
      }
    }
    else {
      if (cVar3 == '\x02') {
        cVar4 = param_2[0x75];
        goto joined_r0x4809e4ac;
      }
      if (cVar3 == '\x01') {
        if (param_2[0x73] == '\0') {
          return '\x01';
        }
        if (*(char *)(param_1 + 0xb66) == '\x01') {
          cVar4 = param_2[0x74];
          goto joined_r0x4809e4ac;
        }
        if ((*(char *)(param_1 + 0xb66) - 2U & 0xfd) != 0) {
          return '\x01';
        }
      }
      else if (cVar3 == '\0') {
        cVar4 = param_2[0x73];
        goto joined_r0x4809e4ac;
      }
    }
    if (cVar1 == '\x05') {
      if (param_2[0x8a] == '\0') {
        return '\x01';
      }
      cVar1 = *param_2;
      goto joined_r0x4809e4e8;
    }
  }
  if (-1 < param_3 - *(int *)(param_1 + 0xb68)) {
    return '\t';
  }
  cVar1 = *(char *)(param_1 + 0xb65);
  if ((param_2[0x88] != '\0') && (cVar1 != '\x01')) {
    if (*(char *)(param_1 + 0xbaf) == '\0') {
      return '\x17';
    }
    if (*(int *)(param_1 + 0xbb0) == 0) {
      return '\x17';
    }
    if (300 < (uint)(param_3 - *(int *)(param_1 + 0xbb0))) {
      return '\x17';
    }
    if (*(char *)(param_1 + 0xbad) != '\x01') {
      return '\x16';
    }
    if (*(byte *)(param_1 + 0xbae) < 2) {
      return '\x16';
    }
  }
  if (cVar3 == '\x03') {
    if (*(char *)(param_1 + 0xb66) != *(char *)(param_1 + 0xaf4)) {
      return '\x10';
    }
    if (*(char *)(param_1 + 0xb66) != '\x02') {
      return '\x10';
    }
    goto LAB_ram_4809e504;
  }
  if (*(char *)(param_1 + 0x911) == '\0') {
    return '\x04';
  }
  if (*(char *)(param_1 + 0x90f) == '\0') {
    return '\x04';
  }
  if (300 < (uint)(param_3 - *(int *)(param_1 + 0x908))) {
    return '\x04';
  }
  if (*(int *)(param_1 + 0xb74) == 0) {
    return '\x04';
  }
  if (*(int *)(param_1 + 0xb74) != *(int *)(param_1 + 0x904)) {
    return '\x04';
  }
  if (param_2[0x72] == '\0') {
    if (((cVar3 == '\x04') && (param_2[0x78] != '\0')) &&
       ((*(int *)(param_1 + 0xb78) != 0 &&
        ((*(int *)(param_1 + 0xb78) == *(int *)(param_1 + 0x928) &&
         (iVar12 = FUN_ram_4804999a(param_1 + 0x928,param_2[0x7a]), iVar12 != 0))))))
    goto LAB_ram_4809e504;
    if (*(int *)(param_1 + 0xba8) == 0) {
      return '\x03';
    }
    if (300 < (uint)(param_3 - *(int *)(param_1 + 0xba8))) {
      return '\x03';
    }
    if (*(char *)(param_1 + 0x91c) == '\0') {
      return '\x03';
    }
    if (*(char *)(param_1 + 0x91d) == '\0') {
      return '\x03';
    }
    if (300 < (uint)(param_3 - *(int *)(param_1 + 0x918))) {
      return '\x03';
    }
    if (*(char *)(param_1 + 0x924) == '\0') {
      return '\x03';
    }
    if (*(int *)(param_1 + 0xb70) == 0) {
      return '\x03';
    }
    if (*(int *)(param_1 + 0xb70) != *(int *)(param_1 + 0x920)) {
      return '\x03';
    }
    if ((param_2[0x7a] != 0) && ((byte)param_2[0x7a] <= *(byte *)(param_1 + 0x925))) {
      return '\x0e';
    }
    if (cVar3 == '\x04') {
      if (param_2[0x78] != '\0') {
        return '\x03';
      }
      goto LAB_ram_4809e504;
    }
  }
  else if (cVar3 == '\x04') goto LAB_ram_4809e504;
  if (((cVar3 == '\x02') && (param_2[0x79] != '\0')) &&
     ((cVar3 = *(char *)(param_1 + 0xaf4), cVar3 == '\x01' ||
      ((cVar2 == '\f' && ((cVar3 - 2U & 0xfd) == 0)))))) {
    bStack_35 = 0;
    auStack_34[0] = 0x80000000;
    iVar12 = FUN_ram_48052348(param_1 + 0xa8c,param_1 + 0xa98,param_3,auStack_34,&bStack_35);
    if (iVar12 == 0) {
      return '\x13' - bStack_35;
    }
    if (*(char *)(param_1 + 0xad2) == '\0') {
      return '\x14';
    }
    if ((cVar3 == '\x01') && (*(char *)(param_1 + 0xb63) == '\0')) {
      if (*(char *)(param_1 + 0xae8) == '\x01') {
        if (cVar1 != '\x04') {
          return '\x15';
        }
      }
      else {
        if (*(char *)(param_1 + 0xae8) != -1) {
          return '\x15';
        }
        if (cVar1 != '\x02') {
          return '\x15';
        }
      }
    }
  }
LAB_ram_4809e504:
  if ((*(char *)(param_1 + 0xb66) == *(char *)(param_1 + 0xaf4)) &&
     (cVar1 != *(char *)(param_1 + 0xb66))) {
    if (cVar2 == '\f') {
      uVar7 = *(undefined4 *)(iVar6 + 0x7e00);
      uVar8 = *(undefined4 *)(iVar6 + 0x7e04);
      uVar9 = *(undefined4 *)(iVar6 + 0x7e08);
      uVar15 = *(undefined4 *)(iVar6 + 0x7df0);
      uVar14 = *(undefined4 *)(iVar6 + 0x7df8);
      uVar13 = *(undefined4 *)(iVar6 + 0x7dfc);
      uVar10 = *(undefined4 *)(iVar6 + 0x7e0c);
      uVar11 = *(undefined4 *)(iVar6 + 0x7e10);
      param_4[1] = *(undefined4 *)(iVar6 + 0x7df4);
      param_4[4] = uVar7;
      param_4[5] = uVar8;
      *param_4 = uVar15;
      param_4[2] = uVar14;
      param_4[3] = uVar13;
      param_4[6] = uVar9;
      param_4[7] = uVar10;
      param_4[8] = uVar11;
      bVar5 = FUN_ram_48049a54((int)param_4 + 5,*(undefined1 *)(param_4 + 1),
                               *(undefined1 *)(param_1 + 0xb65));
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0xb1c);
      uVar8 = *(undefined4 *)(param_1 + 0xb20);
      uVar9 = *(undefined4 *)(param_1 + 0xb24);
      uVar15 = *(undefined4 *)(param_1 + 0xb0c);
      uVar14 = *(undefined4 *)(param_1 + 0xb14);
      uVar13 = *(undefined4 *)(param_1 + 0xb18);
      uVar10 = *(undefined4 *)(param_1 + 0xb28);
      uVar11 = *(undefined4 *)(param_1 + 0xb2c);
      param_4[1] = *(undefined4 *)(param_1 + 0xb10);
      param_4[4] = uVar7;
      param_4[5] = uVar8;
      *param_4 = uVar15;
      param_4[2] = uVar14;
      param_4[3] = uVar13;
      param_4[6] = uVar9;
      param_4[7] = uVar10;
      param_4[8] = uVar11;
      bVar5 = FUN_ram_480499c2((int)param_4 + 5,*(undefined1 *)(param_4 + 1),
                               *(undefined1 *)(param_1 + 0xb65));
    }
    return (bVar5 ^ 1) << 1;
  }
  return '\x10';
}


