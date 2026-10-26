/* Firmware entry: 0x4806c4e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_rec_status_4806c4e8(void)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 ***apppuStack_1ec [2];
  uint uStack_1e4;
  byte bStack_1dd;
  undefined4 auStack_1dc [4];
  undefined4 ***apppuStack_1cc [4];
  uint auStack_1bc [4];
  int iStack_1ac;
  undefined1 *puStack_1a8;
  char cStack_19c;
  byte bStack_19b;
  char cStack_19a;
  char cStack_199;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  char cStack_15f;
  char cStack_15e;
  undefined4 local_15c [76];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802cf56(&cStack_19c);
  FUN_ram_4ff3ec14(&DAT_ram_4ff61950,0xffffffff);
  puVar13 = &DAT_ram_4ff6a46c;
  puVar12 = local_15c;
  do {
    uVar16 = puVar13[1];
    uVar15 = puVar13[2];
    uVar6 = puVar13[3];
    uVar8 = puVar13[4];
    uVar10 = puVar13[5];
    *puVar12 = *puVar13;
    puVar12[1] = uVar16;
    puVar12[2] = uVar15;
    puVar12[3] = uVar6;
    puVar12[4] = uVar8;
    puVar12[5] = uVar10;
    puVar13 = puVar13 + 6;
    puVar12 = puVar12 + 6;
  } while (puVar13 != (undefined4 *)&DAT_ram_4ff6a5a4);
  *puVar12 = _DAT_ram_4ff6a5a4;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61950);
  FUN_ram_4802a8a8(apppuStack_1ec,&DAT_ram_481c4164);
  FUN_ram_4802f022(apppuStack_1ec,"ready");
  if (cStack_19c == '\0') {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  FUN_ram_4802f022(apppuStack_1ec,"active");
  if (bStack_19b == 0) {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  FUN_ram_4802f022(apppuStack_1ec,"saved");
  if (cStack_19a == '\0') {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  FUN_ram_4802f022(apppuStack_1ec,"startState");
  FUN_ram_4802a970(&iStack_1ac,(uint)bStack_19b << 1,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"count");
  FUN_ram_4802aa44(&iStack_1ac,uStack_198,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,&DAT_ram_481c7b2c);
  FUN_ram_4802aa44(&iStack_1ac,uStack_194,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"bytes");
  FUN_ram_4802aa44(&iStack_1ac,uStack_190,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"formatVersion");
  FUN_ram_4802a970(&iStack_1ac,2,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802a8a8(&iStack_1ac,"lifecycle_events");
  FUN_ram_4802f236(apppuStack_1ec,"txCountUnit",&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"dropped");
  FUN_ram_4802aa44(&iStack_1ac,uStack_18c,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  uVar6 = DAT_ram_4ff6de98;
  FUN_ram_4802f022(apppuStack_1ec,"optionalSinkRejected");
  FUN_ram_4802aa44(&iStack_1ac,uVar6,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  if (uStack_164._1_1_ == '\x02') {
    pcVar9 = "internal";
  }
  else if (uStack_164._1_1_ == '\x03') {
    pcVar9 = "native";
  }
  else if (uStack_164._1_1_ == '\x01') {
    pcVar9 = "psram";
  }
  else {
    pcVar9 = "none";
  }
  FUN_ram_4802a8a8(&iStack_1ac,pcVar9);
  FUN_ram_4802f236(apppuStack_1ec,"source",&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  uVar5 = uStack_164 & 0xff;
  FUN_ram_4802f022(apppuStack_1ec,"stopReason");
  FUN_ram_4802a928(&iStack_1ac,uVar5,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"elapsed");
  FUN_ram_4802aa44(&iStack_1ac,uStack_16c,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f278(apppuStack_1ec,"duration",uStack_168);
  FUN_ram_4802f022(apppuStack_1ec,"ring");
  if (cStack_199 == '\0') {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  uVar3 = uStack_164._2_1_;
  FUN_ram_4802f022(apppuStack_1ec,"include");
  FUN_ram_4802a928(&iStack_1ac,uVar3,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  uVar4 = uStack_164._3_1_;
  FUN_ram_4802f022(apppuStack_1ec,"exclude");
  FUN_ram_4802a928(&iStack_1ac,uVar4,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"buses");
  FUN_ram_4802a928(&iStack_1ac,uStack_160,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"rxEnabled");
  if (cStack_15f == '\0') {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  FUN_ram_4802f022(apppuStack_1ec,"txEnabled");
  if (cStack_15e == '\0') {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  FUN_ram_4802f278(apppuStack_1ec,"filterGeneration",uStack_2c);
  FUN_ram_4802f278(apppuStack_1ec,"filterAppliedGeneration",uStack_28);
  FUN_ram_4802f022(apppuStack_1ec,"customFilter");
  if (uStack_164 < 0x10000) {
    pcVar9 = "false";
  }
  else {
    pcVar9 = "true";
  }
  FUN_ram_4802af2c(apppuStack_1ec,pcVar9);
  FUN_ram_4802f022(apppuStack_1ec,"customFilterAcceptedIds");
  FUN_ram_4802a928(&iStack_1ac,uVar3,10);
  FUN_ram_4802ae48(apppuStack_1ec,&iStack_1ac);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802f022(apppuStack_1ec,"busRx");
  FUN_ram_4802af5a(apppuStack_1ec,0x5b);
  FUN_ram_4802aa44(auStack_1dc,uStack_188,10);
  FUN_ram_4802a8ec(apppuStack_1cc,auStack_1dc);
  uVar6 = FUN_ram_4802b058(apppuStack_1cc,0x2c);
  FUN_ram_4802aa44(auStack_1bc,uStack_184,10);
  uVar6 = FUN_ram_4802afda(uVar6,auStack_1bc);
  uVar6 = FUN_ram_4802b058(uVar6,0x2c);
  FUN_ram_4802aa44(&iStack_1ac,uStack_180,10);
  uVar6 = FUN_ram_4802afda(uVar6,&iStack_1ac);
  FUN_ram_4802ae48(apppuStack_1ec,uVar6);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802a59e(auStack_1bc);
  FUN_ram_4802a59e(apppuStack_1cc);
  FUN_ram_4802a59e(auStack_1dc);
  FUN_ram_4802af5a(apppuStack_1ec,0x5d);
  FUN_ram_4802f022(apppuStack_1ec,"busTx");
  FUN_ram_4802af5a(apppuStack_1ec,0x5b);
  FUN_ram_4802aa44(auStack_1dc,uStack_17c,10);
  FUN_ram_4802a8ec(apppuStack_1cc,auStack_1dc);
  uVar6 = FUN_ram_4802b058(apppuStack_1cc,0x2c);
  FUN_ram_4802aa44(auStack_1bc,uStack_178,10);
  uVar6 = FUN_ram_4802afda(uVar6,auStack_1bc);
  uVar6 = FUN_ram_4802b058(uVar6,0x2c);
  FUN_ram_4802aa44(&iStack_1ac,uStack_174,10);
  uVar6 = FUN_ram_4802afda(uVar6,&iStack_1ac);
  FUN_ram_4802ae48(apppuStack_1ec,uVar6);
  FUN_ram_4802a59e(&iStack_1ac);
  FUN_ram_4802a59e(auStack_1bc);
  FUN_ram_4802a59e(apppuStack_1cc);
  FUN_ram_4802a59e(auStack_1dc);
  FUN_ram_4802af5a(apppuStack_1ec,0x5d);
  FUN_ram_4802af5a(apppuStack_1ec,0x7d);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar11 = DAT_ram_4ff5cbdc;
  if ((char)bStack_1dd < '\0') {
    apppuStack_1ec[0] = apppuStack_1ec;
    uStack_1e4 = bStack_1dd & 0x7f;
  }
  else if ((undefined4 ****)apppuStack_1ec[0] == (undefined4 ****)0x0) {
    uStack_1e4 = 0;
  }
  auStack_1dc[0] = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  apppuStack_1cc[0] = apppuStack_1ec[0];
  auStack_1bc[0] = uStack_1e4;
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(auStack_1dc,apppuStack_1cc,auStack_1bc);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar5 = auStack_1bc[0];
    if (auStack_1bc[0] == 0) {
      uVar5 = 1;
    }
    iVar7 = FUN_ram_4ff206d8(uVar5,0x404);
    iVar14 = iVar2 + iVar11 * 0x1d40;
    *(int *)(iVar14 + 0x1cdc) = iVar7;
    if (iVar7 == 0) {
      if (*(char *)(iVar14 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar11 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_1bc[0] != 0) {
        FUN_ram_4ff45158(iVar7,apppuStack_1cc[0],auStack_1bc[0]);
        iVar7 = *(int *)(iVar14 + 0x1cdc);
      }
      iVar11 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar11 + 0x44c) != '\0') && (*(char *)(iVar11 + 0x44c) != '\x06')) {
        *(int *)(iVar11 + 0x1ce0) = iVar7;
        *(uint *)(iVar11 + 0x1ce4) = auStack_1bc[0];
        *(undefined4 *)(iVar11 + 0x1ce8) = 0;
        puStack_1a8 = &LAB_ram_4802d3f2;
        iStack_1ac = iVar11;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,auStack_1dc[0],"application/json",iVar11,
                         &LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppuStack_1ec);
  return;
}


