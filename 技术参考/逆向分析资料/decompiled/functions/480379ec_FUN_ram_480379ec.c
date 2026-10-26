/* Firmware entry: 0x480379ec */

undefined4 FUN_ram_480379ec(void)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  char *pcVar10;
  uint uVar11;
  uint *puStack_44;
  
  iVar7 = DAT_ram_4ff6dc58;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = FUN_ram_48031bc6(DAT_ram_4ff6dc58);
  if (iVar6 == 0) {
    piVar5 = (int *)(iVar7 + 0x48);
    do {
      if ((*piVar5 != 0) && (iVar6 = FUN_ram_4ff3b9c2(), iVar6 != 0)) {
        return 1;
      }
      piVar5 = piVar5 + 0xd5e;
    } while (piVar5 != (int *)(iVar7 + 0xa0b0));
    fence();
    fence();
    if (((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) == 0) && (DAT_ram_4ff6485b == '\0')) {
      pcVar10 = &DAT_ram_4ff65a81;
      do {
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 0x1228;
        if (cVar4 != '\0') {
          return 1;
        }
      } while (pcVar10 != &DAT_ram_4ff690f9);
      FUN_ram_4ff3ec14(&DAT_ram_4ff641e0,0xffffffff);
      pcVar10 = &DAT_ram_4ff63788;
      bVar3 = false;
      do {
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 0xf0;
        bVar3 = (bool)(bVar3 | cVar4 == '\x04');
      } while (pcVar10 != &DAT_ram_4ff642c8);
      FUN_ram_4ff3ee10(&DAT_ram_4ff641e0);
      iVar7 = DAT_ram_4ff64208;
      if (!bVar3) {
        if (DAT_ram_4ff64208 != 0) {
          iVar6 = DAT_ram_4ff64208 + 0xc;
          FUN_ram_4ff3ec14(iVar6,0xffffffff);
          sVar2 = *(short *)(iVar7 + 0x3c02);
          FUN_ram_4ff3ee10(iVar6);
          if (sVar2 != 0) {
            return 1;
          }
        }
        pcVar10 = &DAT_ram_4ff6485c;
        do {
          cVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          if (cVar4 != '\0') {
            return 1;
          }
        } while (pcVar10 != &DAT_ram_4ff6485f);
        FUN_ram_4ff3ec14(&DAT_ram_4ff63684,0xffffffff);
        piVar5 = DAT_ram_4ff62c28;
        iVar7 = FUN_ram_4ff3ee10(&DAT_ram_4ff63684);
        if (piVar5 != (int *)0x0) {
          iVar7 = (**(code **)(*piVar5 + 0x10c))(piVar5);
          if (iVar7 != 0) {
            return 1;
          }
          iVar6 = (**(code **)(*piVar5 + 0x104))(piVar5);
          iVar7 = 0;
          if (iVar6 != 0) {
            return 1;
          }
        }
        iVar6 = DAT_ram_4ff64208;
        if (DAT_ram_4ff64208 != 0) {
          iVar7 = DAT_ram_4ff64208 + 0xc;
          FUN_ram_4ff3ec14(iVar7,0xffffffff);
          bVar1 = *(byte *)(iVar6 + 0x3bf6);
          iVar7 = FUN_ram_4ff3ee10(iVar7);
          if ((bVar1 & 6) != 0) {
            return 1;
          }
        }
        puStack_44 = &DAT_ram_4ff65a7c;
        cVar4 = '\0';
LAB_ram_48037be0:
        uVar11 = *puStack_44;
LAB_ram_48037be6:
        if (uVar11 != 0) {
          iVar7 = __ctzsi2(uVar11);
          uVar11 = uVar11 & uVar11 - 1;
          if (cVar4 == '\0') goto code_r0x48037bfe;
          while (cVar4 != '\x01') {
            if (iVar7 < 0x18) {
              iVar6 = 2;
              cVar9 = '\x04';
              goto LAB_ram_48037c06;
            }
            iVar7 = 0;
            if (uVar11 == 0) goto LAB_ram_48037caa;
            iVar7 = __ctzsi2();
            uVar11 = uVar11 & uVar11 - 1;
          }
          while (0x17 < iVar7) {
            if (uVar11 == 0) {
              puStack_44 = puStack_44 + 0x48a;
              cVar4 = '\x02';
              iVar7 = 0;
              goto LAB_ram_48037be0;
            }
            iVar7 = __ctzsi2(uVar11);
            uVar11 = uVar11 & uVar11 - 1;
          }
          iVar6 = 1;
          cVar9 = '\x02';
          goto LAB_ram_48037c06;
        }
LAB_ram_48037caa:
        cVar4 = cVar4 + '\x01';
        if (cVar4 != '\x03') {
          puStack_44 = puStack_44 + 0x48a;
          goto LAB_ram_48037be0;
        }
        if (((DAT_ram_4ff6dfb4 == (code *)0x0) || (iVar7 = (*DAT_ram_4ff6dfb4)(iVar7), iVar7 == 0))
           && (iVar7 = FUN_ram_4802c7b6(), iVar7 == 0)) {
          uVar8 = FUN_ram_4ff2bcc4();
          return uVar8;
        }
      }
    }
  }
  return 1;
code_r0x48037bfe:
  if (iVar7 < 0x18) {
    iVar6 = 0;
    cVar9 = '\x01';
LAB_ram_48037c06:
    if (iVar7 < 0x10) {
      iVar6 = iVar7 * 0xe8 + 0x3a40 + iVar6 * 0x1228;
    }
    else {
      iVar7 = iVar7 + -0x10;
      iVar6 = iVar7 * 0x120;
      if (((&DAT_ram_4ff67ef6)[iVar6] == '\0') || ((&DAT_ram_4ff67ed8)[iVar6] != cVar9))
      goto LAB_ram_48037be6;
      iVar6 = iVar6 + 0x70f0;
    }
    if (*(char *)(iVar6 + 0x4ff60e57) == '\x03') {
      return 1;
    }
  }
  goto LAB_ram_48037be6;
}


