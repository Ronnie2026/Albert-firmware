/* Firmware entry: 0x4802e260 */

void FUN_ram_4802e260(uint param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = __ctzsi2();
  (&DAT_ram_4ff5ca60)[iVar1] = (&DAT_ram_4ff5ca60)[iVar1] + 1;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | param_1;
  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
  return;
}


