/* Firmware entry: 0x480bd6c6 */

char FUN_ram_480bd6c6(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((char)param_1[10] == '\0') || (param_1[3] != 0)) {
LAB_ram_480bd6e2:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar3 = param_1[2];
    if (((uint)param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480bd6e2;
    *(undefined1 *)(*param_1 + uVar3) = 0x7b;
    iVar4 = param_1[2];
    param_1[2] = iVar4 + 1;
    *(undefined1 *)(iVar4 + 1 + *param_1) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[3] = 1;
  }
  cVar1 = *(char *)(DAT_ram_4ff6dc74 + 0x220);
  bVar2 = DAT_ram_48223e85 != '\0';
  if (cVar1 == '\0') {
    iVar4 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
    FUN_ram_4808c2dc(param_1,"online",iVar4 == 3);
    FUN_ram_4808c96e(param_1,"currentVersion","P1.6.4",6);
    sVar5 = strlen("4d97f369e1a32f126b7121a66a70a53fca628dfa");
    FUN_ram_4808c96e(param_1,"currentSha","4d97f369e1a32f126b7121a66a70a53fca628dfa",sVar5);
    FUN_ram_4808c96e(param_1,"hardware_profile",&DAT_ram_481c3ddc,4);
    FUN_ram_4808c2dc(param_1,"sourceDirty",bVar2);
    FUN_ram_4808c2dc(param_1,"supported",1);
    FUN_ram_4808c96e(param_1,"latestVersion",&DAT_ram_481df390,0);
    FUN_ram_4808c96e(param_1,"latestSha",&DAT_ram_481df390,0);
LAB_ram_480bd8e0:
    pcVar11 = "unknown";
    uVar3 = 0;
    uVar7 = 7;
  }
  else {
    uVar3 = FUN_ram_4807bafc(DAT_ram_4ff6dc74 + 0x38,"P1.6.4",
                             "4d97f369e1a32f126b7121a66a70a53fca628dfa",bVar2);
    iVar4 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
    FUN_ram_4808c2dc(param_1,"online",iVar4 == 3);
    FUN_ram_4808c96e(param_1,"currentVersion","P1.6.4",6);
    sVar5 = strlen("4d97f369e1a32f126b7121a66a70a53fca628dfa");
    FUN_ram_4808c96e(param_1,"currentSha","4d97f369e1a32f126b7121a66a70a53fca628dfa",sVar5);
    FUN_ram_4808c96e(param_1,"hardware_profile",&DAT_ram_481c3ddc,4);
    FUN_ram_4808c2dc(param_1,"sourceDirty",bVar2);
    FUN_ram_4808c2dc(param_1,"supported",1);
    pcVar11 = (char *)(DAT_ram_4ff6dc74 + 0x79);
    sVar5 = strlen(pcVar11);
    FUN_ram_4808c96e(param_1,"latestVersion",pcVar11,sVar5);
    pcVar11 = (char *)(DAT_ram_4ff6dc74 + 0xa9);
    sVar5 = strlen(pcVar11);
    FUN_ram_4808c96e(param_1,"latestSha",pcVar11,sVar5);
    if (uVar3 == 3) {
      pcVar11 = "different_build";
      uVar7 = 0xf;
    }
    else {
      uVar7 = 4;
      if (uVar3 == 4) {
        pcVar11 = "newer";
        uVar7 = 5;
      }
      else if (uVar3 == 1) {
        pcVar11 = "older";
        uVar7 = 5;
      }
      else {
        if (uVar3 != 2) goto LAB_ram_480bd8e0;
        pcVar11 = "same";
      }
    }
  }
  FUN_ram_4808c96e(param_1,"relation",pcVar11,uVar7);
  pcVar11 = (char *)FUN_ram_4802ffd0();
  sVar5 = strlen(pcVar11);
  FUN_ram_4808c96e(param_1,"state",pcVar11,sVar5);
  pcVar11 = *(char **)(DAT_ram_4ff6dc74 + 0x714);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = "";
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(pcVar11);
  }
  FUN_ram_4808c96e(param_1,"error",pcVar11,sVar5);
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1U)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     ((iVar4 = FUN_ram_4808c696(param_1,"connection"), iVar4 == 0 || ((char)param_1[10] == '\0'))))
  {
LAB_ram_480bd95c:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar8 = param_1[2];
    if (((uint)param_1[1] < uVar8) || (param_1[1] - uVar8 < 2)) goto LAB_ram_480bd95c;
    *(undefined1 *)(*param_1 + uVar8) = 0x7b;
    iVar4 = param_1[2];
    param_1[2] = iVar4 + 1;
    *(undefined1 *)(iVar4 + 1 + *param_1) = 0;
    iVar4 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar4 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar4 + 0x1c) = 1;
    param_1[3] = iVar4 + 1;
  }
  FUN_ram_4808c2dc(param_1,"dnsResolved",*(undefined1 *)(DAT_ram_4ff6dc74 + 0x14));
  iVar4 = FUN_ram_4808c696(param_1,"openError");
  if (iVar4 != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar7 = FUN_ram_4819ad74(&uStack_40,0x20,&DAT_ram_481cb8cc);
    iVar4 = FUN_ram_4808c90a(param_1,&uStack_40,uVar7);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar4 = FUN_ram_4808c696(param_1,"socketError");
  if (iVar4 != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar7 = FUN_ram_4819ad74(&uStack_40,0x20,&DAT_ram_481cb8cc);
    iVar4 = FUN_ram_4808c90a(param_1,&uStack_40,uVar7);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar4 = FUN_ram_4808c696(param_1,"tlsLastError");
  if (iVar4 != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar7 = FUN_ram_4819ad74(&uStack_40,0x20,&DAT_ram_481cb8cc);
    iVar4 = FUN_ram_4808c90a(param_1,&uStack_40,uVar7);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar4 = FUN_ram_4808c696(param_1,"tlsError");
  if (iVar4 != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar8 = FUN_ram_4819ad74(&uStack_40,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar9 = param_1[2];
      if ((uVar9 <= (uint)param_1[1]) && (uVar8 < param_1[1] - uVar9)) {
        FUN_ram_4ff45158(*param_1 + uVar9,&uStack_40,uVar8);
        iVar4 = param_1[2];
        param_1[2] = uVar8 + iVar4;
        *(undefined1 *)(*param_1 + uVar8 + iVar4) = 0;
        goto LAB_ram_480bd9de;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480bd9de:
  iVar4 = FUN_ram_4808c696(param_1,"tlsFlags");
  if (iVar4 != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar8 = FUN_ram_4819ad74(&uStack_40,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar9 = param_1[2];
      if ((uVar9 <= (uint)param_1[1]) && (uVar8 < param_1[1] - uVar9)) {
        FUN_ram_4ff45158(*param_1 + uVar9,&uStack_40,uVar8);
        iVar4 = param_1[2];
        param_1[2] = uVar8 + iVar4;
        *(undefined1 *)(*param_1 + uVar8 + iVar4) = 0;
        goto LAB_ram_480bd9f8;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480bd9f8:
  FUN_ram_480bb6fa(param_1,"connectAttempts",*(undefined1 *)(DAT_ram_4ff6dc74 + 0x15));
  FUN_ram_480b2068(param_1,"dnsElapsedMs",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x18));
  FUN_ram_480b2068(param_1,"openElapsedMs",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x1c));
  FUN_ram_480b2068(param_1,"headerElapsedMs",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x20));
  iVar4 = FUN_ram_4808c696(param_1,"previousOpenError");
  if (iVar4 != 0) {
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar8 = FUN_ram_4819ad74(&uStack_40,0x20,&DAT_ram_481cb8cc);
    if ((char)param_1[10] != '\0') {
      uVar9 = param_1[2];
      if ((uVar9 <= (uint)param_1[1]) && (uVar8 < param_1[1] - uVar9)) {
        FUN_ram_4ff45158(*param_1 + uVar9,&uStack_40,uVar8);
        iVar4 = param_1[2];
        param_1[2] = uVar8 + iVar4;
        *(undefined1 *)(*param_1 + uVar8 + iVar4) = 0;
        goto LAB_ram_480bda64;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480bda64:
  FUN_ram_480b407c(param_1,"previousSocketError",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x28));
  FUN_ram_480b407c(param_1,"previousTlsLastError",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x2c));
  FUN_ram_480b407c(param_1,"previousTlsError",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x30));
  FUN_ram_480b407c(param_1,"previousTlsFlags",*(undefined4 *)(DAT_ram_4ff6dc74 + 0x34));
  iVar4 = DAT_ram_4ff6dc74;
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar8 = param_1[2];
    if ((uVar8 <= (uint)param_1[1]) && (1 < param_1[1] - uVar8)) {
      *(undefined1 *)(*param_1 + uVar8) = 0x7d;
      iVar4 = param_1[2];
      param_1[2] = iVar4 + 1;
      *(undefined1 *)(iVar4 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      cVar6 = *(char *)(DAT_ram_4ff6dc74 + 0x224);
      iVar4 = DAT_ram_4ff6dc74;
      goto joined_r0x480bdbf6;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  cVar6 = *(char *)(iVar4 + 0x224);
joined_r0x480bdbf6:
  if (((cVar6 == '\0') && (cVar6 = *(char *)(iVar4 + 0x222), cVar6 == '\0')) &&
     ((cVar6 = *(char *)(iVar4 + 0x221), cVar6 == '\0' &&
      (iVar4 = *(int *)(iVar4 + 0x710), iVar4 != 0)))) {
    iVar10 = FUN_ram_4ff453ae(iVar4,"checking");
    cVar6 = '\x01';
    if (iVar10 != 0) {
      iVar10 = FUN_ram_4ff453ae(iVar4,"preparing");
      cVar6 = '\x01';
      if (iVar10 != 0) {
        iVar10 = FUN_ram_4ff453ae(iVar4,"downloading",1);
        cVar6 = '\x01';
        if (iVar10 != 0) {
          iVar4 = FUN_ram_4ff453ae(iVar4,"verifying",1);
          cVar6 = iVar4 == 0;
        }
      }
    }
  }
  FUN_ram_4808c2dc(param_1,"busy",cVar6);
  FUN_ram_4808c2dc(param_1,"installing",*(undefined1 *)(DAT_ram_4ff6dc74 + 0x224));
  FUN_ram_4808c2dc(param_1,"latestValid",cVar1);
  if (cVar1 == '\0') {
    FUN_ram_4808c2dc(param_1,"updateAvailable",0);
    if (DAT_ram_4ff6dc78 == 0) {
      FUN_ram_480b2068(param_1,"bytesDownloaded",0);
      uVar7 = 0;
    }
    else {
      fence();
      FUN_ram_480b2068(param_1,"bytesDownloaded",*(undefined4 *)(DAT_ram_4ff6dc78 + 0x3ff4));
      uVar7 = 0;
    }
  }
  else {
    iVar4 = DAT_ram_4ff6dc74 + 0x38;
    uVar12 = FUN_ram_4802e468(iVar4);
    uVar8 = 0;
    if (((int)uVar12 != 0) &&
       (uVar8 = FUN_ram_4802e4fc(iVar4,(int)((ulonglong)uVar12 >> 0x20),(int)uVar12), uVar8 == 0)) {
      uVar8 = 0x1aU >> (uVar3 & 0x1f) & 1;
    }
    FUN_ram_4808c2dc(param_1,"updateAvailable",uVar8);
    if (DAT_ram_4ff6dc78 == 0) {
      FUN_ram_480b2068(param_1,"bytesDownloaded",0);
    }
    else {
      fence();
      FUN_ram_480b2068(param_1,"bytesDownloaded",*(undefined4 *)(DAT_ram_4ff6dc78 + 0x3ff4));
    }
    uVar7 = *(undefined4 *)(DAT_ram_4ff6dc74 + 0x214);
  }
  FUN_ram_480b2068(param_1,"expectedBytes",uVar7);
  FUN_ram_4808c2dc(param_1,"bootValidated",DAT_ram_4ff6de6d);
  if ((((char)param_1[10] != '\0') && (param_1[3] == 1)) &&
     (iVar4 = param_1[7], (char)iVar4 != '\0')) {
    uVar3 = param_1[2];
    if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x7d;
      iVar10 = param_1[2];
      param_1[2] = iVar10 + 1;
      *(undefined1 *)(iVar10 + 1 + *param_1) = 0;
      param_1[3] = 0;
      return (char)iVar4;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
}


