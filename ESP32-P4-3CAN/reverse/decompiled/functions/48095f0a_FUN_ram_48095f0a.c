/* Firmware entry: 0x48095f0a */

bool FUN_ram_48095f0a(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_d6;
  undefined1 uStack_94;
  undefined1 uStack_7e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = param_2[0x15d];
  if (iVar11 == 0) {
    return param_2[0xb] == 0;
  }
  iVar2 = FUN_ram_4ff3b5f0(iVar11,0xffffffff);
  if (iVar2 != 1) {
    return false;
  }
  piVar1 = param_2 + 0x21d;
  FUN_ram_4ff3ec14(piVar1,0xffffffff);
  if (((param_2[0xb] != 0) || (*(char *)((int)param_2 + 0x582) != '\0')) &&
     (*(char *)((int)param_2 + 0x881) == '\0')) {
    cVar4 = (char)param_2[5];
    if ((*param_2 != 0) && (cVar4 == '\x01')) {
      fence();
      *(undefined1 *)(*param_2 + 0x18d89) = 0;
      cVar4 = (char)param_2[5];
    }
    if (cVar4 == '\x02') {
      *(undefined1 *)(param_2 + 0x167) = 0;
    }
    piVar9 = param_2 + 0xb9f;
    iVar2 = *piVar9;
    do {
      iVar3 = 1;
      if (iVar2 != -1) {
        iVar3 = iVar2 + 1;
      }
      bVar7 = *piVar9 != iVar2;
      iVar2 = *piVar9;
    } while (bVar7);
    *piVar9 = iVar3;
  }
  if ((char)param_2[5] == '\x01') {
    uVar8 = *(uint *)(param_1 + 0x18d84) + 1;
    uVar10 = uVar8 & 0x7fffffff;
    if ((uVar8 & 0x7fffffff) == 0) {
      uVar10 = 1;
    }
    fence();
    *(uint *)(param_1 + 0x18d84) = uVar10;
  }
  *(undefined1 *)((int)param_2 + 0x882) = 1;
  puVar5 = (undefined1 *)((int)param_2 + 0x5d6);
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 0x24;
  } while (puVar5 != (undefined1 *)((int)param_2 + 0x85e));
  iVar2 = param_2[0xb];
  *(undefined2 *)(param_2 + 0x16d) = 0;
  *(undefined1 *)((int)param_2 + 0x5b6) = 0;
  *(undefined1 *)((int)param_2 + 0x87d) = 0;
  *(undefined2 *)((int)param_2 + 0x87e) = 0;
  if (((iVar2 == 0) || ((char)param_2[0x21f] == '\0')) ||
     ((iVar3 = FUN_ram_4ff2d996(iVar2), iVar3 == 0 || (iVar3 == 0x103)))) {
    *(undefined1 *)(param_2 + 0x21f) = 0;
    FUN_ram_4ff3ee10(piVar1);
    uVar13 = FUN_ram_4ff21a0a();
LAB_ram_4809603c:
    FUN_ram_4ff3ec14(piVar1,0xffffffff);
    if ((((char)param_2[0x162] == '\0') && (*(char *)((int)param_2 + 0x847) == '\0')) &&
       (*(char *)((int)param_2 + 0x845) == '\0')) {
      FUN_ram_4ff3ee10();
      if (iVar2 == 0) {
        memset(&iStack_f0,0,0xb0);
        uStack_ec = 8;
        uStack_94 = 8;
        uStack_d6 = 1;
        uStack_7e = 1;
        FUN_ram_4ff3ec14(piVar1,0xffffffff);
LAB_ram_48096468:
        param_2[0xb] = 0;
        param_2[0x21f] = 0;
        param_2[0x232] = 0;
        *(undefined1 *)(param_2 + 0x233) = 0;
        uVar10 = FUN_ram_48095c68(param_1,param_2,&iStack_f0,2);
        bVar7 = true;
      }
      else {
        iVar2 = FUN_ram_4ff2da0e(iVar2);
        memset(&iStack_f0,0,0xb0);
        uStack_ec = 8;
        uStack_94 = 8;
        uStack_d6 = 1;
        uStack_7e = 1;
        FUN_ram_4ff3ec14(piVar1,0xffffffff);
        if (iVar2 == 0) goto LAB_ram_48096468;
        param_2[0xc21] = iVar2;
        uVar10 = 0;
        bVar7 = false;
      }
      piVar9 = &iStack_f0;
      *(undefined1 *)((int)param_2 + 0x882) = 0;
      *(bool *)(param_2 + 0xbaa) = param_2[0xb] != 0;
      param_2[0xc1e] = 0;
      *(undefined1 *)((int)param_2 + 0x2ea9) = *(undefined1 *)((int)param_2 + 0x87d);
      *(undefined1 *)((int)param_2 + 0x2eaa) = *(undefined1 *)((int)param_2 + 0x87e);
      cVar4 = *(char *)((int)param_2 + 0x881);
      if (cVar4 == '\0') {
        cVar4 = (char)param_2[0x220];
      }
      *(char *)((int)param_2 + 0x2eab) = cVar4;
      *(char *)(param_2 + 0xbab) = (char)param_2[10];
      *(undefined1 *)((int)param_2 + 0x2ead) = *(undefined1 *)((int)param_2 + 0x883);
      param_2[0xbac] = param_2[9];
      bVar12 = false;
      if ((char)param_2[5] == '\x02') {
        bVar12 = 0x7f < *(ushort *)(param_2 + 0xc22);
      }
      *(bool *)(param_2 + 0xc23) = bVar12;
      FUN_ram_4ff3ee10(piVar1);
      if (uVar10 != 0) {
        uVar8 = 0;
        iVar2 = 0;
        do {
          if ((((*(char *)((int)piVar9 + 0xd) != '\x04') || (*piVar9 != 0x370)) ||
              (((char)piVar9[1] != '\b' ||
               (iVar3 = DAT_ram_4ff6dc64, *(char *)((int)piVar9 + 0x1b) != '\x12')))) &&
             (iVar3 = DAT_ram_4ff6dc60, 1 < *(byte *)((int)piVar9 + 0x1a))) {
            iVar3 = DAT_ram_4ff6dc68;
          }
          if ((iVar3 == 0) || (iVar3 = FUN_ram_4ff3afa2(iVar3,piVar9,0,0), iVar3 != 1)) {
            iVar2 = iVar2 + 1;
          }
          uVar8 = uVar8 + 1 & 0xff;
          piVar9 = piVar9 + 0x16;
        } while (uVar10 != uVar8);
        FUN_ram_4ff3ec14(param_1 + 0x88c,0xffffffff);
        iVar3 = *(int *)(param_1 + 0x588);
        FUN_ram_4ff3ee10(param_1 + 0x88c);
        if (iVar3 != 0) {
          FUN_ram_4ff3e004(iVar3,0,0,2,0);
        }
        if (iVar2 != 0) {
          FUN_ram_4ff3ec14(piVar1,0xffffffff);
          param_2[0xbbb] = param_2[0xbbb] + iVar2;
          FUN_ram_4ff3ee10(piVar1);
        }
      }
      if (param_3 != 0) {
        if (param_2[0xc] != 0) {
          FUN_ram_4ff3abd4(param_2[0xc],0);
        }
        if (param_2[0x24] != 0) {
          FUN_ram_4ff3abd4(param_2[0x24],0);
        }
        if (param_2[0x3c] != 0) {
          FUN_ram_4ff3ec14(piVar1,0xffffffff);
          piVar9 = (int *)param_2[0x3c];
          iVar2 = *piVar9;
          if (iVar2 != 0) {
            memset((void *)(iVar2 + 0x940),0xff,0x10);
            pcVar6 = (char *)(iVar2 + 0x900);
            cVar4 = '\0';
            do {
              cVar4 = cVar4 + '\x01';
              *pcVar6 = cVar4;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '?');
            *(undefined2 *)(iVar2 + 0x950) = 0;
            *(undefined1 *)(iVar2 + 0x93f) = 0xff;
            *(undefined1 *)(iVar2 + 0x952) = 0;
          }
          iVar2 = piVar9[1];
          if (iVar2 != 0) {
            memset((void *)(iVar2 + 0x128),0xff,0x10);
            *(undefined2 *)(iVar2 + 0x138) = 0;
            *(undefined4 *)(iVar2 + 0x120) = 0x4030201;
            *(undefined4 *)(iVar2 + 0x124) = 0xff070605;
            *(undefined1 *)(iVar2 + 0x13a) = 0;
          }
          FUN_ram_4ff3ee10(piVar1);
        }
        if (param_2[0x3d] != 0) {
          FUN_ram_4ff3ec14(piVar1,0xffffffff);
          iVar2 = param_2[0x3d];
          *(undefined2 *)(iVar2 + 0x600) = 0;
          *(undefined1 *)(iVar2 + 0x602) = 0;
          FUN_ram_4ff3ee10(piVar1);
        }
        FUN_ram_4ff3ec14(piVar1,0xffffffff);
        param_2[0x213] = 0;
        param_2[0x215] = 0;
        param_2[0x216] = 0;
        param_2[0x217] = 0;
        param_2[0x218] = 0;
        param_2[0x21a] = 0;
        param_2[0x21b] = 0;
        *(undefined1 *)(param_2 + 0x21c) = 0;
        param_2[0x214] = 8;
        param_2[0x219] = 0x10000;
        param_2[0x124] = 8;
        param_2[0x129] = 0x10000;
        param_2[0x123] = 0;
        param_2[0x125] = 0;
        param_2[0x126] = 0;
        param_2[0x127] = 0;
        param_2[0x128] = 0;
        param_2[0x12a] = 0;
        param_2[299] = 0;
        param_2[300] = 0;
        param_2[0x12d] = 0;
        param_2[0x12e] = 0;
        param_2[0x12f] = 0;
        param_2[0x130] = 0;
        param_2[0x131] = 8;
        param_2[0x132] = 0;
        param_2[0x133] = 0;
        param_2[0x134] = 0;
        param_2[0x135] = 0;
        param_2[0x136] = 0x10000;
        param_2[0x137] = 0;
        param_2[0x138] = 0;
        param_2[0x139] = 0;
        param_2[0x13a] = 0;
        param_2[0x13b] = 0;
        param_2[0x13c] = 0;
        *(undefined2 *)(param_2 + 0x141) = 0;
        FUN_ram_4ff3ee10(piVar1);
        if (param_2[0x3e] != 0) {
          FUN_ram_4ff3abd4(param_2[0x3e],0);
        }
        if (param_2[0x56] != 0) {
          FUN_ram_4ff3abd4(param_2[0x56],0);
        }
        FUN_ram_4ff3ec14(piVar1,0xffffffff);
        *(undefined1 *)(param_2 + 0x122) = 0;
        FUN_ram_4ff3ee10(piVar1);
        uVar10 = ((int)param_2 - (param_1 + 0x18) >> 3) * 0xe5d104f;
        if ((uVar10 & 0xff) < 3) {
          fence();
          *(undefined1 *)((uVar10 & 0xff) + param_1 + 0x18c64) = 1;
        }
      }
      if (bVar7 != false) {
        if (param_2[2] < 0) {
          FUN_ram_481212c6((char)param_2[3],5);
        }
        goto LAB_ram_480963d8;
      }
      goto LAB_ram_4809650e;
    }
    FUN_ram_4ff3ee10(piVar1);
    uVar14 = FUN_ram_4ff21a0a();
    uVar10 = (uint)uVar14 - (int)uVar13;
    if (((int)((ulonglong)uVar14 >> 0x20) - (int)((ulonglong)uVar13 >> 0x20) ==
         (uint)((uint)uVar14 < uVar10)) && (uVar10 < 20000)) goto code_r0x48096034;
    FUN_ram_4ff3ec14(piVar1,0xffffffff);
    *(undefined1 *)(param_2 + 0x221) = 1;
    *(undefined1 *)((int)param_2 + 0x882) = 0;
    param_2[0xc1e] = 0;
    param_2[0xc21] = 0x107;
    FUN_ram_4ff27ffa(param_2);
    FUN_ram_4ff3ee10(piVar1);
    bVar7 = false;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x882) = 0;
    param_2[0xc21] = iVar3;
    param_2[0xc1e] = 0;
    FUN_ram_4ff27ffa(param_2);
    FUN_ram_4ff3ee10(piVar1);
LAB_ram_4809650e:
    bVar7 = false;
  }
LAB_ram_480963d8:
  FUN_ram_4ff3afa2(iVar11,0,0,0);
  return bVar7;
code_r0x48096034:
  FUN_ram_4ff3c2b6(1);
  goto LAB_ram_4809603c;
}


