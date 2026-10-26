/* Firmware entry: 0x480dcc76 */

void FUN_ram_480dcc76(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_148 [14];
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined2 uStack_102;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  byte bStack_f7;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [68];
  undefined1 uStack_a8;
  undefined1 uStack_7e;
  undefined1 uStack_77;
  undefined1 uStack_5c;
  undefined1 uStack_4f;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = param_1 + 4;
  puVar3 = param_1 + 0x2d4;
  do {
    puVar1 = local_148;
    puVar8 = &DAT_ram_48222eb8;
    do {
      puVar7 = puVar1;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      puVar8 = puVar8 + 4;
      puVar1 = puVar7 + 4;
    } while (puVar8 != &DAT_ram_48222ee8);
    puVar7[5] = DAT_ram_48222eec;
    puVar7[4] = DAT_ram_48222ee8;
    FUN_ram_4ff3ec14(puVar3,0xffffffff);
    if (*(char *)(puVar2 + 0x3a) == '\x04') {
      FUN_ram_4ff45158(local_148,puVar2 + 0x2a,0x35);
      memset(auStack_ec,0,0xcc);
      bStack_f7 = bStack_f7 & 0xfc;
      uStack_10c = 8;
      uStack_5c = 8;
      uStack_f6 = 1;
      uStack_7e = 1;
      uStack_110 = 0;
      uStack_10b = 0;
      uStack_10a = 0;
      uStack_109 = 0;
      uStack_108 = 0;
      uStack_107 = 0;
      uStack_106 = 0;
      uStack_105 = 0;
      uStack_104 = 0;
      uStack_103 = 0;
      uStack_102 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_a8 = 0xff;
      uStack_77 = 0xff;
      uStack_4f = 0xff;
      FUN_ram_4ff45158(puVar2,&uStack_110,0xea);
      FUN_ram_4ff3ee10(puVar3);
      FUN_ram_480dc4f2(*param_1,local_148);
    }
    else {
      FUN_ram_4ff3ee10(puVar3);
    }
    puVar2 = puVar2 + 0x3c;
  } while (puVar2 != puVar3);
  return;
}


