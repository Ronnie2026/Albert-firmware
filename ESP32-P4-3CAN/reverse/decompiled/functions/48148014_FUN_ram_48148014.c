/* Firmware entry: 0x48148014 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48148014(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar2 = (byte *)(param_1 + 0x4c);
  pbVar3 = (byte *)(param_1 + 0x94);
  while ((((bVar1 = *pbVar3, pbVar3 = pbVar3 + 1, (bVar1 & 0x10) == 0 ||
           (_DAT_ram_4ff6cde0 != *(int *)pbVar2)) || (DAT_ram_4ff6cde4 != *(int *)(pbVar2 + 4))) ||
         (((DAT_ram_4ff6cde8 != *(int *)(pbVar2 + 8) || (DAT_ram_4ff6cdec != *(int *)(pbVar2 + 0xc))
           ) || (DAT_ram_4ff6cdf0 != pbVar2[0x10]))))) {
    pbVar2 = pbVar2 + 0x18;
    if (pbVar2 == (byte *)(param_1 + 0x94)) {
      return 0;
    }
  }
  return 1;
}


