/* Firmware entry: 0x4817cedc */

void FUN_ram_4817cedc(undefined4 param_1,byte *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_40 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar2 = local_40;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  if (0xf < param_3) {
    pbVar4 = param_4;
    pbVar6 = param_2;
    pbVar5 = param_2;
    do {
      do {
        pbVar3 = pbVar4 + 1;
        *pbVar4 = *pbVar4 ^ *pbVar6;
        pbVar4 = pbVar3;
        pbVar6 = pbVar6 + 1;
      } while (pbVar3 != param_4 + 0x10);
      pbVar6 = pbVar5 + 0x10;
      FUN_ram_4817cd1e(param_1,param_4,param_4);
      pbVar4 = param_4;
      pbVar5 = pbVar6;
    } while (pbVar6 != param_2 + (param_3 - 0x10 & 0xfffffff0) + 0x10);
    param_2 = param_2 + (param_3 - 0x10 & 0xfffffff0) + 0x10;
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    FUN_ram_4ff45158(local_40,param_2,param_3);
    pbVar4 = param_4;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      *pbVar4 = *pbVar4 ^ bVar1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar2 != local_40 + 0x10);
    FUN_ram_4817cd1e(param_1,param_4,param_4);
    return;
  }
  return;
}


