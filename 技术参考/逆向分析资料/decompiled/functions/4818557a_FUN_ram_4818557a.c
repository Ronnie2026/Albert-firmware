/* Firmware entry: 0x4818557a */

int FUN_ram_4818557a(int *param_1,char *param_2,char *param_3,char *param_4,int param_5,
                    undefined4 param_6,undefined4 *param_7)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  uint uStack_44;
  byte abStack_40 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return -0x1480;
  }
  pcVar2 = strstr(param_4,param_2);
  if ((pcVar2 == (char *)0x0) || (pcVar3 = strstr(param_4,param_3), pcVar3 <= pcVar2)) {
    return -0x1080;
  }
  sVar4 = strlen(param_2);
  pcVar2 = pcVar2 + sVar4;
  cVar13 = *pcVar2;
  if (cVar13 == ' ') {
    cVar13 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  }
  if (cVar13 == '\r') {
    cVar13 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
  }
  if (cVar13 != '\n') {
    return -0x1080;
  }
  sVar4 = strlen(param_3);
  pcVar5 = pcVar3 + sVar4;
  cVar13 = *pcVar5;
  pcVar16 = pcVar2 + 1;
  if (cVar13 == ' ') {
    cVar13 = pcVar5[1];
    pcVar5 = pcVar5 + 1;
  }
  if (cVar13 == '\r') {
    cVar13 = pcVar5[1];
    pcVar5 = pcVar5 + 1;
  }
  *param_7 = pcVar5 + ((uint)(cVar13 == '\n') - (int)param_4);
  if (((int)pcVar3 - (int)pcVar16 < 0x16) ||
     (iVar6 = FUN_ram_4ff4511a(pcVar16,"Proc-Type: 4,ENCRYPTED",0x16), iVar6 != 0)) {
    iVar6 = 0;
    bVar1 = false;
  }
  else {
    cVar13 = pcVar2[0x17];
    pcVar5 = pcVar2 + 0x17;
    if (cVar13 == '\r') {
      cVar13 = pcVar2[0x18];
      pcVar5 = pcVar2 + 0x18;
    }
    if (cVar13 != '\n') {
      return -0x1100;
    }
    pcVar2 = pcVar5 + 1;
    if ((((int)pcVar3 - (int)pcVar2 < 0xe) ||
        (iVar6 = FUN_ram_4ff4511a(pcVar2,"DEK-Info: AES-",0xe), iVar6 != 0)) ||
       ((int)pcVar3 - (int)pcVar2 < 0x16)) {
      return -0x1280;
    }
    iVar6 = FUN_ram_4ff4511a(pcVar2,"DEK-Info: AES-128-CBC,",0x16);
    if (iVar6 == 0) {
      iVar6 = 5;
    }
    else {
      iVar6 = FUN_ram_4ff4511a(pcVar2,"DEK-Info: AES-192-CBC,",0x16);
      if (iVar6 == 0) {
        iVar6 = 6;
      }
      else {
        iVar6 = FUN_ram_4ff4511a(pcVar2,"DEK-Info: AES-256-CBC,",0x16);
        if (iVar6 != 0) {
          return -0x1280;
        }
        iVar6 = 7;
      }
    }
    pcVar2 = pcVar5 + 0x17;
    if ((int)pcVar3 - (int)pcVar2 < 0x20) {
      return -0x1200;
    }
    abStack_40[0] = 0;
    abStack_40[1] = 0;
    abStack_40[2] = 0;
    abStack_40[3] = 0;
    abStack_40[4] = 0;
    abStack_40[5] = 0;
    abStack_40[6] = 0;
    abStack_40[7] = 0;
    abStack_40[8] = 0;
    abStack_40[9] = 0;
    abStack_40[10] = 0;
    abStack_40[0xb] = 0;
    abStack_40[0xc] = 0;
    abStack_40[0xd] = 0;
    abStack_40[0xe] = 0;
    abStack_40[0xf] = 0;
    pcVar16 = pcVar5 + 0x37;
    do {
      cVar13 = *pcVar2;
      pcVar15 = pcVar2 + (-0x17 - (int)pcVar5);
      bVar9 = cVar13 - 0x30;
      if (9 < (byte)(cVar13 - 0x30U)) {
        bVar9 = cVar13 - 0x37;
        if (5 < (byte)(cVar13 + 0xbfU)) {
          if (5 < (byte)(cVar13 + 0x9fU)) {
            return -0x1200;
          }
          bVar9 = cVar13 + 0xa9;
        }
      }
      pcVar2 = pcVar2 + 1;
      if (((uint)pcVar15 & 1) == 0) {
        bVar9 = bVar9 << 4;
      }
      abStack_40[(uint)pcVar15 >> 1] = abStack_40[(uint)pcVar15 >> 1] | bVar9;
    } while (pcVar16 != pcVar2);
    cVar13 = pcVar5[0x37];
    if (cVar13 == '\r') {
      cVar13 = pcVar5[0x38];
      pcVar16 = pcVar5 + 0x38;
    }
    if (cVar13 != '\n') {
      return -0x1100;
    }
    pcVar16 = pcVar16 + 1;
    bVar1 = true;
  }
  if (pcVar3 <= pcVar16) {
    return -0x1100;
  }
  iVar7 = FUN_ram_48188408(0,0,&uStack_44,pcVar16,(int)pcVar3 - (int)pcVar16);
  if (iVar7 == -0x2c) {
    return -0x112c;
  }
  if (uStack_44 == 0) {
    return -0x1480;
  }
  iVar7 = thunk_FUN_ram_4817b126(1);
  if (iVar7 == 0) {
    return -0x1180;
  }
  iVar8 = FUN_ram_48188408(iVar7,uStack_44,&uStack_44,pcVar16,(int)pcVar3 - (int)pcVar16);
  if (iVar8 != 0) {
    FUN_ram_48178b14(iVar7);
    return iVar8 + -0x1100;
  }
  uVar10 = uStack_44;
  if (!bVar1) {
LAB_ram_4818581a:
    *param_1 = iVar7;
    param_1[1] = uVar10;
    return 0;
  }
  if (param_5 == 0) {
    FUN_ram_48178b14(iVar7);
    return -0x1300;
  }
  if (iVar6 == 5) {
    iVar6 = FUN_ram_481853bc(abStack_40,0x10,iVar7,uStack_44,param_5,param_6);
  }
  else if (iVar6 == 6) {
    iVar6 = FUN_ram_481853bc(abStack_40,0x18,iVar7,uStack_44,param_5,param_6);
  }
  else {
    if (iVar6 != 7) goto LAB_ram_481857d8;
    iVar6 = FUN_ram_481853bc(abStack_40,0x20,iVar7,uStack_44,param_5,param_6);
  }
  if (iVar6 != 0) {
    FUN_ram_48178b14(iVar7);
    return iVar6;
  }
LAB_ram_481857d8:
  if (uStack_44 == 0) {
    iVar6 = -0x1100;
  }
  else {
    uVar11 = (uint)*(byte *)(iVar7 + uStack_44 + -1);
    if (uVar11 <= uStack_44) {
      uVar10 = uStack_44 - uVar11;
      uVar14 = uVar10;
      do {
        if (uStack_44 <= uVar14) goto LAB_ram_4818581a;
        pbVar12 = (byte *)(iVar7 + uVar14);
        uVar14 = uVar14 + 1;
      } while (*pbVar12 == uVar11);
    }
    iVar6 = -0x1380;
  }
  FUN_ram_48178b14(iVar7);
  return iVar6;
}


