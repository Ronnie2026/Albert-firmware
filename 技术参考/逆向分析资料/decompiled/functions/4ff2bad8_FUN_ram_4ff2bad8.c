/* Firmware entry: 0x4ff2bad8 */

uint FUN_ram_4ff2bad8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  uint local_18 [6];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_18[2] = DAT_ram_5010924c;
  local_18[3] = DAT_ram_50109250;
  local_18[1] = DAT_ram_50109248;
  local_18[4] = DAT_ram_50109254;
  local_18[5] = DAT_ram_50109258;
  local_18[0] = DAT_ram_50109244;
  uVar3 = 0x811c9dc5;
  puVar6 = local_18;
  do {
    uVar4 = 0;
    do {
      uVar2 = uVar4 & 0x1f;
      uVar4 = uVar4 + 8;
      uVar3 = (uVar3 ^ *puVar6 >> uVar2 & 0xff) * 0x1000193;
    } while (uVar4 != 0x20);
    puVar6 = puVar6 + 1;
  } while (puVar6 != (uint *)&stack0x00000000);
  pbVar5 = (byte *)&DAT_ram_5010925c;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar3 = (uVar3 ^ bVar1) * 0x1000193;
  } while (pbVar5 != (byte *)0x5010929d);
  return uVar3;
}


