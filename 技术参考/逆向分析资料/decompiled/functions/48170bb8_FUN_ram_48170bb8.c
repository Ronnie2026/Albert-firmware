/* Firmware entry: 0x48170bb8 */

int FUN_ram_48170bb8(int *param_1)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1[0x1f];
  if ((*(char *)(*param_1 + 9) == '\0') && (param_1[5] != 0)) {
    if (iVar2 != 0x16) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x7700;
    }
  }
  else if (iVar2 != 0x16) goto joined_r0x48170bd6;
  iVar2 = FUN_ram_48170aa0(param_1);
  if (iVar2 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar2;
  }
  iVar2 = param_1[0x1f];
joined_r0x48170bd6:
  if (iVar2 == 0x14) {
    if ((param_1[0x20] == 1) && (*(char *)param_1[0x1d] == '\x01')) {
      return 0;
    }
  }
  else {
    if (iVar2 != 0x15) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (param_1[0x20] == 2) {
      cVar1 = *(char *)param_1[0x1d];
      if (cVar1 == '\x02') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return -0x7780;
      }
      if (cVar1 != '\x01') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return -0x6680;
      }
      cVar1 = ((char *)param_1[0x1d])[1];
      if (cVar1 == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return -0x7880;
      }
      if (cVar1 == 'd') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x6680;
    }
  }
  return -0x7200;
}


