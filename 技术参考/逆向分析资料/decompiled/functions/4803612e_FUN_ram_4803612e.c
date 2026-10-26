/* Firmware entry: 0x4803612e */

bool FUN_ram_4803612e(char param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((DAT_ram_4ff5c5c0 != '\0') && (DAT_ram_4ff5c5cb != '\0')) && (DAT_ram_4ff5c5d4 != 0)) &&
     ((DAT_ram_4ff5c5d4 == DAT_ram_4ff5c5cc && (iVar1 = FUN_ram_48035faa(), iVar1 != 0)))) {
    return DAT_ram_4ff5c548 == (char)(param_1 + '\x02');
  }
  return false;
}


