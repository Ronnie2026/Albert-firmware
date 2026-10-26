/* Firmware entry: 0x4802eb3a */

undefined4 FUN_ram_4802eb3a(void)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6df24 == 0) || (DAT_ram_4ff6df20 == 0)) {
    uVar2 = FUN_ram_480020c6(0x404);
    if (0x800000 < uVar2) {
      uVar2 = uVar2 - 0x800000;
      uVar1 = uVar2;
      if (0x8fffef < uVar2) {
        uVar1 = 0x8fffef;
      }
      uVar1 = (int)uVar1 / 0x13;
      if (18999 < uVar2) {
        do {
          DAT_ram_4ff6df24 = FUN_ram_4ff206d8(uVar1 * 0x13,0x404);
          if (DAT_ram_4ff6df24 != 0) {
            DAT_ram_4ff6df05 = 1;
            DAT_ram_4ff6df20 = uVar1;
            return 1;
          }
          uVar1 = ((uVar1 * 3) / 4000) * 1000;
          DAT_ram_4ff6df24 = 0;
        } while (999 < uVar1);
        DAT_ram_4ff6df24 = 0;
      }
    }
    DAT_ram_4ff6df20 = 2000;
    DAT_ram_4ff6df24 = FUN_ram_4ff206d8(38000,0x804);
    if (DAT_ram_4ff6df24 == 0) {
      DAT_ram_4ff6df20 = 0;
      DAT_ram_4ff6df05 = 0;
      return 0;
    }
    DAT_ram_4ff6df05 = 2;
  }
  return 1;
}


