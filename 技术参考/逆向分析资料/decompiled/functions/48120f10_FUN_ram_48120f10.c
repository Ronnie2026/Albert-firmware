/* Firmware entry: 0x48120f10 */

undefined4 FUN_ram_48120f10(char *param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (*param_1 == '\x02') {
    if (param_1[1] != '\x04') {
      return 0;
    }
    if (param_1[2] != '\x1a') {
      return 0;
    }
  }
  else if (((*param_1 != '\x03') || (param_1[1] != '2')) || (param_1[2] != '\x1f')) {
    return 0;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ee4,0xffffffff);
  fence();
  if (((DAT_ram_4ff6e040 == 0) && (fence(), DAT_ram_4ff6e048 == 0)) && (DAT_ram_4ff6e039 == '\0')) {
    DAT_ram_4ff51e30 = *param_1;
    DAT_ram_4ff51e31 = param_1[1];
    DAT_ram_4ff51e32 = param_1[2];
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ee4);
  return uVar1;
}


