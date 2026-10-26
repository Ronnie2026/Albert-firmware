/* Firmware entry: 0x4817e59c */

undefined4 FUN_ram_4817e59c(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0 [4];
  uint auStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint auStack_70 [4];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_a0[0] = DAT_ram_4823a000;
  local_a0[1] = DAT_ram_4823a004;
  local_a0[2] = DAT_ram_4823a008;
  local_a0[3] = DAT_ram_4823a00c;
  auStack_90[0] = DAT_ram_4823a010;
  auStack_90[1] = DAT_ram_4823a014;
  auStack_90[2] = DAT_ram_4823a018;
  auStack_90[3] = DAT_ram_4823a01c;
  uStack_80 = DAT_ram_4823a020;
  uStack_7c = DAT_ram_4823a024;
  uStack_74 = DAT_ram_4823a02c;
  uStack_78 = DAT_ram_4823a028;
  if (param_3 == 0x80) {
    uVar14 = *param_2;
    uVar11 = param_2[1];
    uVar13 = param_2[2];
    uVar15 = param_2[3];
    uStack_60 = 0;
    uStack_5c = 0;
  }
  else {
    if ((param_3 - 0xc0 & 0xffffffbf) != 0) {
      return 0xffffffa4;
    }
    uVar14 = *param_2;
    uVar11 = param_2[1];
    uVar13 = param_2[2];
    uVar15 = param_2[3];
    uStack_60 = param_2[4];
    uStack_5c = param_2[5];
    if (param_3 == 0x100) {
      uStack_58 = param_2[6];
      uStack_54 = param_2[7];
      *param_1 = '\x10';
      puVar3 = local_a0;
      auStack_70[0] = uVar14;
      auStack_70[1] = uVar11;
      auStack_70[2] = uVar13;
      auStack_70[3] = uVar15;
      FUN_ram_4817e3f8(&uStack_60,auStack_70,&uStack_80,&uStack_60);
      iVar2 = 0;
      goto LAB_ram_4817e744;
    }
  }
  uStack_54 = 0;
  uStack_58 = 0;
  param_3 = param_3 >> 6;
  *param_1 = ((char)param_3 + '\x04') * '\x02';
  auStack_70[0] = uVar14;
  auStack_70[1] = uVar11;
  auStack_70[2] = uVar13;
  auStack_70[3] = uVar15;
  FUN_ram_4817e3f8(&uStack_60,auStack_70,local_a0 + (param_3 - 2) * 4,&uStack_60);
  puVar3 = auStack_90 + (param_3 - 2) * 4;
  iVar2 = param_3 - 1;
LAB_ram_4817e744:
  puVar6 = local_a0;
  local_b0 = uStack_60 ^ *puVar3;
  uStack_ac = uStack_5c ^ puVar3[1];
  uStack_a8 = uStack_58 ^ puVar3[2];
  uStack_a4 = uStack_54 ^ puVar3[3];
  FUN_ram_4817e232(&local_b0,&uStack_ac,&uStack_a8,&uStack_a4,&DAT_ram_48239d00,&DAT_ram_48239c00,
                   &DAT_ram_48239f00,&DAT_ram_48239e00);
  uVar5 = uStack_a8 >> 8 & 0xff00ff | (uStack_a8 & 0xff00ff) << 8;
  uVar7 = uStack_a4 << 0x10 | uStack_a4 >> 0x10;
  uVar4 = uStack_ac << 0x10 | uStack_ac >> 0x10;
  uVar10 = uVar7 >> 8 & 0xff00ff | (uVar7 & 0xff00ff) << 8;
  uVar16 = local_b0 << 0x10 | local_b0 >> 0x10;
  uVar7 = (uVar5 >> 0x10 | uVar5 << 0x10) ^ uVar7;
  uVar1 = uVar10 ^ uVar16 ^
          ((uStack_ac ^ uVar5) >> 8 & 0xff00ff | ((uStack_ac ^ uVar5) & 0xff00ff) << 8);
  uVar16 = (uVar4 >> 8 & 0xff00ff | (uVar4 & 0xff00ff) << 8) ^ uVar16;
  uVar9 = uVar1 ^ (uVar7 << 0x10 | uVar7 >> 0x10);
  uVar8 = uVar16 << 0x10 | uVar16 >> 0x10;
  uVar17 = uVar1 << 0x10 | uVar1 >> 0x10;
  uStack_50 = (uVar9 >> 8 & 0xff00ff | (uVar9 & 0xff00ff) << 8) ^ uVar4 ^ uVar14;
  uStack_44 = (uVar17 >> 8 & 0xff00ff | (uVar17 & 0xff00ff) << 8) ^ uVar5 ^ uVar16 ^ uVar15;
  uStack_4c = local_b0 ^ uVar7 ^ uVar1 ^ uVar11;
  uStack_48 = (uVar8 >> 8 & 0xff00ff | (uVar8 & 0xff00ff) << 8) ^ uVar17 ^ uVar10 ^ uVar13;
  if (iVar2 != 2) {
    puVar6 = puVar6 + (iVar2 + 1) * 4;
  }
  FUN_ram_4817e3f8(auStack_40,&uStack_50,puVar6,&uStack_60);
  pcVar12 = param_1 + 4;
  uVar14 = 0;
  puVar3 = auStack_70;
  do {
    uVar14 = uVar14 + 1;
    puVar6 = auStack_70 + (uVar14 & 3) * 4;
    FUN_ram_4817e356(pcVar12,puVar3,puVar6,0x6d);
    FUN_ram_4817e356(pcVar12 + 0x40,puVar3,puVar6,0x61);
    FUN_ram_4817e356(pcVar12 + 0x80,puVar3,puVar6,0x3d);
    FUN_ram_4817e356(pcVar12 + 0xc0,puVar3,puVar6,0x1f);
    pcVar12 = pcVar12 + 0x10;
    puVar3 = puVar3 + 4;
  } while (uVar14 != 4);
  FUN_ram_4817e356(param_1 + 0x104,auStack_70,&uStack_60,0x13);
  FUN_ram_48178af2(auStack_70,0x40);
  return 0;
}


