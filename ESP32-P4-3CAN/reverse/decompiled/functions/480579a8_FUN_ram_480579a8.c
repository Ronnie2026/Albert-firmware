/* Firmware entry: 0x480579a8 */

bool FUN_ram_480579a8(char *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*param_1 != '\0') && (param_1[0x6b] != '\0')) && (param_1[0x6c] != '\0')) &&
     (((param_1[0x6d] != '\0' && (param_1[0x70] != '\0')) &&
      ((param_1[0x6a] == '\0' && ((uint)(param_2 - *(int *)(param_1 + 0x2c)) < 0x1f5)))))) {
    return (uint)(param_2 - *(int *)(param_1 + 0x30)) < 0x1f5;
  }
  return false;
}


