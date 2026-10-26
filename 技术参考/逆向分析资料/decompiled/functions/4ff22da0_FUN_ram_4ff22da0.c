/* Firmware entry: 0x4ff22da0 */

byte FUN_ram_4ff22da0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  bVar1 = *(byte *)(param_1 + 0x6d);
  bVar9 = bVar1;
  if (bVar1 == 0) {
LAB_ram_4ff22e48:
    FUN_ram_4ff3ee10(param_1);
  }
  else {
    if (*(byte *)(param_1 + 0x6c) != 0) {
      pbVar6 = (byte *)(param_1 + 0x1a);
      pbVar3 = pbVar6 + (uint)*(byte *)(param_1 + 0x6c) * 0x18;
      do {
        if (((*(int *)(pbVar6 + -0xe) == *param_2) &&
            ((pbVar6[-10] & *(byte *)((int)param_2 + 0xd)) != 0)) &&
           (uVar7 = (uint)*(byte *)(param_2 + 1), uVar7 == pbVar6[-9])) {
          bVar9 = bVar1;
          if (uVar7 == 0) goto LAB_ram_4ff22e48;
          pbVar5 = (byte *)((int)param_2 + 5);
          pbVar8 = pbVar5 + uVar7;
          pbVar4 = pbVar6;
          do {
            bVar2 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            bVar9 = bVar9 & ((bVar2 ^ *pbVar4) & pbVar4[-8]) == 0;
            pbVar4 = pbVar4 + 1;
          } while (pbVar5 != pbVar8);
          if (bVar9 != 0) goto LAB_ram_4ff22e48;
        }
        pbVar6 = pbVar6 + 0x18;
      } while (pbVar6 != pbVar3);
    }
    FUN_ram_4ff3ee10(param_1);
    bVar9 = 0;
  }
  return bVar9;
}


