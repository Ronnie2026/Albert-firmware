/* Firmware entry: 0x480c5ac8 */

bool FUN_ram_480c5ac8(int *param_1,char *param_2,int param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar2 = '\0';
  if (((*(char *)((int)param_1 + 0x4d) == '\x05') && (cVar2 = param_2[0x94], cVar2 == '\0')) &&
     (cVar2 = param_2[0x96], cVar2 == '\0')) {
    cVar2 = param_2[0x97];
  }
  if ((*(char *)((int)param_1 + 0x1e5) == '\0') && (param_2[1] == '\f')) {
    if ((char)param_1[0x51] == '\0') {
      return false;
    }
    iVar1 = param_1[0x52];
  }
  else {
    if ((char)param_1[0x5d] == '\0') {
      return false;
    }
    iVar1 = param_1[0x5e];
  }
  if (((iVar1 != 0) && ((uint)(param_3 - iVar1) < 0xfb)) &&
     (fence(), (*(uint *)param_1[3] >> 0x10 & 3) == 1)) {
    if (*param_4 == '\x02') {
      return true;
    }
    if ((*param_2 != '\0') &&
       ((((param_2[2] != '\0' || (*(char *)((int)param_1 + 0x4d) == '\x04')) || (cVar2 != '\0')) ||
        ((param_2[0x98] != '\0' && (*(char *)((int)param_1 + 0x4d) == '\x06')))))) {
      iVar1 = *(int *)(*param_1 + 0x7c64);
      if ((iVar1 != 0) &&
         (((uint)(param_3 - iVar1) < 0x1f5 && (*(char *)(*param_1 + 0x7c58) == '\x02')))) {
        if ((char)param_1[0x5f] == '\0') {
          return (bool)*param_2;
        }
        if (param_1[0x60] == 0) {
          return (bool)(char)param_1[0x5f];
        }
        return 0xfa < (uint)(param_3 - param_1[0x60]);
      }
    }
  }
  return false;
}


