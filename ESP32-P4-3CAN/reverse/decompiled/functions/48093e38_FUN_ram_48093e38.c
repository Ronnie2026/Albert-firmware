/* Firmware entry: 0x48093e38 */

char FUN_ram_48093e38(int param_1,int param_2)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0x14) != '\x01') || (*(char *)(param_1 + 0x846) == '\0')) {
    return '\0';
  }
  cVar1 = *(char *)(param_1 + 0x5b4);
  if ((cVar1 == '\0') || (2000 < (uint)(param_2 - *(int *)(param_1 + 0x5a8)))) {
    if (*(char *)(param_1 + 0x5d6) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if (*(char *)(param_1 + 0x5d7) != '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if ((*(uint *)(param_1 + 0x5b8) & 0xffffff) >> 8 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if (*(char *)(param_1 + 0x5da) == '\x04') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if (*(int *)(param_1 + 0x5cc) != *(int *)(param_1 + 0x2e7c)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if ((*(char *)(param_1 + 0x5d4) != '\0') && (0 < param_2 - *(int *)(param_1 + 0x5d0))) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if (*(int *)(param_1 + 0x5c0) != *(int *)(param_1 + 0x58c)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    if (*(int *)(param_1 + 0x5c4) != *(int *)(param_1 + 0x840)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return '\0';
    }
    cVar1 = *(char *)(param_1 + 0x844);
  }
  return cVar1;
}


