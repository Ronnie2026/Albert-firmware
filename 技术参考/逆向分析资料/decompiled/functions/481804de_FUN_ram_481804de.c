/* Firmware entry: 0x481804de */

int FUN_ram_481804de(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = *(short *)(param_2 + 4);
  if ((int)*(short *)(param_3 + 4) * (int)sVar1 * param_4 < 0) {
    iVar2 = FUN_ram_481801be(param_2,param_3);
    if (iVar2 == -1) {
      iVar2 = FUN_ram_481803f0(param_1,param_3,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(short *)(param_1 + 4) = -sVar1;
      return 0;
    }
    iVar3 = FUN_ram_481803f0(param_1,param_2,param_3);
    if (iVar3 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar3;
    }
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 4) = 1;
    }
    else {
      *(short *)(param_1 + 4) = sVar1;
    }
  }
  else {
    iVar2 = FUN_ram_48180316();
    if (iVar2 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -0x10;
    }
    *(short *)(param_1 + 4) = sVar1;
  }
  return 0;
}


