/* Firmware entry: 0x48165e18 */

void FUN_ram_48165e18(undefined4 param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&DAT_ram_4ff533c0,0,0x100);
  DAT_ram_4ff533c0 = 8;
  DAT_ram_4ff4bacc = param_2 + 0xfff >> 0xc;
  DAT_ram_4ff4bac8 = 0;
  DAT_ram_4ff4bac0 = param_1;
  DAT_ram_4ff4bac4 = param_2;
  FUN_ram_481637ca(4);
  puVar1 = DAT_ram_4ff4ba24;
  DAT_ram_4ff4ba24[8] = param_2;
  puVar1[7] = puVar1[7] & 0xffff0000 | param_3 & 0xffff;
  puVar1[0x22] = (uint)&DAT_ram_4ff533c0;
  *puVar1 = *puVar1 | 0x20;
  *puVar1 = *puVar1 | 0x2000000;
  puVar1[0x20] = puVar1[0x20] | 0x80;
  puVar1[0x20] = puVar1[0x20] | 2;
  puVar1[0x21] = 1;
  return;
}


