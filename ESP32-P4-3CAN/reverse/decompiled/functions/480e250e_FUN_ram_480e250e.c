/* Firmware entry: 0x480e250e */

undefined4 FUN_ram_480e250e(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  short sVar9;
  undefined4 *puVar10;
  char cVar11;
  short *psVar12;
  uint uVar13;
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
  piVar3 = param_1 + 0x2d4;
  cVar11 = '\f';
  do {
    psVar12 = *(short **)(*param_1 + 0x33ec);
    if (psVar12 != (short *)0x0) {
      sVar9 = *psVar12;
      if (sVar9 == 0) {
        return 0;
      }
      if (*(code **)(psVar12 + 2) != (code *)0x0) {
        iVar4 = (**(code **)(psVar12 + 2))();
        if (*(uint *)(psVar12 + 6) <= (uint)(iVar4 - *(int *)(psVar12 + 4))) {
          return 0;
        }
        sVar9 = *psVar12;
      }
      *psVar12 = sVar9 + -1;
    }
    uVar13 = (uint)*(byte *)(param_1 + 0x2dc);
    *(char *)(param_1 + 0x2dc) = (char)(uVar13 + 1) + (char)((uVar13 + 1) / 0xc) * -0xc;
    puVar1 = local_148;
    puVar2 = &DAT_ram_48222eb8;
    do {
      puVar10 = puVar2;
      puVar8 = puVar1;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *puVar8 = *puVar10;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar1 = puVar8 + 4;
      puVar2 = puVar10 + 4;
    } while (puVar10 + 4 != &DAT_ram_48222ee8);
    uVar5 = puVar10[5];
    puVar8[4] = DAT_ram_48222ee8;
    puVar8[5] = uVar5;
    if (uVar13 < 0xc) {
      FUN_ram_4ff3ec14(piVar3,0xffffffff);
      if ((char)param_1[uVar13 * 0x3c + 0x3e] == '\x04') {
        FUN_ram_4ff45158(local_148,param_1 + uVar13 * 0x3c + 4 + 0x2a,0x35);
        memset(auStack_ec,0,0xcc);
        bStack_f7 = bStack_f7 & 0xfc;
        uStack_10c = 8;
        uStack_5c = 8;
        uStack_a8 = 0xff;
        uStack_77 = 0xff;
        uStack_4f = 0xff;
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
        uStack_f6 = 1;
        uStack_7e = 1;
        FUN_ram_4ff45158(param_1 + uVar13 * 0x3c + 4,&uStack_110,0xea);
        FUN_ram_4ff3ee10(piVar3);
        FUN_ram_480dc4f2(*param_1,local_148);
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      FUN_ram_4ff3ee10(piVar3);
    }
    cVar11 = cVar11 + -1;
  } while (cVar11 != '\0');
  return 0;
}


