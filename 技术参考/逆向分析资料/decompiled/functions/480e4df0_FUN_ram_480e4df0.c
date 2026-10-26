/* Firmware entry: 0x480e4df0 */

undefined4 FUN_ram_480e4df0(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 *puVar11;
  short sVar12;
  undefined4 *puVar13;
  char cVar14;
  short *psVar15;
  undefined4 local_78 [17];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar4 = '\x04';
  do {
    psVar15 = *(short **)(DAT_ram_4ff64834 + 0x33ec);
    if (psVar15 != (short *)0x0) {
      sVar12 = *psVar15;
      if (sVar12 == 0) {
        return 0;
      }
      if (*(code **)(psVar15 + 2) != (code *)0x0) {
        iVar5 = (**(code **)(psVar15 + 2))();
        if (*(uint *)(psVar15 + 6) <= (uint)(iVar5 - *(int *)(psVar15 + 4))) {
          return 0;
        }
        sVar12 = *psVar15;
      }
      *psVar15 = sVar12 + -1;
    }
    bVar10 = DAT_ram_4ff64858 + 1 & 3;
    if (DAT_ram_4ff64858 == 0) {
      DAT_ram_4ff64858 = bVar10;
      iVar5 = FUN_ram_480e250e(DAT_ram_4ff64834 + 0x2870);
joined_r0x480e4eb6:
      if (iVar5 != 0) {
        return 1;
      }
    }
    else if (DAT_ram_4ff64858 == 1) {
      DAT_ram_4ff64858 = bVar10;
      iVar5 = FUN_ram_480d88ca(DAT_ram_4ff64834 + 0x33f4);
      if (iVar5 != 0) {
        return 1;
      }
    }
    else if (DAT_ram_4ff64858 == 2) {
      cVar14 = '\x03';
      DAT_ram_4ff64858 = bVar10;
      do {
        psVar15 = *(short **)(DAT_ram_4ff64834 + 0x33ec);
        iVar5 = DAT_ram_4ff64834;
        if (psVar15 != (short *)0x0) {
          sVar12 = *psVar15;
          if (sVar12 == 0) break;
          if (*(code **)(psVar15 + 2) != (code *)0x0) {
            iVar5 = (**(code **)(psVar15 + 2))();
            if (*(uint *)(psVar15 + 6) <= (uint)(iVar5 - *(int *)(psVar15 + 4))) break;
            sVar12 = *psVar15;
          }
          iVar5 = DAT_ram_4ff64834;
          *psVar15 = sVar12 + -1;
        }
        puVar13 = &DAT_ram_48222eb8;
        uVar7 = DAT_ram_4ff64859 + 1;
        uVar2 = (&DAT_ram_481f54b4)[DAT_ram_4ff64859];
        DAT_ram_4ff64859 =
             (char)uVar7 -
             (((byte)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfe) + (char)(uVar7 / 3));
        puVar3 = local_78;
        do {
          puVar11 = puVar3;
          uVar6 = puVar13[1];
          uVar8 = puVar13[2];
          *puVar11 = *puVar13;
          uVar9 = puVar13[3];
          puVar11[1] = uVar6;
          puVar11[2] = uVar8;
          puVar11[3] = uVar9;
          puVar13 = puVar13 + 4;
          puVar3 = puVar11 + 4;
        } while (puVar13 != &DAT_ram_48222ee8);
        puVar11[4] = DAT_ram_48222ee8;
        puVar11[5] = DAT_ram_48222eec;
        iVar5 = FUN_ram_4804628e(iVar5 + 0x3a40,uVar2,local_78);
        if (iVar5 != 0) {
          FUN_ram_480dc4f2(DAT_ram_4ff64834,local_78);
          return 1;
        }
        cVar14 = cVar14 + -1;
      } while (cVar14 != '\0');
    }
    else {
      bVar1 = DAT_ram_4ff64858 == 3;
      DAT_ram_4ff64858 = bVar10;
      if (bVar1) {
        iVar5 = FUN_ram_480e26ea(&DAT_ram_4ff64834);
        goto joined_r0x480e4eb6;
      }
    }
    cVar4 = cVar4 + -1;
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}


