/* Firmware entry: 0x481720fe */

undefined4
FUN_ram_481720fe(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,int param_8,uint param_9,
                int *param_10,int param_11)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_9 < (uint)(param_7 + param_11)) {
    uVar2 = 0xffff9f00;
  }
  else {
    uVar3 = *(uint *)(*param_1 + 4) & 0xf000;
    if (uVar3 == 0x6000) {
      iVar1 = param_1[0xf];
      *param_10 = param_7;
      uVar2 = FUN_ram_4817d7cc(iVar1,1,param_7,param_2,param_3,param_4,param_5,param_6,param_8,
                               param_11,param_8 + param_7);
    }
    else if (uVar3 == 0x8000) {
      iVar1 = param_1[0xf];
      *param_10 = param_7;
      uVar2 = FUN_ram_48182ce2(iVar1,param_7,param_2,param_3,param_4,param_5,param_6,param_8,
                               param_8 + param_7,param_11);
    }
    else {
      uVar2 = 0xffff9f80;
    }
    *param_10 = *param_10 + param_11;
  }
  return uVar2;
}


