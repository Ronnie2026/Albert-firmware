/* Firmware entry: 0x4804304e */

void FUN_ram_4804304e(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  undefined1 *puVar10;
  int iVar11;
  bool bVar12;
  char cVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint auStack_14 [4];
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar9 = *(char *)(param_1 + 0x47);
  param_4 = param_4 & (param_6 ^ 1);
  if ((*(char *)(param_1 + 1) == '\0') || (param_5 == 0)) {
    if (*(char *)(param_1 + 2) == '\0') {
LAB_ram_48043298:
      if (*(char *)(param_1 + 8) != '\0') {
        uVar8 = 0;
        if ((((*(char *)(param_1 + 0x132) != '\0') &&
             ((uint)(param_2 - *(int *)(param_1 + 0x134)) < 0x1f5)) &&
            (uVar8 = (uint)*(byte *)(param_1 + 0x130), *(char *)(param_1 + 9) == '\0')) &&
           (uVar8 == 3)) {
          uVar8 = 0;
        }
        uVar17 = 0;
        uVar16 = 0;
        do {
          uVar3 = uVar17 & 0x1f;
          uVar4 = uVar17 & 0xf;
          uVar17 = uVar17 + 1;
          if ((*(byte *)(param_1 + 0xb) >> uVar3 & 1) != 0) {
            uVar16 = uVar16 | (uVar8 & 3) << (uVar4 << 1) & 0xff;
          }
        } while (uVar17 != 3);
        if (uVar16 != 0) goto joined_r0x480432f4;
      }
      if (cVar9 != '\0') {
        cVar9 = '\0';
        if (param_4 == 0) goto LAB_ram_48043068;
        if ((*(int *)(param_1 + 0xb0) != 0) && (param_3 != *(int *)(param_1 + 0xb0))) {
          uVar8 = 7;
          goto LAB_ram_4804307a;
        }
        cVar9 = *(char *)(param_1 + 0xb4);
        if (cVar9 != '\0') {
          piVar6 = (int *)(param_1 + 0x70);
          uVar8 = 0;
          piVar15 = piVar6;
LAB_ram_48043396:
          uVar17 = uVar8 & 0x1f;
          uVar8 = uVar8 + 1;
          if (((*(byte *)(param_1 + 0xb6) >> uVar17 & 1) == 0) ||
             ((*(char *)((int)piVar15 + 5) != '\0' && ((uint)(param_2 - *piVar15) < 0x1f5))))
          goto LAB_ram_480433b2;
          piVar15 = (int *)(param_1 + 0x90);
          do {
            *(undefined1 *)piVar6 = 0;
            *(undefined1 *)((int)piVar6 + 1) = 0;
            *(undefined1 *)((int)piVar6 + 2) = 0;
            *(undefined1 *)((int)piVar6 + 3) = 0;
            *(undefined1 *)(piVar6 + 1) = 0;
            *(undefined1 *)((int)piVar6 + 5) = 0;
            *(undefined1 *)((int)piVar6 + 6) = 0;
            piVar6 = piVar6 + 2;
          } while (piVar15 != piVar6);
          do {
            *(undefined1 *)piVar15 = 0;
            *(undefined1 *)((int)piVar15 + 1) = 0;
            *(undefined1 *)((int)piVar15 + 2) = 0;
            *(undefined1 *)((int)piVar15 + 3) = 0;
            *(undefined1 *)(piVar15 + 1) = 0;
            *(undefined1 *)((int)piVar15 + 5) = 0;
            *(undefined1 *)((int)piVar15 + 6) = 0;
            piVar15 = piVar15 + 2;
          } while (piVar15 != (int *)(param_1 + 0xb0));
          iVar11 = *(int *)(param_1 + 0xd8);
          *(undefined4 *)(param_1 + 0xb0) = 0;
          uVar8 = (-(uint)(*(char *)(param_1 + 0x47) == '\0') & 0xfffffffb) + 5;
          goto LAB_ram_480430e8;
        }
        goto LAB_ram_4804319a;
      }
    }
    else {
      uVar8 = 0;
      if ((*(char *)(param_1 + 0x124) != '\0') &&
         ((uint)(param_2 - *(int *)(param_1 + 0x128)) < 0x5dd)) {
        uVar8 = 1;
        if ((*(char *)(param_1 + 0x114) == '\0') && (uVar8 = 0, *(char *)(param_1 + 0x115) != '\0'))
        {
          uVar8 = (uint)((uint)(param_2 - *(int *)(param_1 + 0x118)) <
                        (uint)*(ushort *)(param_1 + 6));
        }
        if ((*(char *)(param_1 + 0x11c) != '\0') ||
           ((*(char *)(param_1 + 0x11d) != '\0' &&
            ((uint)(param_2 - *(int *)(param_1 + 0x120)) < (uint)*(ushort *)(param_1 + 6))))) {
          uVar8 = uVar8 | 2;
        }
      }
      uVar17 = 0;
      uVar16 = 0;
      do {
        uVar3 = uVar17 & 0x1f;
        uVar4 = uVar17 & 0xf;
        uVar17 = uVar17 + 1;
        if ((*(byte *)(param_1 + 4) >> uVar3 & 1) != 0) {
          uVar16 = uVar16 | uVar8 << (uVar4 << 1) & 0xff;
        }
      } while (uVar17 != 3);
      if (uVar16 == 0) goto LAB_ram_48043298;
joined_r0x480432f4:
      if (cVar9 != '\0') {
        if (param_4 == 0) goto LAB_ram_48043068;
        if ((*(char *)(param_1 + 0xb4) == '\0') && (cVar9 = '\0', *(int *)(param_1 + 0xb0) == 0))
        goto LAB_ram_4804319a;
        uVar8 = 6;
        goto LAB_ram_4804307a;
      }
    }
LAB_ram_480432f8:
    cVar9 = '\0';
    if (*(char *)(param_1 + 0xb4) != '\0') {
      puVar14 = (undefined1 *)(param_1 + 0x90);
      for (puVar10 = (undefined1 *)(param_1 + 0x70); puVar10 != puVar14; puVar10 = puVar10 + 8) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
      }
      do {
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14 = puVar14 + 8;
      } while ((undefined1 *)(param_1 + 0xb0) != puVar14);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      iVar11 = *(int *)(param_1 + 0xd8) + 1;
      *(int *)(param_1 + 0xd8) = iVar11;
      iVar5 = *(int *)(param_1 + 0xe4);
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0xd8) = 1;
        cVar13 = '\0';
        uVar8 = 0;
        cVar9 = '\0';
      }
      else {
        cVar13 = '\0';
        uVar8 = 0;
        cVar9 = '\0';
      }
      goto LAB_ram_480431a6;
    }
  }
  else {
    if (cVar9 == '\0') goto LAB_ram_480432f8;
LAB_ram_48043068:
    if ((*(char *)(param_1 + 0xb4) != '\0') || (*(int *)(param_1 + 0xb0) != 0)) {
      uVar8 = (uint)(byte)(7 - cVar9);
LAB_ram_4804307a:
      puVar14 = (undefined1 *)(param_1 + 0x90);
      for (puVar10 = (undefined1 *)(param_1 + 0x70); puVar10 != puVar14; puVar10 = puVar10 + 8) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
      }
      do {
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14 = puVar14 + 8;
      } while ((undefined1 *)(param_1 + 0xb0) != puVar14);
      iVar11 = *(int *)(param_1 + 0xd8);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      uVar8 = uVar8 & -(uint)(*(char *)(param_1 + 0x47) != '\0');
LAB_ram_480430e8:
      *(undefined1 *)(param_1 + 0xb4) = 0;
      *(undefined2 *)(param_1 + 0xb6) = 0;
      *(char *)(param_1 + 0xb5) = (char)uVar8;
      *(int *)(param_1 + 0xd8) = iVar11 + 1;
      iVar5 = *(int *)(param_1 + 0xe4);
      if (iVar11 + 1 == 0) {
        *(undefined4 *)(param_1 + 0xd8) = 1;
        cVar13 = '\0';
        cVar9 = '\0';
      }
      else {
        cVar13 = '\0';
        cVar9 = '\0';
      }
      goto LAB_ram_480431a6;
    }
    cVar9 = '\0';
  }
LAB_ram_4804319a:
  uVar8 = (uint)*(byte *)(param_1 + 0xb5);
  cVar13 = *(char *)(param_1 + 0xb7);
  iVar5 = *(int *)(param_1 + 0xe4);
LAB_ram_480431a6:
  if ((((*(char *)(param_1 + 0x1dd) != cVar9) || (*(byte *)(param_1 + 0x1de) != uVar8)) ||
      (*(char *)(param_1 + 0x1df) != cVar13)) ||
     (((*(char *)(param_1 + 0x1e0) != *(char *)(param_1 + 0xb8) ||
       (*(int *)(param_1 + 0x1e4) != *(int *)(param_1 + 0xdc))) ||
      ((*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0xe0) ||
       (*(int *)(param_1 + 0x1ec) != iVar5)))))) {
    *(char *)(param_1 + 0x1dd) = cVar9;
    *(char *)(param_1 + 0x1de) = (char)uVar8;
    *(char *)(param_1 + 0x1df) = cVar13;
    *(char *)(param_1 + 0x1e0) = *(char *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0xdc);
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0x1ec) = iVar5;
    if (*(char *)(param_1 + 0x17d) == '\0') {
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      bVar12 = false;
    }
    else {
      uVar8 = 0;
      uVar17 = 0;
      iVar5 = param_1;
      do {
        iVar11 = iVar5 + 5;
        bVar7 = *(byte *)(param_1 + 0x140) >> (uVar8 & 0x1f) & 1;
        do {
          pcVar1 = (char *)(iVar5 + 0x15f);
          pcVar2 = (char *)(iVar5 + 0x141);
          iVar5 = iVar5 + 1;
          bVar7 = bVar7 & *pcVar1 == *pcVar2;
        } while (iVar5 != iVar11);
        if (bVar7 == 0) {
          uVar17 = uVar17 | 1 << (uVar8 & 0x1f) & 0xffU;
        }
        uVar8 = uVar8 + 1;
        iVar5 = iVar11;
      } while (uVar8 != 6);
      *(char *)(param_1 + 0x1dc) = (char)uVar17;
      bVar12 = 0xb < *(byte *)(param_1 + 0x19c) && uVar17 != 0;
    }
    cVar9 = *(char *)(param_1 + 0x19f);
    *(bool *)(param_1 + 0x1f5) = bVar12;
    if (cVar9 == '\0') {
      cVar9 = *(char *)(param_1 + 0x1a2);
    }
    cVar13 = *(char *)(param_1 + 0x2e8);
    *(char *)(param_1 + 0x1f1) = cVar9;
    *(undefined1 *)(param_1 + 499) = *(undefined1 *)(param_1 + 0x37c);
    *(undefined1 *)(param_1 + 500) = *(undefined1 *)(param_1 + 0x1a1);
    if ((cVar13 != '\0') && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x31c))) {
      cVar13 = *(int *)(param_1 + 0x194) == *(int *)(param_1 + 0x31c);
    }
    *(char *)(param_1 + 0x1f2) = cVar13;
    iVar5 = *(int *)(param_1 + 0x1a4) + 1;
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x1a4) = iVar5;
  }
  return;
LAB_ram_480433b2:
  piVar15 = piVar15 + 2;
  if (uVar8 == 4) goto code_r0x480433b8;
  goto LAB_ram_48043396;
code_r0x480433b8:
  iVar5 = *(int *)(param_1 + 0xe4);
  if (cVar9 == '\x02') {
    uVar8 = param_2 - *(int *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0x4b) == '\0') {
      uVar8 = (uVar8 * 4) / 5;
    }
    else if (*(char *)(param_1 + 0x4b) == '\x02') {
      uVar8 = uVar8 * 5 >> 2;
    }
    auStack_14[0] = DAT_ram_48222f28;
    auStack_14[1] = DAT_ram_48222f2c;
    auStack_14[2] = DAT_ram_48222f30;
    auStack_14[3] = DAT_ram_48222f34;
    uStack_4 = DAT_ram_48222f38;
    if (auStack_14[*(byte *)(param_1 + 0x48)] <= uVar8) {
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0xe4) = iVar5;
      iVar11 = *(int *)(param_1 + 0xd8) + 1;
      *(undefined4 *)(param_1 + 0xb4) = 0x100;
      if (iVar11 == 0) {
        iVar11 = 1;
      }
      *(int *)(param_1 + 0xd8) = iVar11;
      cVar13 = '\0';
      uVar8 = 1;
      cVar9 = '\0';
      goto LAB_ram_480431a6;
    }
  }
  uVar8 = (uint)*(byte *)(param_1 + 0xb5);
  cVar13 = *(char *)(param_1 + 0xb7);
  goto LAB_ram_480431a6;
}


