/* Firmware entry: 0x480f9c70 */

undefined1 FUN_ram_480f9c70(undefined4 param_1,undefined4 *param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_20c [4];
  undefined4 local_208 [41];
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_154;
  undefined1 uStack_14e;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_128 [2];
  short local_126 [30];
  short asStack_ea [13];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined1 uStack_97;
  undefined1 uStack_94;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_83;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  psVar3 = (short *)(param_3 + 2);
  do {
    sVar5 = *psVar3;
    psVar3 = psVar3 + 1;
    if (0xfe < (ushort)(sVar5 - 1U)) {
      return 0;
    }
  } while (psVar3 != (short *)(param_3 + 0x3e));
  memset(auStack_20c,0,0x1ec);
  uStack_164 = 0x960064;
  uStack_160 = 0x6405;
  uStack_15c = 0x76400;
  uStack_154 = 0xa0ff0550;
  uStack_14c = 0x7e3f0128;
  uStack_148 = 0x3c01e6c2;
  uStack_144 = 0xe69f5a;
  uStack_14e = 3;
  puVar6 = (undefined1 *)((int)&uStack_144 + 3);
  do {
    *puVar6 = 1;
    puVar6[1] = 0x3c;
    puVar6[2] = 0x5a;
    puVar6[3] = 0x9f;
    puVar6[4] = 0xe6;
    puVar6 = puVar6 + 5;
  } while (auStack_128 != puVar6);
  asStack_ea[1] = 0x101;
  asStack_ea[2] = 0x96;
  asStack_ea[3] = 0xb4;
  asStack_ea[4] = 0x96;
  asStack_ea[5] = 0xb4;
  asStack_ea[6] = 0xb4;
  asStack_ea[7] = 0xf0;
  asStack_ea[8] = 0xb4;
  asStack_ea[9] = 0xf0;
  asStack_ea[10] = 100;
  uStack_cc = 3000;
  uStack_c0 = 3000;
  uStack_b8 = 3000;
  uStack_d0 = 2000;
  uStack_bc = 2000;
  uStack_ac = 2000;
  uStack_94 = 2;
  uStack_83 = 2;
  uStack_b4 = 4000;
  uStack_a8 = 5000;
  uStack_9c = 0xfa0050;
  uStack_b0 = 1000;
  uStack_a4 = 0x2ee;
  uStack_97 = 0x2d;
  psVar3 = local_126;
  sVar5 = 5;
  do {
    *psVar3 = sVar5;
    sVar5 = sVar5 + 5;
    psVar3 = psVar3 + 1;
  } while (asStack_ea != psVar3);
  auStack_20c[0] = 8;
  puVar4 = param_2 + 0x28;
  puVar7 = local_208;
  do {
    uVar8 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    *puVar7 = *param_2;
    puVar7[1] = uVar8;
    puVar7[2] = uVar1;
    puVar7[3] = uVar2;
    param_2 = param_2 + 4;
    puVar7 = puVar7 + 4;
  } while (param_2 != puVar4);
  *puVar7 = *param_2;
  FUN_ram_4ff45158(auStack_128,param_3,0x3e);
  uStack_8c = param_4;
  FUN_ram_480e9d2e(param_1,auStack_20c);
  return uStack_8b;
}


