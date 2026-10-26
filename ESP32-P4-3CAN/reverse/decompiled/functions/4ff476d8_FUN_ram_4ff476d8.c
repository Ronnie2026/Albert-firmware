/* Firmware entry: 0x4ff476d8 */

int FUN_ram_4ff476d8(int param_1,code *param_2,code *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x10) - 4U < 2) {
    iVar1 = (*param_3)(param_1,auStack_24);
    if (iVar1 == 0) {
      param_4 = auStack_24[0] | param_4;
      if (auStack_24[0] == param_4) {
        iVar1 = 0;
      }
      else {
        (**(code **)(*(int *)(param_1 + 4) + 0x2c))(param_1,0);
        iVar1 = (*param_2)(param_1,param_4);
        iVar2 = *(int *)(param_1 + 4);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(iVar2 + 0x54))(param_1,**(undefined4 **)(iVar2 + 4));
          if (iVar1 == 0x106) {
            (**(code **)(*(int *)(param_1 + 4) + 0x2c))(param_1,1);
          }
          else if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (*param_3)(param_1,auStack_24);
          if ((iVar1 == 0) && (auStack_24[0] != param_4)) {
            iVar1 = 0x108;
          }
        }
        else {
          (**(code **)(iVar2 + 0x2c))(param_1,1);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


