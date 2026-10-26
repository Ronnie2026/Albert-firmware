/* Firmware entry: 0x480f2fc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_post_fsd_auto_start_master_480f2fc2(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 local_1a0 [44];
  undefined4 uStack_f0;
  char ****ppppcStack_ec;
  uint uStack_e8;
  char ****appppcStack_e4 [2];
  uint uStack_dc;
  byte bStack_d5;
  int iStack_d4;
  undefined1 *puStack_d0;
  undefined4 local_c4;
  undefined1 *puStack_c0;
  char acStack_bc [4];
  undefined4 auStack_b8 [37];
  char acStack_24 [8];
  
  iVar5 = DAT_ram_4ff5cbe8;
  iVar3 = DAT_ram_4ff5cbdc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar10 = local_1a0;
  fence();
  fence();
  if (DAT_ram_4ff6df30 != '\0') {
    appppcStack_e4[0] = (char ****)0x481c791c;
    uStack_e8 = 0x199;
    iStack_d4 = 0x1f;
    cVar2 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar2 != '\0') && (cVar2 != '\x06')) {
      iVar7 = 0x1f;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_e8,appppcStack_e4,&iStack_d4);
        DAT_ram_4ff5cbc8 = '\0';
        iVar7 = iStack_d4;
        if (iStack_d4 == 0) {
          iVar7 = 1;
        }
      }
      iVar7 = FUN_ram_4ff206d8(iVar7,0x404);
      iVar13 = iVar5 + iVar3 * 0x1d40;
      *(int *)(iVar13 + 0x1cdc) = iVar7;
      if (iVar7 == 0) {
        if (*(char *)(iVar13 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar5 + iVar3 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (iStack_d4 != 0) {
          FUN_ram_4ff45158(iVar7,appppcStack_e4[0],iStack_d4);
          iVar7 = *(int *)(iVar13 + 0x1cdc);
        }
        local_c4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(local_c4 + 0x44c) != '\0') && (*(char *)(local_c4 + 0x44c) != '\x06')) {
          *(int *)(local_c4 + 0x1ce0) = iVar7;
          *(int *)(local_c4 + 0x1ce4) = iStack_d4;
          *(undefined4 *)(local_c4 + 0x1ce8) = 0;
          puStack_c0 = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_e8,"application/json",local_c4,&LAB_ram_4802d3f2
                          );
        }
      }
      return;
    }
    return;
  }
  iVar3 = FUN_ram_48067a66();
  if ((iVar3 == 0) || (iVar3 = FUN_ram_4806c250(), iVar3 == 0)) {
    return;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  uVar1 = DAT_ram_4ff61958._2_1_;
  puVar9 = &local_c4;
  puVar11 = &DAT_ram_4ff61958;
  do {
    uVar14 = puVar11[1];
    uVar4 = puVar11[2];
    uVar8 = puVar11[3];
    *puVar9 = *puVar11;
    puVar9[1] = uVar14;
    puVar9[2] = uVar4;
    puVar9[3] = uVar8;
    puVar11 = puVar11 + 4;
    puVar9 = puVar9 + 4;
  } while (puVar11 != (undefined4 *)&DAT_ram_4ff619f8);
  *puVar9 = _DAT_ram_4ff619f8;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  cVar2 = FUN_ram_48036a9a("enabled",uVar1);
  pcVar12 = (char *)&local_c4;
  puStack_c0 = (undefined1 *)CONCAT31(puStack_c0._1_3_,cVar2);
  acStack_bc[0] = cVar2;
  local_c4 = CONCAT13(cVar2,CONCAT12(cVar2,(undefined2)local_c4));
  do {
    uVar4 = *(undefined4 *)(pcVar12 + 4);
    uVar8 = *(undefined4 *)(pcVar12 + 8);
    uVar14 = *(undefined4 *)(pcVar12 + 0xc);
    *puVar10 = *(undefined4 *)pcVar12;
    puVar10[1] = uVar4;
    puVar10[2] = uVar8;
    puVar10[3] = uVar14;
    pcVar12 = pcVar12 + 0x10;
    puVar10 = puVar10 + 4;
  } while (pcVar12 != acStack_bc + 0x98);
  *puVar10 = *(undefined4 *)pcVar12;
  FUN_ram_480edbbe(local_1a0);
  DAT_ram_4ff47ea4 = DAT_ram_4ff47ea4 + 1;
  if (DAT_ram_4ff47ea4 == 0) {
    DAT_ram_4ff47ea4 = 1;
  }
  if (DAT_ram_4ff6de6e == '\0') {
    iVar3 = FUN_ram_48035914();
  }
  else {
    DAT_ram_4ff5ca60 = DAT_ram_4ff5ca60 + 1;
    DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 1;
    DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
    iVar3 = FUN_ram_480ee046();
  }
  if ((DAT_ram_4ff6dd78 == '\0') || (iVar5 = FUN_ram_480aecea(), iVar3 == 0)) {
    FUN_ram_4802a8a8(appppcStack_e4,"{\"ok\":");
  }
  else {
    FUN_ram_4802a8a8(appppcStack_e4,"{\"ok\":");
    if (iVar5 != 0) {
      FUN_ram_4802af2c(appppcStack_e4,&DAT_ram_481c3dec);
      FUN_ram_4802af2c(appppcStack_e4,",\"ramApplied\":true,\"flashOk\":");
      FUN_ram_4802af2c(appppcStack_e4,&DAT_ram_481c3dec);
      FUN_ram_4802af2c(appppcStack_e4,",\"persistence\":\"");
      FUN_ram_4802af2c(appppcStack_e4,"stored");
      FUN_ram_4802af2c(appppcStack_e4,"\",\"revision\":");
      FUN_ram_4802aa44(&iStack_d4,DAT_ram_4ff47ea4,10);
      FUN_ram_4802ae48(appppcStack_e4,&iStack_d4);
      FUN_ram_4802a59e(&iStack_d4);
      FUN_ram_4802af2c(appppcStack_e4,",\"enabled\":");
      FUN_ram_4802af5a(appppcStack_e4,cVar2 + '0');
      FUN_ram_4802af5a(appppcStack_e4,0x7d);
      uStack_f0 = 200;
      goto LAB_ram_480f318c;
    }
  }
  FUN_ram_4802af2c(appppcStack_e4,"false");
  FUN_ram_4802af2c(appppcStack_e4,",\"ramApplied\":true,\"flashOk\":");
  FUN_ram_4802af2c(appppcStack_e4,"false");
  FUN_ram_4802af2c(appppcStack_e4,",\"persistence\":\"");
  FUN_ram_4802af2c(appppcStack_e4,"pending");
  FUN_ram_4802af2c(appppcStack_e4,"\",\"revision\":");
  FUN_ram_4802aa44(&iStack_d4,DAT_ram_4ff47ea4,10);
  FUN_ram_4802ae48(appppcStack_e4,&iStack_d4);
  FUN_ram_4802a59e(&iStack_d4);
  FUN_ram_4802af2c(appppcStack_e4,",\"error\":\"flash_write\"");
  FUN_ram_4802af2c(appppcStack_e4,",\"enabled\":");
  FUN_ram_4802af5a(appppcStack_e4,cVar2 + '0');
  FUN_ram_4802af5a(appppcStack_e4,0x7d);
  uStack_f0 = 500;
LAB_ram_480f318c:
  iVar5 = DAT_ram_4ff5cbe8;
  iVar3 = DAT_ram_4ff5cbdc;
  if ((char)bStack_d5 < '\0') {
    uStack_e8 = bStack_d5 & 0x7f;
    ppppcStack_ec = (char ****)appppcStack_e4;
  }
  else {
    uStack_e8 = 0;
    ppppcStack_ec = appppcStack_e4[0];
    if ((char *****)appppcStack_e4[0] != (char *****)0x0) {
      uStack_e8 = uStack_dc;
    }
  }
  cVar2 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar2 != '\0') && (cVar2 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_f0,&ppppcStack_ec,&uStack_e8);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar6 = uStack_e8;
    if (uStack_e8 == 0) {
      uVar6 = 1;
    }
    iVar7 = FUN_ram_4ff206d8(uVar6,0x404);
    iVar13 = iVar5 + iVar3 * 0x1d40;
    *(int *)(iVar13 + 0x1cdc) = iVar7;
    if (iVar7 == 0) {
      if (*(char *)(iVar13 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar5 + iVar3 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (uStack_e8 != 0) {
        FUN_ram_4ff45158(iVar7,ppppcStack_ec,uStack_e8);
        iVar7 = *(int *)(iVar13 + 0x1cdc);
      }
      iVar3 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar3 + 0x44c) != '\0') && (*(char *)(iVar3 + 0x44c) != '\x06')) {
        *(int *)(iVar3 + 0x1ce0) = iVar7;
        *(uint *)(iVar3 + 0x1ce4) = uStack_e8;
        *(undefined4 *)(iVar3 + 0x1ce8) = 0;
        puStack_d0 = &LAB_ram_4802d3f2;
        iStack_d4 = iVar3;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_f0,"application/json",iVar3,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(appppcStack_e4);
  return;
}


