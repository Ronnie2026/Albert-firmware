/* Firmware entry: 0x4ff4511a */

int FUN_ram_4ff4511a(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_ram_4ff45134;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  if (param_3 != 0) {
LAB_ram_4ff45134:
    pbVar3 = param_1 + param_3;
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != (uint)bVar2) {
        return (uint)bVar1 - (uint)bVar2;
      }
    } while (param_1 != pbVar3);
  }
  return 0;
}


