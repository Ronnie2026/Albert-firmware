/* Firmware entry: 0x480523e8 */

uint FUN_ram_480523e8(char *param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6,
                     uint param_7,int param_8)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 != '\0') {
    if ((param_2 != 0) && ((byte)param_1[4] == param_3)) {
      if ((param_3 != 1) && (param_3 != 2)) {
        param_3 = (uint)(param_3 == 4) << 1;
      }
      if (((((byte)param_1[3] == param_3) && (param_4 != 0)) && (param_1[1] != '\0')) &&
         ((*(int *)(param_1 + 0x14) != 0 && ((uint)(param_8 - *(int *)(param_1 + 0x14)) < 0x12d))))
      {
        *(int *)(param_1 + 0x14) = param_8;
        uVar1 = param_5 - *(int *)(param_1 + 8);
        *(uint *)(param_1 + 0xc) = uVar1;
        if (param_3 == 1) {
          param_7 = param_6;
        }
        if (0xe10 < param_7) {
          param_7 = 0xe10;
        }
        param_7 = param_7 & 0xffff;
        if (param_7 < 10) {
          param_7 = 10;
        }
        if ((int)(((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) < (int)param_7) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        uVar1 = -(uint)((int)uVar1 < 1) | 1;
        param_1[0x10] = (char)uVar1;
        *param_1 = '\0';
        param_1[2] = '\x01';
        return uVar1;
      }
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[0x10] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = -0x80;
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = -0x80;
  }
  return 0;
}


