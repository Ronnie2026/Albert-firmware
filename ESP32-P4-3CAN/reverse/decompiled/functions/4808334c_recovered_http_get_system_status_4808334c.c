/* Firmware entry: 0x4808334c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_system_status_4808334c(void)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **ppuVar16;
  char **ppcVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iStack_99c;
  int iStack_978;
  char *local_96c [3];
  undefined1 auStack_960 [16];
  undefined1 auStack_950 [16];
  undefined1 auStack_940 [16];
  undefined1 auStack_930 [16];
  undefined1 auStack_920 [16];
  undefined1 auStack_910 [16];
  undefined1 auStack_900 [16];
  undefined1 auStack_8f0 [16];
  undefined1 auStack_8e0 [16];
  undefined1 auStack_8d0 [16];
  undefined1 auStack_8c0 [16];
  undefined1 auStack_8b0 [16];
  undefined1 auStack_8a0 [16];
  undefined1 auStack_890 [16];
  undefined1 auStack_880 [16];
  undefined1 auStack_870 [16];
  undefined1 auStack_860 [16];
  undefined1 auStack_850 [16];
  undefined1 auStack_840 [16];
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  uint uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  char cStack_804;
  undefined *puStack_800;
  undefined *apuStack_7fc [9];
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  int iStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  uint uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  int iStack_788;
  int iStack_784;
  undefined1 auStack_780 [68];
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  int iStack_72c;
  int iStack_728;
  undefined1 auStack_724 [68];
  undefined4 uStack_6e0;
  undefined1 uStack_6dc;
  undefined1 uStack_6db;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined1 auStack_6c4 [65];
  undefined1 uStack_683;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined1 auStack_66c [65];
  undefined1 uStack_62b;
  undefined4 local_624 [9];
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined1 uStack_5ec;
  undefined1 uStack_5eb;
  int iStack_5e8;
  uint uStack_5e4;
  char cStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined1 auStack_5d0 [16];
  undefined2 uStack_5c0;
  int iStack_5bc;
  short sStack_5b8;
  short sStack_5b6;
  undefined1 uStack_5b4;
  undefined4 uStack_5b0;
  uint uStack_5ac;
  undefined1 uStack_5a8;
  int iStack_5a4;
  undefined1 auStack_5a0 [4];
  undefined4 local_59c [319];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = FUN_ram_48025ba6();
  uVar21 = FUN_ram_4ff21a0a();
  uStack_7d0 = 4;
  uStack_7d8 = 0;
  iStack_7cc = 0;
  uStack_7c8 = 0;
  uStack_7c4 = 0;
  uStack_7c0 = 0;
  uStack_7bc = 0;
  uStack_7b8 = 0;
  uStack_7b4 = 0;
  uStack_7b0 = 0;
  uStack_7a0 = 0;
  uStack_79c = 0;
  uStack_7d4 = uVar4;
  FUN_ram_4802a8a8(&uStack_798,"tasks");
  iVar11 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar11 + 0x1cc4) != 0) {
    puVar13 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      iVar6 = FUN_ram_4802b18e(&uStack_798,*puVar13);
      if (iVar6 != 0) {
        FUN_ram_4802a8a8(&uStack_6d8,"tasks");
        FUN_ram_4806562c(&iStack_5e8,&DAT_ram_4ff5cb9c,&uStack_6d8);
        iStack_99c = FUN_ram_4802b18e(&iStack_5e8,"1");
        FUN_ram_4802a59e(&iStack_5e8);
        FUN_ram_4802a59e(&uStack_6d8);
        goto LAB_ram_48083476;
      }
      puVar13 = puVar13 + 2;
    } while (uVar5 < *(uint *)(iVar11 + 0x1cc4));
  }
  iStack_99c = 0;
LAB_ram_48083476:
  FUN_ram_4802a59e(&uStack_798);
  memset(&iStack_5e8,0,0x5a8);
  uStack_5c0 = CONCAT11(1,(char)uStack_5c0);
  uStack_5b4 = 2;
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  FUN_ram_4802a8a8(auStack_5d0,&DAT_ram_481df390);
  DAT_ram_4ff6ddc8 = DAT_ram_4ff6ddc8 + 1;
  iStack_5e8 = DAT_ram_4ff6ddc8;
  uStack_5e4 = FUN_ram_48025ba6();
  iVar11 = FUN_ram_4ff20c3c();
  uStack_5b0 = __udivdi3(iVar11,iVar11 >> 0x1f,1000000,0);
  local_a0 = FUN_ram_48001f52(4);
  local_9c = FUN_ram_48001f84(4);
  local_98 = FUN_ram_48001fda(4);
  local_94 = FUN_ram_480020c6(4);
  local_90 = FUN_ram_48001f52(0x804);
  local_8c = FUN_ram_48001f84(0x804);
  local_88 = FUN_ram_48001fda(0x804);
  local_84 = FUN_ram_480020c6(0x804);
  local_80 = FUN_ram_48001f84(0x80c);
  local_7c = FUN_ram_48001fda(0x80c);
  local_78 = FUN_ram_480020c6(0x80c);
  local_74 = FUN_ram_48001f52(0x400);
  local_70 = FUN_ram_48001f84(0x400);
  local_6c = FUN_ram_48001fda(0x400);
  local_68 = FUN_ram_480020c6(0x400);
  FUN_ram_4802eeb4();
  cStack_5e0 = DAT_ram_4ff6ddd0;
  if (DAT_ram_4ff6ddd0 == '\0') {
    FUN_ram_4802ad02(auStack_5d0,&DAT_ram_4ff5c678);
  }
  else {
    uStack_5dc = DAT_ram_4ff6ddcc;
    uStack_5d8 = DAT_ram_4ff6dde0;
    uStack_5d4 = DAT_ram_4ff6dddc;
  }
  iVar11 = FUN_ram_4ff21a0a();
  uVar5 = FUN_ram_4ff3c608();
  uStack_5ac = uVar5;
  iVar6 = FUN_ram_4ff3e824(0);
  iVar7 = FUN_ram_4ff3e824(1);
  if (iStack_99c != 0) {
    uStack_6d8 = 0;
    iVar9 = FUN_ram_48025b94();
    uStack_5ac = FUN_ram_4ff3d886(auStack_5a0,0x20,&uStack_6d8);
    iStack_5a4 = FUN_ram_48025b94();
    iStack_5a4 = iStack_5a4 - iVar9;
    uStack_5a8 = uStack_5ac < uVar5;
  }
  uVar5 = uStack_5e4;
  if ((DAT_ram_4ff6ddc4 != '\0') && (iVar11 != DAT_ram_4ff6ddc0)) {
    iVar9 = iVar11 - DAT_ram_4ff6ddc0;
    uVar22 = __udivdi3((iVar6 - DAT_ram_4ff6ddb8) * 1000,
                       (int)((ulonglong)(uint)(iVar6 - DAT_ram_4ff6ddb8) * 1000 >> 0x20),iVar9,0);
    uVar12 = (uint)uVar22;
    if (((int)((ulonglong)uVar22 >> 0x20) != 0) || (1000 < uVar12)) {
      uVar12 = 1000;
    }
    uVar22 = __udivdi3((iVar7 - DAT_ram_4ff6ddbc) * 1000,
                       (int)((ulonglong)(uint)(iVar7 - DAT_ram_4ff6ddbc) * 1000 >> 0x20),iVar9,0);
    uVar8 = (uint)uVar22;
    if (((int)((ulonglong)uVar22 >> 0x20) != 0) || (1000 < uVar8)) {
      uVar8 = 1000;
    }
    sStack_5b8 = (short)&pmpaddr56 - (short)uVar12;
    iStack_5bc = uVar5 - DAT_ram_4ff6ddb4;
    sStack_5b6 = (short)&pmpaddr56 - (short)uVar8;
    uStack_5c0 = 1;
  }
  DAT_ram_4ff6ddb4 = uVar5;
  DAT_ram_4ff6ddc4 = 1;
  DAT_ram_4ff6ddb8 = iVar6;
  DAT_ram_4ff6ddbc = iVar7;
  DAT_ram_4ff6ddc0 = iVar11;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47e84,0xffffffff);
  local_64 = DAT_ram_4ff6dda8;
  local_60 = DAT_ram_4ff6dda4;
  local_5c = DAT_ram_4ff6dda0;
  DAT_ram_4ff6dda8 = 0;
  DAT_ram_4ff6dda4 = 0;
  DAT_ram_4ff6dda0 = 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47e84);
  iVar11 = DAT_ram_4ff6ddb0;
  local_50 = DAT_ram_4ff6dd9c;
  local_4c = DAT_ram_4ff6dd98;
  DAT_ram_4ff6dd9c = 0;
  DAT_ram_4ff6dd98 = 0;
  uVar5 = 0xffffffff;
  if (DAT_ram_4ff6ddb0 != 0) {
    iVar6 = FUN_ram_48025b94();
    uVar5 = (uint)(iVar6 - iVar11) / 1000;
  }
  iVar11 = DAT_ram_4ff6ddac;
  uVar12 = 0xffffffff;
  local_58 = uVar5;
  if (DAT_ram_4ff6ddac != 0) {
    iVar6 = FUN_ram_48025b94();
    uVar12 = (uint)(iVar6 - iVar11) / 1000;
  }
  local_44 = DAT_ram_4ff6dd90;
  local_48 = DAT_ram_4ff6dd94;
  DAT_ram_4ff6dd90 = DAT_ram_4ff6dd94;
  local_54 = uVar12;
  if ((*(char *)(DAT_ram_4ff6de38 + 0x720) == '\0') ||
     (iVar11 = DAT_ram_4ff6de38 + 0x728, 999 < uStack_5e4 - *(int *)(DAT_ram_4ff6de38 + 0x724))) {
    iVar11 = FUN_ram_48082b62();
  }
  iVar6 = DAT_ram_4ff6de38;
  FUN_ram_4802a8a8(&puStack_800,"history");
  iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar7 + 0x1cc4) != 0) {
    puVar13 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      iVar9 = FUN_ram_4802b18e(&puStack_800,*puVar13);
      if (iVar9 != 0) {
        FUN_ram_4802a8a8(&uStack_798,"history");
        FUN_ram_4806562c(&uStack_6d8,&DAT_ram_4ff5cb9c,&uStack_798);
        iStack_978 = FUN_ram_4802b18e(&uStack_6d8,"1");
        FUN_ram_4802a59e(&uStack_6d8);
        FUN_ram_4802a59e(&uStack_798);
        FUN_ram_4802a59e(&puStack_800);
        fence();
        goto joined_r0x4808385e;
      }
      puVar13 = puVar13 + 2;
    } while (uVar5 < *(uint *)(iVar7 + 0x1cc4));
  }
  iStack_978 = 0;
  FUN_ram_4802a59e(&puStack_800);
  fence();
joined_r0x4808385e:
  if ((DAT_ram_4ff6dd08 == '\0') && (iVar7 = FUN_ram_480069b2(&DAT_ram_4ff6dd08), iVar7 != 0)) {
    FUN_ram_4802a8a8(&DAT_ram_4ff5c410,&DAT_ram_481df390);
    FUN_ram_481974a0(FUN_ram_4802a59e,&DAT_ram_4ff5c410,&DAT_ram_4ff6daac);
    FUN_ram_48006bca(&DAT_ram_4ff6dd08);
  }
  if (DAT_ram_4ff6dd00 == '\0') {
    iVar7 = FUN_ram_4802a79a(&DAT_ram_4ff5c410,0x5000);
    DAT_ram_4ff6dd00 = (char)iVar7;
    if (iVar7 == 0) {
      FUN_ram_48067954(&DAT_ram_4ff5cb9c,0x1f7,"application/json",
                       "{\"ok\":false,\"error\":\"system_status_buffer_unavailable\"}");
      FUN_ram_4802a59e(auStack_5d0);
      return;
    }
  }
  FUN_ram_4802a8a8(auStack_960,&DAT_ram_481c4164);
  uVar4 = FUN_ram_481a759a();
  FUN_ram_4802f022(auStack_960,"code");
  FUN_ram_4802aa00(&uStack_6d8,uVar4,10);
  FUN_ram_4802ae48(auStack_960,&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  uVar4 = FUN_ram_4802c25c(uVar4);
  FUN_ram_4802a8a8(&uStack_6d8,uVar4);
  FUN_ram_4802f236(auStack_960,"reason",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802f278(auStack_960,"rawCpu0",DAT_ram_4ff6de2c);
  uVar4 = FUN_ram_4802c306(DAT_ram_4ff6de2c);
  FUN_ram_4802a8a8(&uStack_6d8,uVar4);
  FUN_ram_4802f236(auStack_960,"rawCpu0Reason",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802f278(auStack_960,"rawCpu1",DAT_ram_4ff6de28);
  uVar4 = FUN_ram_4802c306(DAT_ram_4ff6de28);
  FUN_ram_4802a8a8(&uStack_6d8,uVar4);
  FUN_ram_4802f236(auStack_960,"rawCpu1Reason",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802af5a(auStack_960,0x7d);
  FUN_ram_4802a8a8(auStack_950,&DAT_ram_481c4164);
  FUN_ram_4802f236(auStack_950,"chipId",&DAT_ram_4ff5c870);
  FUN_ram_4802f236(auStack_950,"chipModel",&DAT_ram_4ff5c860);
  FUN_ram_4802f236(auStack_950,"chipRevision",&DAT_ram_4ff5c850);
  FUN_ram_4802f236(auStack_950,"appElfSha256",&DAT_ram_4ff5c840);
  FUN_ram_4802a8a8(&uStack_6d8,"P1.6.4");
  FUN_ram_4802f236(auStack_950,"firmwareVersion",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802a8a8(&uStack_6d8,"4d97f369e1a32f126b7121a66a70a53fca628dfa");
  FUN_ram_4802f236(auStack_950,"sourceCommit",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802f114(auStack_950,"sourceDirty",DAT_ram_48223e85 != '\0');
  FUN_ram_4802f236(auStack_950,"bootSessionId",&DAT_ram_4ff5c830);
  FUN_ram_4802a8a8(&uStack_6d8,"waveshare-p4-wifi6-sn65hvd230-x3");
  FUN_ram_4802f236(auStack_950,"boardProfile",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802af5a(auStack_950,0x7d);
  FUN_ram_4802a8a8(auStack_940,&DAT_ram_481c4164);
  FUN_ram_4803b2ec(auStack_940,iVar11,0);
  FUN_ram_4802af5a(auStack_940,0x7d);
  FUN_ram_4802a8a8(auStack_930,&DAT_ram_481c4164);
  FUN_ram_4802f114(auStack_930,"valid",cStack_5e0);
  uVar4 = uStack_5dc;
  if (cStack_5e0 == '\0') {
    FUN_ram_4802f236(auStack_930,"error",auStack_5d0);
  }
  else {
    FUN_ram_4802f022(auStack_930,"currentCx10");
    FUN_ram_4802aa00(&uStack_6d8,uVar4,10);
    FUN_ram_4802ae48(auStack_930,&uStack_6d8);
    FUN_ram_4802a59e(&uStack_6d8);
    uVar4 = uStack_5d8;
    FUN_ram_4802f022(auStack_930,"minCx10");
    FUN_ram_4802aa00(&uStack_6d8,uVar4,10);
    FUN_ram_4802ae48(auStack_930,&uStack_6d8);
    FUN_ram_4802a59e(&uStack_6d8);
    uVar4 = uStack_5d4;
    FUN_ram_4802f022(auStack_930,"maxCx10");
    FUN_ram_4802aa00(&uStack_6d8,uVar4,10);
    FUN_ram_4802ae48(auStack_930,&uStack_6d8);
    FUN_ram_4802a59e(&uStack_6d8);
  }
  FUN_ram_4802a8a8(&uStack_6d8,"monitor_session");
  FUN_ram_4802f236(auStack_930,"rangeScope",&uStack_6d8);
  FUN_ram_4802a59e(&uStack_6d8);
  FUN_ram_4802af5a(auStack_930,0x7d);
  FUN_ram_4802a8a8(auStack_920,&DAT_ram_481c4164);
  FUN_ram_4802f114(auStack_920,"valid",(char)uStack_5c0);
  FUN_ram_4802f114(auStack_920,"warmingUp",uStack_5c0._1_1_);
  FUN_ram_4802f07e(auStack_920,"activeCoreCount",uStack_5b4);
  FUN_ram_4802f278(auStack_920,"sampleWindowMs",iStack_5bc);
  if ((char)uStack_5c0 != '\0') {
    FUN_ram_4802f0b0(auStack_920,"core0Tenths",sStack_5b8);
    FUN_ram_4802f0b0(auStack_920,"core1Tenths",sStack_5b6);
  }
  FUN_ram_4802f278(auStack_920,"frequencyMhz",uStack_5b0);
  FUN_ram_4802f2aa(auStack_920,"taskCount",uStack_5ac);
  FUN_ram_4802af5a(auStack_920,0x7d);
  FUN_ram_4802a8a8(auStack_910,&DAT_ram_481c4164);
  FUN_ram_4802f278(auStack_910,"total",local_a0);
  FUN_ram_4802f278(auStack_910,&DAT_ram_481b22ec,local_9c);
  FUN_ram_4802f278(auStack_910,"minimum",local_98);
  FUN_ram_4802f278(auStack_910,"largest",local_94);
  FUN_ram_4802af5a(auStack_910,0x7d);
  FUN_ram_4802a8a8(auStack_900,&DAT_ram_481c4164);
  FUN_ram_4802f278(auStack_900,"total",local_90);
  FUN_ram_4802f278(auStack_900,&DAT_ram_481b22ec,local_8c);
  FUN_ram_4802f278(auStack_900,"minimum",local_88);
  FUN_ram_4802f278(auStack_900,"largest",local_84);
  FUN_ram_4802f278(auStack_900,"dmaFree",local_80);
  FUN_ram_4802f278(auStack_900,"dmaMinimum",local_7c);
  FUN_ram_4802f278(auStack_900,"dmaLargest",local_78);
  FUN_ram_4802af5a(auStack_900,0x7d);
  FUN_ram_4802a8a8(auStack_8f0,&DAT_ram_481c4164);
  FUN_ram_4802f114(auStack_8f0,"present",local_74 != 0);
  FUN_ram_4802f278(auStack_8f0,"total",local_74);
  FUN_ram_4802f278(auStack_8f0,&DAT_ram_481b22ec,local_70);
  FUN_ram_4802f278(auStack_8f0,"minimum",local_6c);
  FUN_ram_4802f278(auStack_8f0,"largest",local_68);
  FUN_ram_4802af5a(auStack_8f0,0x7d);
  FUN_ram_4802a8a8(auStack_8e0,&DAT_ram_481c4164);
  FUN_ram_4802f022(auStack_8e0,&DAT_ram_481b2190);
  FUN_ram_4802ae48(auStack_8e0,auStack_910);
  FUN_ram_4802f022(auStack_8e0,"internal");
  FUN_ram_4802ae48(auStack_8e0,auStack_900);
  FUN_ram_4802f022(auStack_8e0,"psram");
  FUN_ram_4802ae48(auStack_8e0,auStack_8f0);
  iVar11 = 0;
  if (DAT_ram_4ff617f0 != 0) {
    iVar11 = 0x4ac0;
  }
  if (DAT_ram_4ff69200 != 0) {
    iVar11 = iVar11 + 0x7400;
  }
  if (DAT_ram_4ff6df80 != 0) {
    iVar11 = iVar11 + 0xe00;
  }
  if (DAT_ram_4ff6df8c != 0) {
    iVar11 = iVar11 + 0xa08;
  }
  FUN_ram_4802f2aa(auStack_8e0,"taskOnlyBytesInPsram",iVar11);
  uVar4 = FUN_ram_481208c4();
  FUN_ram_4802f278(auStack_8e0,"sdioStreamBufferBytes",uVar4);
  uVar4 = FUN_ram_481208b8();
  FUN_ram_4802f278(auStack_8e0,"sdioStreamAllocationRetries",uVar4);
  memset(&uStack_6d8,0,0xf0);
  FUN_ram_48120b36(&uStack_6d8);
  FUN_ram_4802a8a8(auStack_8d0,&DAT_ram_481c4164);
  FUN_ram_4802f114(auStack_8d0,"pending",uStack_5eb);
  FUN_ram_4802f114(auStack_8d0,"streamDegraded",uStack_5ec);
  FUN_ram_4802f278(auStack_8d0,"streamFailures",uStack_600);
  FUN_ram_4802f278(auStack_8d0,"streamFirstFailureMs",uStack_5fc);
  FUN_ram_4802f278(auStack_8d0,"streamLastFailureMs",uStack_5f8);
  FUN_ram_4802f278(auStack_8d0,"streamRequestedBytes",uStack_5f4);
  FUN_ram_4802f278(auStack_8d0,"faultsMerged",uStack_5f0);
  FUN_ram_4802a8a8(&puStack_800,&DAT_ram_481c4164);
  FUN_ram_4802f114(&puStack_800,"valid",uStack_683);
  FUN_ram_4802f278(&puStack_800,"schema",uStack_6d8);
  FUN_ram_4802f278(&puStack_800,"reason",uStack_6d4);
  FUN_ram_4802f278(&puStack_800,"error",uStack_6d0);
  FUN_ram_4802f278(&puStack_800,"requestedBytes",uStack_6cc);
  FUN_ram_4802f278(&puStack_800,"firstAtMs",uStack_6c8);
  FUN_ram_4802a8a8(&uStack_798,auStack_6c4);
  FUN_ram_4802f236(&puStack_800,"appElfSha256",&uStack_798);
  FUN_ram_4802a59e(&uStack_798);
  FUN_ram_4802af5a(&puStack_800,0x7d);
  FUN_ram_4802f022(auStack_8d0,"previous");
  FUN_ram_4802ae48(auStack_8d0,&puStack_800);
  FUN_ram_4802a59e(&puStack_800);
  FUN_ram_4802a8a8(&puStack_800,&DAT_ram_481c4164);
  FUN_ram_4802f114(&puStack_800,"valid",uStack_62b);
  FUN_ram_4802f278(&puStack_800,"schema",uStack_680);
  FUN_ram_4802f278(&puStack_800,"reason",uStack_67c);
  FUN_ram_4802f278(&puStack_800,"error",uStack_678);
  FUN_ram_4802f278(&puStack_800,"requestedBytes",uStack_674);
  FUN_ram_4802f278(&puStack_800,"firstAtMs",uStack_670);
  FUN_ram_4802a8a8(&uStack_798,auStack_66c);
  FUN_ram_4802f236(&puStack_800,"appElfSha256",&uStack_798);
  FUN_ram_4802a59e(&uStack_798);
  FUN_ram_4802af5a(&puStack_800,0x7d);
  FUN_ram_4802f022(auStack_8d0,"current");
  FUN_ram_4802ae48(auStack_8d0,&puStack_800);
  FUN_ram_4802a59e(&puStack_800);
  FUN_ram_4802a8a8(auStack_8c0,&DAT_ram_481c4164);
  puStack_800 = PTR_s_unused_ram_481d14a4_ram_48223a1c;
  apuStack_7fc[0] = PTR_s_rxLength_ram_481d14ac_ram_48223a20;
  apuStack_7fc[1] = PTR_s_rxPacketOom_ram_481d14b8_ram_48223a24;
  ppuVar16 = &puStack_800;
  apuStack_7fc[2] = PTR_s_rxQueue_ram_481d14c4_ram_48223a28;
  apuStack_7fc[3] = PTR_s_txPacketOom_ram_481d14cc_ram_48223a2c;
  apuStack_7fc[4] = PTR_s_txLength_ram_481d14d8_ram_48223a30;
  apuStack_7fc[5] = PTR_s_deliveryOom_ram_481d14e4_ram_48223a34;
  apuStack_7fc[6] = PTR_s_deliveryRejected_ram_481d14f0_ram_48223a38;
  apuStack_7fc[7] = PTR_s_packetFallback_ram_481d1504_ram_48223a3c;
  apuStack_7fc[8] = PTR_s_packetOom_ram_481d1514_ram_48223a40;
  puVar13 = local_624;
  do {
    uVar4 = *puVar13;
    FUN_ram_4802f022(auStack_8c0,ppuVar16[1]);
    FUN_ram_4802aa44(&uStack_798,uVar4,10);
    FUN_ram_4802ae48(auStack_8c0,&uStack_798);
    ppuVar16 = ppuVar16 + 1;
    FUN_ram_4802a59e(&uStack_798);
    puVar13 = puVar13 + 1;
  } while (apuStack_7fc + 8 != ppuVar16);
  FUN_ram_4802af5a(auStack_8c0,0x7d);
  FUN_ram_4802f022(auStack_8d0,"drops");
  FUN_ram_4802ae48(auStack_8d0,auStack_8c0);
  FUN_ram_4802af5a(auStack_8d0,0x7d);
  FUN_ram_4802f022(auStack_8e0,"networkFault");
  FUN_ram_4802ae48(auStack_8e0,auStack_8d0);
  memset(&uStack_798,0,0xc0);
  FUN_ram_48120eac(&uStack_798);
  FUN_ram_4802a8a8(auStack_8b0,&DAT_ram_481c4164);
  FUN_ram_4802f114(auStack_8b0,"pending",uStack_6db);
  FUN_ram_4802f278(auStack_8b0,"merged",uStack_6e0);
  FUN_ram_4802f114(auStack_8b0,"previousValid",uStack_6dc);
  FUN_ram_4802a8a8(&uStack_830,&DAT_ram_481c4164);
  FUN_ram_4802f278(&uStack_830,"reason",uStack_798);
  FUN_ram_4802f278(&uStack_830,"detail",uStack_794);
  FUN_ram_4802f278(&uStack_830,"generation",uStack_790);
  FUN_ram_4802f278(&uStack_830,"requestedAtMs",uStack_78c);
  FUN_ram_4802f114(&uStack_830,"ownerStopped",iStack_788 != 0);
  FUN_ram_4802f114(&uStack_830,"emergency",iStack_784 != 0);
  FUN_ram_4802a8a8(&uStack_818,auStack_780);
  FUN_ram_4802f236(&uStack_830,"appElfSha256",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802af5a(&uStack_830,0x7d);
  FUN_ram_4802f022(auStack_8b0,"previous");
  FUN_ram_4802ae48(auStack_8b0,&uStack_830);
  FUN_ram_4802a59e(&uStack_830);
  FUN_ram_4802a8a8(&uStack_830,&DAT_ram_481c4164);
  FUN_ram_4802f278(&uStack_830,"reason",uStack_73c);
  FUN_ram_4802f278(&uStack_830,"detail",uStack_738);
  FUN_ram_4802f278(&uStack_830,"generation",uStack_734);
  FUN_ram_4802f278(&uStack_830,"requestedAtMs",uStack_730);
  FUN_ram_4802f114(&uStack_830,"ownerStopped",iStack_72c != 0);
  FUN_ram_4802f114(&uStack_830,"emergency",iStack_728 != 0);
  FUN_ram_4802a8a8(&uStack_818,auStack_724);
  FUN_ram_4802f236(&uStack_830,"appElfSha256",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802af5a(&uStack_830,0x7d);
  FUN_ram_4802f022(auStack_8b0,"current");
  FUN_ram_4802ae48(auStack_8b0,&uStack_830);
  FUN_ram_4802a59e(&uStack_830);
  FUN_ram_4802af5a(auStack_8b0,0x7d);
  FUN_ram_4802f022(auStack_8e0,"faultCoordinator");
  FUN_ram_4802ae48(auStack_8e0,auStack_8b0);
  FUN_ram_4802a8a8(auStack_8a0,&DAT_ram_481c4164);
  uStack_830 = 0;
  uStack_82c = 0;
  uStack_828 = 0;
  uStack_824 = 0;
  uStack_820 = 0;
  uStack_81c = 0;
  FUN_ram_48064bd0(&DAT_ram_4ff5ce9c,&uStack_830);
  uVar20 = uStack_81c;
  uVar19 = uStack_820;
  uVar18 = uStack_824;
  uVar15 = uStack_828;
  uVar14 = uStack_82c;
  uVar4 = uStack_830;
  FUN_ram_4802a8a8(&uStack_818,&DAT_ram_481c4164);
  FUN_ram_4802f278(&uStack_818,"generation",uVar4);
  FUN_ram_4802f278(&uStack_818,"phase",uVar14);
  FUN_ram_4802f278(&uStack_818,"heartbeatMs",uVar15);
  FUN_ram_4802f278(&uStack_818,"absoluteDeadlineMs",uVar18);
  FUN_ram_4802f278(&uStack_818,"lastProgressMs",uVar19);
  FUN_ram_4802f278(&uStack_818,"terminalIntent",uVar20);
  FUN_ram_4802af5a(&uStack_818,0x7d);
  FUN_ram_4802f022(auStack_8a0,"owner");
  FUN_ram_4802ae48(auStack_8a0,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  local_96c[0] = "http0";
  local_96c[1] = "http1";
  local_96c[2] = "ota";
  ppcVar17 = local_96c;
  puVar13 = &DAT_ram_4ff5ced8;
  do {
    iVar11 = 2;
LAB_ram_480843c2:
    uVar5 = puVar13[-1];
    fence();
    if ((uVar5 & 1) != 0) {
LAB_ram_48084404:
      if (iVar11 == 1) goto LAB_ram_480845d2;
      iVar11 = 1;
      goto LAB_ram_480843c2;
    }
    uVar4 = *puVar13;
    uVar20 = puVar13[1];
    uVar19 = puVar13[2];
    uVar18 = puVar13[3];
    uVar15 = puVar13[4];
    uVar14 = puVar13[5];
    fence();
    if (uVar5 != puVar13[-1]) goto LAB_ram_48084404;
    pcVar10 = *ppcVar17;
    FUN_ram_4802a8a8(&uStack_818,&DAT_ram_481c4164);
    FUN_ram_4802f278(&uStack_818,"generation",uVar4);
    FUN_ram_4802f278(&uStack_818,"phase",uVar20);
    FUN_ram_4802f278(&uStack_818,"heartbeatMs",uVar19);
    FUN_ram_4802f278(&uStack_818,"absoluteDeadlineMs",uVar18);
    FUN_ram_4802f278(&uStack_818,"lastProgressMs",uVar15);
    FUN_ram_4802f278(&uStack_818,"terminalIntent",uVar14);
    FUN_ram_4802af5a(&uStack_818,0x7d);
    FUN_ram_4802f022(auStack_8a0,pcVar10);
    FUN_ram_4802ae48(auStack_8a0,&uStack_818);
    FUN_ram_4802a59e(&uStack_818);
LAB_ram_480845d2:
    puVar13 = puVar13 + 7;
    ppcVar17 = ppcVar17 + 1;
  } while (puVar13 != (undefined4 *)&DAT_ram_4ff5cf2c);
  FUN_ram_4802af5a(auStack_8a0,0x7d);
  FUN_ram_4802f022(auStack_8e0,"webControl");
  FUN_ram_4802ae48(auStack_8e0,auStack_8a0);
  FUN_ram_4802af5a(auStack_8e0,0x7d);
  FUN_ram_4802a8a8(auStack_890,&DAT_ram_481c4164);
  FUN_ram_4802f114(auStack_890,"valid",local_64 != 0);
  uVar4 = 0;
  if (local_60 != 0) {
    uVar4 = __udivdi3(local_64 * 10000000,(int)((ulonglong)local_64 * 10000000 >> 0x20),local_60,0);
  }
  FUN_ram_4802f278(auStack_890,"hzTenths",uVar4);
  uVar5 = 0;
  if (local_64 != 0) {
    uVar5 = local_60 / local_64;
  }
  FUN_ram_4802f278(auStack_890,"periodAvgUs",uVar5);
  FUN_ram_4802f278(auStack_890,"periodMaxUs",local_5c);
  FUN_ram_4802f278(auStack_890,"lastSeenAgeMs",local_58);
  FUN_ram_4802f278(auStack_890,"fsdP0LastSeenAgeMs",local_54);
  FUN_ram_4802f278(auStack_890,"fullBatchCount",local_50);
  FUN_ram_4802f278(auStack_890,"forcedYieldCount",local_4c);
  FUN_ram_4802af5a(auStack_890,0x7d);
  FUN_ram_4802a8a8(auStack_880,&DAT_ram_481c4164);
  FUN_ram_4802f278(auStack_880,"lastHandleUs",local_48);
  FUN_ram_4802f278(auStack_880,"maxHandleUs",local_44);
  FUN_ram_4802af5a(auStack_880,0x7d);
  FUN_ram_4802a8a8(auStack_870,&DAT_ram_481c4164);
  FUN_ram_4802f022(auStack_870,"canRt");
  FUN_ram_4802ae48(auStack_870,auStack_890);
  FUN_ram_4802f022(auStack_870,&DAT_ram_481c8cb0);
  FUN_ram_4802ae48(auStack_870,auStack_880);
  FUN_ram_4802af5a(auStack_870,0x7d);
  FUN_ram_4802b80a(&DAT_ram_4ff5c410,0);
  FUN_ram_4802ad46(&DAT_ram_4ff5c410,&DAT_ram_481c4164);
  FUN_ram_4802f0e2(&DAT_ram_4ff5c410,"schemaVersion",2);
  FUN_ram_4802f07e(&DAT_ram_4ff5c410,"latencyPolicyVersion",7);
  FUN_ram_4802f0e2(&DAT_ram_4ff5c410,"latencyBenchmarkUs",1000);
  FUN_ram_4802f278(&DAT_ram_4ff5c410,"switchResponseTargetUs",0);
  FUN_ram_4802a8a8(&uStack_818,"consumer-action-deadline");
  FUN_ram_4802f236(&DAT_ram_4ff5c410,"switchResponsePolicy",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802f278(&DAT_ram_4ff5c410,"snapshotSeq",iStack_5e8);
  FUN_ram_4802f278(&DAT_ram_4ff5c410,"capturedAtMs",uStack_5e4);
  FUN_ram_4802f278(&DAT_ram_4ff5c410,"uptimeSec",uStack_5e4 / 1000);
  FUN_ram_4802f278(&DAT_ram_4ff5c410,"selectedProtocol",DAT_ram_4ff47ea0);
  if (DAT_ram_4ff47ea0 == 0xd) {
    pcVar10 = "V13";
  }
  else if (DAT_ram_4ff47ea0 == 0xe) {
    pcVar10 = "V14";
  }
  else if (DAT_ram_4ff47ea0 == 0xc) {
    pcVar10 = "V12";
  }
  else {
    pcVar10 = "unknown";
  }
  FUN_ram_4802a8a8(&uStack_818,pcVar10);
  FUN_ram_4802f236(&DAT_ram_4ff5c410,"selectedProtocolName",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"device");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_950);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"reset");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_960);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"health");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_940);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"temperature");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_930);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"cpu");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_920);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"memory");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_8e0);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"loops");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_870);
  FUN_ram_4802a8a8(&uStack_818,&DAT_ram_481c4164);
  FUN_ram_4802f114(&uStack_818,"initialized",*(undefined1 *)(iVar6 + 0xb3c));
  FUN_ram_4802f114(&uStack_818,"initializationOk",*(undefined1 *)(iVar6 + 0xb3d));
  FUN_ram_4802f278(&uStack_818,"pendingMask",*(undefined4 *)(iVar6 + 0xb40));
  FUN_ram_4802f07e(&uStack_818,"pendingCount",*(undefined1 *)(iVar6 + 0xb44));
  FUN_ram_4802f278(&uStack_818,"writeCount",*(undefined4 *)(iVar6 + 0xb48));
  FUN_ram_4802f278(&uStack_818,"failureCount",*(undefined4 *)(iVar6 + 0xb4c));
  FUN_ram_48030646(&uStack_818,"generation",iVar6 + 0xb50);
  FUN_ram_48030646(&uStack_818,"persistedGeneration",iVar6 + 0xb70);
  FUN_ram_4802af5a(&uStack_818,0x7d);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"canExperimentPersistence");
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  fence();
  fence();
  FUN_ram_4802f114(&DAT_ram_4ff5c410,"flashSafeLease",DAT_ram_4ff6deb4 != '\0');
  FUN_ram_4802f114(&DAT_ram_4ff5c410,"fsdP0SettlementFault",
                   *(undefined1 *)(DAT_ram_4ff6de38 + 0xb38));
  FUN_ram_4807f928(&DAT_ram_4ff5c410);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"configurationPersistence");
  FUN_ram_4802a8a8(auStack_860,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(&uStack_818,"B40P101");
  FUN_ram_4802f236(auStack_860,"namespace",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802a8a8(&uStack_818,"config");
  FUN_ram_4802f236(auStack_860,"key",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802f022(auStack_860,"expectedVersion");
  FUN_ram_4802a970(&uStack_818,0x14,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802f022(auStack_860,"expectedBlobBytes");
  FUN_ram_4802a9b8(&uStack_818,0xb0,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802f022(auStack_860,"expectedConfigBytes");
  FUN_ram_4802a9b8(&uStack_818,0xa4,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = DAT_ram_4ff5caa8;
  FUN_ram_4802f022(auStack_860,"loadAttempted");
  if (cVar1 == '\0') {
    pcVar10 = "false";
  }
  else {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  cVar1 = DAT_ram_4ff5caa9;
  FUN_ram_4802f022(auStack_860,"namespaceOpened");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  uVar4 = DAT_ram_4ff5caac;
  FUN_ram_4802f022(auStack_860,"blobLength");
  FUN_ram_4802a9b8(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  uVar4 = DAT_ram_4ff5cab0;
  FUN_ram_4802f022(auStack_860,"bytesRead");
  FUN_ram_4802a9b8(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = DAT_ram_4ff5cab4;
  FUN_ram_4802f022(auStack_860,"headerAvailable");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  FUN_ram_4802f278(auStack_860,"storedMagic",DAT_ram_4ff5cab8);
  uVar2 = DAT_ram_4ff5cabc;
  FUN_ram_4802f022(auStack_860,"storedVersion");
  FUN_ram_4802a970(&uStack_818,uVar2,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  uVar2 = _DAT_ram_4ff5cabe;
  FUN_ram_4802f022(auStack_860,"storedConfigSize");
  FUN_ram_4802a970(&uStack_818,uVar2,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = (char)DAT_ram_4ff5cac0;
  FUN_ram_4802f022(auStack_860,"currentFormatValid");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  cVar1 = DAT_ram_4ff5cac0._1_1_;
  FUN_ram_4802f022(auStack_860,"migrated");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  uVar2 = DAT_ram_4ff5cac4;
  FUN_ram_4802f022(auStack_860,"migratedFromVersion");
  FUN_ram_4802a970(&uStack_818,uVar2,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = DAT_ram_4ff5cac2;
  FUN_ram_4802f022(auStack_860,"defaultsApplied");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  if (DAT_ram_4ff5cac6 == 6) {
    pcVar10 = "migrated";
  }
  else if (DAT_ram_4ff5cac6 < 7) {
    if (DAT_ram_4ff5cac6 == 3) {
      pcVar10 = "blob_too_large";
    }
    else if (DAT_ram_4ff5cac6 < 4) {
      if (DAT_ram_4ff5cac6 == 1) {
        pcVar10 = "namespace_open_failed";
      }
      else if (DAT_ram_4ff5cac6 == 2) {
        pcVar10 = "missing";
      }
      else {
        pcVar10 = "not_attempted";
      }
    }
    else if (DAT_ram_4ff5cac6 == 4) {
      pcVar10 = "read_failed";
    }
    else {
      pcVar10 = "current_format_valid";
    }
  }
  else if (DAT_ram_4ff5cac6 == 10) {
    pcVar10 = "current_blob_size_mismatch";
  }
  else if (DAT_ram_4ff5cac6 < 0xb) {
    if (DAT_ram_4ff5cac6 == 8) {
      pcVar10 = "unsupported_version";
    }
    else if (DAT_ram_4ff5cac6 == 9) {
      pcVar10 = "config_size_mismatch";
    }
    else {
      pcVar10 = "invalid_magic";
    }
  }
  else if (DAT_ram_4ff5cac6 == 0xb) {
    pcVar10 = "checksum_mismatch";
  }
  else if (DAT_ram_4ff5cac6 == 0xc) {
    pcVar10 = "legacy_rejected";
  }
  else {
    pcVar10 = "unknown";
  }
  FUN_ram_4802a8a8(&uStack_818,pcVar10);
  FUN_ram_4802f236(auStack_860,"loadReason",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = DAT_ram_4ff5cac7;
  FUN_ram_4802f022(auStack_860,"lastWriteAttempted");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  cVar1 = (char)DAT_ram_4ff5cac8;
  FUN_ram_4802f022(auStack_860,"lastWriteNamespaceOpened");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  cVar1 = DAT_ram_4ff5cac8._1_1_;
  FUN_ram_4802f022(auStack_860,"lastWriteSuccess");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  uVar4 = DAT_ram_4ff5cacc;
  FUN_ram_4802f022(auStack_860,"lastWriteExpectedBytes");
  FUN_ram_4802a9b8(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  uVar4 = DAT_ram_4ff5cad0;
  FUN_ram_4802f022(auStack_860,"lastWriteBytes");
  FUN_ram_4802a9b8(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_860,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  fence();
  FUN_ram_4802f278(auStack_860,"pendingMask",DAT_ram_4ff6de94);
  FUN_ram_4802f278(auStack_860,"writeCount",DAT_ram_4ff6de88);
  FUN_ram_4802f278(auStack_860,"failureCount",DAT_ram_4ff6de84);
  FUN_ram_4802f278(auStack_860,"deferredCount",DAT_ram_4ff6de80);
  FUN_ram_4802f278(auStack_860,"maxWriteDurationUs",DAT_ram_4ff5ca58);
  FUN_ram_4802f022(auStack_860,"recentWrites");
  FUN_ram_4802af5a(auStack_860,0x5b);
  if (DAT_ram_4ff5ca5d != 0) {
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
        FUN_ram_4802af5a(auStack_860,0x2c);
      }
      iVar11 = ((int)(((DAT_ram_4ff5ca5c + 4) - (uint)DAT_ram_4ff5ca5d) + uVar5) % 4 & 0xffU) * 0x10
      ;
      FUN_ram_4802a8a8(auStack_840,&DAT_ram_481c4164);
      uVar4 = *(undefined4 *)(&DAT_ram_4ff5ca18 + iVar11);
      FUN_ram_4802f022(auStack_840,"requestMask");
      FUN_ram_4802aa44(&uStack_818,uVar4,10);
      FUN_ram_4802ae48(auStack_840,&uStack_818);
      FUN_ram_4802a59e(&uStack_818);
      uVar4 = *(undefined4 *)(&DAT_ram_4ff5ca1c + iVar11);
      FUN_ram_4802f022(auStack_840,"startedAtMs");
      FUN_ram_4802aa44(&uStack_818,uVar4,10);
      FUN_ram_4802ae48(auStack_840,&uStack_818);
      FUN_ram_4802a59e(&uStack_818);
      uVar4 = *(undefined4 *)(&DAT_ram_4ff5ca20 + iVar11);
      FUN_ram_4802f022(auStack_840,"durationUs");
      FUN_ram_4802aa44(&uStack_818,uVar4,10);
      FUN_ram_4802ae48(auStack_840,&uStack_818);
      FUN_ram_4802a59e(&uStack_818);
      cVar1 = (&DAT_ram_4ff5ca24)[iVar11];
      FUN_ram_4802f022(auStack_840,"success");
      pcVar10 = "false";
      if (cVar1 != '\0') {
        pcVar10 = "true";
      }
      FUN_ram_4802af2c(auStack_840,pcVar10);
      FUN_ram_4802af5a(auStack_840,0x7d);
      FUN_ram_4802ae48(auStack_860,auStack_840);
      FUN_ram_4802a59e(auStack_840);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < (uint)DAT_ram_4ff5ca5d);
  }
  FUN_ram_4802af5a(auStack_860,0x5d);
  cVar1 = DAT_ram_4ff6deb4;
  fence();
  FUN_ram_4802f022(auStack_860,"flashSafeLease");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_860,pcVar10);
  FUN_ram_4802f022(auStack_860,"bootstrapNvsEraseHistoryAvailable");
  FUN_ram_4802af2c(auStack_860,"false");
  FUN_ram_4802a8a8(auStack_850,&DAT_ram_481c4164);
  uStack_818 = 0;
  uStack_814 = 0;
  uStack_810 = 0;
  uStack_80c = 0;
  uStack_808 = 0;
  iVar11 = FUN_ram_4815a566(&DAT_ram_481c3efc,&uStack_818);
  FUN_ram_4802f022(auStack_850,"error");
  FUN_ram_4802a970(auStack_840,iVar11,10);
  FUN_ram_4802ae48(auStack_850,auStack_840);
  FUN_ram_4802a59e(auStack_840);
  if (iVar11 == 0) {
    FUN_ram_4802f2aa(auStack_850,"usedEntries",uStack_818);
    FUN_ram_4802f2aa(auStack_850,"freeEntries",uStack_814);
    FUN_ram_4802f2aa(auStack_850,"availableEntries",uStack_810);
    FUN_ram_4802f2aa(auStack_850,"totalEntries",uStack_80c);
  }
  FUN_ram_4802af5a(auStack_850,0x7d);
  FUN_ram_4802f022(auStack_860,&DAT_ram_481c3efc);
  FUN_ram_4802ae48(auStack_860,auStack_850);
  FUN_ram_4802a59e(auStack_850);
  FUN_ram_4802a8a8(auStack_840,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(&uStack_818,"p4_data");
  FUN_ram_4802f236(auStack_840,"partition",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802f022(auStack_840,"bytes");
  FUN_ram_4802a9b8(&uStack_818,0x10000,10);
  FUN_ram_4802ae48(auStack_840,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = DAT_ram_4ff6dd68;
  FUN_ram_4802f022(auStack_840,"ready");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_840,pcVar10);
  FUN_ram_4802a8a8(&uStack_818,PTR_s_not_started_ram_481d1918_ram_4ff47e74);
  FUN_ram_4802f236(auStack_840,"stage",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  uVar4 = DAT_ram_4ff6dd64;
  FUN_ram_4802f022(auStack_840,"lastError");
  FUN_ram_4802a970(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_840,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  cVar1 = DAT_ram_4ff47e6c;
  FUN_ram_4802f022(auStack_840,"fsdReady");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_840,pcVar10);
  cVar1 = DAT_ram_4ff47e64;
  FUN_ram_4802f022(auStack_840,"cloudReady");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_840,pcVar10);
  cVar1 = DAT_ram_4ff47e65;
  if (DAT_ram_4ff47e6d == '\0') {
    FUN_ram_4802f022(auStack_840,"cleanupPending");
    pcVar10 = "false";
    if (cVar1 == '\0') goto LAB_ram_4808522c;
  }
  else {
    FUN_ram_4802f022(auStack_840,"cleanupPending");
  }
  pcVar10 = "true";
LAB_ram_4808522c:
  FUN_ram_4802af2c(auStack_840,pcVar10);
  FUN_ram_4802a8a8(&uStack_818,PTR_DAT_ram_481df390_ram_4ff47e70);
  FUN_ram_4802f236(auStack_840,"fsdError",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802a8a8(&uStack_818,PTR_DAT_ram_481df390_ram_4ff47e68);
  FUN_ram_4802f236(auStack_840,"cloudError",&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  uVar4 = DAT_ram_4ff6dd60;
  FUN_ram_4802f022(auStack_840,"fsdNvsError");
  FUN_ram_4802a970(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_840,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  uVar4 = DAT_ram_4ff6dd5c;
  FUN_ram_4802f022(auStack_840,"cloudNvsError");
  FUN_ram_4802a970(&uStack_818,uVar4,10);
  FUN_ram_4802ae48(auStack_840,&uStack_818);
  FUN_ram_4802a59e(&uStack_818);
  FUN_ram_4802af5a(auStack_840,0x7d);
  FUN_ram_4802f022(auStack_860,"p160DataStorage");
  FUN_ram_4802ae48(auStack_860,auStack_840);
  FUN_ram_4802a59e(auStack_840);
  FUN_ram_4802af5a(auStack_860,0x7d);
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_860);
  FUN_ram_4802a59e(auStack_860);
  FUN_ram_48032c66(&uStack_818);
  FUN_ram_4802f022(&DAT_ram_4ff5c410,"canRuntime");
  FUN_ram_4802a8a8(auStack_850,&DAT_ram_481c4164);
  uVar4 = FUN_ram_48025ba6();
  FUN_ram_4802f022(auStack_850,"capturedAtMs");
  FUN_ram_4802aa44(auStack_840,uVar4,10);
  FUN_ram_4802ae48(auStack_850,auStack_840);
  FUN_ram_4802a59e(auStack_840);
  cVar1 = DAT_ram_4ff6df34;
  fence();
  fence();
  FUN_ram_4802f022(auStack_850,"runtimeReady");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  cVar1 = DAT_ram_4ff6df38;
  fence();
  fence();
  FUN_ram_4802f022(auStack_850,"canActive");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  cVar1 = DAT_ram_4ff47ec4;
  fence();
  fence();
  FUN_ram_4802f022(auStack_850,"canQuiescing");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  piVar3 = DAT_ram_4ff6df2c;
  FUN_ram_4802f022(auStack_850,"driverPresent");
  pcVar10 = "false";
  if (piVar3 != (int *)0x0) {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  if ((DAT_ram_4ff6df2c == (int *)0x0) ||
     (iVar11 = (**(code **)(*DAT_ram_4ff6df2c + 0x130))(), iVar11 == 0)) {
    FUN_ram_4802f022(auStack_850,"driverEnabled");
    pcVar10 = "false";
  }
  else {
    FUN_ram_4802f022(auStack_850,"driverEnabled");
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  if ((DAT_ram_4ff6df2c == (int *)0x0) ||
     (iVar11 = (**(code **)(*DAT_ram_4ff6df2c + 0x138))(), iVar11 == 0)) {
    FUN_ram_4802f022(auStack_850,"emergencyDisableLatched");
    pcVar10 = "false";
  }
  else {
    FUN_ram_4802f022(auStack_850,"emergencyDisableLatched");
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  FUN_ram_4802f022(auStack_850,"p0SettlementFault");
  pcVar10 = "false";
  if (cStack_804 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  uVar5 = uStack_818 & 0xffff;
  FUN_ram_4802f022(auStack_850,"p0ObservationQueueDepth");
  FUN_ram_4802a970(auStack_840,uVar5,10);
  FUN_ram_4802ae48(auStack_850,auStack_840);
  FUN_ram_4802a59e(auStack_840);
  uVar4 = uStack_814;
  FUN_ram_4802f022(auStack_850,"p0ObservationQueueDropCount");
  FUN_ram_4802aa44(auStack_840,uVar4,10);
  FUN_ram_4802ae48(auStack_850,auStack_840);
  FUN_ram_4802a59e(auStack_840);
  cVar1 = DAT_ram_4ff6df30;
  fence();
  fence();
  FUN_ram_4802f022(auStack_850,"otaQuiet");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  cVar1 = DAT_ram_4ff5c5c0;
  FUN_ram_4802f022(auStack_850,"otaSessionActive");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  cVar1 = DAT_ram_4ff5c5ca;
  FUN_ram_4802f022(auStack_850,"controlledStopActive");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  cVar1 = DAT_ram_4ff5c5c9;
  FUN_ram_4802f022(auStack_850,"driverStoppedForOta");
  pcVar10 = "false";
  if (cVar1 != '\0') {
    pcVar10 = "true";
  }
  FUN_ram_4802af2c(auStack_850,pcVar10);
  FUN_ram_4802af5a(auStack_850,0x7d);
  FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_850);
  FUN_ram_4802a59e(auStack_850);
  FUN_ram_48039a3e(&DAT_ram_4ff5c410);
  FUN_ram_4803840a(&DAT_ram_4ff5c410);
  iVar11 = DAT_ram_4ff6de38;
  iVar6 = DAT_ram_4ff6de38 + 0x4160;
  FUN_ram_4811f3c4(iVar6);
  uVar4 = FUN_ram_480018de(*(undefined4 *)(iVar11 + 0x4170));
  FUN_ram_4803fda2(iVar6,uVar4);
  FUN_ram_4812033c(DAT_ram_4ff6de38 + 0x3278);
  FUN_ram_4804019e(&DAT_ram_4ff5c410,DAT_ram_4ff6de38 + 0x3278);
  FUN_ram_48120678(DAT_ram_4ff6de38 + 15000);
  FUN_ram_4803e89c(&DAT_ram_4ff5c410,DAT_ram_4ff6de38 + 15000);
  if (iStack_978 != 0) {
    FUN_ram_4802f022(&DAT_ram_4ff5c410,"healthObservations");
    FUN_ram_4802a8a8(auStack_840,&DAT_ram_481c4164);
    FUN_ram_4802a8a8(&uStack_818,"ram_current_boot");
    FUN_ram_4802f236(auStack_840,"retention",&uStack_818);
    FUN_ram_4802a59e(&uStack_818);
    FUN_ram_4802f022(auStack_840,"capacity");
    FUN_ram_4802a970(&uStack_818,0x10,10);
    FUN_ram_4802ae48(auStack_840,&uStack_818);
    FUN_ram_4802a59e(&uStack_818);
    FUN_ram_4802f022(auStack_840,"sampleIntervalMs");
    FUN_ram_4802aa44(&uStack_818,1000,10);
    FUN_ram_4802ae48(auStack_840,&uStack_818);
    FUN_ram_4802a59e(&uStack_818);
    uVar4 = *(undefined4 *)(DAT_ram_4ff6de38 + 0x1d1c);
    FUN_ram_4802f022(auStack_840,"count");
    FUN_ram_4802a9b8(&uStack_818,uVar4,10);
    FUN_ram_4802ae48(auStack_840,&uStack_818);
    FUN_ram_4802a59e(&uStack_818);
    FUN_ram_4802f022(auStack_840,"samples");
    FUN_ram_4802af5a(auStack_840,0x5b);
    uVar5 = 0;
    if (*(int *)(DAT_ram_4ff6de38 + 0x1d1c) != 0) {
      while( true ) {
        if (uVar5 < *(uint *)(DAT_ram_4ff6de38 + 0x1d1c)) {
          iVar11 = DAT_ram_4ff6de38 +
                   ((*(int *)(DAT_ram_4ff6de38 + 0x1d18) + 0xf) - uVar5 & 0xf) * 0x108 + 0xc98;
        }
        else {
          iVar11 = 0;
        }
        FUN_ram_4802a8a8(&uStack_818,&DAT_ram_481c4164);
        FUN_ram_4803b2ec(&uStack_818,iVar11,iVar11);
        FUN_ram_4802af5a(&uStack_818,0x7d);
        FUN_ram_4802ae48(auStack_840,&uStack_818);
        FUN_ram_4802a59e(&uStack_818);
        uVar5 = uVar5 + 1;
        if (*(uint *)(DAT_ram_4ff6de38 + 0x1d1c) <= uVar5) break;
        FUN_ram_4802af5a(auStack_840,0x2c);
      }
    }
    FUN_ram_4802af2c(auStack_840,&DAT_ram_481c43f4);
    FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_840);
    FUN_ram_4802a59e(auStack_840);
  }
  if (iStack_99c != 0) {
    FUN_ram_4802f114(&DAT_ram_4ff5c410,"tasksTruncated",uStack_5a8);
    FUN_ram_4802f278(&DAT_ram_4ff5c410,"taskScanUs",iStack_5a4);
    FUN_ram_4802f022(&DAT_ram_4ff5c410,"tasks");
    FUN_ram_4802af5a(&DAT_ram_4ff5c410,0x5b);
    if (uStack_5ac != 0) {
      puVar13 = local_59c;
      uVar5 = 0;
      while( true ) {
        FUN_ram_4802a8a8(auStack_840,&DAT_ram_481c4164);
        FUN_ram_4802a8a8(&uStack_818,*puVar13);
        FUN_ram_4802f236(auStack_840,"name",&uStack_818);
        FUN_ram_4802a59e(&uStack_818);
        FUN_ram_4802f2aa(auStack_840,"number",puVar13[1]);
        uVar4 = puVar13[8];
        FUN_ram_4802f022(auStack_840,"core");
        FUN_ram_4802a970(&uStack_818,uVar4,10);
        FUN_ram_4802ae48(auStack_840,&uStack_818);
        FUN_ram_4802a59e(&uStack_818);
        uVar12 = puVar13[2];
        if (uVar12 == 2) {
          pcVar10 = "blocked";
        }
        else if (uVar12 < 3) {
          if (uVar12 == 0) {
            pcVar10 = "running";
          }
          else {
            pcVar10 = "ready";
          }
        }
        else {
          pcVar10 = "suspended";
          if ((uVar12 != 3) && (pcVar10 = "deleted", uVar12 != 4)) {
            pcVar10 = "invalid";
          }
        }
        FUN_ram_4802a8a8(&uStack_818,pcVar10);
        FUN_ram_4802f236(auStack_840,"state",&uStack_818);
        FUN_ram_4802a59e(&uStack_818);
        FUN_ram_4802f2aa(auStack_840,"priority",puVar13[3]);
        FUN_ram_4802f2aa(auStack_840,"basePriority",puVar13[4]);
        FUN_ram_4802f278(auStack_840,"stackHighWater",puVar13[7]);
        FUN_ram_4802f278(auStack_840,"runtime",puVar13[5]);
        FUN_ram_4802af5a(auStack_840,0x7d);
        FUN_ram_4802ae48(&DAT_ram_4ff5c410,auStack_840);
        FUN_ram_4802a59e(auStack_840);
        uVar5 = uVar5 + 1;
        puVar13 = puVar13 + 10;
        if (uStack_5ac <= uVar5) break;
        FUN_ram_4802af5a(&DAT_ram_4ff5c410,0x2c);
      }
    }
    FUN_ram_4802af5a(&DAT_ram_4ff5c410,0x5d);
  }
  FUN_ram_4802af5a(&DAT_ram_4ff5c410,0x7d);
  puVar13 = &DAT_ram_4ff5c410;
  if ((char)DAT_ram_4ff5c41f < '\0') {
    uVar5 = DAT_ram_4ff5c41f & 0x7f;
  }
  else {
    uVar5 = 0;
    if (DAT_ram_4ff5c410 != (undefined4 *)0x0) {
      uVar5 = DAT_ram_4ff5c418;
    }
  }
  iStack_7cc = FUN_ram_4ff21a0a();
  iStack_7cc = iStack_7cc - (int)uVar21;
  if ((char)DAT_ram_4ff5c41f < '\0') {
    uVar12 = DAT_ram_4ff5c41f & 0x7f;
  }
  else {
    puVar13 = DAT_ram_4ff5c410;
    uVar12 = 0;
    if (DAT_ram_4ff5c410 != (undefined4 *)0x0) {
      uVar12 = DAT_ram_4ff5c418;
    }
  }
  uStack_7c0 = uVar5;
  uStack_7a8 = uVar21;
  FUN_ram_48068356(puVar13,uVar12,&uStack_7d8);
  FUN_ram_4802a59e(auStack_870);
  FUN_ram_4802a59e(auStack_880);
  FUN_ram_4802a59e(auStack_890);
  FUN_ram_4802a59e(auStack_8a0);
  FUN_ram_4802a59e(auStack_8b0);
  FUN_ram_4802a59e(auStack_8c0);
  FUN_ram_4802a59e(auStack_8d0);
  FUN_ram_4802a59e(auStack_8e0);
  FUN_ram_4802a59e(auStack_8f0);
  FUN_ram_4802a59e(auStack_900);
  FUN_ram_4802a59e(auStack_910);
  FUN_ram_4802a59e(auStack_920);
  FUN_ram_4802a59e(auStack_930);
  FUN_ram_4802a59e(auStack_940);
  FUN_ram_4802a59e(auStack_950);
  FUN_ram_4802a59e(auStack_960);
  FUN_ram_4802a59e(auStack_5d0);
  return;
}


