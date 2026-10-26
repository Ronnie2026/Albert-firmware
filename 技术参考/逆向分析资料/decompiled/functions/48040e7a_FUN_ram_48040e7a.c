/* Firmware entry: 0x48040e7a */

byte FUN_ram_48040e7a(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                     int *param_7,int param_8,int param_9)

{
  byte bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*param_7 != 0) && (bVar1 = 7, param_8 != *param_7)) ||
      (((char)param_7[2] != '\0' && (bVar1 = 6, 0 < param_9 - param_7[1])))) ||
     (bVar1 = 4, param_5 == 0)) {
    return bVar1;
  }
  if (param_1 == 1) {
    if (3 < param_2) {
LAB_ram_48040eea:
      if (param_2 != 4) {
LAB_ram_48040ee2:
        return (param_3 == 0) + 2;
      }
      if (1 < param_4) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 3;
      }
      goto LAB_ram_48040ef4;
    }
    if (param_2 == 0) goto LAB_ram_48040ee2;
    if (param_3 != 0) {
      return 2;
    }
  }
  else if (param_1 == 2) {
    if (3 < param_2) goto LAB_ram_48040eea;
    if (param_2 == 0) goto LAB_ram_48040ee2;
    if (param_3 != 0) {
      return 2;
    }
  }
  else if (param_2 != 4) {
    if (param_3 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 2;
    }
    if (3 < (param_2 - 1 & 0xff)) {
      return 3;
    }
  }
  if (param_4 != 0) {
    return 3;
  }
LAB_ram_48040ef4:
  return -(param_6 == 0) & 5;
}


