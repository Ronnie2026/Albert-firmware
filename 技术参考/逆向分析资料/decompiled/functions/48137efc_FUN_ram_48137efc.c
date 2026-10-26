/* Firmware entry: 0x48137efc */

void FUN_ram_48137efc(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e198 != 0) {
    DAT_ram_4ff6c888 = 0;
    FUN_ram_4814268a(&LAB_ram_48137b76,0);
    FUN_ram_4814268a(&LAB_ram_48137a38,0);
    FUN_ram_4814351a(DAT_ram_4ff6e198);
    DAT_ram_4ff6e198 = 0;
  }
  return;
}


