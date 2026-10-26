/* Firmware entry: 0x48173b70 */

int FUN_ram_48173b70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,int param_7,int param_8,undefined4 param_9)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  byte abStack_168 [32];
  byte local_148 [276];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4817fb86(auStack_180);
  FUN_ram_4817fb86(abStack_168);
  iVar4 = FUN_ram_4817ffaa(param_1 + 0x34,0);
  if (iVar4 != 1) {
    return -0x4f80;
  }
  iVar4 = FUN_ram_4817ffaa(param_3,0);
  iVar5 = FUN_ram_4817fe72(auStack_180,param_3);
  if ((iVar5 != 0) || (iVar5 = FUN_ram_48180594(abStack_168,param_1 + 0x34,param_3), iVar5 != 0)) {
LAB_ram_48173bee:
    FUN_ram_4817fb90(abStack_168);
    FUN_ram_4817fb90(auStack_180);
    return iVar5;
  }
  iVar5 = FUN_ram_4817fc26(auStack_180,abStack_168,iVar4 == 0);
  if (iVar5 != 0) goto LAB_ram_48173bee;
  memset(local_148,0,param_7 + 1);
  iVar5 = 0;
  pbVar3 = local_148;
  if (param_7 != 0) {
    do {
      uVar14 = 0;
      iVar13 = iVar5;
      do {
        iVar6 = FUN_ram_4817ffaa(auStack_180,iVar13);
        uVar2 = uVar14 & 0x1f;
        uVar14 = uVar14 + 1;
        *pbVar3 = *pbVar3 | (byte)(iVar6 << uVar2);
        iVar13 = iVar13 + param_7;
      } while (uVar14 != param_6);
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 1;
    } while (param_7 != iVar5);
    bVar9 = 0;
    pbVar3 = local_148;
    bVar7 = local_148[0];
    do {
      bVar1 = pbVar3[1];
      pbVar12 = pbVar3 + 1;
      bVar10 = bVar1 ^ bVar9;
      bVar8 = -(~bVar10 & 1) & bVar7;
      bVar11 = ~bVar10 << 7 | bVar7;
      bVar7 = bVar10 ^ bVar8;
      *pbVar3 = bVar11;
      *pbVar12 = bVar7;
      bVar9 = bVar1 & bVar9 | bVar10 & bVar8;
      pbVar3 = pbVar12;
    } while (pbVar12 != local_148 + param_7);
  }
  FUN_ram_4817fb90(abStack_168);
  FUN_ram_4817fb90(auStack_180);
  FUN_ram_4817fb86(auStack_180);
  FUN_ram_4817fb86(auStack_178);
  FUN_ram_4817fb86(auStack_170);
  pbVar3 = abStack_168;
  do {
    pbVar12 = pbVar3 + 8;
    FUN_ram_4817fb86(pbVar3);
    pbVar3 = pbVar12;
  } while (pbVar12 != local_148);
  iVar13 = FUN_ram_48172bf0(param_1,param_2,param_4,param_5,local_148[param_7]);
  iVar5 = iVar13;
  if (iVar13 != 0) goto LAB_ram_48173d62;
  if (param_8 == 0) {
LAB_ram_48173e96:
    pbVar3 = local_148 + param_7;
    do {
      iVar5 = iVar13;
      if (local_148 == pbVar3) break;
      iVar5 = FUN_ram_4817339e(param_1,param_2,param_2,abStack_168);
      if (iVar5 != 0) break;
      iVar5 = FUN_ram_48172bf0(param_1,auStack_180,param_4,param_5,pbVar3[-1]);
      if (iVar5 != 0) break;
      iVar5 = FUN_ram_481737ce(param_1,param_2,param_2,auStack_180,abStack_168);
      pbVar3 = pbVar3 + -1;
    } while (iVar5 == 0);
  }
  else {
    FUN_ram_4817fb86(auStack_188);
    iVar5 = FUN_ram_4818126a(auStack_188,2,param_1 + 4,param_8,param_9);
    if (iVar5 == 0) {
      iVar6 = param_2 + 0x10;
      iVar5 = FUN_ram_4817bf84(iVar6,iVar6,auStack_188);
      if ((iVar5 == 0) && (iVar5 = FUN_ram_48172ae2(iVar6,param_1), iVar5 == 0)) {
        iVar6 = param_2 + 8;
        DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
        iVar5 = FUN_ram_4817bf84(iVar6,iVar6,auStack_188);
        if ((iVar5 == 0) && (iVar5 = FUN_ram_48172ae2(iVar6,param_1), iVar5 == 0)) {
          DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
          iVar5 = FUN_ram_4817bf84(auStack_188,auStack_188);
          if ((iVar5 == 0) && (iVar5 = FUN_ram_48172ae2(auStack_188,param_1), iVar5 == 0)) {
            DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
            iVar5 = FUN_ram_4817bf84(param_2,param_2,auStack_188);
            if ((iVar5 == 0) && (iVar5 = FUN_ram_48172ae2(param_2,param_1), iVar5 == 0)) {
              DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
              iVar5 = FUN_ram_4817bf84(iVar6,iVar6,auStack_188);
              if ((iVar5 == 0) && (iVar5 = FUN_ram_48172ae2(iVar6,param_1), iVar5 == 0)) {
                DAT_ram_4ff6e290 = DAT_ram_4ff6e290 + 1;
                FUN_ram_4817fb90(auStack_188);
                goto LAB_ram_48173e96;
              }
            }
          }
        }
      }
    }
    FUN_ram_4817fb90(auStack_188);
    if (iVar5 == -0xe) {
      iVar5 = -0x4d00;
    }
  }
LAB_ram_48173d62:
  FUN_ram_4817fb90(auStack_180);
  FUN_ram_4817fb90(auStack_178);
  FUN_ram_4817fb90(auStack_170);
  pbVar3 = abStack_168;
  do {
    pbVar12 = pbVar3 + 8;
    FUN_ram_4817fb90(pbVar3);
    pbVar3 = pbVar12;
  } while (pbVar12 != local_148);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar4 = FUN_ram_48172b94(param_1,param_2,iVar4 == 0);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = FUN_ram_48173028(param_1,param_2);
  return iVar4;
}


