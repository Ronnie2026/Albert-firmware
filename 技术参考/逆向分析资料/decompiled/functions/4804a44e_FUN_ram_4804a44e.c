/* Firmware entry: 0x4804a44e */

bool FUN_ram_4804a44e(char *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[0x128] == '\0') {
    return false;
  }
  if (((((char)*param_2 == '\0') || (param_2[1] != *(uint *)(param_1 + 0xb0))) ||
      (param_2[1] != *(uint *)(param_1 + 0x108))) ||
     ((param_2[2] != *(uint *)(param_1 + 0x10c) || (param_2[3] != *(uint *)(param_1 + 0x110))))) {
    return false;
  }
  if (0xff < (*param_2 ^ *(uint *)(param_1 + 0x104))) {
    return false;
  }
  if (param_2[5] != *(uint *)(param_1 + 0x118)) {
    return false;
  }
  if (((param_2[6] ^ *(uint *)(param_1 + 0x11c)) & 0xffff) != 0) {
    return false;
  }
  iVar1 = FUN_ram_4ff4511a((char *)((int)param_2 + 0x1a),param_1 + 0x11e,8);
  if (iVar1 != 0) {
    return false;
  }
  if (*(char *)((int)param_2 + 2) == '\0') {
    iVar1 = FUN_ram_48031012(param_4);
    if (iVar1 == 0) {
      return false;
    }
    if (param_1[0xa0] == '\x02') {
      if (*param_1 == '\0') {
        return false;
      }
      iVar1 = FUN_ram_4804a410(param_1,param_3);
      if (iVar1 == 0) {
        return false;
      }
    }
  }
  else {
    if (*(char *)(param_4 + 1) == '\0') {
      return false;
    }
    if (*(char *)(param_4 + 2) == '\0') {
      return false;
    }
    if (*(char *)(param_4 + 4) != '\0') {
      return false;
    }
    if (*(char *)(param_4 + 7) != '\0') {
      return false;
    }
    if (*(char *)(param_4 + 8) == '\0') {
      return false;
    }
  }
  if ((*(byte *)((int)param_2 + 3) < 0xe) &&
     ((0x206eU >> (*(byte *)((int)param_2 + 3) & 0x1f) & 1) != 0)) {
    return (bool)param_1[0x50];
  }
  if (param_1[0x2c] == '\0') {
    return false;
  }
  return (uint)(param_3 - *(int *)(param_1 + 0x30)) < 0x12d;
}


