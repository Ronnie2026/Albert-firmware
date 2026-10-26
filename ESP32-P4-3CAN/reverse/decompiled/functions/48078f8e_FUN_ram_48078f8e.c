/* Firmware entry: 0x48078f8e */

uint FUN_ram_48078f8e(uint param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    pbVar1 = param_2 + param_3;
    do {
      iVar2 = 8;
      param_1 = param_1 ^ *param_2;
      do {
        iVar2 = iVar2 + -1;
        param_1 = param_1 >> 1 ^ -(param_1 & 1) & 0xedb88320;
      } while (iVar2 != 0);
      param_2 = param_2 + 1;
    } while (param_2 != pbVar1);
  }
  return param_1;
}


