/* Firmware entry: 0x4804132a */

char * FUN_ram_4804132a(char *param_1,int *param_2,int param_3,undefined4 param_4,char *param_5,
                       int param_6,int param_7,int param_8)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  undefined4 uVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x50);
  cVar19 = param_5[8];
  cVar1 = *(char *)((int)param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_5 + 0x10);
  *(int *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  param_1[0x38] = cVar19;
  param_1[8] = '\b';
  param_1[0x1e] = '\x01';
  param_1[0x28] = '\x01';
  if ((((cVar1 != '\x02') || (*param_2 != 0x3c2)) || ((char)param_2[1] != '\b')) ||
     ((*(byte *)((int)param_2 + 5) & 3) != 1)) {
    *param_1 = '\x02';
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_1;
  }
  if (5000 < (uint)(param_7 - param_3)) {
    *param_1 = '\x03';
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_1;
  }
  if (((param_8 == 0) || (param_8 != param_6)) || (*(int *)(param_5 + 0xc) != param_8)) {
    *param_1 = '\x05';
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return param_1;
  }
  cVar1 = param_5[0x14];
  if (cVar1 == '\0') {
    bVar24 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(param_5 + 0x18);
    bVar24 = param_5[0x1c];
    param_1[0x3c] = '\x01';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    *(undefined4 *)(param_1 + 0x40) = uVar15;
  }
  cVar2 = param_5[0x24];
  uVar12 = *(uint *)(param_1 + 0x3c);
  if (cVar2 == '\0') {
    bVar4 = 0;
    bVar26 = 0;
    bVar27 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(param_5 + 0x28);
    bVar27 = param_5[0x2d];
    bVar26 = param_5[0x2e];
    bVar4 = param_5[0x30];
    uVar12 = uVar12 | 2;
    *(uint *)(param_1 + 0x3c) = uVar12;
    *(undefined4 *)(param_1 + 0x44) = uVar15;
  }
  if (param_5[100] == '\0') {
    if (param_5[0x54] == '\0') {
      if (param_5[0x44] == '\0') {
        if (param_5[0x34] == '\0') {
          if (uVar12 == 0) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return param_1;
          }
          pcVar16 = (char *)0x0;
          bVar3 = false;
          bVar25 = 0;
          goto LAB_ram_48041474;
        }
        pcVar16 = param_5 + 0x34;
      }
      else {
        pcVar16 = param_5 + 0x44;
      }
    }
    else {
      pcVar16 = param_5 + 0x54;
    }
  }
  else {
    pcVar16 = param_5 + 100;
  }
  uVar15 = *(undefined4 *)(pcVar16 + 4);
  cVar10 = param_5[1];
  *(uint *)(param_1 + 0x3c) = uVar12 | 4;
  *(undefined4 *)(param_1 + 0x48) = uVar15;
  bVar25 = pcVar16[0xb];
  if (cVar10 == '\0') {
    if (pcVar16[0xd] == '\x03') {
      param_1[0x28] = '\x02';
    }
  }
  else if ((byte)(pcVar16[0xd] - 2U) < 2) {
    cVar10 = '\x03';
    if (param_5[2] != '\0') {
      cVar10 = (param_7 - *(int *)(param_5 + 4) < 1) + '\x03';
    }
    param_1[0x28] = cVar10;
  }
  bVar3 = true;
LAB_ram_48041474:
  if (*param_5 == '\0') {
    *param_1 = (-(1 < (byte)(cVar19 - 1U)) & 0xfeU) + 6;
  }
  else if (cVar19 == '\0') {
    if ((pcVar16 == (char *)0x0) || ((byte)pcVar16[0xd] < 2)) {
      cVar19 = '\x01';
      if (cVar1 == '\0') {
        cVar19 = '\x03' - cVar2;
      }
    }
    else {
      cVar19 = '\x03';
    }
    iVar17 = *param_2;
    iVar22 = param_2[2];
    iVar7 = param_2[3];
    iVar9 = param_2[4];
    iVar13 = param_2[5];
    iVar5 = param_2[1];
    param_1[0x4c] = cVar19;
    iVar21 = param_2[7];
    iVar18 = param_2[6];
    iVar23 = param_2[8];
    bVar6 = *(byte *)((int)param_2 + 6);
    bVar8 = *(byte *)((int)param_2 + 7);
    bVar11 = *(byte *)(param_2 + 2);
    bVar14 = *(byte *)((int)param_2 + 10);
    bVar20 = *(byte *)((int)param_2 + 0xb);
    if (cVar1 != '\0') {
      bVar6 = bVar6 & 0xcf | bVar24 & 0x30;
    }
    if (cVar2 != '\0') {
      bVar8 = bVar8 & 0xc0 | bVar27 & 0x3f;
      bVar11 = bVar11 & 0xc0 | bVar26 & 0x3f;
      bVar20 = bVar20 & 0xef | bVar4 & 0x10;
    }
    if (bVar3) {
      bVar14 = bVar14 & 0x3f | bVar25 & 0xc0;
    }
    uStack_9c = CONCAT13(bVar8,CONCAT12(bVar6,(short)iVar5));
    uStack_98 = CONCAT31((int3)((uint)iVar22 >> 8),bVar11);
    uStack_98 = CONCAT13(bVar20,CONCAT12(bVar14,(undefined2)uStack_98));
    *(int *)(param_1 + 0x1c) = iVar18;
    param_1[0x1d] = ((byte)param_1[0x28] - 3 < 2) << 1 | (byte)((uint)iVar18 >> 8) & 0xfd;
    *(undefined4 *)(param_1 + 8) = uStack_9c;
    *(undefined4 *)(param_1 + 0xc) = uStack_98;
    *(int *)(param_1 + 4) = iVar17;
    *(int *)(param_1 + 0x10) = iVar7;
    *(int *)(param_1 + 0x14) = iVar9;
    *(int *)(param_1 + 0x18) = iVar13;
    *(int *)(param_1 + 0x20) = iVar21;
    *(int *)(param_1 + 0x24) = iVar23;
    *param_1 = '\x01';
  }
  else {
    *param_1 = '\x04';
  }
  return param_1;
}


