/* Firmware entry: 0x4ff3609a */

int FUN_ram_4ff3609a(int param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                    undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int aiStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x68,0xffffffff);
  iVar1 = FUN_ram_4ff3549a(param_1);
  if (iVar1 == 1) {
    aiStack_34[0] = 0;
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      uVar2 = (**(code **)(param_1 + 0x14))(param_1,aiStack_34,0,param_4);
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x14))(param_1,0,param_6,param_4);
    }
    uVar3 = *(uint *)(param_1 + 8);
    *param_2 = uVar2;
    if ((uVar3 & 1) != 0) {
      if (aiStack_34[0] == 1) {
        uVar2 = (**(code **)(param_1 + 0x14))
                          (param_1,aiStack_34,0,param_5,1,*(code **)(param_1 + 0x14));
        *param_3 = uVar2;
        if (*param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("ringbuf.c",0x39d,"prvReceiveGenericFromISR","*pvItem2 < *pvItem1");
        }
        if (aiStack_34[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("ringbuf.c",0x39e,"prvReceiveGenericFromISR",
                           "xIsSplit == ( ( BaseType_t ) 0 )");
        }
      }
      else {
        *param_3 = 0;
      }
    }
  }
  FUN_ram_4ff3ee10(param_1 + 0x68);
  return iVar1;
}


