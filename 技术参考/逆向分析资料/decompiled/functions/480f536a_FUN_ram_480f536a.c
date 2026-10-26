/* Firmware entry: 0x480f536a */

undefined1 FUN_ram_480f536a(undefined4 param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  short *psVar3;
  short sVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  undefined1 auStack_20c [4];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined2 uStack_1e8;
  undefined2 uStack_1e6;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined2 uStack_1c6;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined2 uStack_1c0;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined4 uStack_1a8;
  undefined1 uStack_1a3;
  undefined4 uStack_1a0;
  undefined1 uStack_199;
  undefined4 uStack_198;
  undefined1 uStack_193;
  undefined1 uStack_18e;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 uStack_17b;
  undefined4 uStack_178;
  undefined1 uStack_173;
  undefined2 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined1 auStack_15e [29];
  undefined2 local_141 [12];
  undefined2 uStack_128;
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
  if (0x5a < (byte)(*(char *)(param_2 + 3) - 10U)) {
    return 0;
  }
  uVar2 = 0;
  if ((byte)(*(char *)(param_2 + 4) - 1U) < 7) {
    if (((((&pmpaddr56 < *(undefined **)(param_2 + 6)) ||
          (0x5a < (byte)(*(char *)(param_2 + 10) - 10U))) ||
         (6 < (byte)(*(char *)(param_2 + 0xb) - 1U))) ||
        ((4 < *(byte *)(param_2 + 0x10) || (1 < *(byte *)(param_2 + 0x11))))) ||
       ((0x5a < (byte)(*(char *)(param_2 + 0x12) - 10U) ||
        ((2 < *(byte *)(param_2 + 0x13) || (0x3e < (byte)(*(char *)(param_2 + 0x14) - 1U))))))) {
      return 0;
    }
    pbVar5 = (byte *)(param_2 + 0x19);
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 5;
      if (100 < bVar1) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    } while ((byte *)(param_2 + 0x37) != pbVar5);
    memset(auStack_20c,0,0x1ec);
    uStack_1f8 = 0x200f001;
    uStack_1d8 = 0x1f401388;
    uStack_208 = 0x1000d01;
    uStack_204 = 0xf0001;
    uStack_200 = 0x1010101;
    uStack_1fc = 0x2010101;
    uStack_1e6 = 0x82;
    uStack_1e4 = 0x10200f0;
    uStack_1dc = 0x10301;
    uStack_1aa = 0x6e;
    uStack_1a8 = 0x820079;
    uStack_1a0 = 0x2d0100;
    uStack_199 = 2;
    uStack_198 = 0x1000001;
    uStack_178 = 0x753007d0;
    uStack_16c = 0xa3c;
    uStack_168 = 0x1f40a00;
    uStack_164 = 0x960064;
    uStack_160 = 0x6405;
    uStack_1e0 = 0x10001;
    uStack_180 = 0x10001;
    uStack_18c = 0x20100;
    uStack_188 = 0x4b003e8;
    uStack_184 = 0x12c04b0;
    uStack_17b = 5;
    uStack_1a3 = 1;
    uStack_193 = 1;
    uStack_18e = 1;
    uStack_173 = 1;
    puVar6 = local_141;
    do {
      *(undefined1 *)puVar6 = 1;
      *(undefined1 *)((int)puVar6 + 1) = 0x3c;
      *(undefined1 *)(puVar6 + 1) = 0x5a;
      *(undefined1 *)((int)puVar6 + 3) = 0x9f;
      *(undefined1 *)(puVar6 + 2) = 0xe6;
      puVar6 = (undefined2 *)((int)puVar6 + 5);
    } while (puVar6 != &uStack_128);
    uStack_1f4 = DAT_ram_48222e78;
    uStack_1f0 = DAT_ram_48222e7c;
    uStack_1ec = DAT_ram_48222e80;
    uStack_1e8 = DAT_ram_48222e84;
    uStack_1d4 = DAT_ram_48222e88;
    uStack_1d0 = DAT_ram_48222e8c;
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
    uStack_b4 = 4000;
    uStack_a8 = 5000;
    uStack_9c = 0xfa0050;
    uStack_d0 = 2000;
    uStack_bc = 2000;
    uStack_ac = 2000;
    uStack_b0 = 1000;
    uStack_a4 = 0x2ee;
    uStack_97 = 0x2d;
    uStack_94 = 2;
    uStack_83 = 2;
    uStack_1cc = DAT_ram_48222e90;
    uStack_1c4 = DAT_ram_48222e9a;
    uStack_1c2 = DAT_ram_48222e9c;
    uStack_1c0 = DAT_ram_48222e9e;
    uStack_1b4 = DAT_ram_48222eac;
    uStack_1b0 = DAT_ram_48222eb0;
    uStack_1ac = DAT_ram_48222eb4;
    uStack_128 = 0;
    uStack_1c8 = DAT_ram_48222e94;
    uStack_1c6 = DAT_ram_48222e98;
    uStack_1be = DAT_ram_48222ea0;
    uStack_1bc = DAT_ram_48222ea2;
    uStack_1ba = DAT_ram_48222ea4;
    uStack_1b8 = DAT_ram_48222ea8;
    memset(local_126,0,0x3c);
    psVar3 = local_126;
    sVar4 = 5;
    do {
      *psVar3 = sVar4;
      sVar4 = sVar4 + 5;
      psVar3 = psVar3 + 1;
    } while (asStack_ea != psVar3);
    auStack_20c[0] = 6;
    uStack_8c = param_3;
    FUN_ram_4ff45158(auStack_15e,param_2,0x36);
    FUN_ram_480e9d2e(param_1,auStack_20c);
    uVar2 = uStack_8b;
  }
  return uVar2;
}


