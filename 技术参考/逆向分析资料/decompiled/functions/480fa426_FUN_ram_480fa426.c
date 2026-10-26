/* Firmware entry: 0x480fa426 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_ram_480fa426(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  char cVar14;
  int iVar15;
  ushort uStack_4e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dd78 == '\0') {
    return;
  }
  iVar2 = FUN_ram_48025ba6();
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  iVar15 = DAT_ram_4ff69f64;
  cVar14 = DAT_ram_4ff69f60;
  uVar13 = DAT_ram_4ff69f50._2_2_;
  if (DAT_ram_4ff69f60 == '\0') {
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    uVar8 = 0;
    uVar5 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = 0xffffffff;
  }
  else {
    uVar5 = (uint)(ushort)DAT_ram_4ff69f54;
    uVar8 = (uint)DAT_ram_4ff69f54._2_2_;
    uVar11 = (uint)(ushort)DAT_ram_4ff69f50;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    uVar12 = iVar2 - iVar15;
    if (0x5dc < uVar12) {
      cVar14 = '\0';
      uVar12 = 0xffffffff;
    }
  }
  bVar9 = DAT_ram_4ff47e78 ^ 1;
  if ((DAT_ram_4ff5c53c == (int *)0x0) ||
     (DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49 == DAT_ram_4ff5c53c)) {
    uVar10 = 0;
LAB_ram_480fa4bc:
    iVar3 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
    cVar1 = DAT_ram_4ff69dc4;
    iVar15 = DAT_ram_4ff69dc0;
    cVar14 = DAT_ram_4ff69dbc;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    if (((cVar1 == '\0') || (500 < (uint)(iVar3 - iVar15))) || (cVar14 != '\x01')) {
      DAT_ram_4ff5c538 = 0;
      DAT_ram_4ff5c534 = 0;
      DAT_ram_4ff5c530 = 0;
      goto LAB_ram_480fa652;
    }
    fence();
    fence();
    cVar14 = '\0';
LAB_ram_480fa510:
    DAT_ram_4ff5c538 = 0;
    DAT_ram_4ff5c534 = 0;
    DAT_ram_4ff5c530 = 0;
    if (cVar14 == '\0') goto LAB_ram_480fa652;
LAB_ram_480fa52c:
    if (DAT_ram_4ff6dd80 != 0) {
      uVar10 = 3;
      if (bVar9 != 0) goto LAB_ram_480fa652;
LAB_ram_480fa53a:
      uVar10 = 1;
      goto LAB_ram_480fa652;
    }
  }
  else {
    if (bVar9 != 0) {
      uVar10 = 3;
      goto LAB_ram_480fa4bc;
    }
    uVar10 = (-(uint)(DAT_ram_4ff6dd80 != 0 || DAT_ram_4ff6dd7c != 0) & 0xfffffffd) + 4;
    if ((cVar14 == '\0') || (0x5dc < uVar12)) goto LAB_ram_480fa4bc;
    iVar3 = 0;
    iVar15 = 0;
    piVar7 = DAT_ram_4ff5c53c;
    do {
      uVar6 = piVar7[5] & 0xffff;
      if (uVar11 < uVar6) {
        uVar6 = uVar6 - uVar11;
      }
      else {
        uVar6 = uVar11 - uVar6;
      }
      if ((uVar6 & 0xffff) <= (piVar7[7] & 0xffffU)) {
        uStack_4e = (ushort)((uint)piVar7[5] >> 0x10);
        if (uVar13 < uStack_4e) {
          uStack_4e = uStack_4e - uVar13;
        }
        else {
          uStack_4e = uVar13 - uStack_4e;
        }
        if ((uint)uStack_4e <= (uint)piVar7[7] >> 0x10) {
          uVar6 = piVar7[6] & 0xffff;
          if (uVar5 < uVar6) {
            uVar6 = uVar6 - uVar5;
          }
          else {
            uVar6 = uVar5 - uVar6;
          }
          if ((uVar6 & 0xffff) <= (piVar7[8] & 0xffffU)) {
            uVar6 = (uint)piVar7[6] >> 0x10;
            if (uVar8 < uVar6) {
              uVar6 = uVar6 - uVar8;
            }
            else {
              uVar6 = uVar8 - uVar6;
            }
            if ((uVar6 & 0xffff) <= (uint)piVar7[8] >> 0x10) {
              iVar3 = iVar3 + 1;
              iVar15 = *piVar7;
            }
          }
        }
      }
      piVar7 = piVar7 + 0x49;
    } while (DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49 != piVar7);
    if ((iVar3 == 0) || (uVar10 = 5, iVar3 != 1)) goto LAB_ram_480fa4bc;
    if (DAT_ram_4ff6dd80 == iVar15) {
      uVar10 = 2;
      goto LAB_ram_480fa4bc;
    }
    iVar4 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
    cVar14 = DAT_ram_4ff69dc4;
    iVar3 = DAT_ram_4ff69dc0;
    cVar1 = DAT_ram_4ff69dbc;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
    if (cVar14 != '\0') {
      if ((uint)(iVar4 - iVar3) < 0x1f5) {
        if (cVar1 != '\x01') goto LAB_ram_480fa758;
        fence();
        fence();
        if ((DAT_ram_4ff6df30 != '\0') || (iVar15 == 0)) {
          uVar10 = 2;
          goto LAB_ram_480fa510;
        }
        iVar3 = iVar2 - uVar12;
        if (((iVar15 == DAT_ram_4ff5c530) && (DAT_ram_4ff5c534 != 0)) &&
           ((uint)(iVar3 - DAT_ram_4ff5c538) < 0x5dd)) {
          if (iVar3 == DAT_ram_4ff5c538) {
LAB_ram_480fa84e:
            DAT_ram_4ff5c538 = iVar3;
            if (DAT_ram_4ff5c534 < 3) goto LAB_ram_480fa52c;
          }
          else if (DAT_ram_4ff5c534 < 3) {
            DAT_ram_4ff5c534 = DAT_ram_4ff5c534 + 1;
            goto LAB_ram_480fa84e;
          }
          fence();
          fence();
          DAT_ram_4ff5c538 = iVar3;
          iVar15 = FUN_ram_4802c448(iVar15);
          if ((iVar15 != 0) && (iVar15 = FUN_ram_480f9fa8(iVar15,2,0,1), iVar15 != 0)) {
            return;
          }
          uVar10 = 2;
          goto LAB_ram_480fa652;
        }
        DAT_ram_4ff5c534 = 1;
        DAT_ram_4ff5c530 = iVar15;
        DAT_ram_4ff5c538 = iVar3;
        goto LAB_ram_480fa52c;
      }
      DAT_ram_4ff5c538 = 0;
      DAT_ram_4ff5c534 = 0;
      DAT_ram_4ff5c530 = 0;
      if (DAT_ram_4ff6dd80 == 0) goto joined_r0x480fa73e;
      goto LAB_ram_480fa53a;
    }
LAB_ram_480fa758:
    DAT_ram_4ff5c538 = 0;
    DAT_ram_4ff5c534 = 0;
    DAT_ram_4ff5c530 = 0;
    if (DAT_ram_4ff6dd80 != 0) {
      uVar10 = 1;
      goto LAB_ram_480fa652;
    }
  }
joined_r0x480fa73e:
  uVar10 = 4;
  if (DAT_ram_4ff6dd7c != 0) {
    uVar10 = 1;
  }
LAB_ram_480fa652:
  if (DAT_ram_4ff6dd79 == uVar10) {
    if ((DAT_ram_4ff6dd70 != '\0') && (4999 < (uint)(iVar2 - DAT_ram_4ff6dd6c))) {
      if (DAT_ram_4ff6dd78 == '\0') {
        return;
      }
      FUN_ram_480aecea();
      return;
    }
  }
  else {
    DAT_ram_4ff6dd79 = (byte)uVar10;
    DAT_ram_4ff6dd70 = '\x01';
    DAT_ram_4ff6dd6c = iVar2;
  }
  return;
}


