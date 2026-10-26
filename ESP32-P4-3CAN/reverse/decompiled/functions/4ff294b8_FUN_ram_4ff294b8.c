/* Firmware entry: 0x4ff294b8 */

/* WARNING: Removing unreachable block (ram,0x4ff29554) */

void FUN_ram_4ff294b8(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar8 = DAT_ram_4ff6e020 * 0x80;
  *(undefined4 *)(&DAT_ram_501098b0 + iVar8) = 0;
  *(undefined4 *)(&DAT_ram_501098b4 + iVar8) = 1;
  puVar6 = (undefined4 *)(&DAT_ram_501098b8 + iVar8);
  puVar4 = &DAT_ram_4ff6bd68;
  do {
    uVar9 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *puVar6 = *puVar4;
    puVar6[1] = uVar9;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    puVar4 = puVar4 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar4 != &DAT_ram_4ff6bdd8);
  pbVar5 = &DAT_ram_501098b4 + iVar8;
  uVar7 = 0x811c9dc5;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar7 = (uVar7 ^ bVar1) * 0x1000193;
  } while (pbVar5 != &DAT_ram_50109928 + iVar8);
  *(uint *)(&DAT_ram_50109928 + iVar8) = uVar7;
  *(undefined4 *)(&DAT_ram_501098b0 + iVar8) = 0x5034424c;
  return;
}


