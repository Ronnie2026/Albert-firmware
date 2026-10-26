/* Firmware entry: 0x4812ec92 */

uint FUN_ram_4812ec92(uint *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == (uint *)0x0) || (param_2 == (char *)0x0)) {
    return 0xffffffff;
  }
  if (*param_2 == '\0') {
    return (uint)(param_2[1] != '\0') * 2 - 1;
  }
  if (param_2[1] != '\0') {
    uVar2 = param_1[8];
    uVar1 = *param_1;
    if (param_3 == 0) {
      if (uVar1 < uVar2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
    }
    else if (uVar2 < uVar1) {
      return 0;
    }
    return (uint)(uVar2 != uVar1);
  }
  return 0;
}


