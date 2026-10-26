/* Firmware entry: 0x480b063e */

undefined4 FUN_ram_480b063e(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dcdc == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_ram_4ff206d8(0x41118,0x404);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0xffffffff;
    *puVar2 = 0;
    puVar2[2] = puVar2;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[10] = 0;
    memset(puVar2 + 0xc,0,0x22510);
    puVar2[0x894e] = 1;
    puVar2[0x894f] = 0;
    memset(puVar2 + 0x8950,0,0x528);
    puVar2[0x8951] = 1;
    memset(puVar2 + 0x8974,0,0x460);
    memset(puVar2 + 0x8a9a,0,0x200);
    memset(puVar2 + 0x8b1a,0,0x1e479);
    puVar2[0x10439] = 0;
    puVar2[0x1043a] = 0;
    puVar2[0x1043b] = 0;
    puVar2[0x1043c] = 0;
    puVar2[0x1043d] = 0;
    puVar2[0x1043e] = 0;
    puVar2[0x1043f] = 0;
    puVar2[0x10440] = 0;
    puVar2[0x10441] = 0;
    puVar2[0x10442] = 0;
    puVar2[0x10443] = 0;
    *(undefined2 *)(puVar2 + 0x10444) = 0;
    *(undefined1 *)((int)puVar2 + 0x41112) = 0;
    DAT_ram_4ff6dcdc = puVar2;
    puVar2[0x10445] = "outbox_uninitialized";
LAB_ram_480b0780:
    puVar3 = (undefined4 *)FUN_ram_4812e1d6(1,0x82,"spiffs");
    if ((((puVar3 == (undefined4 *)0x0) || (puVar3[3] != 0x1910000)) || (puVar3[4] != 0x6c0000)) ||
       (*(char *)((int)puVar3 + 0x29) != '\0')) {
      puVar2[0x10445] = "partition_geometry";
      return 0;
    }
    uVar11 = *puVar3;
    uVar10 = puVar3[1];
    uVar9 = puVar3[2];
    uVar8 = puVar3[5];
    uVar1 = puVar3[6];
    uVar7 = puVar3[7];
    uVar6 = puVar3[8];
    uVar5 = puVar3[10];
    puVar2[0x10442] = puVar3[9];
    puVar2[0x1043d] = 0x63000;
    puVar2[0x10439] = uVar11;
    puVar2[0x1043a] = uVar10;
    puVar2[0x1043b] = uVar9;
    puVar2[0x1043e] = uVar8;
    puVar2[0x1043f] = uVar1;
    puVar2[0x10440] = uVar7;
    puVar2[0x10441] = uVar6;
    puVar2[0x10443] = uVar5;
    puVar2[0x1043c] = 0x1b50000;
    FUN_ram_4ff45158(puVar2 + 0x1043f,"p4_records_outbox",0x11);
    *puVar2 = puVar2 + 0x10439;
    *(undefined1 *)(puVar2 + 0x10444) = 1;
  }
  else {
    if (*(char *)((int)DAT_ram_4ff6dcdc + 0x41111) != '\0') {
      return 1;
    }
    puVar2 = DAT_ram_4ff6dcdc;
    if (*(char *)(DAT_ram_4ff6dcdc + 0x10444) == '\0') goto LAB_ram_480b0780;
  }
  iVar4 = FUN_ram_4808ecd0(puVar2,puVar2 + 0x8a9a);
  if (iVar4 == 0) {
    puVar2[0x10445] = "outbox_region_unowned";
    return 0;
  }
  iVar4 = FUN_ram_480b024a(puVar2 + 2,puVar2 + 0x8b1a,0x1e479);
  if (iVar4 == 3) {
    puVar2[0x10445] = "outbox_read_failed";
    return 0;
  }
  if (iVar4 == 4) {
    puVar2[0x10445] = "outbox_capacity";
    return 0;
  }
  if (iVar4 != 2) {
    if (iVar4 == 0) {
      FUN_ram_4807a816(puVar2 + 0xc);
    }
    else {
      iVar4 = FUN_ram_4807b0ec(puVar2 + 0x8b1a,puVar2[10],puVar2 + 0xc);
      if (iVar4 == 0) goto LAB_ram_480b08f0;
    }
    *(undefined1 *)((int)puVar2 + 0x41111) = 1;
    puVar2[0x10445] = &DAT_ram_481df390;
    return 1;
  }
LAB_ram_480b08f0:
  puVar2[0x10445] = "outbox_corrupt";
  return 0;
}


