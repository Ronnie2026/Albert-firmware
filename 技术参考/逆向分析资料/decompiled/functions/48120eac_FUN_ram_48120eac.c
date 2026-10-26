/* Firmware entry: 0x48120eac */

void FUN_ram_48120eac(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ee4,0xffffffff);
  FUN_ram_4ff45158(param_1,&DAT_ram_4ff6bf58,0xbe);
  *(bool *)(param_1 + 0xbd) = DAT_ram_4ff6e050 != 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ee4);
  return;
}


