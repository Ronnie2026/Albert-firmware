/* Firmware entry: 0x48049778 */

void FUN_ram_48049778(char *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*param_1 != '\x05') || (*param_2 != param_1[3])) || (param_2[1] != param_1[4])) ||
     (param_2[2] != param_1[5])) {
    return;
  }
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  if (param_3 != 0) {
    cVar1 = *param_2;
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (cVar1 == '\x02') {
      param_1[0x3b] = '\0';
      FUN_ram_48048e8a(param_1,0xb);
      return;
    }
    cVar1 = (param_3 == 2) + '\t';
    if ((param_1[0x3b] == '\0') && (param_2[1] != '\x02')) {
      param_1[1] = cVar1;
      param_1[2] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x19] = '\0';
      param_1[0x30] = '\0';
      *(int *)(param_1 + 0x20) = param_4 + 3000;
      *param_1 = '\x06';
      param_1[0x3a] = '\x01';
      return;
    }
    param_1[1] = cVar1;
    if (param_1[0x33] == '\0') {
      param_1[2] = cVar1;
      param_1[0x3c] = '\x01';
      param_1[0x32] = '\x01';
    }
    else if (param_1[0x3c] == '\0') {
      param_1[2] = '\0';
      param_1[0x37] = '\x01';
    }
    else {
      param_1[0x37] = '\0';
    }
LAB_ram_4804988c:
    *param_1 = '\a';
    param_1[0x3a] = '\x01';
    return;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  if (param_2[1] == '\x02') {
    param_1[0x3b] = '\x01';
  }
  else if (param_2[1] == '\x01') {
    param_1[0x3b] = '\0';
  }
  if (*param_2 == '\x02') {
    if (param_1[0x3e] != '\0') {
      param_1[0x3e] = '\0';
      param_1[0x3a] = '\0';
      *param_1 = '\n';
      return;
    }
    if (param_1[0x37] != '\0') {
      param_1[0x37] = '\0';
      param_1[0x3c] = '\0';
      param_1[2] = '\0';
      param_1[0x19] = '\0';
      param_1[0x30] = '\0';
      if ((param_1[0x36] != '\0') && (param_1[6] == '\x02')) {
        param_1[0x34] = '\0';
        param_1[0x35] = '\0';
        param_1[0x36] = '\0';
        *param_1 = '\x03';
        param_1[0x3a] = '\x01';
        return;
      }
      param_1[0x3a] = '\0';
      *param_1 = '\f';
      return;
    }
    if (param_1[0x32] != '\0') {
      param_1[0x32] = '\0';
      param_1[0x3c] = '\0';
      param_1[2] = '\0';
      param_1[0x19] = '\0';
      param_1[0x30] = '\0';
      *(int *)(param_1 + 0x20) = param_4 + 3000;
      *param_1 = '\x06';
      param_1[0x3a] = '\x01';
      return;
    }
    cVar1 = param_1[2];
    if (cVar1 == '\0') {
      cVar1 = param_1[1];
    }
  }
  else {
    if (param_1[0x3c] == '\0') {
      if (param_2[2] == '\0') {
        *(int *)(param_1 + 0x1c) = param_4 + 0x50;
        param_1[0x19] = '\x01';
        param_1[0x30] = '\x01';
        *param_1 = '\x03';
        return;
      }
      if (param_1[0x18] != -1) {
        param_1[0x18] = param_1[0x18] + '\x01';
      }
      param_1[0x19] = '\0';
      if (param_1[0x33] == '\0') {
        *(int *)(param_1 + 0x20) = param_4 + 3000;
        *param_1 = '\x06';
        param_1[0x3a] = '\x01';
        return;
      }
      param_1[0x30] = '\0';
      param_1[0x3a] = '\0';
      *param_1 = '\f';
      return;
    }
    if (param_1[0x3b] != '\0') goto LAB_ram_4804988c;
    cVar1 = param_1[2];
  }
  FUN_ram_48048e8a(param_1,cVar1);
  return;
}


