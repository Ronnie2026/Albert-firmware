/* Firmware entry: 0x4ff22ce0 */

byte FUN_ram_4ff22ce0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  if (*(byte *)(param_1 + 0x6c) != 0) {
    pbVar5 = (byte *)(param_1 + 0x1a);
    pbVar8 = pbVar5 + (uint)*(byte *)(param_1 + 0x6c) * 0x18;
    do {
      if (((*(int *)(pbVar5 + -0xe) == *param_2) &&
          ((pbVar5[-10] & *(byte *)((int)param_2 + 0xd)) != 0)) &&
         (uVar6 = (uint)*(byte *)(param_2 + 1), uVar6 == pbVar5[-9])) {
        if (uVar6 == 0) {
          bVar2 = 1;
LAB_ram_4ff22d7a:
          FUN_ram_4ff3ee10(param_1);
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return bVar2;
        }
        pbVar4 = (byte *)((int)param_2 + 5);
        pbVar7 = pbVar4 + uVar6;
        bVar2 = 1;
        pbVar3 = pbVar5;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          bVar2 = bVar2 & ((bVar1 ^ *pbVar3) & pbVar3[-8]) == 0;
          pbVar3 = pbVar3 + 1;
        } while (pbVar4 != pbVar7);
        if (bVar2 != 0) goto LAB_ram_4ff22d7a;
      }
      pbVar5 = pbVar5 + 0x18;
    } while (pbVar5 != pbVar8);
  }
  FUN_ram_4ff3ee10(param_1);
  return 0;
}


