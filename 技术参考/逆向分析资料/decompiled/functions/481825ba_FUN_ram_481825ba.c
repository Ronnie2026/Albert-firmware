/* Firmware entry: 0x481825ba */

int FUN_ram_481825ba(int param_1,int param_2,int param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uStack_34;
  byte abStack_30 [20];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  abStack_30[0] = 0;
  abStack_30[1] = 0;
  abStack_30[2] = 0;
  abStack_30[3] = 0;
  abStack_30[4] = 0;
  abStack_30[5] = 0;
  abStack_30[6] = 0;
  abStack_30[7] = 0;
  abStack_30[8] = 0;
  abStack_30[9] = 0;
  abStack_30[10] = 0;
  abStack_30[0xb] = 0;
  abStack_30[0xc] = 0;
  abStack_30[0xd] = 0;
  abStack_30[0xe] = 0;
  abStack_30[0xf] = 0;
  uStack_34 = 0;
  iVar3 = FUN_ram_48171b10(param_1 + 0x38,param_1 + 0x10,0x10,abStack_30,&uStack_34);
  if (iVar3 == 0) {
    pbVar5 = param_4 + param_3;
    pbVar4 = abStack_30 + param_2;
    do {
      bVar1 = *param_4;
      bVar2 = *pbVar4;
      param_4 = param_4 + 1;
      pbVar4 = pbVar4 + 1;
      *param_5 = bVar1 ^ bVar2;
      param_5 = param_5 + 1;
    } while (param_4 != pbVar5);
    FUN_ram_48178af2(abStack_30,0x10);
  }
  else {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
    FUN_ram_48178af2(abStack_30);
  }
  return iVar3;
}


