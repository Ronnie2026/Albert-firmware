/* Firmware entry: 0x48040c40 */

undefined1 FUN_ram_48040c40(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)((int)param_1 + 0xd);
  if (cVar1 == '\x01') {
    uVar2 = 0;
    if ((*param_1 == 0x3fd) && ((char)param_1[1] != '\0')) {
      uVar2 = 2;
      bVar3 = *(byte *)((int)param_1 + 5) & 7;
      if ((bVar3 != 1) && (uVar2 = 3, bVar3 != 2)) {
        return (*(byte *)((int)param_1 + 5) & 7) == 0;
      }
    }
  }
  else if (cVar1 == '\x02') {
    if (*param_1 != 0x3c2) {
      if (*param_1 != 0x679) {
        return false;
      }
      return 7;
    }
    uVar2 = 0;
    if ((char)param_1[1] != '\0') {
      return ((*(byte *)((int)param_1 + 5) & 3) == 1) << 2;
    }
  }
  else {
    uVar2 = 0;
    if (cVar1 == '\x04') {
      if (*param_1 == 0x370) {
        return 5;
      }
      if (*param_1 == 0x30a) {
        return 6;
      }
    }
  }
  return uVar2;
}


