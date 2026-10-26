/* Firmware entry: 0x481724d0 */

void FUN_ram_481724d0(byte *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 <= param_5) {
    do {
      bVar1 = (char)((byte)(-((param_4 ^ param_3) >> 1) >> 0x18) |
                    (byte)(-(param_4 ^ param_3) >> 0x18)) >> 7;
      if (param_6 != 0) {
        pbVar4 = (byte *)(param_2 + param_4);
        pbVar2 = param_1;
        do {
          pbVar3 = pbVar2 + 1;
          *pbVar2 = ~bVar1 & *pbVar4 | bVar1 & *pbVar2;
          pbVar4 = pbVar4 + 1;
          pbVar2 = pbVar3;
        } while (param_1 + param_6 != pbVar3);
      }
      param_4 = param_4 + 1;
    } while (param_4 <= param_5);
    return;
  }
  return;
}


