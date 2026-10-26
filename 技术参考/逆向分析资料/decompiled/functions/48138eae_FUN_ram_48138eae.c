/* Firmware entry: 0x48138eae */

undefined4
FUN_ram_48138eae(char *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  size_t sVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  undefined1 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
    return 0xfffffff0;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0xfffffff0;
  }
  sVar5 = strlen(param_1);
  uVar14 = sVar5 - 1;
  if (param_1[sVar5 - 1] != '.') {
    uVar14 = sVar5;
  }
  if (0xff < uVar14) {
    return 0xfffffff0;
  }
  iVar6 = FUN_ram_4ff453ae(param_1,"localhost");
  if (iVar6 == 0) {
    if ((param_5 & 0xfd) != 1) {
      *(undefined1 *)(param_2 + 5) = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 4) = 0;
      *param_2 = 0x100007f;
      return 0;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[3] = 0x1000000;
    *(undefined1 *)(param_2 + 5) = 6;
    return 0;
  }
  iVar6 = FUN_ram_48139330(param_1,param_2);
  if (iVar6 == 0) {
LAB_ram_48138f78:
    iVar6 = FUN_ram_481381f0(param_1,uVar14,param_2,param_5);
    if (iVar6 == 0) {
      return 0;
    }
    if (1 < (param_5 - 2 & 0xff)) goto LAB_ram_48138fa4;
    iVar6 = FUN_ram_481381f0(param_1,uVar14,param_2,param_5 - 2 == 0);
  }
  else {
    if (*(char *)(param_2 + 5) == '\x06') {
      if (param_5 != 0) {
        return 0;
      }
    }
    else {
      if (*(char *)(param_2 + 5) != '\0') goto LAB_ram_48138f78;
      if (param_5 != 1) {
        return 0;
      }
    }
    iVar6 = FUN_ram_481381f0(param_1,uVar14,param_2,param_5);
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_ram_48138fa4:
  pcVar7 = strstr(param_1,".local");
  if (pcVar7 == param_1 + (uVar14 - 6)) {
    uStack_44 = 1;
  }
  else {
    piVar10 = &DAT_ram_4ff6c88c;
    while (iVar6 = *piVar10, (char)piVar10[5] != '\x06') {
joined_r0x4813900e:
      if (iVar6 != 0) goto LAB_ram_48139010;
      piVar10 = piVar10 + 6;
      if (piVar10 == &DAT_ram_4ff6c8d4) {
        return 0xfffffffa;
      }
    }
    if (((iVar6 == 0) && (piVar10[1] == 0)) && (piVar10[2] == 0)) {
      iVar6 = piVar10[3];
      goto joined_r0x4813900e;
    }
LAB_ram_48139010:
    uStack_44 = 0;
  }
  puVar2 = &DAT_ram_4ff6c92a;
  cVar16 = '\0';
  do {
    uVar13 = (undefined1)param_5;
    if (((puVar2[-6] == '\x02') && (iVar6 = FUN_ram_48137ffa(param_1,puVar2,uVar14), iVar6 == 0)) &&
       ((puVar2[uVar14] == '\0' && ((byte)puVar2[0x100] == param_5)))) {
      iVar6 = 0;
      piVar10 = &DAT_ram_4ff6c8d4;
      do {
        iVar3 = *piVar10;
        piVar10 = piVar10 + 3;
        if (iVar3 == 0) {
          (&DAT_ram_4ff6c8d4)[iVar6 * 3] = param_3;
          (&DAT_ram_4ff6c8d8)[iVar6 * 3] = param_4;
          (&DAT_ram_4ff6c8dc)[iVar6 * 0xc] = cVar16;
          *(undefined1 *)(iVar6 * 0xc + 0x4ff6c8dd) = uVar13;
          return 0xfffffffb;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 4);
    }
    cVar16 = cVar16 + '\x01';
    puVar2 = puVar2 + 0x128;
  } while (cVar16 != '\x04');
  puVar2 = &DAT_ram_4ff6c904;
  uVar11 = 0;
  bVar12 = 0;
  uVar1 = 4;
  do {
    uVar15 = uVar11 & 0xff;
    if (puVar2[0x20] == '\0') {
      iVar6 = uVar11 * 0x128;
      uVar1 = uVar15;
      goto LAB_ram_48139090;
    }
    uVar11 = uVar11 + 1;
    if ((puVar2[0x20] == '\x03') && (bVar12 < (byte)(DAT_ram_4ff6e19d - puVar2[0x24]))) {
      uVar1 = uVar15;
      bVar12 = DAT_ram_4ff6e19d - puVar2[0x24];
    }
    puVar2 = puVar2 + 0x128;
  } while (uVar11 != 4);
  if ((uVar1 != 4) && (iVar6 = uVar1 * 0x128, (&DAT_ram_4ff6c924)[iVar6] == '\x03')) {
LAB_ram_48139090:
    iVar3 = 0;
    piVar10 = &DAT_ram_4ff6c8d4;
    do {
      iVar9 = *piVar10;
      piVar10 = piVar10 + 3;
      if (iVar9 == 0) {
        *(char *)(iVar6 + 0x4ff6c928) = DAT_ram_4ff6e19d;
        (&DAT_ram_4ff6c924)[iVar6] = 1;
        (&DAT_ram_4ff6c920)[iVar6] = 0;
        (&DAT_ram_4ff6ca2a)[iVar6] = uVar13;
        (&DAT_ram_4ff6c8d4)[iVar3 * 3] = param_3;
        (&DAT_ram_4ff6c8dc)[iVar3 * 0xc] = (char)uVar1;
        *(undefined1 *)(iVar3 * 0xc + 0x4ff6c8dd) = uVar13;
        (&DAT_ram_4ff6c8d8)[iVar3 * 3] = param_4;
        FUN_ram_4ff45158(&DAT_ram_4ff6c92a + iVar6,param_1,uVar14);
        (&DAT_ram_4ff6c92a)[uVar14 + iVar6] = 0;
        uVar14 = 0;
        piVar10 = &DAT_ram_4ff6cda4;
        goto LAB_ram_48139192;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
  }
  return 0xffffffff;
LAB_ram_4813920c:
  do {
    do {
      uVar4 = FUN_ram_4ff2d260();
    } while (uVar4 < 0x400);
    iVar8 = FUN_ram_48142c4a(iVar9,&DAT_ram_482366d4);
  } while (iVar8 == -8);
  if (iVar8 == 0) {
    FUN_ram_48143512(iVar9,&LAB_ram_4813878a,0);
    (&DAT_ram_4ff6cda4)[uVar14] = iVar9;
    goto LAB_ram_4813924e;
  }
  FUN_ram_4814351a(iVar9);
LAB_ram_481392c0:
  (&DAT_ram_4ff6cda4)[uVar14] = 0;
  goto LAB_ram_481391a4;
  while (uVar14 = uVar14 + 1 & 0xff, uVar14 != 4) {
LAB_ram_48139192:
    iVar9 = *piVar10;
    piVar10 = piVar10 + 1;
    if (iVar9 == 0) {
      iVar9 = FUN_ram_48143582(0x2e);
      if (iVar9 != 0) goto LAB_ram_4813920c;
      goto LAB_ram_481392c0;
    }
  }
LAB_ram_481391a4:
  uVar14 = (uint)DAT_ram_4ff6e19e;
  cVar16 = '\x04';
  while( true ) {
    uVar14 = uVar14 + 1 & 0xff;
    if (3 < uVar14) {
      uVar14 = 0;
    }
    cVar16 = cVar16 + -1;
    if ((&DAT_ram_4ff6cda4)[uVar14] != 0) break;
    if (cVar16 == '\0') {
      (&DAT_ram_4ff6c924)[iVar6] = 0;
      (&DAT_ram_4ff6c920)[iVar6] = 0;
      (&DAT_ram_4ff6c929)[iVar6] = 4;
      (&DAT_ram_4ff6c8d4)[iVar3 * 3] = 0;
      return 0xffffffff;
    }
  }
LAB_ram_4813924e:
  DAT_ram_4ff6e19e = (byte)uVar14;
  (&DAT_ram_4ff6c929)[iVar6] = DAT_ram_4ff6e19e;
  DAT_ram_4ff6e19d = DAT_ram_4ff6e19d + '\x01';
  (&DAT_ram_4ff6ca2b)[iVar6] = uStack_44;
  FUN_ram_4813857c(uVar1);
  if (DAT_ram_4ff6e19f == '\0') {
    FUN_ram_48142636(1000,&LAB_ram_48138eaa,0);
    DAT_ram_4ff6e19f = '\x01';
  }
  return 0xfffffffb;
}


