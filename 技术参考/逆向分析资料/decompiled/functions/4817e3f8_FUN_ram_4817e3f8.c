/* Firmware entry: 0x4817e3f8 */

void FUN_ram_4817e3f8(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = param_2[1] ^ param_3[1];
  uStack_18 = param_2[2] ^ param_3[2];
  auStack_14[0] = param_2[3] ^ param_3[3];
  local_20 = *param_2 ^ *param_3;
  FUN_ram_4817e232(&local_20,&uStack_1c,&uStack_18,auStack_14,&DAT_ram_48239f00,&DAT_ram_48239e00,
                   &DAT_ram_48239d00,&DAT_ram_48239c00);
  uVar2 = uStack_18 >> 8 & 0xff00ff | (uStack_18 & 0xff00ff) << 8;
  uVar4 = auStack_14[0] << 0x10 | auStack_14[0] >> 0x10;
  uVar1 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar4;
  uVar7 = local_20 << 0x10 | local_20 >> 0x10;
  uVar4 = uVar4 >> 8 & 0xff00ff | (uVar4 & 0xff00ff) << 8;
  uVar5 = uVar4 ^ uVar7 ^
          ((uStack_1c ^ uVar2) >> 8 & 0xff00ff | ((uStack_1c ^ uVar2) & 0xff00ff) << 8);
  uVar6 = uVar5 ^ (uVar1 << 0x10 | uVar1 >> 0x10);
  uVar3 = uStack_1c << 0x10 | uStack_1c >> 0x10;
  *param_1 = (uVar6 >> 8 & 0xff00ff | (uVar6 & 0xff00ff) << 8) ^ uVar3 ^ *param_4;
  param_1[1] = local_20 ^ param_4[1] ^ uVar1 ^ uVar5;
  uVar7 = (uVar3 >> 8 & 0xff00ff | (uVar3 & 0xff00ff) << 8) ^ uVar7;
  uVar1 = uVar7 << 0x10 | uVar7 >> 0x10;
  uVar3 = uVar5 << 0x10 | uVar5 >> 0x10;
  param_1[2] = (uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8) ^ uVar4 ^ param_4[2] ^ uVar3;
  param_1[3] = ((uVar3 & 0xff00ff) << 8 | uVar3 >> 8 & 0xff00ff) ^ uVar2 ^ param_4[3] ^ uVar7;
  return;
}


