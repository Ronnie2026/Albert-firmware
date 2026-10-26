/* Firmware entry: 0x480312a6 */

/* Analyst-assigned name based on firmware call sites and string references. */

byte recovered_probe_can_pin_layout(int param_1,undefined1 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  undefined *puVar12;
  byte bVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  byte bVar17;
  char *pcVar18;
  longlong lVar19;
  undefined8 uVar20;
  char local_a8 [4];
  int local_a4 [8];
  undefined1 *puStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = -param_1;
  piVar1 = local_a4;
  pcVar9 = local_a8;
  local_a4[0] = 0;
  local_a4[1] = 0;
  local_a4[2] = 0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = 0;
  puVar12 = &DAT_ram_48222610 + (uVar2 & 0x18);
  iVar15 = (uVar2 & 6) + 0x4ff4c5cc;
  piVar14 = local_a4 + 3;
  piVar8 = piVar1;
  pcVar18 = pcVar9;
  do {
    uStack_74 = *(undefined4 *)(puVar12 + 4);
    uStack_44 = 4;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_78 = 0xffffffff;
    uStack_70 = 0xffffffff;
    uStack_6c = 0xffffffff;
    uStack_64 = 500000;
    uStack_50 = 0xff;
    uStack_4c = 1;
    uStack_48 = 1;
    iVar3 = FUN_ram_4ff2f082(&uStack_78,piVar8);
    iVar6 = *piVar8;
    *pcVar18 = iVar6 != 0;
    if ((iVar3 != 0) || (iVar6 == 0)) goto LAB_ram_4803143e;
    local_a4[3] = 0;
    local_a4[4] = 0;
    local_a4[5] = 0;
    local_a4[6] = 4;
    iVar3 = FUN_ram_4ff2da86(iVar6,0,piVar14);
    if (iVar3 != 0) goto LAB_ram_4803143e;
    local_a4[7] = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    puStack_84 = &LAB_ram_4ff21d7e;
    iVar3 = FUN_ram_4ff2db00(*piVar8,local_a4 + 7,iVar15);
    piVar8 = piVar8 + 1;
    if (iVar3 != 0) goto LAB_ram_4803143e;
    puVar12 = puVar12 + 8;
    pcVar18 = pcVar18 + 1;
    iVar15 = iVar15 + 2;
    piVar7 = piVar1;
  } while (piVar14 != piVar8);
  do {
    piVar8 = piVar7 + 1;
    iVar15 = FUN_ram_4ff2d91e(*piVar7);
    if (iVar15 != 0) goto LAB_ram_4803143e;
    piVar7 = piVar8;
  } while (piVar14 != piVar8);
  lVar19 = FUN_ram_4ff21a0a();
  iVar15 = (int)((ulonglong)(lVar19 + 1500000) >> 0x20);
  uVar20 = FUN_ram_4ff21a0a();
  if (iVar15 <= (int)((ulonglong)uVar20 >> 0x20)) goto LAB_ram_48031432;
  do {
    do {
      cVar4 = '\x03';
      piVar8 = (int *)((int)&DAT_ram_4ff4c5d8 + (uVar2 & 0xc));
      do {
        cVar4 = cVar4 + -1;
        if (*piVar8 != 0) goto LAB_ram_4803143a;
        piVar8 = piVar8 + 1;
      } while (cVar4 != '\0');
      cVar4 = '\0';
      piVar8 = (int *)((int)&DAT_ram_4ff4c5b4 + (uVar2 & 0xc));
      do {
        cVar4 = cVar4 + '\x01';
        if (*piVar8 != 0) goto LAB_ram_4803143a;
        piVar8 = piVar8 + 1;
      } while (cVar4 != '\x03');
      FUN_ram_4ff3c2b6(1);
      uVar20 = FUN_ram_4ff21a0a();
    } while ((int)((ulonglong)uVar20 >> 0x20) < iVar15);
LAB_ram_48031432:
  } while ((iVar15 == (int)((ulonglong)uVar20 >> 0x20)) && ((uint)uVar20 < (uint)(lVar19 + 1500000))
          );
LAB_ram_4803143a:
  bVar13 = 1;
LAB_ram_48031450:
  bVar11 = 1;
  piVar8 = piVar1;
  pcVar18 = pcVar9;
  do {
    if (*pcVar18 != '\0') {
      iVar15 = FUN_ram_4ff2d996(*piVar8);
      bVar11 = bVar11 & iVar15 == 0;
    }
    piVar8 = piVar8 + 1;
    pcVar18 = pcVar18 + 1;
  } while (piVar14 != piVar8);
  do {
    if (*pcVar9 != '\0') {
      iVar15 = FUN_ram_4ff2da0e(*piVar1);
      if (iVar15 == 0) {
        *pcVar9 = '\0';
        *piVar1 = 0;
      }
      else {
        DAT_ram_4ff6dc5c = 1;
        bVar11 = 0;
      }
    }
    piVar1 = piVar1 + 1;
    pcVar9 = pcVar9 + 1;
  } while (piVar14 != piVar1);
  puVar10 = (undefined4 *)&DAT_ram_482225e8;
  bVar17 = 1;
  do {
    uVar16 = *puVar10;
    puVar10 = puVar10 + 1;
    iVar15 = FUN_ram_4812aca0(uVar16,1);
    iVar3 = FUN_ram_4812ab6c(uVar16,0);
    bVar17 = bVar17 & (iVar15 == 0 && iVar3 == 0);
  } while (puVar10 != (undefined4 *)&DAT_ram_48222610);
  piVar8 = (int *)((int)&DAT_ram_4ff4c5d8 + (uVar2 & 0xc));
  cVar4 = '\x03';
  do {
    cVar4 = cVar4 + -1;
    if (*piVar8 != 0) {
      uVar5 = 1;
      break;
    }
    piVar8 = piVar8 + 1;
    uVar5 = 0;
  } while (cVar4 != '\0');
  *param_2 = uVar5;
  piVar8 = (int *)((int)&DAT_ram_4ff4c5b4 + (uVar2 & 0xc));
  cVar4 = '\x03';
  do {
    cVar4 = cVar4 + -1;
    if (*piVar8 != 0) {
      return 0;
    }
    piVar8 = piVar8 + 1;
  } while (cVar4 != '\0');
  return bVar17 & bVar11 & bVar13;
LAB_ram_4803143e:
  bVar13 = 0;
  goto LAB_ram_48031450;
}


