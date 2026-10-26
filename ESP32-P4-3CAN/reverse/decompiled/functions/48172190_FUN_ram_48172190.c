/* Firmware entry: 0x48172190 */

int FUN_ram_48172190(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6,uint param_7,undefined4 param_8,uint param_9,
                    uint *param_10,uint param_11)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_7 < param_11) || (param_7 = param_7 - param_11, param_9 < param_7)) {
    iVar2 = -0x6100;
  }
  else {
    uVar1 = *(uint *)(*param_1 + 4) & 0xf000;
    if (uVar1 == 0x6000) {
      iVar2 = param_1[0xf];
      *param_10 = param_7;
      iVar2 = FUN_ram_4817da42(iVar2,param_7,param_2,param_3,param_4,param_5,param_6 + param_7,
                               param_11,param_6,param_8);
      if (iVar2 == -0x12) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return -0x6300;
      }
    }
    else {
      if (uVar1 != 0x8000) {
        return -0x6080;
      }
      iVar2 = param_1[0xf];
      *param_10 = param_7;
      iVar2 = FUN_ram_48182d4c(iVar2,param_7,param_2,param_3,param_4);
      if (iVar2 == -0xf) {
        return -0x6300;
      }
    }
  }
  return iVar2;
}


