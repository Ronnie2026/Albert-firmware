/* Firmware entry: 0x4817da42 */

int FUN_ram_4817da42(int param_1,size_t param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,byte *param_7,int param_8,
                    undefined4 param_9,void *param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x184) != 0) {
    iVar4 = FUN_ram_48184b86(*(int *)(param_1 + 0x184));
    return iVar4;
  }
  pbVar5 = local_30;
  iVar4 = FUN_ram_4817d7cc(param_1,0,param_2,param_3,param_4,param_5,param_6,param_9,param_10,
                           param_8,pbVar5);
  if ((iVar4 == 0) && (param_8 != 0)) {
    pbVar6 = pbVar5 + param_8;
    bVar3 = 0;
    do {
      bVar1 = *param_7;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      param_7 = param_7 + 1;
      bVar3 = bVar3 | bVar1 ^ bVar2;
    } while (pbVar5 != pbVar6);
    iVar4 = 0;
    if (bVar3 != 0) {
      memset(param_10,0,param_2);
      iVar4 = -0x12;
    }
  }
  return iVar4;
}


