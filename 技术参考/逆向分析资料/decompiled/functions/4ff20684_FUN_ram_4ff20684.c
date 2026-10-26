/* Firmware entry: 0x4ff20684 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff20684(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0;
  uVar3 = _DAT_ram_5012d034 >> 0x12 & 7;
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      uVar1 = uVar1 ^ uVar2;
    } while (uVar3 != 0);
    return uVar1;
  }
  return uVar1;
}


