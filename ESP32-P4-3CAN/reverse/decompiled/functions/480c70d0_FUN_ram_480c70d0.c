/* Firmware entry: 0x480c70d0 */

void FUN_ram_480c70d0(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined1 *puVar7;
  bool bVar8;
  char cVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *param_1;
  *(undefined1 *)(iVar5 + 0x74) = 0;
  *(undefined1 *)(iVar5 + 0x76) = 0;
  puVar10 = (undefined1 *)(iVar5 + 0x110);
  for (puVar7 = (undefined1 *)(iVar5 + 0xf0); puVar7 != puVar10; puVar7 = puVar7 + 8) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
  }
  do {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10 = puVar10 + 8;
  } while ((undefined1 *)(iVar5 + 0x130) != puVar10);
  cVar9 = *(char *)(iVar5 + 199);
  *(undefined4 *)(iVar5 + 0x130) = 0;
  *(undefined1 *)(iVar5 + 0x134) = 0;
  *(undefined2 *)(iVar5 + 0x136) = 0;
  *(char *)(iVar5 + 0x135) = cVar9;
  iVar11 = *(int *)(iVar5 + 0x158) + 1;
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  *(int *)(iVar5 + 0x158) = iVar11;
  *(undefined1 *)(iVar5 + 400) = 0;
  if (((((*(char *)(iVar5 + 0x25d) != '\0') || (*(char *)(iVar5 + 0x25e) != cVar9)) ||
       (*(char *)(iVar5 + 0x25f) != '\0')) ||
      ((*(char *)(iVar5 + 0x260) != *(char *)(iVar5 + 0x138) ||
       (*(int *)(iVar5 + 0x264) != *(int *)(iVar5 + 0x15c))))) ||
     ((*(int *)(iVar5 + 0x268) != *(int *)(iVar5 + 0x160) ||
      (*(int *)(iVar5 + 0x26c) != *(int *)(iVar5 + 0x164))))) {
    *(undefined1 *)(iVar5 + 0x25d) = 0;
    *(char *)(iVar5 + 0x25e) = cVar9;
    *(undefined1 *)(iVar5 + 0x25f) = 0;
    *(char *)(iVar5 + 0x260) = *(char *)(iVar5 + 0x138);
    *(int *)(iVar5 + 0x264) = *(int *)(iVar5 + 0x15c);
    *(int *)(iVar5 + 0x268) = *(int *)(iVar5 + 0x160);
    *(int *)(iVar5 + 0x26c) = *(int *)(iVar5 + 0x164);
    if (*(char *)(iVar5 + 0x1fd) == '\0') {
      *(undefined1 *)(iVar5 + 0x25c) = 0;
      bVar8 = false;
    }
    else {
      uVar13 = 0;
      uVar4 = 0;
      iVar11 = iVar5;
      do {
        iVar12 = iVar11 + 5;
        bVar6 = *(byte *)(iVar5 + 0x1c0) >> (uVar13 & 0x1f) & 1;
        do {
          pcVar1 = (char *)(iVar11 + 0x1df);
          pcVar2 = (char *)(iVar11 + 0x1c1);
          iVar11 = iVar11 + 1;
          bVar6 = bVar6 & *pcVar1 == *pcVar2;
        } while (iVar11 != iVar12);
        if (bVar6 == 0) {
          uVar4 = uVar4 | 1 << (uVar13 & 0x1f) & 0xffU;
        }
        uVar13 = uVar13 + 1;
        iVar11 = iVar12;
      } while (uVar13 != 6);
      *(char *)(iVar5 + 0x25c) = (char)uVar4;
      bVar8 = 0xb < *(byte *)(iVar5 + 0x21c) && uVar4 != 0;
    }
    *(bool *)(iVar5 + 0x275) = bVar8;
    if (*(char *)(iVar5 + 0x21f) == '\0') {
      cVar9 = *(char *)(iVar5 + 0x368);
      *(undefined1 *)(iVar5 + 0x271) = *(undefined1 *)(iVar5 + 0x222);
      *(undefined1 *)(iVar5 + 0x273) = *(undefined1 *)(iVar5 + 0x3fc);
      *(undefined1 *)(iVar5 + 0x274) = *(undefined1 *)(iVar5 + 0x221);
    }
    else {
      cVar9 = *(char *)(iVar5 + 0x368);
      *(char *)(iVar5 + 0x271) = *(char *)(iVar5 + 0x21f);
      *(undefined1 *)(iVar5 + 0x273) = *(undefined1 *)(iVar5 + 0x3fc);
      *(undefined1 *)(iVar5 + 0x274) = *(undefined1 *)(iVar5 + 0x221);
    }
    if ((cVar9 != '\0') && (*(int *)(iVar5 + 0x210) != *(int *)(iVar5 + 0x39c))) {
      cVar9 = *(int *)(iVar5 + 0x214) == *(int *)(iVar5 + 0x39c);
    }
    *(char *)(iVar5 + 0x272) = cVar9;
    iVar11 = *(int *)(iVar5 + 0x224) + 1;
    if (iVar11 == 0) {
      iVar11 = 1;
    }
    *(int *)(iVar5 + 0x224) = iVar11;
  }
  iVar5 = *param_1;
  *(undefined1 *)(iVar5 + 0x1a4) = 0;
  *(undefined4 *)(iVar5 + 0x1ac) = 0;
  *(undefined2 *)(iVar5 + 0x194) = 0;
  *(undefined4 *)(iVar5 + 0x198) = 0;
  *(undefined2 *)(iVar5 + 0x19c) = 0;
  *(undefined4 *)(iVar5 + 0x1a0) = 0;
  param_1[0xa0] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  FUN_ram_480c6f6c(param_1);
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0x276) = 0;
  param_1[0x9e] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  iVar5 = param_1[0x7d] + 1;
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  param_1[0x7d] = iVar5;
  iVar5 = param_1[0x7e] + 1;
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  param_1[0x7e] = iVar5;
  *(undefined2 *)((int)param_1 + 0x246) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined2 *)(param_1 + 0x95) = 0;
  param_1[0xa8] = 0;
  FUN_ram_4ff3ec14(param_1 + 4,0xffffffff);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_ram_4ff3ee10(param_1 + 4);
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  *(undefined1 *)(param_1[1] + 0x804) = 0;
  iVar5 = param_1[1];
  *(undefined1 *)(iVar5 + 0x810) = 0;
  iVar11 = param_1[1];
  *(undefined2 *)(iVar5 + 0x80e) = 0;
  *(undefined1 *)(iVar11 + 0x816) = 0;
  iVar5 = param_1[1];
  *(undefined2 *)(iVar11 + 0x812) = 0;
  *(undefined2 *)(iVar11 + 0x814) = 0;
  *(undefined1 *)(iVar5 + 0x817) = 0;
  *(undefined1 *)(param_1[1] + 0x818) = 0;
  *(undefined1 *)(param_1[1] + 0x835) = 0;
  iVar11 = param_1[1];
  iVar5 = param_1[2];
  *(undefined4 *)(iVar11 + 0x838) = 0;
  *(undefined4 *)(iVar11 + 0x83c) = 0;
  *(undefined2 *)(iVar11 + 0x81a) = 0;
  *(undefined4 *)(iVar11 + 0x81c) = 0;
  *(undefined4 *)(iVar11 + 0x820) = 0;
  *(undefined1 *)(iVar11 + 0x824) = 0;
  *(undefined2 *)(iVar11 + 0x828) = 0;
  *(undefined2 *)(iVar11 + 0x826) = 0;
  *(undefined4 *)(iVar11 + 0x82c) = 0;
  *(undefined4 *)(iVar11 + 0x830) = 0;
  *(undefined1 *)(iVar11 + 0x834) = 0;
  FUN_ram_4ff3ee10(iVar5);
  iStack_38 = DAT_ram_48223ae4;
  iStack_3c = DAT_ram_48223ae0;
  iStack_40 = DAT_ram_48223adc;
  iStack_44 = DAT_ram_48223ad8;
  param_1[0x14] = 8;
  param_1[0x19] = 0x10000;
  *(undefined2 *)(param_1 + 0xbb) = 0xf;
  *(undefined1 *)(param_1 + 0xa3) = 0xf;
  *(undefined1 *)(param_1 + 0xa5) = 0xf;
  *(undefined1 *)((int)param_1 + 0x2ee) = 0;
  param_1[0xbc] = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)((int)param_1 + 0x2c7) = 0;
  *(undefined1 *)((int)param_1 + 0x2c5) = 0;
  param_1[0xa6] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_34 = DAT_ram_48223ae8;
  iStack_30 = DAT_ram_48223aec;
  iStack_2c = DAT_ram_48223af0;
  iStack_28 = DAT_ram_48223af4;
  iStack_24 = DAT_ram_48223af8;
  uStack_20 = 0x5010000;
  uStack_14 = 0xff;
  FUN_ram_4ff45158(param_1 + 0x21,&iStack_44,0x31);
  fence();
  param_1[0x2f] = 0;
  iVar5 = *param_1;
  cVar9 = (char)param_1[0xa3];
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  cVar3 = *(char *)(iVar5 + 0x7d3a);
  *(char *)(iVar5 + 0x7d3a) = cVar9;
  if (cVar9 == '\x02') {
    if (cVar3 == '\x02') {
      bVar6 = *(byte *)(iVar5 + 0x7d3b);
      if (bVar6 < 10) {
        cVar9 = bVar6 + 1;
        bVar6 = bVar6 + 1;
        *(char *)(iVar5 + 0x7d3b) = cVar9;
      }
    }
    else {
      bVar6 = 1;
      *(undefined1 *)(iVar5 + 0x7d3b) = 1;
      *(int *)(iVar5 + 0x7d44) = *(int *)(iVar5 + 0x7d44) + 1;
    }
    if (((*(char *)(iVar5 + 0x7d67) != '\0') && (*(char *)(iVar5 + 0x7d68) != '\0')) &&
       (*(char *)(iVar5 + 0x7d69) != '\0')) {
      *(undefined1 *)(iVar5 + 0x7d6a) = 1;
    }
    if (((*(byte *)(iVar5 + 0x7d75) <= bVar6) &&
        (*(int *)(iVar5 + 0x7d44) == *(int *)(iVar5 + 0x7d48))) &&
       (*(char *)(iVar5 + 0x7d6d) == '\0')) {
      *(undefined1 *)(iVar5 + 0x7d6c) = 1;
      *(undefined1 *)(iVar5 + 0x7d6e) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x7d3b) = 0;
    *(undefined4 *)(iVar5 + 0x7d40) = *(undefined4 *)(iVar5 + 0x7d44);
    if ((byte)(cVar9 - 3U) < 4) {
      *(undefined1 *)(iVar5 + 0x7d6a) = 0;
      *(undefined1 *)(iVar5 + 0x7d3c) = 2;
    }
    else if (((*(char *)(iVar5 + 0x7d67) == '\0') || (*(char *)(iVar5 + 0x7d68) == '\0')) ||
            (cVar9 != '\x01')) {
      if (*(char *)(iVar5 + 0x7d3c) != '\x02') {
        *(undefined1 *)(iVar5 + 0x7d3c) = 3;
      }
    }
    else if (*(char *)(iVar5 + 0x7d3c) != '\x02') {
      *(undefined1 *)(iVar5 + 0x7d69) = 1;
    }
  }
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  *(char *)(param_1[1] + 0x7cc) = (char)param_1[0xa3];
  iStack_34 = param_1[0x25];
  iStack_44 = param_1[0x21];
  iStack_40 = param_1[0x22];
  iStack_3c = param_1[0x23];
  iStack_38 = param_1[0x24];
  iStack_30 = param_1[0x26];
  iStack_2c = param_1[0x27];
  iStack_28 = param_1[0x28];
  iStack_24 = param_1[0x29];
  iVar5 = param_1[1];
  *(int *)(iVar5 + 0x7e0) = iStack_34;
  *(int *)(iVar5 + 2000) = iStack_44;
  *(int *)(iVar5 + 0x7d4) = iStack_40;
  *(int *)(iVar5 + 0x7d8) = iStack_3c;
  *(int *)(iVar5 + 0x7dc) = iStack_38;
  *(int *)(iVar5 + 0x7e4) = iStack_30;
  *(int *)(iVar5 + 0x7e8) = iStack_2c;
  *(int *)(iVar5 + 0x7ec) = iStack_28;
  *(int *)(iVar5 + 0x7f0) = iStack_24;
  *(char *)(iVar5 + 0x7fc) = (char)param_1[0xa5];
  FUN_ram_4ff3ee10(param_1[2]);
  return;
}


