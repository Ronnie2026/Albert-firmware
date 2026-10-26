/* Firmware entry: 0x4817f118 */

undefined4
FUN_ram_4817f118(undefined4 param_1,uint param_2,int param_3,uint *param_4,int param_5,byte *param_6
                ,byte *param_7)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 2) {
    uVar2 = *param_4;
    if (uVar2 < 0x10) {
      if (param_2 == 0) {
        if (param_3 != 0) {
          pbVar4 = param_6 + param_3;
          do {
            if (uVar2 == 0) {
              FUN_ram_4817ebf2(param_1,param_5,param_5);
            }
            bVar1 = *param_6;
            param_6 = param_6 + 1;
            *param_7 = *(byte *)(param_5 + uVar2) ^ bVar1;
            *(byte *)(param_5 + uVar2) = bVar1;
            uVar2 = uVar2 + 1 & 0xf;
            param_7 = param_7 + 1;
          } while (pbVar4 != param_6);
        }
      }
      else {
        pbVar4 = param_6 + param_3;
        if (param_3 != 0) {
          do {
            if (uVar2 == 0) {
              FUN_ram_4817ebf2(param_1,param_5,param_5);
            }
            bVar1 = *param_6;
            param_6 = param_6 + 1;
            bVar1 = *(byte *)(param_5 + uVar2) ^ bVar1;
            *param_7 = bVar1;
            *(byte *)(param_5 + uVar2) = bVar1;
            uVar2 = uVar2 + 1 & 0xf;
            param_7 = param_7 + 1;
          } while (pbVar4 != param_6);
        }
      }
      *param_4 = uVar2;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffa4;
    }
    return uVar3;
  }
  return 0xffffffa4;
}


