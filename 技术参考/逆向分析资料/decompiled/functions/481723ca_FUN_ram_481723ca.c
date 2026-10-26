/* Firmware entry: 0x481723ca */

byte FUN_ram_481723ca(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    pbVar4 = param_1 + param_3;
    bVar3 = 0;
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar3 = bVar3 | bVar1 ^ bVar2;
    } while (param_1 != pbVar4);
    return bVar3;
  }
  return 0;
}


