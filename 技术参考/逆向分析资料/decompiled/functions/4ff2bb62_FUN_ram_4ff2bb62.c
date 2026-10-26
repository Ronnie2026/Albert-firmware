/* Firmware entry: 0x4ff2bb62 */

void FUN_ram_4ff2bb62(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_50109240 = 0;
  puVar1 = &DAT_ram_50109244;
  puVar2 = &DAT_ram_4ff6bfb4;
  do {
    puVar7 = puVar2;
    puVar6 = puVar1;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar1 = puVar6 + 4;
    puVar2 = puVar7 + 4;
  } while (puVar7 + 4 != (undefined4 *)0x4ff6c004);
  uVar3 = puVar7[5];
  uVar4 = puVar7[6];
  puVar6[4] = uRam4ff6c004;
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  DAT_ram_501092a0 = FUN_ram_4ff2bad8();
  fence();
  DAT_ram_50109240 = 0x50344631;
  return;
}


