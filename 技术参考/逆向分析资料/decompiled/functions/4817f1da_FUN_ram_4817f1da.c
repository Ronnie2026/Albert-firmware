/* Firmware entry: 0x4817f1da */

undefined4
FUN_ram_4817f1da(undefined4 param_1,int param_2,uint *param_3,char *param_4,int param_5,
                byte *param_6,byte *param_7)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = *param_3;
  if (uVar5 < 0x10) {
    if (param_2 != 0) {
      pbVar7 = param_6 + param_2;
      do {
        if (uVar5 == 0) {
          FUN_ram_4817ebf2(param_1,param_4,param_5);
          pcVar4 = param_4 + 0xf;
          do {
            cVar3 = *pcVar4;
            *pcVar4 = cVar3 + '\x01';
            if (cVar3 != -1) break;
            bVar1 = param_4 != pcVar4;
            pcVar4 = pcVar4 + -1;
          } while (bVar1);
        }
        bVar2 = *param_6;
        param_6 = param_6 + 1;
        *param_7 = *(byte *)(param_5 + uVar5) ^ bVar2;
        uVar5 = uVar5 + 1 & 0xf;
        param_7 = param_7 + 1;
      } while (pbVar7 != param_6);
    }
    *param_3 = uVar5;
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffa4;
  }
  return uVar6;
}


