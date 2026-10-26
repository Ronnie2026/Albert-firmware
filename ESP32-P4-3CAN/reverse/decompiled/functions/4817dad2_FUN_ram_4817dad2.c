/* Firmware entry: 0x4817dad2 */

undefined4 FUN_ram_4817dad2(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  uint uStack_88;
  undefined1 local_84 [48];
  undefined1 auStack_54 [64];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  memset(auStack_e8,0,0x60);
  memset(local_84,0,100);
  uStack_88 = param_1 >> 3;
  iVar3 = FUN_ram_48180126(param_4,auStack_e8,0x30);
  if (((iVar3 == 0) && (iVar3 = FUN_ram_48180126(param_4 + 8,auStack_b8,0x30), iVar3 == 0)) &&
     (iVar3 = FUN_ram_48180126(param_3,&uStack_118,0x30), iVar3 == 0)) {
    FUN_ram_48188030(auStack_e8,&uStack_118,local_84,0);
    puVar6 = local_84;
    puVar4 = (undefined1 *)((int)&uStack_14c + 3);
    puVar5 = (undefined1 *)((int)&uStack_11c + 3);
    do {
      uVar1 = *puVar6;
      uVar2 = puVar6[0x30];
      puVar6 = puVar6 + 1;
      *puVar4 = uVar1;
      *puVar5 = uVar2;
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
    } while (puVar6 != auStack_54);
    iVar3 = FUN_ram_481800da(param_2,&uStack_178,0x30);
    if (((iVar3 == 0) && (iVar3 = FUN_ram_481800da(param_2 + 8,&uStack_148,0x30), iVar3 == 0)) &&
       (iVar3 = FUN_ram_4817ff24(param_2 + 0x10,1), iVar3 == 0)) {
      return 0;
    }
  }
  return 0xffffb080;
}


