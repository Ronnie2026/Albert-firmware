/* Firmware entry: 0x4818403c */

int FUN_ram_4818403c(int param_1,int param_2,int param_3,int param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_24 = 0;
  iVar3 = FUN_ram_48171b10(param_1,param_1 + 0x168,0x10,param_2,&uStack_24);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x188) == '\0') {
      pbVar4 = param_5;
      pbVar5 = (byte *)(param_3 + 0x178 + param_1);
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *pbVar5 = *pbVar5 ^ bVar1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar4 != param_5 + param_4);
    }
    pbVar5 = (byte *)(param_2 + param_3);
    pbVar4 = param_6;
    do {
      bVar1 = *pbVar5;
      bVar2 = *param_5;
      pbVar5 = pbVar5 + 1;
      param_5 = param_5 + 1;
      *pbVar4 = bVar1 ^ bVar2;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != (byte *)(param_3 + param_4 + param_2));
    if (*(char *)(param_1 + 0x188) == '\x01') {
      pbVar5 = param_6 + param_4;
      pbVar4 = (byte *)(param_1 + param_3 + 0x178);
      do {
        bVar1 = *param_6;
        param_6 = param_6 + 1;
        *pbVar4 = *pbVar4 ^ bVar1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != param_6);
    }
  }
  else {
    FUN_ram_48178af2(param_2,0x10);
  }
  return iVar3;
}


