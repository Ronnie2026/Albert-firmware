/* Firmware entry: 0x4813857c */

void FUN_ram_4813857c(int param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined2 uVar6;
  short sVar7;
  size_t sVar8;
  byte bVar9;
  undefined4 *puVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar16 = param_1 * 0x128;
  bVar4 = (&DAT_ram_4ff6c924)[iVar16];
  if (bVar4 != 2) {
    if (bVar4 < 3) {
      if (bVar4 != 0) {
        do {
          sVar7 = FUN_ram_4ff2d260();
          puVar10 = (undefined4 *)&DAT_ram_4ff6c904;
          while ((*(char *)(puVar10 + 8) != '\x02' || (*(short *)((int)puVar10 + 0x1e) != sVar7))) {
            puVar10 = puVar10 + 0x4a;
            if (puVar10 == &DAT_ram_4ff6cda4) {
              iVar16 = param_1 * 0x128;
              piVar17 = &DAT_ram_4ff6c88c;
              *(short *)(&DAT_ram_4ff6c922 + iVar16) = sVar7;
              *(undefined4 *)(&DAT_ram_4ff6c924 + iVar16) = 0x10002;
              cVar14 = '\x01';
              goto LAB_ram_4813860c;
            }
          }
        } while( true );
      }
    }
    else {
      if (bVar4 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/dns.c",0x4d9,"dns_check_entry",
                         "unknown dns_table entry state:");
      }
      if ((&DAT_ram_4ff6c920)[iVar16] != '\0') {
        iVar11 = *(int *)(&DAT_ram_4ff6c904 + iVar16);
        if ((iVar11 != 0) &&
           (iVar11 = iVar11 + -1, *(int *)(&DAT_ram_4ff6c904 + iVar16) = iVar11, iVar11 != 0)) {
          return;
        }
        iVar11 = param_1 * 0x128;
        (&DAT_ram_4ff6c920)[iVar11] = (&DAT_ram_4ff6c920)[iVar16] + -1;
        *(undefined4 *)(&DAT_ram_4ff6c908 + iVar11) = 0;
        *(undefined4 *)(&DAT_ram_4ff6c90c + iVar11) = 0;
        *(undefined4 *)(&DAT_ram_4ff6c910 + iVar11) = 0;
        *(undefined4 *)(&DAT_ram_4ff6c914 + iVar11) = 0;
        (&DAT_ram_4ff6c918)[iVar11] = 0;
        (&DAT_ram_4ff6c91c)[iVar11] = 0;
      }
      (&DAT_ram_4ff6c924)[param_1 * 0x128] = 0;
    }
    return;
  }
  cVar14 = (&DAT_ram_4ff6c926)[iVar16];
  (&DAT_ram_4ff6c926)[iVar16] = cVar14 + -1;
  if (cVar14 != '\x01') {
    return;
  }
  cVar14 = (&DAT_ram_4ff6c927)[iVar16];
  cVar12 = cVar14 + '\x01';
  (&DAT_ram_4ff6c927)[iVar16] = cVar12;
  if (cVar14 == '\x03') {
    bVar4 = (&DAT_ram_4ff6c925)[iVar16];
    if (bVar4 < 2) {
      bVar9 = bVar4 + 1;
      piVar17 = &DAT_ram_4ff6c88c + (uint)bVar9 * 6;
      while( true ) {
        iVar11 = *piVar17;
        if ((char)piVar17[5] == '\x06') {
          if (((iVar11 != 0) || (piVar17[1] != 0)) || (piVar17[2] != 0)) goto LAB_ram_48138718;
          iVar11 = piVar17[3];
        }
        if (iVar11 != 0) goto LAB_ram_48138718;
        (&DAT_ram_4ff6c925)[iVar16] = bVar9;
        piVar17 = piVar17 + 6;
        bVar4 = 1;
        if (bVar9 == 2) break;
        bVar9 = 2;
      }
      bVar4 = 2;
    }
LAB_ram_48138718:
    iVar11 = param_1 * 0x128;
    iVar16 = FUN_ram_48138036(&DAT_ram_4ff6c904 + iVar11);
    if ((iVar16 == 0) || ((&DAT_ram_4ff6ca2b)[iVar11] != '\0')) {
      FUN_ram_48138082(param_1,0);
      (&DAT_ram_4ff6c924)[param_1 * 0x128] = 0;
      return;
    }
    (&DAT_ram_4ff6c925)[iVar11] = bVar4 + 1;
    *(undefined2 *)(&DAT_ram_4ff6c926 + iVar11) = 1;
  }
  else {
    (&DAT_ram_4ff6c926)[iVar16] = cVar12;
  }
LAB_ram_481382d0:
  uVar15 = (uint)(byte)(&DAT_ram_4ff6c925)[param_1 * 0x128];
  if (2 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/dns.c",0x365,"dns_send",
                     "dns server out of array");
  }
  iVar16 = (&DAT_ram_4ff6c88c)[uVar15 * 6];
  if ((&DAT_ram_4ff6c8a0)[uVar15 * 0x18] == '\x06') {
    if (((iVar16 == 0) && ((&DAT_ram_4ff6c890)[uVar15 * 6] == 0)) &&
       ((&DAT_ram_4ff6c894)[uVar15 * 6] == 0)) {
      iVar16 = (&DAT_ram_4ff6c898)[uVar15 * 6];
      goto joined_r0x481384e2;
    }
  }
  else {
joined_r0x481384e2:
    if ((iVar16 == 0) && ((&DAT_ram_4ff6ca2b)[param_1 * 0x128] == '\0')) {
      FUN_ram_48138082(param_1,0);
      (&DAT_ram_4ff6c924)[param_1 * 0x128] = 0;
      return;
    }
  }
  iVar16 = param_1 * 0x128;
  sVar8 = strlen(&DAT_ram_4ff6c92a + iVar16);
  iVar11 = FUN_ram_4813ad9a(0x4a,sVar8 + 0x12 & 0xffff,0x280);
  if (iVar11 == 0) {
    return;
  }
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = FUN_ram_48137fc8(*(undefined2 *)(&DAT_ram_4ff6c922 + iVar16));
  uStack_3c._0_3_ = CONCAT12(1,uVar6);
  uStack_38 = CONCAT22(uStack_38._2_2_,0x100);
  pcVar18 = &DAT_ram_4ff6c929 + iVar16;
  FUN_ram_4813b452(iVar11,&uStack_3c,0xc);
  uVar15 = 0xc;
  do {
    cVar14 = pcVar18[1];
    pcVar20 = pcVar18 + 1;
    uVar5 = 0;
    pcVar3 = pcVar20;
    if (cVar14 == '.') {
      uVar5 = 0;
      uVar19 = 0;
      pcVar18 = pcVar20;
    }
    else {
      do {
        pcVar2 = pcVar3;
        if (cVar14 == '\0') {
          uVar19 = (int)pcVar2 - (int)pcVar20 & 0xffff;
          pcVar18 = pcVar2;
          goto LAB_ram_481383ce;
        }
        cVar14 = pcVar2[1];
        uVar5 = uVar5 + 1 & 0xff;
        pcVar3 = pcVar2 + 1;
      } while (cVar14 != '.');
      uVar19 = (int)pcVar2 - (int)pcVar18 & 0xffff;
      pcVar18 = pcVar2 + 1;
    }
LAB_ram_481383ce:
    if (0xfffe < uVar5 + uVar15) goto LAB_ram_48138494;
    FUN_ram_4813b63c(iVar11,uVar15,uVar5);
    FUN_ram_4813b514(iVar11,pcVar20,uVar19,uVar15 + 1 & 0xffff);
    uVar5 = uVar5 + uVar15 & 0xffff;
    uVar15 = uVar5 + 1 & 0xffff;
  } while (*pcVar18 != '\0');
  FUN_ram_4813b63c(iVar11,uVar15,0);
  local_40 = 0x100;
  if (((&DAT_ram_4ff6ca2a)[param_1 * 0x128] & 0xfd) == 1) {
    local_40 = 0x1c00;
  }
  uStack_3e = 0x100;
  FUN_ram_4813b514(iVar11,&local_40,4,uVar5 + 2 & 0xffff);
  param_1 = param_1 * 0x128;
  if ((&DAT_ram_4ff6ca2b)[param_1] == '\0') {
    uVar13 = 0x35;
    puVar10 = &DAT_ram_4ff6c88c + (uint)(byte)(&DAT_ram_4ff6c925)[param_1] * 6;
  }
  else {
    if (((&DAT_ram_4ff6ca2a)[param_1] & 0xfd) != 1) {
      FUN_ram_481431f0((&DAT_ram_4ff6cda4)[(byte)(&DAT_ram_4ff6c929)[param_1]],iVar11,
                       &DAT_ram_482366bc,0x14e9);
      goto LAB_ram_48138494;
    }
    uVar13 = 0x14e9;
    puVar10 = (undefined4 *)&DAT_ram_482366a4;
  }
  FUN_ram_481431f0((&DAT_ram_4ff6cda4)[(byte)(&DAT_ram_4ff6c929)[param_1]],iVar11,puVar10,uVar13);
LAB_ram_48138494:
  FUN_ram_4813ac74(iVar11);
  return;
  while( true ) {
    if (iVar11 != 0) break;
    (&DAT_ram_4ff6c925)[iVar16] = cVar14;
    piVar17 = piVar17 + 6;
    bVar1 = cVar14 == '\x02';
    cVar14 = '\x02';
    if (bVar1) break;
LAB_ram_4813860c:
    iVar11 = *piVar17;
    if ((char)piVar17[5] == '\x06') {
      if (((iVar11 != 0) || (piVar17[1] != 0)) || (piVar17[2] != 0)) break;
      iVar11 = piVar17[3];
    }
  }
  goto LAB_ram_481382d0;
}


