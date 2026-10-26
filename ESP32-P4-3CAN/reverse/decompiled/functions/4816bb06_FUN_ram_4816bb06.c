/* Firmware entry: 0x4816bb06 */

uint FUN_ram_4816bb06(int param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x40) + 0x24);
    if (uVar2 != 0) {
      puVar1 = (ushort *)(*(int *)(param_1 + 0x40) + 0x26);
      do {
        if ((((uVar2 >> 8) - 1 & 0xff) < 6) && (param_2 == (uVar2 & 0xff))) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return uVar2 >> 8;
        }
        uVar2 = (uint)*puVar1;
        puVar1 = puVar1 + 1;
      } while (uVar2 != 0);
    }
  }
  return 0;
}


