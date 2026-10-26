/* Firmware entry: 0x480daefc */

void FUN_ram_480daefc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  char *__s;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  int *piVar18;
  int iStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined1 auStack_1b0 [4];
  undefined1 uStack_1ac;
  byte bStack_197;
  undefined1 uStack_196;
  char cStack_18c;
  byte bStack_18b;
  undefined4 uStack_178;
  char cStack_174;
  undefined1 auStack_170 [3];
  char cStack_16d;
  undefined1 uStack_160;
  undefined1 uStack_150;
  int iStack_134;
  undefined4 local_e4;
  undefined4 auStack_e0 [43];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[400] != 0) {
    return;
  }
  if (param_1[0x1c8] == param_1[0x143]) {
    return;
  }
  if ((char)param_1[0x79] == '\0') {
    cVar15 = (char)param_1[0xa1];
    bVar1 = false;
  }
  else {
    fence();
    cVar15 = (char)param_1[0xa1];
    bVar1 = (*(uint *)param_1[3] >> 0x10 & 3) == 1;
  }
  bVar16 = 0;
  if (cVar15 != '\0') {
    bVar16 = 0;
    if (((param_1[99] == 0) && (bVar16 = 0, param_1[0x6e] == 0)) && ((char)param_1[0x79] == '\0')) {
      bVar16 = *(byte *)((int)param_1 + 0x9e) ^ 1;
    }
  }
  memset(auStack_1b0,0,0x40);
  iVar2 = *param_1;
  uStack_1ac = 8;
  uStack_196 = 1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar12 = (undefined4 *)(iVar2 + 0xb38);
  puVar10 = &local_e4;
  do {
    uVar5 = puVar12[1];
    uVar7 = puVar12[2];
    uVar8 = puVar12[3];
    *puVar10 = *puVar12;
    puVar10[1] = uVar5;
    puVar10[2] = uVar7;
    puVar10[3] = uVar8;
    puVar12 = puVar12 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar12 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar10 = *puVar12;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  cVar15 = *(char *)(*param_1 + 0x84a0);
  if ((cVar15 != '\0') && (local_e4._1_1_ != '\f')) {
    cVar3 = FUN_ram_480dac84(param_1,param_3,auStack_1b0);
    goto LAB_ram_480dafe8;
  }
  piVar18 = param_1 + 0x109;
  if (*(char *)((int)param_1 + 0x52e) == '\0') {
    if ((bVar1) && ((char)param_1[0x14b] != '\0')) {
LAB_ram_480db336:
      cVar3 = FUN_ram_48041018(piVar18,1,param_3,auStack_1b0);
    }
    else {
      if (bVar16 == 0) {
        return;
      }
      if (*(char *)((int)param_1 + 0x52d) == '\0') {
        return;
      }
LAB_ram_480db34c:
      cVar3 = FUN_ram_48041018(piVar18,2,param_3,auStack_1b0);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x52f) == '\0') {
      if ((bVar1) && ((char)param_1[0x14b] != '\0')) goto LAB_ram_480db336;
      if ((bVar16 != 0) && (*(char *)((int)param_1 + 0x52d) != '\0')) goto LAB_ram_480db34c;
    }
    cVar3 = FUN_ram_48041018(piVar18,3,param_3,auStack_1b0);
  }
  cVar15 = '\0';
LAB_ram_480dafe8:
  if (cVar3 == '\x01') {
    uVar14 = 0;
    uVar17 = 0;
    if ((bStack_18b & 1) != 0) {
      uVar6 = 2;
      uVar5 = 6;
      if ((local_e4._1_1_ == '\f') && (*(char *)((int)param_1 + 0x1e5) == '\0')) {
        uVar5 = 0xb;
        if ((char)param_1[0x51] != '\0') {
          uVar6 = *(undefined1 *)((int)param_1 + 0x12d);
          uVar5 = 0xb;
        }
      }
      iVar2 = FUN_ram_4805c396(*param_1,2,uVar6,uVar5);
      if (iVar2 == 0) {
        return;
      }
      uVar17 = 4;
      uVar14 = (uint)(*(char *)((int)param_1 + 0x1e7) == '\x02') << 2;
    }
    if ((bStack_18b & 2) != 0) {
      iVar2 = FUN_ram_4805c396(*param_1,3,2,6);
      if (iVar2 == 0) {
        return;
      }
      uVar17 = uVar17 | 8;
      if (*(char *)((int)param_1 + 0x28b) == '\x02') {
        uVar14 = uVar14 | 8;
      }
    }
    if ((bStack_18b & 4) != 0) {
      if (local_e4._1_1_ != '\f') {
        local_e4._1_1_ = '\x06';
      }
      iVar2 = FUN_ram_4805c396(*param_1,4,2,local_e4._1_1_);
      if (iVar2 == 0) {
        return;
      }
      uVar17 = uVar17 | 0x10;
      if (((char)param_1[0x1d9] == '\x01') && (*(char *)((int)param_1 + 0x769) == '\0')) {
        uVar14 = uVar14 | 0x10;
      }
    }
    uVar5 = 5;
    if ((cStack_18c != '\x01') && (uVar5 = 4, cStack_18c != '\x02')) {
      uVar5 = 8;
    }
    __s = (char *)param_1[0x1c4];
    if (__s != (char *)0x0) {
      pcVar11 = __s + 0x7400;
      do {
        if (*__s == '\0') {
          cVar3 = '\x01';
          iStack_1c4 = 0;
          *__s = '\x01';
          if ((bStack_18b & 4) == 0) {
            bStack_197 = bStack_197 & 0xfd;
          }
          else {
            piVar18 = param_1 + 0xae;
            FUN_ram_4804a1e6(auStack_170,piVar18,param_2);
            if ((char)param_1[0x1d9] == '\x02') {
              bStack_197 = bStack_197 | 2;
            }
            else {
              iVar2 = param_1[0x1ec];
              if (((iVar2 == 0) && (2 < (byte)(cStack_16d - 2U))) ||
                 (*(char *)((int)param_1 + 0x769) != '\0')) {
                bStack_197 = bStack_197 & 0xfd;
                FUN_ram_4804a1e6(auStack_170,piVar18,param_2);
              }
              else {
                bStack_197 = bStack_197 | 2;
                FUN_ram_4804a1e6(auStack_170,piVar18,param_2);
                iVar2 = param_1[0x1ec];
              }
              if ((iVar2 == 0) && (2 < (byte)(cStack_16d - 2U))) {
                cVar3 = (cStack_174 != '\0') + '\x01';
                goto LAB_ram_480db0a2;
              }
            }
            cVar3 = '\x03';
          }
LAB_ram_480db0a2:
          iStack_1b8 = 0;
          iStack_1b4 = 0;
          uStack_1c0 = CONCAT22(uStack_1c0._2_2_,0xff00);
          iVar4 = FUN_ram_4805cb5e(*param_1,auStack_1b0,cStack_174,uVar5,cVar3,0,uStack_178,2,
                                   &iStack_1c4,uVar17,uVar14,1,&uStack_1c0,0);
          iVar2 = iStack_1c4;
          if (iVar4 == 0) {
            memset(__s,0,0xe8);
            __s[0x20] = '\0';
            __s[0x21] = '\0';
            __s[0x22] = '\0';
            __s[0x23] = '\0';
            __s[0x28] = '\0';
            __s[0x29] = '\0';
            __s[0x2a] = '\0';
            __s[0x2b] = '\0';
            __s[0x2c] = '\0';
            __s[0x2d] = '\0';
            __s[0x2e] = '\0';
            __s[0x2f] = '\0';
            __s[0x30] = '\0';
            __s[0x31] = '\0';
            __s[0x32] = '\0';
            __s[0x33] = '\0';
            __s[0x34] = '\0';
            __s[0x35] = '\0';
            __s[0x36] = '\0';
            __s[0x37] = '\0';
            __s[0x3c] = '\0';
            __s[0x3d] = '\0';
            __s[0x3e] = '\0';
            __s[0x3f] = '\0';
            __s[0x40] = '\0';
            __s[0x41] = '\0';
            __s[0x42] = '\0';
            __s[0x43] = '\0';
            __s[0x11] = -1;
            __s[0x38] = '\0';
            __s[0x39] = '\0';
            __s[0x3a] = '\x01';
            __s[0x3b] = '\0';
            __s[0x24] = '\b';
            __s[0x25] = '\0';
            __s[0x26] = '\0';
            __s[0x27] = '\0';
            __s[0x60] = '\b';
            __s[0x70] = '\b';
            __s[0x80] = '\b';
            return;
          }
          param_1[400] = iStack_1c4;
          FUN_ram_4ff45158(param_1 + 0x191,auStack_1b0,0x3e);
          memset(auStack_170,0,0x88);
          auStack_170[0] = 8;
          uStack_160 = 8;
          uStack_150 = 8;
          FUN_ram_4ff45158(param_1 + 0x1a2,auStack_170,0x82);
          iVar13 = *param_1;
          iVar4 = *(int *)(iVar13 + 0xa30);
          iVar9 = *(int *)(iVar13 + 0xa34);
          *(undefined1 *)(param_1 + 0x1a2) = *(undefined1 *)(iVar13 + 0xa28);
          param_1[0x1a4] = iVar4;
          param_1[0x1a5] = iVar9;
          iVar4 = *(int *)(iVar13 + 0xa58);
          iVar9 = *(int *)(iVar13 + 0xa5c);
          *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(iVar13 + 0xa50);
          param_1[0x1a8] = iVar4;
          param_1[0x1a9] = iVar9;
          iVar4 = *(int *)(iVar13 + 0xa84);
          uVar6 = *(undefined1 *)(iVar13 + 0xa78);
          param_1[0x1ac] = *(int *)(iVar13 + 0xa80);
          param_1[0x1ad] = iVar4;
          param_1[0x1c0] = param_1[0x1c7];
          param_1[0x1be] = param_1[0x1c5];
          param_1[0x1bf] = param_1[0x1c6];
          *(undefined1 *)(param_1 + 0x1aa) = uVar6;
          uVar5 = FUN_ram_48025ba6();
          FUN_ram_4804a1e6(auStack_170,param_1 + 0xae,uVar5);
          param_1[0x1c1] = iStack_134;
          if (((bStack_18b & 1) != 0) && ((char)param_1[0x79] != '\0')) {
            *(undefined1 *)(param_1 + 0x1c2) = 1;
            *(undefined1 *)(param_1 + 0x1ae) = *(undefined1 *)((int)param_1 + 0x1e7);
            *(char *)((int)param_1 + 0x6b9) = (char)param_1[0x7a];
            *(undefined1 *)((int)param_1 + 0x6ba) = *(undefined1 *)((int)param_1 + 0x1e9);
          }
          if (((bStack_18b & 2) != 0) && ((char)param_1[0xa1] != '\0')) {
            *(undefined1 *)((int)param_1 + 0x6bb) = *(undefined1 *)((int)param_1 + 0x28b);
            *(char *)(param_1 + 0x1af) = (char)param_1[0xa3];
            *(undefined1 *)((int)param_1 + 0x6bd) = *(undefined1 *)((int)param_1 + 0x28d);
            *(undefined1 *)((int)param_1 + 0x6be) = *(undefined1 *)((int)param_1 + 0x28e);
            *(undefined1 *)((int)param_1 + 0x6bf) = *(undefined1 *)((int)param_1 + 0x28f);
            *(undefined1 *)((int)param_1 + 0x709) = 1;
          }
          if ((bStack_18b & 4) != 0) {
            param_1[0x1b4] = param_1[0x1dd];
            param_1[0x1b5] = param_1[0x1de];
            param_1[0x1b6] = param_1[0x1df];
            *(char *)(param_1 + 0x1b0) = (char)param_1[0x1d9];
            param_1[0x1b1] = param_1[0x1da];
            param_1[0x1b2] = param_1[0x1db];
            param_1[0x1b3] = param_1[0x1dc];
            param_1[0x1b7] = param_1[0x1e0];
            param_1[0x1b8] = param_1[0x1e1];
            param_1[0x1b9] = param_1[0x1e2];
            FUN_ram_4ff45158(param_1 + 0x1ba,param_1 + 0x1e3,0xe);
          }
          *(int *)(__s + 0x10) = uStack_1c0;
          *(int *)(__s + 4) = iVar2;
          *(int *)(__s + 0x14) = iStack_1bc;
          *(int *)(__s + 0x18) = iStack_1b8;
          *(int *)(__s + 0x1c) = iStack_1b4;
          FUN_ram_4ff45158(__s + 0x20,auStack_1b0,0x3e);
          FUN_ram_4ff45158(__s + 0x60,param_1 + 0x1a2,0x82);
          if (cVar15 == '\0') {
            return;
          }
          param_1[0x18a] = uStack_1c0;
          param_1[0x18b] = iStack_1bc;
          param_1[0x18c] = iStack_1b8;
          param_1[0x18d] = iStack_1b4;
          return;
        }
        __s = __s + 0xe8;
      } while (pcVar11 != __s);
    }
  }
  return;
}


