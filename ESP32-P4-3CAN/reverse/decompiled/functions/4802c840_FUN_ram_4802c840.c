/* Firmware entry: 0x4802c840 */

bool FUN_ram_4802c840(void)

{
  bool bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = true;
  if (DAT_ram_4ff6dc70 == 0) {
    bVar1 = false;
    if (DAT_ram_4ff6dc78 != 0) {
      fence();
      return *(char *)(DAT_ram_4ff6dc78 + 0x3ffa) != '\0';
    }
  }
  return bVar1;
}


