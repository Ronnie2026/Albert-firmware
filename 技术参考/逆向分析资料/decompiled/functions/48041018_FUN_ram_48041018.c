/* Firmware entry: 0x48041018 */

char FUN_ram_48041018(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  char cStack_70;
  byte bStack_6f;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_38 = 0x10000;
  iStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_34 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_4c = 8;
  puVar4 = (undefined4 *)FUN_ram_4ff45158(param_4,&iStack_50,0x3e);
  if (param_1[0x3d] != 0) {
    if (param_1[0x3f] == -1) {
      return '\0';
    }
    param_1[0x3f] = param_1[0x3f] + 1;
    return '\0';
  }
  cVar1 = (char)param_1[9];
  if (cVar1 == '\0') {
    return '\0';
  }
  if (param_1[0x3a] == 0) {
    return '\0';
  }
  if (param_1[0x3a] == param_1[0x3b]) {
    return '\0';
  }
  if (5000 < (uint)(param_3 - param_1[0x38])) {
    return '\0';
  }
  uVar13 = param_2;
  if (param_2 == 2) {
    if (*(char *)((int)param_1 + 0x109) == '\0') {
      return '\0';
    }
    cVar11 = *(char *)((int)param_1 + 0x10a);
    bVar2 = *(byte *)(param_1 + 0x37);
    bVar15 = *(byte *)((int)param_1 + 0xdd);
    bVar14 = *(byte *)((int)param_1 + 0xde);
    if (cVar11 != '\0') {
      bVar8 = 0;
      cVar12 = '\0';
LAB_ram_48041316:
      uVar13 = param_2 | 4;
      goto LAB_ram_48041224;
    }
    iStack_50 = *param_1;
    uStack_48 = param_1[2];
    uStack_44 = param_1[3];
    iStack_3c = param_1[5];
    iStack_38 = param_1[6];
    iStack_34 = param_1[7];
    uStack_4c._0_2_ = (undefined2)param_1[1];
    iStack_40 = param_1[4];
    iStack_30 = param_1[8];
    bVar8 = *(byte *)((int)param_1 + 7);
    bVar10 = *(byte *)((int)param_1 + 6);
    bVar6 = *(byte *)(param_1 + 2);
    bVar7 = *(byte *)((int)param_1 + 0xb);
    bVar3 = 0;
    goto LAB_ram_48041274;
  }
  if (param_2 == 3) {
    if (*(char *)((int)param_1 + 0x10a) == '\0') {
      return '\0';
    }
    cVar11 = '\0';
    cVar12 = '\0';
    uVar13 = 4;
    bVar14 = 0;
    bVar15 = 0;
    bVar2 = 0;
    bVar8 = 0;
LAB_ram_48041224:
    iStack_50 = *param_1;
    uStack_4c._0_2_ = (undefined2)param_1[1];
    uStack_48 = param_1[2];
    uStack_44 = param_1[3];
    iStack_40 = param_1[4];
    iStack_3c = param_1[5];
    iStack_38 = param_1[6];
    iStack_34 = param_1[7];
    iStack_30 = param_1[8];
    bVar3 = *(byte *)((int)param_1 + 0xdf);
    bVar10 = *(byte *)((int)param_1 + 6);
    if (cVar12 != '\0') {
      bVar10 = bVar10 & 0xcf | bVar8 & 0x30;
      bVar8 = *(byte *)((int)param_1 + 7);
      bVar6 = *(byte *)(param_1 + 2);
      bVar7 = *(byte *)((int)param_1 + 0xb);
      if (cVar11 != '\0') goto LAB_ram_48041274;
      goto LAB_ram_48041112;
    }
    bVar8 = *(byte *)((int)param_1 + 7);
    bVar6 = *(byte *)(param_1 + 2);
    bVar7 = *(byte *)((int)param_1 + 0xb);
    if (cVar11 != '\0') {
LAB_ram_48041274:
      cVar12 = cVar11;
      bVar8 = bVar8 & 0xc0 | bVar2 & 0x3f;
      bVar6 = bVar6 & 0xc0 | bVar15 & 0x3f;
      bVar7 = bVar7 & 0xef | bVar14 & 0x10;
      goto LAB_ram_48041112;
    }
    bVar14 = *(byte *)((int)param_1 + 10);
  }
  else {
    if (param_2 != 1) {
      return '\0';
    }
    if ((char)param_1[0x42] == '\0') {
      return '\0';
    }
    cVar12 = *(char *)((int)param_1 + 0x10a);
    bVar8 = *(byte *)((int)param_1 + 0xdb);
    if (cVar12 != '\0') {
      cVar11 = '\0';
      bVar14 = 0;
      bVar15 = 0;
      bVar2 = 0;
      goto LAB_ram_48041316;
    }
    iStack_34 = param_1[7];
    iStack_30 = param_1[8];
    iStack_40 = param_1[4];
    iStack_3c = param_1[5];
    iStack_50 = *param_1;
    uStack_4c._0_2_ = (undefined2)param_1[1];
    uStack_48 = param_1[2];
    uStack_44 = param_1[3];
    iStack_38 = param_1[6];
    bVar10 = *(byte *)((int)param_1 + 6) & 0xcf | bVar8 & 0x30;
    bVar8 = *(byte *)((int)param_1 + 7);
    bVar6 = *(byte *)(param_1 + 2);
    bVar7 = *(byte *)((int)param_1 + 0xb);
    bVar3 = 0;
LAB_ram_48041112:
    bVar14 = *(byte *)((int)param_1 + 10);
    if (cVar12 == '\0') goto LAB_ram_48041126;
  }
  bVar14 = bVar14 & 0x3f | bVar3 & 0xc0;
LAB_ram_48041126:
  uStack_4c = CONCAT13(bVar8,CONCAT12(bVar10,(undefined2)uStack_4c));
  uStack_48 = CONCAT31(uStack_48._1_3_,bVar6);
  uStack_48 = CONCAT13(bVar7,CONCAT12(bVar14,(undefined2)uStack_48));
  if (((((uStack_44 >> 8 & 0xff) != 2) || (iStack_50 != 0x3c2)) ||
      (cStack_70 = (char)(undefined2)uStack_4c, cStack_70 != '\b')) ||
     (bStack_6f = (byte)((ushort)(undefined2)uStack_4c >> 8), (bStack_6f & 3) != 1)) {
    return '\0';
  }
  *puVar4 = 0x3c2;
  puVar4[3] = uStack_44;
  puVar4[1] = uStack_4c;
  puVar4[2] = uStack_48;
  puVar4[4] = iStack_40;
  puVar4[5] = iStack_3c;
  puVar4[6] = iStack_38;
  puVar4[7] = iStack_34;
  puVar4[8] = iStack_30;
  *(char *)((int)puVar4 + 0x25) = (char)uVar13;
  puVar4[10] = param_1[0x3a];
  iVar9 = param_1[0x3c];
  *(char *)(puVar4 + 9) = (char)param_2;
  puVar4[0xb] = iVar9;
  uVar5 = 0;
  puVar4[0xc] = param_1[0x38];
  puVar4[0xd] = param_1[0x39];
  puVar4[0xe] = param_1[0x38] + 5000;
  if ((uVar13 & 4) != 0) {
    uVar5 = *(undefined1 *)((int)param_1 + 0x10b);
  }
  *(undefined1 *)(puVar4 + 0xf) = uVar5;
  *(undefined1 *)((int)puVar4 + 0x3d) = 1;
  if ((uVar13 - 1 & uVar13) != 0) {
    if (param_1[0x3e] != -1) {
      param_1[0x3e] = param_1[0x3e] + 1;
      return cVar1;
    }
    return cVar1;
  }
  return cVar1;
}


