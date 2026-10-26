/* Firmware entry: 0x4814a25a */

void FUN_ram_4814a25a(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/nd6.c",0x579,"nd6_send_na",
                     "target address is required");
  }
  uVar14 = *(byte *)(param_1 + 0xe6) + 2;
  iVar15 = (uint)((uVar14 & 7) != 0) + ((int)uVar14 >> 3);
  iVar13 = FUN_ram_4813ad9a(0x36,iVar15 * 8 + 0x18,0x280);
  if (iVar13 != 0) {
    puVar11 = *(undefined1 **)(iVar13 + 4);
    puVar11[1] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    *puVar11 = 0x88;
    puVar11[4] = (byte)param_3 & 0xf0;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    puVar11[8] = *param_2;
    uVar10 = param_2[10];
    puVar11[2] = 0;
    puVar11[9] = uVar1;
    puVar11[10] = uVar2;
    puVar11[3] = 0;
    uVar1 = param_2[0xb];
    puVar11[0xb] = uVar3;
    puVar11[0xc] = uVar4;
    puVar11[0xd] = uVar5;
    puVar11[0xe] = uVar6;
    puVar11[0xf] = uVar7;
    puVar11[0x10] = uVar8;
    puVar11[0x11] = uVar9;
    puVar11[0x12] = uVar10;
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    uVar4 = param_2[0xe];
    uVar5 = param_2[0xf];
    puVar11[0x13] = uVar1;
    puVar11[0x14] = uVar2;
    puVar11[0x18] = 2;
    puVar11[0x15] = uVar3;
    puVar11[0x16] = uVar4;
    puVar11[0x17] = uVar5;
    puVar11[0x19] = (char)iVar15;
    FUN_ram_4ff45158(puVar11 + 0x1a,param_1 + 0xe0,*(undefined1 *)(param_1 + 0xe6));
    if (param_3 == 0x22) {
      DAT_ram_4ff6d068 = *(char *)(param_1 + 0xea) + '\x01';
      DAT_ram_4ff6d05c = 0;
      DAT_ram_4ff6d060 = 0;
      puVar16 = &DAT_ram_4ff6d058;
      DAT_ram_4ff6d058 = 0x2ff;
      DAT_ram_4ff6d064 = 0x1000000;
    }
    else {
      puVar16 = &DAT_ram_4ff6cdc8;
    }
    uVar12 = FUN_ram_481519fc(iVar13,0x3a,*(undefined2 *)(iVar13 + 10),param_2,puVar16);
    puVar11[2] = (char)uVar12;
    puVar11[3] = (char)((ushort)uVar12 >> 8);
    FUN_ram_48149080(iVar13,param_2,puVar16,0xff,0,0x3a,param_1);
    FUN_ram_4813ac74(iVar13);
    return;
  }
  return;
}


