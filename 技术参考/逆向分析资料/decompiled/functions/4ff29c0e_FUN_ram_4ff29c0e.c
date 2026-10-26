/* Firmware entry: 0x4ff29c0e */

void FUN_ram_4ff29c0e(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar1 = DAT_ram_4ff507a8;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  uVar6 = DAT_ram_4ff507a4 + 0x10;
  do {
    if (uVar1 == DAT_ram_4ff507a4) {
      fence();
      DAT_ram_4ff507a4 = uVar1;
      return;
    }
    iVar4 = (DAT_ram_4ff507a4 & 0xf) * 0x24;
    puVar5 = (undefined4 *)(&DAT_ram_4ff507ac + iVar4);
    puVar3 = (undefined4 *)(&DAT_ram_4ff50fa8 + DAT_ram_4ff50f74 * 0x24);
    do {
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    } while (puVar5 != (undefined4 *)(&DAT_ram_4ff507d0 + iVar4));
    DAT_ram_4ff50f74 = DAT_ram_4ff50f74 + 1 & 0xf;
    if (DAT_ram_4ff50f78 < 0x10) {
      DAT_ram_4ff50f78 = DAT_ram_4ff50f78 + 1;
    }
    DAT_ram_4ff507a4 = DAT_ram_4ff507a4 + 1;
    DAT_ram_4ff50f7c = DAT_ram_4ff50f7c + 1;
  } while (DAT_ram_4ff507a4 != uVar6);
  fence();
  DAT_ram_4ff507a4 = uVar6;
  return;
}


