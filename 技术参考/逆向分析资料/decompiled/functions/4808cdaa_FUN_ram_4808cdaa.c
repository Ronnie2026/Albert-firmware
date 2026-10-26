/* Firmware entry: 0x4808cdaa */

char FUN_ram_4808cdaa(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  int *piVar15;
  byte local_30 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar10 = local_30;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0;
  local_30[0xf] = 0;
  local_30[0x10] = 0;
  local_30[0x11] = 0;
  local_30[0x12] = 0;
  local_30[0x13] = 0;
  local_30[0x14] = 0;
  local_30[0x15] = 0;
  local_30[0x16] = 0;
  local_30[0x17] = 0;
  local_30[0x18] = 0;
  local_30[0x19] = 0;
  local_30[0x1a] = 0;
  local_30[0x1b] = 0;
  local_30[0x1c] = 0;
  local_30[0x1d] = 0;
  local_30[0x1e] = 0;
  local_30[0x1f] = 0;
  FUN_ram_48033124(local_30);
  iVar6 = *(int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x42c);
  piVar15 = (int *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0x2c);
  if (iVar6 == 0) {
    pbVar7 = (byte *)0x0;
    iVar6 = 0;
  }
  else {
    iVar14 = 0;
    piVar5 = piVar15;
    do {
      if (*piVar5 == 0xe) {
        pbVar7 = (byte *)piVar5[1];
        pcVar8 = "X-P4-Developer";
        uVar12 = 0x58;
        while( true ) {
          pcVar8 = pcVar8 + 1;
          uVar9 = (uint)*pbVar7;
          if ((uVar9 - 0x41 & 0xff) < 0x1a) {
            uVar9 = uVar9 + 0x20;
          }
          if ((uVar12 - 0x41 & 0xff) < 0x1a) {
            uVar12 = uVar12 + 0x20;
          }
          if (uVar12 != uVar9) break;
          pbVar7 = pbVar7 + 1;
          if ((byte *)pcVar8 == (byte *)0x481cb652) {
            iVar6 = piVar15[iVar14 * 4 + 2];
            pbVar7 = (byte *)piVar15[iVar14 * 4 + 3];
            goto LAB_ram_4808ce5c;
          }
          uVar12 = (uint)(byte)*pcVar8;
        }
      }
      iVar14 = iVar14 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar6 != iVar14);
    pbVar7 = (byte *)0x0;
    iVar6 = 0;
  }
LAB_ram_4808ce5c:
  iVar14 = FUN_ram_48025ba6();
  if ((DAT_ram_4ff5be0c == '\0') || (899999 < (uint)(iVar14 - DAT_ram_4ff5be04))) {
    DAT_ram_4ff5be0c = '\0';
    DAT_ram_4ff5bdc0 = 0;
    DAT_ram_4ff5bdc4 = 0;
    DAT_ram_4ff5bdc8 = 0;
    DAT_ram_4ff5bdcc = 0;
    DAT_ram_4ff5bdd0 = 0;
    DAT_ram_4ff5bdd4 = 0;
    DAT_ram_4ff5bdd8 = 0;
    DAT_ram_4ff5bddc = 0;
    DAT_ram_4ff5bde0 = 0;
    memset(&DAT_ram_4ff5bde1,0,0x20);
  }
  else if (iVar6 == 0x20) {
    pbVar11 = (byte *)&DAT_ram_4ff5bdc0;
    bVar13 = 0;
    do {
      bVar2 = *pbVar7;
      bVar3 = *pbVar11;
      bVar4 = *pbVar10;
      pbVar1 = pbVar11 + 0x21;
      pbVar11 = pbVar11 + 1;
      pbVar7 = pbVar7 + 1;
      pbVar10 = pbVar10 + 1;
      bVar13 = bVar13 | bVar2 ^ bVar3 | bVar4 ^ *pbVar1;
    } while (pbVar11 != &DAT_ram_4ff5bde0);
    if (bVar13 == 0) {
      DAT_ram_4ff5be04 = iVar14;
      return DAT_ram_4ff5be0c;
    }
  }
  FUN_ram_4808cb66(0x193,"developer_locked");
  return '\0';
}


