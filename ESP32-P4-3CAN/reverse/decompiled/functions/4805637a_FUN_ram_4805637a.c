/* Firmware entry: 0x4805637a */

uint FUN_ram_4805637a(char *param_1,ushort *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  char cVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *param_1;
  if ((cVar1 == '\0') || ((uint)(param_3 - *(int *)(param_1 + 0x18)) < 0x32)) {
    return *(uint *)(param_1 + 0x1c);
  }
  sVar2 = *(short *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = param_3;
  *(ushort *)(param_1 + 0x14) = sVar2 + 1U;
  if (500 < (ushort)(sVar2 + 1U)) {
    *param_1 = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\x04';
    return 0;
  }
  puVar11 = &DAT_ram_48222c60;
  puVar10 = (uint *)&UNK_ram_48222c40;
  puVar9 = (uint *)&UNK_ram_48222c30;
  puVar12 = (uint *)&UNK_ram_48222c50;
  pcVar4 = param_1 + 0xc;
  if (param_1[0xc] == '\0') {
    pcVar4 = param_1 + 0xd;
    puVar11 = &DAT_ram_48222c64;
    puVar10 = &DAT_ram_48222c44;
    puVar9 = (uint *)&UNK_ram_48222c34;
    puVar12 = (uint *)&UNK_ram_48222c54;
    cVar8 = '\x01';
    uVar3 = 0;
    cVar14 = '\0';
    if (param_1[0xd] == '\0') goto LAB_ram_4805646a;
    goto LAB_ram_4805642a;
  }
  uVar13 = (uint)*param_2;
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  uVar3 = 0;
  cVar14 = '\0';
  cVar8 = '\0';
LAB_ram_480563ec:
  iVar6 = uVar5 - uVar13;
  cVar7 = cVar8;
  if (iVar6 < 1) goto LAB_ram_4805644a;
LAB_ram_480563f4:
  cVar7 = cVar8;
  if (iVar6 < 6) goto LAB_ram_480564a0;
  if (pcVar4[4] != '\x01') goto LAB_ram_480564a0;
  if (param_1[1] == '\0') {
    uVar5 = *puVar11;
  }
  else {
    uVar5 = *puVar12;
  }
  do {
    uVar3 = uVar3 | uVar5;
    cVar14 = cVar1;
LAB_ram_4805646a:
    while( true ) {
      do {
        cVar8 = cVar8 + '\x01';
        pcVar4 = pcVar4 + 1;
        if (cVar8 == '\x04') {
          *(uint *)(param_1 + 0x1c) = uVar3;
          if (cVar14 != '\0') {
            return uVar3;
          }
          *param_1 = '\0';
          param_1[0x20] = '\x01';
          return uVar3;
        }
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      } while (*pcVar4 == '\0');
      if (cVar8 == '\x02') {
        uVar13 = (uint)param_2[2];
        uVar5 = (uint)*(ushort *)(param_1 + 6);
        goto LAB_ram_480563ec;
      }
LAB_ram_4805642a:
      if (cVar8 == '\x03') {
        uVar13 = (uint)param_2[3];
        uVar5 = (uint)*(ushort *)(param_1 + 8);
        cVar8 = '\x03';
        goto LAB_ram_480563ec;
      }
      iVar6 = (uint)*(ushort *)(param_1 + 4) - (uint)param_2[1];
      cVar8 = '\x01';
      cVar7 = '\x01';
      if (0 < iVar6) goto LAB_ram_480563f4;
LAB_ram_4805644a:
      if ((iVar6 < -5) && (pcVar4[4] == -1)) break;
LAB_ram_480564a0:
      *pcVar4 = '\0';
      cVar8 = cVar7;
    }
    cVar8 = cVar7;
    if (param_1[1] == '\0') {
      uVar5 = *puVar10;
    }
    else {
      uVar5 = *puVar9;
    }
  } while( true );
}


