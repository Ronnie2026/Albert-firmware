/* Firmware entry: 0x4804628e */

undefined4 FUN_ram_4804628e(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  char *pcVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 local_48 [15];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = local_48;
  puVar5 = &DAT_ram_48222eb8;
  do {
    puVar14 = puVar5;
    puVar11 = puVar4;
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *puVar11 = *puVar14;
    puVar11[1] = uVar6;
    puVar11[2] = uVar7;
    puVar11[3] = uVar8;
    puVar4 = puVar11 + 4;
    puVar5 = puVar14 + 4;
  } while (puVar14 + 4 != &DAT_ram_48222ee8);
  uVar6 = puVar14[5];
  puVar11[4] = DAT_ram_48222ee8;
  puVar11[5] = uVar6;
  uVar6 = FUN_ram_4ff45158(param_3,local_48,0x35);
  iVar9 = 2;
  if (param_2 == 2) {
    iVar12 = 0x1228;
    iVar18 = param_1 + 0x1228;
    iVar9 = 1;
  }
  else if (param_2 == 4) {
    iVar12 = 0x2450;
    iVar18 = param_1 + 0x2450;
  }
  else {
    if (param_2 != 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    iVar12 = 0;
    iVar9 = 0;
    iVar18 = param_1;
  }
  iVar15 = iVar9 * 0x1228 + param_1;
  cVar1 = *(char *)(iVar15 + 0x1221);
  if (cVar1 == '\0') {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  bVar2 = *(byte *)(iVar15 + 0x1220);
  iVar15 = 2;
  iVar10 = bVar2 + 0xe8;
  pcVar16 = (char *)(iVar10 * 0x10 + iVar12 + param_1);
  cVar3 = *pcVar16;
  if (cVar3 == '\x02') {
    iVar15 = 1;
  }
  else if ((cVar3 != '\x04') && (iVar15 = 0, cVar3 != '\x01')) goto LAB_ram_4804637a;
  uVar13 = (uint)(byte)pcVar16[1];
  if (uVar13 < 0x18) {
    iVar12 = *(int *)(pcVar16 + 8);
    iVar20 = *(int *)(pcVar16 + 0xc);
    if (uVar13 < 0x10) {
      if (iVar12 == 0 && iVar20 == 0) goto LAB_ram_4804637a;
      iVar15 = uVar13 * 0xe8 + iVar15 * 0x1228;
    }
    else {
      iVar15 = (uVar13 - 0x10) * 0x120;
      iVar19 = param_1 + iVar15;
      if (((*(char *)(iVar19 + 0x3696) == '\0') || (*(char *)(iVar19 + 0x3678) != cVar3)) ||
         (iVar12 == 0 && iVar20 == 0)) goto LAB_ram_4804637a;
      iVar15 = iVar15 + 14000;
    }
    iVar15 = param_1 + iVar15;
    if (((*(int *)(iVar15 + 0xd8) == iVar12) && (*(int *)(iVar15 + 0xdc) == iVar20)) &&
       (*(char *)(iVar15 + 0xe6) == '\x02')) {
      puVar17 = (undefined2 *)(iVar10 * 0x10 + iVar9 * 0x1228 + param_1);
      param_1 = param_1 + iVar9 * 0x1228;
      *(undefined4 *)(puVar17 + 4) = 0;
      *(undefined4 *)(puVar17 + 6) = 0;
      *puVar17 = 0xff00;
      *(byte *)(param_1 + 0x1220) = bVar2 + 1 & 0x1f;
      *(char *)(param_1 + 0x1221) = cVar1 + -1;
      *(undefined1 *)(iVar15 + 0xe6) = 3;
      FUN_ram_4ff45158(uVar6,iVar15 + 0xa0,0x35);
      return 1;
    }
  }
LAB_ram_4804637a:
  if (*(int *)(iVar18 + 0x1214) != -1) {
    *(int *)(iVar18 + 0x1214) = *(int *)(iVar18 + 0x1214) + 1;
  }
  return 0;
}


