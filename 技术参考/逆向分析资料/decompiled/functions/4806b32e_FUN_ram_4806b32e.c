/* Firmware entry: 0x4806b32e */

/* WARNING: Removing unreachable block (ram,0x4806b578) */

void FUN_ram_4806b32e(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined4 uStack_14c;
  char *pcStack_148;
  size_t asStack_144 [3];
  undefined4 uStack_138;
  undefined1 uStack_134;
  char acStack_120 [264];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar14 = FUN_ram_4ff21a0a();
  uVar15 = __udivdi3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1000,0);
  iVar8 = (int)(uVar15 >> 0x20);
  uVar3 = (uint)uVar15;
  if ((DAT_ram_4ff5be20 != '\0') && (CONCAT44(DAT_ram_4ff5be1c,DAT_ram_4ff5be18) <= uVar15)) {
    uVar10 = uVar3 - DAT_ram_4ff5be18;
    uVar7 = (iVar8 - DAT_ram_4ff5be1c) - (uint)(uVar3 < uVar10);
    uVar6 = (0x3bb - DAT_ram_4ff5be14) - (uint)(0x2cc3d7ff < 0x2cc3d7ff - DAT_ram_4ff5be10);
    if ((uVar7 <= uVar6) &&
       (((uVar7 != uVar6 || (uVar10 <= 0x2cc3d7ff - DAT_ram_4ff5be10)) &&
        (uVar10 + DAT_ram_4ff5be10 != 0 ||
         (uint)(uVar10 + DAT_ram_4ff5be10 < DAT_ram_4ff5be10) + DAT_ram_4ff5be14 + uVar7 != 0)))) {
      FUN_ram_4819ad74(&uStack_138,0x18,&DAT_ram_481c48f4);
      if (DAT_ram_4ff5c83f < '\0') {
        puVar9 = &DAT_ram_4ff5c830;
        pcVar13 = "true";
      }
      else {
        pcVar13 = "true";
        puVar9 = DAT_ram_4ff5c830;
      }
      goto joined_r0x4806b516;
    }
  }
  uStack_138 = 0x6c6c756e;
  uStack_134 = 0;
  if (DAT_ram_4ff5c83f < '\0') {
    pcVar13 = "false";
    puVar9 = &DAT_ram_4ff5c830;
  }
  else {
    pcVar13 = "false";
    puVar9 = DAT_ram_4ff5c830;
  }
joined_r0x4806b516:
  if (DAT_ram_4ff5be20 == '\x02') {
    pcVar11 = "network";
  }
  else if (DAT_ram_4ff5be20 == '\x01') {
    pcVar11 = "phone";
  }
  else {
    pcVar11 = "none";
  }
  FUN_ram_4819ad74(acStack_120,0x100,
                   "{\"ok\":true,\"bootId\":\"%s\",\"uptimeMs\":%llu,\"calibrated\":%s,\"unixMs\":%s,\"source\":\"%s\"}"
                   ,puVar9,uVar3,iVar8,pcVar13,&uStack_138,pcVar11);
  asStack_144[0] = strlen(acStack_120);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar8 = DAT_ram_4ff5cbdc;
  uStack_14c = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    pcStack_148 = acStack_120;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_14c,&pcStack_148,asStack_144);
      DAT_ram_4ff5cbc8 = '\0';
    }
    sVar4 = asStack_144[0];
    if (asStack_144[0] == 0) {
      sVar4 = 1;
    }
    iVar5 = FUN_ram_4ff206d8(sVar4,0x404);
    iVar12 = iVar2 + iVar8 * 0x1d40;
    *(int *)(iVar12 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar12 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar8 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (asStack_144[0] != 0) {
        FUN_ram_4ff45158(iVar5,pcStack_148,asStack_144[0]);
        iVar5 = *(int *)(iVar12 + 0x1cdc);
      }
      iVar8 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar8 + 0x44c) != '\0') && (*(char *)(iVar8 + 0x44c) != '\x06')) {
        *(int *)(iVar8 + 0x1ce0) = iVar5;
        *(size_t *)(iVar8 + 0x1ce4) = asStack_144[0];
        *(undefined4 *)(iVar8 + 0x1ce8) = 0;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_14c,"application/json",iVar8,&LAB_ram_4802d3f2);
      }
    }
  }
  return;
}


