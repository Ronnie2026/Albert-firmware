/* Firmware entry: 0x480ed7e0 */

undefined1 FUN_ram_480ed7e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 *puVar5;
  short sVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_1fc [4];
  undefined4 local_1f8 [41];
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_144;
  undefined1 uStack_13e;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_134 [28];
  undefined2 uStack_118;
  short local_116 [30];
  short asStack_da [13];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined1 uStack_87;
  undefined1 uStack_84;
  undefined1 uStack_7b;
  undefined1 uStack_73;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_1fc,0,0x1ec);
  uStack_154 = 0x960064;
  uStack_150 = 0x6405;
  uStack_14c = 0x76400;
  uStack_144 = 0xa0ff0550;
  uStack_13c = 0x7e3f0128;
  uStack_138 = 0x3c01e6c2;
  auStack_134._0_4_ = 0xe69f5a;
  auStack_1fc[0] = 4;
  uStack_13e = 3;
  puVar7 = (undefined2 *)(auStack_134 + 3);
  do {
    *(undefined1 *)puVar7 = 1;
    *(undefined1 *)((int)puVar7 + 1) = 0x3c;
    *(undefined1 *)(puVar7 + 1) = 0x5a;
    *(undefined1 *)((int)puVar7 + 3) = 0x9f;
    *(undefined1 *)(puVar7 + 2) = 0xe6;
    puVar7 = (undefined2 *)((int)puVar7 + 5);
  } while (&uStack_118 != puVar7);
  asStack_da[1] = 0x101;
  asStack_da[2] = 0x96;
  asStack_da[3] = 0xb4;
  asStack_da[4] = 0x96;
  asStack_da[5] = 0xb4;
  asStack_da[6] = 0xb4;
  asStack_da[7] = 0xf0;
  asStack_da[8] = 0xb4;
  asStack_da[9] = 0xf0;
  asStack_da[10] = 100;
  uStack_bc = 3000;
  uStack_b0 = 3000;
  uStack_a8 = 3000;
  uStack_8c = 0xfa0050;
  uStack_c0 = 2000;
  uStack_ac = 2000;
  uStack_9c = 2000;
  uStack_118 = 0;
  uStack_a4 = 4000;
  uStack_98 = 5000;
  uStack_a0 = 1000;
  uStack_94 = 0x2ee;
  uStack_87 = 0x2d;
  uStack_84 = 2;
  uStack_73 = 2;
  memset(local_116,0,0x3c);
  psVar4 = local_116;
  sVar6 = 5;
  do {
    *psVar4 = sVar6;
    sVar6 = sVar6 + 5;
    psVar4 = psVar4 + 1;
  } while (asStack_da != psVar4);
  puVar5 = param_2 + 0x28;
  puVar8 = local_1f8;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar8 = *param_2;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    param_2 = param_2 + 4;
    puVar8 = puVar8 + 4;
  } while (param_2 != puVar5);
  *puVar8 = *param_2;
  FUN_ram_480e9d2e(param_1,auStack_1fc);
  return uStack_7b;
}


