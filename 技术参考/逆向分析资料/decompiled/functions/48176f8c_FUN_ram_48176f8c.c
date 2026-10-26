/* Firmware entry: 0x48176f8c */

int FUN_ram_48176f8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int aiStack_2c [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    iVar1 = -0x5100;
  }
  else {
    aiStack_2c[0] = 0;
    aiStack_2c[1] = 0;
    aiStack_2c[2] = 0;
    iVar1 = FUN_ram_48176b18(aiStack_2c,param_1,1);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_48176d6c(aiStack_2c,param_2,param_3), iVar1 == 0)) {
      if ((aiStack_2c[0] == 0) || (aiStack_2c[2] == 0)) {
        iVar1 = -0x5100;
      }
      else {
        iVar1 = FUN_ram_48176c62(aiStack_2c,param_4,param_5);
        if (iVar1 == 0) {
          iVar1 = FUN_ram_48176eac(aiStack_2c,param_6);
        }
      }
    }
    FUN_ram_48176a1a(aiStack_2c);
  }
  return iVar1;
}


