/* Firmware entry: 0x48049638 */

void FUN_ram_48049638(char *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*param_1 == '\x04') && (param_1[3] == *param_2)) && (param_1[4] == param_2[1])) {
    if (param_2[2] == param_1[5]) {
      if (param_3 != 0) {
        if (((param_1[0x33] != '\0') && (param_1[3] == '\x01')) && (param_1[4] == '\x02')) {
          param_1[0x34] = '\x01';
          param_1[0x35] = '\0';
          param_1[0x36] = '\0';
          param_1[0x37] = '\0';
        }
        *param_1 = '\x05';
        return;
      }
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      cVar1 = *param_2;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      if (cVar1 == '\x02') {
        param_1[2] = '\0';
        param_1[0x30] = '\0';
        param_1[0x34] = '\0';
        param_1[0x35] = '\0';
        param_1[0x36] = '\0';
        param_1[0x37] = '\0';
        param_1[0x3a] = '\0';
        param_1[0x3b] = '\0';
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x19] = '\0';
        param_1[0] = '\t';
        param_1[1] = '\v';
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
        param_1[0x39] = '\x01';
        return;
      }
      cVar1 = param_1[0x3b];
      if (cVar1 != '\0') {
        cVar2 = '\b';
        param_1[1] = '\b';
        if (param_1[0x33] == '\0') {
          param_1[0x32] = '\x01';
        }
        else {
          param_1[0x37] = '\x01';
          cVar2 = '\0';
          cVar1 = '\0';
        }
        param_1[0x3c] = cVar1;
        param_1[2] = cVar2;
        *param_1 = '\a';
        param_1[0x3a] = '\x01';
        return;
      }
      if (param_1[0x33] != '\0') {
        if ((param_1[0x3c] != '\0') && (param_1[2] != '\0')) {
          FUN_ram_48048e8a();
          return;
        }
        param_1[2] = '\0';
        param_1[0x3c] = '\0';
        param_1[0x19] = '\0';
        param_1[0x30] = '\0';
        param_1[0] = '\x03';
        param_1[1] = '\b';
        param_1[0x3a] = '\x01';
        return;
      }
      param_1[2] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x19] = '\0';
      param_1[0x30] = '\0';
      *(int *)(param_1 + 0x20) = param_4 + 3000;
      param_1[0] = '\x06';
      param_1[1] = '\b';
      param_1[0x3a] = '\x01';
      return;
    }
  }
  return;
}


