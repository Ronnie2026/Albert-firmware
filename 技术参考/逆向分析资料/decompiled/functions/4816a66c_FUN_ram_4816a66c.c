/* Firmware entry: 0x4816a66c */

uint FUN_ram_4816a66c(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(*param_1 + 0xc);
  uVar2 = 0x400;
  if (((cVar1 != '\x02') && (uVar2 = 0x800, cVar1 != '\x03')) && (uVar2 = 0x200, cVar1 != '\x01')) {
    uVar2 = 0x1000;
  }
  if ((char *)param_1[0xd] != (char *)0x0) {
    cVar1 = *(char *)param_1[0xd];
    if (cVar1 == '\x02') {
      if (0x400 < uVar2) {
        uVar2 = 0x400;
      }
    }
    else if (cVar1 == '\x03') {
      if (0x800 < uVar2) {
        uVar2 = 0x800;
      }
    }
    else if (cVar1 == '\x01') {
      uVar2 = 0x200;
    }
  }
  if ((char *)param_1[0xf] != (char *)0x0) {
    cVar1 = *(char *)param_1[0xf];
    if (cVar1 == '\x02') {
      if (0x400 < uVar2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x400;
      }
    }
    else {
      if (cVar1 == '\x03') {
        if (0x800 < uVar2) {
          return 0x800;
        }
        return uVar2;
      }
      if (cVar1 == '\x01') {
        return 0x200;
      }
    }
  }
  return uVar2;
}


