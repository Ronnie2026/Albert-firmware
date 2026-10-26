/* Firmware entry: 0x48112c3a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48112c3a(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined4 local_220 [46];
  undefined4 local_168 [2];
  undefined1 uStack_15e;
  undefined4 auStack_15c [80];
  
  iVar3 = DAT_ram_4ff6dc98;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar12 = local_220;
  if ((DAT_ram_4ff6dc98 == 0) || (*(char *)(DAT_ram_4ff6dc98 + 0x94) == '\0')) {
    return;
  }
  iVar5 = FUN_ram_48025ba6();
  if (iVar5 - *(int *)(iVar3 + 0x9c) < 0) {
    return;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  cVar2 = DAT_ram_4ff61960._2_1_;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  if (cVar2 != '\0') {
    FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
    puVar11 = local_168;
    puVar13 = &DAT_ram_4ff61958;
    do {
      uVar6 = puVar13[1];
      uVar8 = puVar13[2];
      uVar9 = puVar13[3];
      *puVar11 = *puVar13;
      puVar11[1] = uVar6;
      puVar11[2] = uVar8;
      puVar11[3] = uVar9;
      puVar13 = puVar13 + 4;
      puVar11 = puVar11 + 4;
    } while (puVar13 != (undefined4 *)&DAT_ram_4ff619f8);
    *puVar11 = _DAT_ram_4ff619f8;
    FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
    puVar13 = local_168;
    uStack_15e = 0;
    puVar11 = auStack_15c + 0x26;
    do {
      uVar6 = puVar13[1];
      uVar8 = puVar13[2];
      uVar9 = puVar13[3];
      *puVar11 = *puVar13;
      puVar11[1] = uVar6;
      puVar11[2] = uVar8;
      puVar11[3] = uVar9;
      puVar13 = puVar13 + 4;
      puVar11 = puVar11 + 4;
    } while (puVar13 != auStack_15c + 0x25);
    puVar14 = auStack_15c + 0x26;
    *puVar11 = *puVar13;
    do {
      uVar6 = puVar14[1];
      uVar8 = puVar14[2];
      uVar9 = puVar14[3];
      *puVar12 = *puVar14;
      puVar12[1] = uVar6;
      puVar12[2] = uVar8;
      puVar12[3] = uVar9;
      puVar14 = puVar14 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar14 != auStack_15c + 0x4e);
    *puVar12 = *puVar14;
    iVar7 = FUN_ram_480ed9a4(local_220);
    if (iVar7 == 0) {
      *(int *)(iVar3 + 0x9c) = iVar5 + 1000;
      *(char **)(iVar3 + 0xc4) = "management_runtime_wait";
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  cVar2 = DAT_ram_4ff61960._2_1_;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  if ((cVar2 == '\0') && (iVar7 = (**(code **)(*DAT_ram_4ff6df2c + 0x13c))(), iVar7 != 0)) {
    fence();
    fence();
    if ((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) == 0) {
      uVar4 = FUN_ram_480ea12c(&DAT_ram_4ff60e20);
      goto LAB_ram_48112dc4;
    }
  }
  uVar4 = 0;
LAB_ram_48112dc4:
  *(undefined1 *)(iVar3 + 0xa2) = uVar4;
  fence();
  fence();
  if (((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) && (DAT_ram_4ff5c5ca == '\0')) {
    if (((*(char *)(iVar3 + 0xa1) == '\0') && (DAT_ram_4ff6dca9 != '\0')) &&
       (DAT_ram_4ff6dca8 != '\0')) {
      pbVar15 = (byte *)&DAT_ram_4ff5bd30;
      bVar10 = 0;
      do {
        bVar1 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        bVar10 = bVar10 | bVar1;
      } while (pbVar15 != (byte *)&DAT_ram_4ff5bd40);
      if ((bVar10 != 0) && (DAT_ram_4ff5bd40 != 0)) {
        iVar7 = FUN_ram_480ee8aa();
        if ((iVar7 == 0) ||
           (((DAT_ram_4ff6dd78 == '\0' || (iVar7 = FUN_ram_480aecea(), iVar7 == 0)) ||
            (iVar7 = FUN_ram_481123e6(0x21), iVar7 == 0)))) {
          *(int *)(iVar3 + 0x9c) = iVar5 + 5000;
          *(char **)(iVar3 + 0xc4) = "management_master_store";
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        *(undefined1 *)(iVar3 + 0xa1) = 1;
      }
    }
    if (*(char *)(iVar3 + 0x95) == '\0') {
      *(undefined1 **)(iVar3 + 0xc4) = &DAT_ram_481df390;
    }
  }
  return;
}


