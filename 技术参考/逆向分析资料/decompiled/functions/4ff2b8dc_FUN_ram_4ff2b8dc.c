/* Firmware entry: 0x4ff2b8dc */

int FUN_ram_4ff2b8dc(void)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint local_14 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_14[1] = DAT_ram_501091e8;
  local_14[2] = DAT_ram_501091ec;
  local_14[3] = DAT_ram_501091f0;
  local_14[4] = DAT_ram_501091f4;
  local_14[0] = DAT_ram_501091e4;
  uVar6 = 0x811c9dc5;
  puVar3 = local_14;
  do {
    uVar4 = 0;
    do {
      uVar2 = uVar4 & 0x1f;
      uVar4 = uVar4 + 8;
      uVar6 = (uVar6 ^ *puVar3 >> uVar2 & 0xff) * 0x1000193;
    } while (uVar4 != 0x20);
    puVar3 = puVar3 + 1;
  } while ((uint *)&stack0x00000000 != puVar3);
  pbVar5 = (byte *)&DAT_ram_501091f8;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar6 = (uVar6 ^ bVar1) * 0x1000193;
  } while (pbVar5 != &DAT_ram_50109239);
  return (DAT_ram_50109239 ^ uVar6) * 0x1000193;
}


