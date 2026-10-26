/* Firmware entry: 0x4817ebf2 */

undefined4 FUN_ram_4817ebf2(byte *param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint auStack_34 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  auStack_34[0] = param_2[3];
  puVar10 = (uint *)(param_1 + 4);
  iVar9 = 0;
  while( true ) {
    local_40 = *puVar10 ^ local_40;
    uStack_3c = puVar10[1] ^ uStack_3c;
    uStack_38 = puVar10[2] ^ uStack_38;
    auStack_34[0] = puVar10[3] ^ auStack_34[0];
    FUN_ram_4817e232(&local_40,&uStack_3c,&uStack_38,auStack_34,&DAT_ram_48239f00,&DAT_ram_48239e00,
                     &DAT_ram_48239d00,&DAT_ram_48239c00);
    uVar7 = auStack_34[0] << 0x10 | auStack_34[0] >> 0x10;
    uVar6 = uStack_38 >> 8 & 0xff00ff | (uStack_38 & 0xff00ff) << 8;
    uVar3 = uStack_3c << 0x10 | uStack_3c >> 0x10;
    uVar2 = uVar7 >> 8 & 0xff00ff | (uVar7 & 0xff00ff) << 8;
    uVar7 = (uVar6 >> 0x10 | uVar6 << 0x10) ^ uVar7;
    uVar1 = local_40 << 0x10 | local_40 >> 0x10;
    uVar4 = (uVar3 >> 8 & 0xff00ff | (uVar3 & 0xff00ff) << 8) ^ uVar1;
    uVar8 = uVar2 ^ uVar1 ^
            (((uStack_3c ^ uVar6) & 0xff00ff) << 8 | (uStack_3c ^ uVar6) >> 8 & 0xff00ff);
    uVar5 = uVar4 << 0x10 | uVar4 >> 0x10;
    uVar1 = uVar8 ^ (uVar7 << 0x10 | uVar7 >> 0x10);
    uVar11 = uVar8 << 0x10 | uVar8 >> 0x10;
    uStack_3c = local_40 ^ uVar7 ^ uVar8 ^ puVar10[5];
    auStack_34[0] = (uVar11 >> 8 & 0xff00ff | (uVar11 & 0xff00ff) << 8) ^ uVar6 ^ uVar4 ^ puVar10[7]
    ;
    local_40 = (uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) ^ uVar3 ^ puVar10[4];
    uStack_38 = (uVar5 >> 8 & 0xff00ff | (uVar5 & 0xff00ff) << 8) ^ uVar11 ^ uVar2 ^ puVar10[6];
    FUN_ram_4817e232(&local_40,&uStack_3c,&uStack_38,auStack_34,&DAT_ram_48239d00,&DAT_ram_48239c00,
                     &DAT_ram_48239f00,&DAT_ram_48239e00);
    iVar9 = iVar9 + 2;
    puVar10 = puVar10 + 8;
    if ((int)(uint)*param_1 <= iVar9) break;
    uVar3 = auStack_34[0] << 0x10 | auStack_34[0] >> 0x10;
    uVar7 = uStack_38 >> 8 & 0xff00ff | (uStack_38 & 0xff00ff) << 8;
    uVar2 = uStack_3c << 0x10 | uStack_3c >> 0x10;
    uVar1 = local_40 << 0x10 | local_40 >> 0x10;
    uStack_38 = uVar3 >> 8 & 0xff00ff | (uVar3 & 0xff00ff) << 8;
    uVar3 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ uVar3;
    uStack_3c = uStack_38 ^ uVar1 ^
                (((uStack_3c ^ uVar7) & 0xff00ff) << 8 | (uStack_3c ^ uVar7) >> 8 & 0xff00ff);
    uVar1 = (uVar2 >> 8 & 0xff00ff | (uVar2 & 0xff00ff) << 8) ^ uVar1;
    uVar5 = uVar1 << 0x10 | uVar1 >> 0x10;
    uVar6 = uStack_3c << 0x10 | uStack_3c >> 0x10;
    uVar4 = uStack_3c ^ (uVar3 << 0x10 | uVar3 >> 0x10);
    uStack_3c = local_40 ^ uVar3 ^ uStack_3c;
    auStack_34[0] = uVar7 ^ uVar1 ^ (uVar6 >> 8 & 0xff00ff | (uVar6 & 0xff00ff) << 8);
    uStack_38 = (uVar5 >> 8 & 0xff00ff | (uVar5 & 0xff00ff) << 8) ^ uVar6 ^ uStack_38;
    local_40 = (uVar4 >> 8 & 0xff00ff | (uVar4 & 0xff00ff) << 8) ^ uVar2;
  }
  uStack_3c = uStack_3c ^ *(uint *)(param_1 + iVar9 * 0x10 + 8);
  uStack_38 = uStack_38 ^ *(uint *)(param_1 + iVar9 * 0x10 + 0xc);
  local_40 = local_40 ^ *(uint *)(param_1 + iVar9 * 0x10 + 4);
  auStack_34[0] = auStack_34[0] ^ *(uint *)(param_1 + iVar9 * 0x10 + 0x10);
  param_3[5] = (char)(uStack_3c >> 8);
  *param_3 = (char)local_40;
  param_3[0xd] = (char)(auStack_34[0] >> 8);
  param_3[4] = (char)uStack_3c;
  param_3[8] = (char)uStack_38;
  param_3[0xc] = (char)auStack_34[0];
  param_3[1] = (char)(local_40 >> 8);
  param_3[2] = (char)(local_40 >> 0x10);
  param_3[3] = (char)(local_40 >> 0x18);
  param_3[6] = (char)(uStack_3c >> 0x10);
  param_3[7] = (char)(uStack_3c >> 0x18);
  param_3[9] = (char)(uStack_38 >> 8);
  param_3[10] = (char)(uStack_38 >> 0x10);
  param_3[0xb] = (char)(uStack_38 >> 0x18);
  param_3[0xe] = (char)(auStack_34[0] >> 0x10);
  param_3[0xf] = (char)(auStack_34[0] >> 0x18);
  return 0;
}


