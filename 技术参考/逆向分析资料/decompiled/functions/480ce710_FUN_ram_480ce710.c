/* Firmware entry: 0x480ce710 */

int FUN_ram_480ce710(undefined4 *param_1,void *param_2)

{
  bool bVar1;
  ushort uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 uVar12;
  char *pcVar13;
  ushort *puVar14;
  char *pcVar15;
  char local_ee4 [4];
  char local_ee0 [4];
  ushort local_edc [2];
  int local_ed8 [2];
  undefined1 auStack_ed0 [4];
  undefined4 uStack_ecc;
  char local_9a8 [12];
  undefined1 auStack_99c [1191];
  char acStack_4f5 [12];
  undefined1 auStack_4e9 [1205];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  memset(local_9a8,0,0x966);
  local_ee4[0] = '\0';
  local_ee4[1] = '\0';
  local_ee0[0] = '\0';
  local_ee0[1] = '\0';
  memset(auStack_ed0,0,0x528);
  uStack_ecc = 1;
  local_ed8[0] = 0;
  local_ed8[1] = 0;
  local_edc[0] = 0;
  local_edc[1] = 0;
  pcVar5 = acStack_4f5;
  puVar14 = local_edc;
  piVar11 = local_ed8;
  pcVar15 = local_ee0;
  pcVar13 = local_ee4;
  iVar9 = 0;
  do {
    pcVar3 = pcVar5 + -0x4b3;
    iVar8 = FUN_ram_4808eff4(*param_1,iVar9,pcVar3,0x4b3);
    pcVar4 = pcVar3;
    if (iVar8 == 0) {
      uVar12 = 5;
      goto LAB_ram_480ce936;
    }
    do {
      cVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if (cVar7 != -1) {
        *pcVar13 = '\0';
        iVar10 = FUN_ram_48071b5e(pcVar3,0x4b3,auStack_ed0,piVar11);
        *pcVar15 = (char)iVar10;
        if (iVar10 != 0) {
          iVar10 = *piVar11;
          *puVar14 = *(ushort *)(pcVar5 + -0x4af);
          cVar7 = FUN_ram_480713be(auStack_ed0,iVar10,pcVar3);
          *pcVar15 = cVar7;
        }
        goto LAB_ram_480ce7de;
      }
    } while (pcVar4 != pcVar5);
    *pcVar13 = '\x01';
LAB_ram_480ce7de:
    puVar14 = puVar14 + 1;
    piVar11 = piVar11 + 1;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
    pcVar5 = pcVar5 + 0x4b3;
    bVar1 = iVar9 != 1;
    iVar9 = 1;
  } while (bVar1);
  if ((local_ee4[0] != '\0') && (local_ee4[1] != '\0')) {
    memset(param_2,0,0x528);
    *(undefined4 *)((int)param_2 + 4) = 1;
    memset((void *)((int)param_2 + 0x90),0,0x460);
    *(undefined4 *)((int)param_2 + 0x500) = 0;
    *(undefined4 *)((int)param_2 + 0x504) = 0;
    *(undefined4 *)((int)param_2 + 0x508) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 1;
    *(undefined1 *)((int)param_1 + 0xf) = 1;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar8;
  }
  if (local_ee0[0] == '\0') {
    if (local_ee0[1] == '\0') goto LAB_ram_480ce934;
    pcVar5 = acStack_4f5;
    piVar11 = local_ed8 + 1;
    uVar6 = 1;
LAB_ram_480ce824:
    iVar9 = FUN_ram_48071b5e(pcVar5,0x4b3,param_2,piVar11);
  }
  else {
    if (local_ee0[1] == '\0') {
      piVar11 = local_ed8;
      pcVar5 = local_9a8;
      uVar6 = 0;
      goto LAB_ram_480ce824;
    }
    if (local_ed8[0] == local_ed8[1]) {
      iVar9 = FUN_ram_4ff4511a(auStack_99c,auStack_4e9,0x4a3);
      if (iVar9 != 0) goto LAB_ram_480ce934;
      uVar6 = (uint)(local_edc[0] < local_edc[1]);
      pcVar5 = acStack_4f5 + (uVar6 - 1 & 0xfffffb4d);
      piVar11 = local_ed8 + uVar6;
      goto LAB_ram_480ce824;
    }
    iVar9 = ~(local_ed8[1] - local_ed8[0]) >> 0x1f;
    uVar6 = -iVar9;
    iVar9 = FUN_ram_48071b5e(acStack_4f5 + (uVar6 - 1 & 0xfffffb4d),0x4b3,param_2,local_ed8 + -iVar9
                            );
  }
  if (iVar9 != 0) {
    uVar2 = local_edc[uVar6];
    iVar9 = local_ed8[uVar6];
    cVar7 = local_ee0[uVar6 ^ 1];
    *(char *)(param_1 + 1) = (char)uVar6;
    *(bool *)((int)param_1 + 0xd) = uVar2 != 4;
    param_1[2] = iVar9;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((int)param_1 + 0xe) = 1;
    if (cVar7 != '\0') {
      *(undefined1 *)((int)param_1 + 0xf) = 2;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar8;
    }
    *(char *)((int)param_1 + 0xf) = '\x03' - local_ee4[uVar6 ^ 1];
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar8;
  }
LAB_ram_480ce934:
  uVar12 = 4;
LAB_ram_480ce936:
  *(undefined1 *)((int)param_1 + 0xf) = uVar12;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return 0;
}


