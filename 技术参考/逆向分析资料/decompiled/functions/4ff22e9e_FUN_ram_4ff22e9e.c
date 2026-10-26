/* Firmware entry: 0x4ff22e9e */

int FUN_ram_4ff22e9e(uint *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)((int)param_1 + 0xd);
  if (cVar1 == '\x01') {
    uVar2 = *param_1;
    if (uVar2 == 0x3fd) {
      if ((char)param_1[1] == '\b') {
        if ((*(byte *)((int)param_1 + 5) & 7) == 0) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 4;
        }
        if (2 < (*(byte *)((int)param_1 + 5) & 7)) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 1;
        }
        return 3;
      }
      if (param_2 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
    }
    else {
      if (uVar2 < 0x25a) {
        if (0x248 < uVar2) {
          return (0x14001U >> (uVar2 - 0x249 & 0x1f) & 1) + 1;
        }
        if (uVar2 == 0x145) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 2;
        }
        if (uVar2 < 0x146) {
          if (0x18 < uVar2 - 0x111) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 1;
          }
          return (0x10000a1U >> (uVar2 - 0x111 & 0x1f) & 1) + 1;
        }
        if (uVar2 < 0x187) {
          if (0x184 < uVar2) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 2;
          }
          if (uVar2 == 0x148) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 2;
          }
          return 1;
        }
        if (uVar2 == 0x229) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 2;
        }
        return 1;
      }
      if (uVar2 == 0x3f5) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 2;
      }
      if (uVar2 < 0x3f6) {
        if ((uVar2 & 0xfffffffb) == 0x399) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 2;
        }
        if (uVar2 == 0x334) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 2;
        }
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      if (uVar2 == 0x3f8) {
        return 2;
      }
    }
    return (uVar2 == 0x449) + 1;
  }
  if (param_2 == 0) {
    if (cVar1 != '\x02') goto LAB_ram_4ff22efc;
    uVar2 = *param_1;
  }
  else {
    if (cVar1 != '\x02') {
LAB_ram_4ff22efc:
      if (cVar1 != '\x04') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      uVar2 = *param_1;
      if (uVar2 == 0x30a) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 2;
      }
      if (uVar2 < 0x30b) {
        if (uVar2 == 0x255) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 2;
        }
        if (uVar2 == 0x286) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 2;
        }
        return (uVar2 == 299) + 1;
      }
      if (uVar2 == 0x370) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 3;
      }
      if (uVar2 == 0x39b) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 3;
      }
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 1;
    }
    uVar2 = *param_1;
    if (uVar2 == 0x3fd) {
      if (((char)param_1[1] == '\b') && ((*(byte *)((int)param_1 + 5) & 7) == 0)) {
        return 4;
      }
      if ((char)param_1[1] != '\b') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      if (2 < (*(byte *)((int)param_1 + 5) & 7)) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 1;
      }
      return 3;
    }
  }
  if (uVar2 == 0x679) {
    if ((char)param_1[1] == '\a') {
      return 3;
    }
    return 1;
  }
  if (uVar2 == 0x334) {
    return 2;
  }
  if (uVar2 < 0x335) {
    if (uVar2 == 0x249) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 2;
    }
    if (uVar2 < 0x24a) {
      if (uVar2 != 0x213) {
        if (0x213 < uVar2) {
          return (uVar2 == 0x229) + 1;
        }
        return (uVar2 - 0x102 < 2) + 1;
      }
    }
    else if (uVar2 != 0x273) {
      return (uVar2 == 0x31a) + 1;
    }
  }
  else {
    if (uVar2 == 0x3e3) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 2;
    }
    if (uVar2 < 0x3e4) {
      if (uVar2 != 0x3a1) {
        return (uVar2 == 0x3c2) + 1;
      }
    }
    else if (uVar2 != 0x4f3) {
      return (uVar2 == 0x678) + 1;
    }
  }
  return 2;
}


