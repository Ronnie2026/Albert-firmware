/* Firmware entry: 0x480cf4ac */

void FUN_ram_480cf4ac(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  
  iVar2 = DAT_ram_4ff6dc9c;
  iVar7 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_480b610a();
  FUN_ram_480cf35c();
  uVar17 = DAT_ram_4ff5bd40;
  pbVar12 = (byte *)&DAT_ram_4ff5bd30;
  bVar10 = 0;
  do {
    bVar1 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    bVar10 = bVar10 | bVar1;
  } while ((uint *)pbVar12 != &DAT_ram_4ff5bd40);
  cVar18 = *(char *)(iVar2 + 0x668);
  if (bVar10 == 0) {
    *(undefined1 *)(iVar2 + 0xc58) = 2;
    if (cVar18 == '\0') {
      iVar4 = *(int *)(iVar2 + 0x5a0);
      iVar13 = *(int *)(iVar2 + 0x5a4);
      *(undefined1 *)(iVar2 + 0xc59) = 2;
    }
    else {
LAB_ram_480cf50e:
      cVar3 = '\x02';
LAB_ram_480cf510:
      if (*(char *)(iVar2 + 0x6e0) == '\0') {
        *(undefined1 *)(iVar2 + 0xc59) = 0;
      }
      else {
        iVar4 = FUN_ram_4ff453ae(iVar2 + 0x669,iVar2 + 0x6e1);
        if (((iVar4 == 0) && (*(int *)(iVar2 + 0x740) == *(int *)(iVar2 + 0x6c8))) &&
           (bVar10 = cVar3 - 3, *(int *)(iVar2 + 0x744) == *(int *)(iVar2 + 0x6cc))) {
LAB_ram_480cf54a:
          iVar4 = *(int *)(iVar2 + 0x6d8);
          iVar13 = *(int *)(iVar2 + 0x750);
          if (iVar4 == iVar13) {
            iVar4 = FUN_ram_4ff453ae(iVar2 + 0x682,iVar2 + 0x6fa);
            if (iVar4 != 0) {
LAB_ram_480cf84a:
              *(undefined1 *)(iVar2 + 0xc59) = 4;
              goto joined_r0x480cf856;
            }
            *(undefined1 *)(iVar2 + 0xc59) = 1;
            if (1 < bVar10) goto LAB_ram_480cf56c;
            cVar3 = *(char *)(iVar2 + 0x520);
LAB_ram_480cf85e:
            if (cVar3 != '\0') goto LAB_ram_480cf6b2;
          }
          else if (iVar4 - iVar13 < 0) {
            if (iVar13 - iVar4 < 0) goto LAB_ram_480cf84a;
            *(undefined1 *)(iVar2 + 0xc59) = 3;
            if (bVar10 < 2) {
              cVar3 = *(char *)(iVar2 + 0x520);
              goto LAB_ram_480cf85e;
            }
          }
          else {
            *(undefined1 *)(iVar2 + 0xc59) = 0;
joined_r0x480cf856:
            if (bVar10 < 2) {
              cVar3 = *(char *)(iVar2 + 0x520);
              goto LAB_ram_480cf85e;
            }
          }
        }
        else {
          *(undefined1 *)(iVar2 + 0xc59) = 3;
        }
      }
LAB_ram_480cf56c:
      iVar4 = *(int *)(iVar2 + 0x5a0);
      iVar13 = *(int *)(iVar2 + 0x5a4);
LAB_ram_480cf574:
      if (((*(char *)(iVar7 + 0x118a8) != '\0') &&
          (*(int *)(iVar2 + 0x6c8) == *(int *)(iVar7 + 0x11908))) &&
         ((*(int *)(iVar2 + 0x6cc) == *(int *)(iVar7 + 0x1190c) &&
          ((((*(int *)(iVar2 + 0x6d8) == *(int *)(iVar7 + 0x11918) &&
             (iVar5 = FUN_ram_4ff453ae(iVar2 + 0x669,iVar7 + 0x118a9), iVar5 == 0)) &&
            (iVar5 = FUN_ram_4ff453ae(iVar2 + 0x682,iVar7 + 0x118c2), iVar5 == 0)) &&
           ((*(int *)(iVar2 + 0x748) == *(int *)(iVar7 + 0x11938) &&
            (*(int *)(iVar2 + 0x74c) == *(int *)(iVar7 + 0x1193c))))))))) {
        *(undefined1 *)(iVar2 + 0xc59) = 0;
      }
    }
  }
  else {
    if ((((DAT_ram_4ff5bd40 == 0) || ((char)DAT_ram_4ff5bd64 != '\0')) ||
        (DAT_ram_4ff5bd64._1_1_ != '\0')) || (cVar3 = *(char *)(iVar2 + 0x520), cVar3 == '\0')) {
      *(undefined1 *)(iVar2 + 0xc58) = 2;
      if (cVar18 != '\0') goto LAB_ram_480cf50e;
    }
    else {
      if (*(char *)(iVar2 + 0x588) != '\0') {
        iVar4 = FUN_ram_4ff4511a(&DAT_ram_4ff5bd30,iVar2 + 0x58c,0x10);
        if ((iVar4 == 0) && (uVar19 = *(uint *)(iVar2 + 0x59c), uVar19 <= uVar17)) {
          if (uVar19 != uVar17) goto LAB_ram_480cf654;
          if (((uVar19 == *(uint *)(iVar2 + 0x534)) &&
              (iVar4 = FUN_ram_4ff4511a(iVar2 + 0x524,iVar2 + 0x58c,0x10), iVar4 == 0)) &&
             (iVar4 = FUN_ram_4ff453ae(iVar2 + 0x544,iVar2 + 0x5ac), iVar4 == 0)) {
            cVar3 = '\x01';
            *(undefined1 *)(iVar2 + 0xc58) = 1;
            if (cVar18 == '\0') goto LAB_ram_480cf752;
            goto LAB_ram_480cf510;
          }
          *(undefined1 *)(iVar2 + 0xc58) = 4;
          bVar10 = 1;
        }
        else {
          *(undefined1 *)(iVar2 + 0xc58) = 3;
          bVar10 = 0;
        }
        if (cVar18 == '\0') {
          iVar4 = *(int *)(iVar2 + 0x5a0);
          iVar13 = *(int *)(iVar2 + 0x5a4);
          cVar18 = *(char *)(iVar7 + 0x117c8);
          *(undefined1 *)(iVar2 + 0xc59) = 2;
          if ((cVar18 == '\0') || (cVar18 = '\0', iVar2 + 0x524 == iVar2 + 0x534))
          goto LAB_ram_480cf58e;
        }
        else {
          if (*(char *)(iVar2 + 0x6e0) != '\0') {
            iVar4 = FUN_ram_4ff453ae(iVar2 + 0x669,iVar2 + 0x6e1);
            if (((iVar4 == 0) && (*(int *)(iVar2 + 0x6c8) == *(int *)(iVar2 + 0x740))) &&
               (*(int *)(iVar2 + 0x6cc) == *(int *)(iVar2 + 0x744))) goto LAB_ram_480cf54a;
            *(undefined1 *)(iVar2 + 0xc59) = 3;
            goto LAB_ram_480cf85e;
          }
          *(undefined1 *)(iVar2 + 0xc59) = 0;
LAB_ram_480cf6b2:
          cVar18 = *(char *)(iVar7 + 0x117c8);
          if ((cVar18 == '\0') || (iVar2 + 0x524 == iVar2 + 0x534)) {
            iVar4 = *(int *)(iVar2 + 0x5a0);
            iVar13 = *(int *)(iVar2 + 0x5a4);
            goto LAB_ram_480cf574;
          }
          iVar4 = *(int *)(iVar2 + 0x5a0);
          iVar13 = *(int *)(iVar2 + 0x5a4);
        }
        bVar10 = 0;
        pbVar12 = (byte *)(iVar2 + 0x524);
        do {
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          bVar10 = bVar10 | bVar1;
        } while ((byte *)(iVar2 + 0x534) != pbVar12);
        if ((bVar10 != 0) && (uVar17 = *(uint *)(iVar2 + 0x534), uVar17 != 0)) {
          pbVar12 = (byte *)(iVar7 + 0x117cc);
          if (pbVar12 != (byte *)(iVar7 + 0x117dc)) {
            bVar10 = 0;
            pbVar14 = pbVar12;
            do {
              bVar1 = *pbVar14;
              pbVar14 = pbVar14 + 1;
              bVar10 = bVar10 | bVar1;
            } while ((byte *)(iVar7 + 0x117dc) != pbVar14);
            if ((((((bVar10 != 0) && (uVar19 = *(uint *)(iVar7 + 0x117dc), uVar19 != 0)) &&
                  (iVar5 = FUN_ram_4ff4511a((byte *)(iVar2 + 0x524),pbVar12,0x10), iVar5 == 0)) &&
                 ((uVar19 < uVar17 ||
                  ((uVar17 == uVar19 &&
                   (iVar5 = FUN_ram_4ff453ae(iVar2 + 0x544,iVar7 + 0x117ec), iVar5 == 0)))))) &&
                (*(int *)(iVar7 + 0x11930) == iVar4)) && (*(int *)(iVar7 + 0x11934) == iVar13)) {
              *(undefined1 *)(iVar2 + 0xc58) = 0;
            }
          }
        }
        if (cVar18 != '\0') goto LAB_ram_480cf574;
        goto LAB_ram_480cf58e;
      }
LAB_ram_480cf654:
      *(undefined1 *)(iVar2 + 0xc58) = 0;
      if (cVar18 != '\0') {
        cVar3 = '\0';
        goto LAB_ram_480cf510;
      }
    }
LAB_ram_480cf752:
    iVar4 = *(int *)(iVar2 + 0x5a0);
    iVar13 = *(int *)(iVar2 + 0x5a4);
    *(undefined1 *)(iVar2 + 0xc59) = 2;
  }
LAB_ram_480cf58e:
  if (((*(char *)(iVar7 + 72000) != '\0') && (*(char *)(iVar7 + 0x11941) != '\0')) &&
     ((iVar5 = FUN_ram_4ff453ae(iVar7 + 0x1199c,iVar2 + 0x669), iVar5 == 0 &&
      ((*(int *)(iVar7 + 0x119c0) == *(int *)(iVar2 + 0x6c8) &&
       (*(int *)(iVar7 + 0x119c4) == *(int *)(iVar2 + 0x6cc))))))) {
    *(undefined1 *)(iVar2 + 0xc59) = 0;
  }
  if (*(char *)(iVar2 + 0x87b64) == '\0') {
    if (*(char *)(iVar2 + 0x87b65) != '\0') {
      *(undefined1 *)(iVar2 + 0xc59) = 4;
    }
    if (*(char *)(iVar2 + 0xc58) == '\x03') {
      cVar18 = *(char *)(iVar2 + 0xc59);
      *(undefined1 *)(iVar2 + 0x87b63) = 1;
    }
    else {
      cVar18 = *(char *)(iVar2 + 0xc59);
      *(bool *)(iVar2 + 0x87b63) = cVar18 == '\x03';
      if (*(char *)(iVar2 + 0xc58) == '\x01') {
        pbVar12 = (byte *)(iVar2 + 0x58c);
        if (pbVar12 != (byte *)(iVar2 + 0x59c)) {
          bVar10 = 0;
          pbVar14 = pbVar12;
          do {
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            bVar10 = bVar10 | bVar1;
          } while ((byte *)(iVar2 + 0x59c) != pbVar14);
          if ((((bVar10 != 0) && (uVar17 = *(uint *)(iVar2 + 0x59c), uVar17 != 0)) &&
              (iVar4 != 0 || iVar13 != 0)) &&
             (((uVar17 == DAT_ram_4ff5bd40 &&
               (iVar7 = FUN_ram_4ff4511a(pbVar12,&DAT_ram_4ff5bd30,0x10), iVar7 == 0)) &&
              ((char)DAT_ram_4ff5bd64 == '\0')))) {
            DAT_ram_4ff5bd60 = *(undefined4 *)(iVar2 + 0x5a8);
            DAT_ram_4ff5bd44 = *(undefined4 *)(iVar2 + 0x58c);
            DAT_ram_4ff5bd48 = *(undefined4 *)(iVar2 + 0x590);
            DAT_ram_4ff5bd4c = *(undefined4 *)(iVar2 + 0x594);
            DAT_ram_4ff5bd50 = *(undefined4 *)(iVar2 + 0x598);
            DAT_ram_4ff5bd54 = uVar17;
            DAT_ram_4ff5bd58 = iVar4;
            DAT_ram_4ff5bd5c = iVar13;
          }
        }
      }
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0xc58) = 4;
    if (*(char *)(iVar2 + 0x87b65) != '\0') {
      *(undefined1 *)(iVar2 + 0xc59) = 4;
      *(undefined1 *)(iVar2 + 0x87b63) = 0;
      goto LAB_ram_480cf5e8;
    }
    cVar18 = *(char *)(iVar2 + 0xc59);
    *(bool *)(iVar2 + 0x87b63) = cVar18 == '\x03';
  }
  if (cVar18 == '\x01') {
    puVar15 = (undefined4 *)(iVar2 + 0x6e0);
    puVar11 = (undefined4 *)(iVar2 + 0x758);
    do {
      uVar16 = puVar15[1];
      uVar6 = puVar15[2];
      uVar8 = puVar15[3];
      uVar9 = puVar15[4];
      *puVar11 = *puVar15;
      puVar11[1] = uVar16;
      puVar11[2] = uVar6;
      puVar11[3] = uVar8;
      puVar11[4] = uVar9;
      puVar15 = puVar15 + 5;
      puVar11 = puVar11 + 5;
    } while (puVar15 != (undefined4 *)(iVar2 + 0x758));
  }
LAB_ram_480cf5e8:
  *(int *)(iVar2 + 0x85b08) = iVar4;
  *(int *)(iVar2 + 0x85b0c) = iVar13;
  return;
}


