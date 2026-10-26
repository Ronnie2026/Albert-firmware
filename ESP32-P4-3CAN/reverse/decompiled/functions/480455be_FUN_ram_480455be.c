/* Firmware entry: 0x480455be */

undefined4 FUN_ram_480455be(undefined4 *param_1,char *param_2,uint param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  undefined4 *puVar9;
  int *piVar10;
  short *psVar11;
  code *pcVar12;
  uint uVar13;
  int iStack_98;
  char cStack_94;
  char cStack_8b;
  char cStack_80;
  undefined1 uStack_7e;
  uint uStack_7c;
  char cStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != (char *)0x0) {
    *param_4 = '\0';
  }
  puVar9 = param_1 + 0x297;
  *param_2 = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  FUN_ram_4ff3ec14(puVar9,0xffffffff);
  piVar10 = (int *)*param_1;
  FUN_ram_4ff3ee10(puVar9);
  memset(&iStack_98,0,0x58);
  cStack_94 = '\b';
  uStack_7e = 1;
  if ((piVar10 != (int *)0x0) && (uVar4 = 0, param_3 != 0)) {
    do {
      while( true ) {
        psVar11 = (short *)param_1[1];
        if (psVar11 != (short *)0x0) {
          sVar8 = *psVar11;
          if (sVar8 == 0) goto LAB_ram_48045722;
          if (*(code **)(psVar11 + 2) != (code *)0x0) {
            iVar5 = (**(code **)(psVar11 + 2))();
            if (*(uint *)(psVar11 + 6) <= (uint)(iVar5 - *(int *)(psVar11 + 4)))
            goto LAB_ram_48045722;
            sVar8 = *psVar11;
          }
          *psVar11 = sVar8 + -1;
        }
        iVar5 = (**(code **)(*piVar10 + 0xf8))(piVar10,&iStack_98);
        uVar2 = uStack_7c;
        if (iVar5 == 0) goto LAB_ram_48045722;
        if (param_4 != (char *)0x0) {
          *param_4 = '\x01';
        }
        if (((((cStack_80 != '\0') && (cStack_8b == '\x01')) && (iStack_98 == 0x3fd)) &&
            (cStack_94 == '\b')) || (uStack_7c == 0)) break;
        FUN_ram_4ff3ec14(puVar9,0xffffffff);
        uVar13 = uVar2 & 0x7f;
        iVar5 = uVar13 * 0x14;
        if ((*(char *)((int)param_1 + iVar5 + 0x29) != '\0') && (uVar2 == param_1[uVar13 * 5 + 7]))
        {
          cVar3 = *(char *)(param_1 + uVar13 * 5 + 6);
          *(uint *)(param_2 + 4) = uVar2;
          *param_2 = cVar3;
          param_2[8] = cStack_60;
          param_2[9] = *(char *)(param_1 + uVar13 * 5 + 10);
          *(undefined4 *)(param_2 + 0xc) = param_1[uVar13 * 5 + 9];
          *(undefined4 *)(param_2 + 0x14) = uStack_5c;
          *(undefined4 *)(param_2 + 0x18) = uStack_58;
          *(undefined4 *)(param_2 + 0x1c) = uStack_50;
          *(undefined1 *)(param_1 + uVar13 * 5 + 6) = 0;
          *(undefined1 *)(param_1 + uVar13 * 5 + 7) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x1d) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x1e) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x1f) = 0;
          *(undefined1 *)(param_1 + uVar13 * 5 + 8) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x21) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x22) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x23) = 0;
          *(undefined1 *)(param_1 + uVar13 * 5 + 9) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x25) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x26) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x27) = 0;
          *(undefined1 *)(param_1 + uVar13 * 5 + 10) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x29) = 0;
          *(undefined1 *)((int)param_1 + iVar5 + 0x2a) = 0;
          FUN_ram_4ff3ee10(puVar9);
          return 1;
        }
        FUN_ram_4ff3ee10(puVar9);
LAB_ram_4804568a:
        uVar4 = uVar4 + 1 & 0xff;
        if (param_3 == uVar4) goto LAB_ram_48045722;
      }
      FUN_ram_4ff3ec14(puVar9,0xffffffff);
      pcVar12 = (code *)param_1[3];
      FUN_ram_4ff3ee10(puVar9);
      if (pcVar12 == (code *)0x0) goto LAB_ram_4804568a;
      uVar4 = uVar4 + 1 & 0xff;
      (*pcVar12)(&iStack_98);
    } while (param_3 != uVar4);
  }
LAB_ram_48045722:
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    iVar5 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(puVar9,0xffffffff);
    cVar3 = '\b';
    do {
      psVar11 = (short *)param_1[1];
      if (psVar11 != (short *)0x0) {
        sVar8 = *psVar11;
        if (sVar8 == 0) goto LAB_ram_48045764;
        if (*(code **)(psVar11 + 2) != (code *)0x0) {
          iVar6 = (**(code **)(psVar11 + 2))();
          if (*(uint *)(psVar11 + 6) <= (uint)(iVar6 - *(int *)(psVar11 + 4)))
          goto LAB_ram_48045764;
          sVar8 = *psVar11;
        }
        *psVar11 = sVar8 + -1;
      }
      bVar1 = *(byte *)(param_1 + 5);
      uVar4 = (uint)bVar1;
      cVar3 = cVar3 + -1;
      iVar6 = uVar4 * 0x14;
      *(byte *)(param_1 + 5) = bVar1 + 1 & 0x7f;
      if ((*(char *)((int)param_1 + iVar6 + 0x29) != '\0') &&
         (*(char *)((int)param_1 + iVar6 + 0x2a) == '\0')) {
        if (1999 < (uint)(iVar5 - param_1[uVar4 * 5 + 8])) {
          uVar7 = param_1[uVar4 * 5 + 7];
          cVar3 = *(char *)(param_1 + uVar4 * 5 + 6);
          param_2[8] = '\0';
          *(undefined4 *)(param_2 + 4) = uVar7;
          *param_2 = cVar3;
          param_2[9] = *(char *)(param_1 + uVar4 * 5 + 10);
          uVar7 = param_1[uVar4 * 5 + 9];
          param_2[0x1c] = '\0';
          param_2[0x1d] = '\0';
          param_2[0x1e] = '\0';
          param_2[0x1f] = -0x80;
          *(undefined4 *)(param_2 + 0xc) = uVar7;
          param_2[0x11] = '\x01';
          if (cVar3 == '\x0f') {
            *(undefined1 *)((int)param_1 + iVar6 + 0x2a) = 1;
          }
          else {
            *(undefined1 *)(param_1 + uVar4 * 5 + 6) = 0;
            *(undefined1 *)(param_1 + uVar4 * 5 + 7) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x1d) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x1e) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x1f) = 0;
            *(undefined1 *)(param_1 + uVar4 * 5 + 8) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x21) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x22) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x23) = 0;
            *(undefined1 *)(param_1 + uVar4 * 5 + 9) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x25) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x26) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x27) = 0;
            *(undefined1 *)(param_1 + uVar4 * 5 + 10) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x29) = 0;
            *(undefined1 *)((int)param_1 + iVar6 + 0x2a) = 0;
          }
          FUN_ram_4ff3ee10(puVar9);
          uVar7 = FUN_ram_48025b94();
          *(undefined4 *)(param_2 + 0x18) = uVar7;
          if (param_4 != (char *)0x0) {
            *param_4 = '\x01';
          }
          return 1;
        }
        *(byte *)(param_1 + 5) = bVar1;
LAB_ram_48045764:
        FUN_ram_4ff3ee10(puVar9);
        return 0;
      }
    } while (cVar3 != '\0');
    FUN_ram_4ff3ee10(puVar9);
  }
  return 0;
}


