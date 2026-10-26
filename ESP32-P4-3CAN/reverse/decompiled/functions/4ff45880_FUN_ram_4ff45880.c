/* Firmware entry: 0x4ff45880 */

int FUN_ram_4ff45880(int param_1,undefined4 *param_2)

{
  int iVar1;
  int aiStack_24 [4];
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_24[0] = param_1;
  iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 8))(aiStack_24);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(aiStack_24[0] + 4) + 0x10) == 0) {
      iVar1 = 0x6005;
    }
    else if (param_2 == (undefined4 *)0x0) {
      iVar1 = 0x102;
    }
    else {
      iVar1 = (**(code **)PTR_PTR_ram_4ff53080)();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(aiStack_24[0] + 4) + 0x10))(aiStack_24[0],auStack_14);
        if (iVar1 == 0) {
          if (*(int *)(aiStack_24[0] + 0x14) == 0) {
            *(undefined4 *)(aiStack_24[0] + 0x14) = auStack_14[0];
          }
          *param_2 = auStack_14[0];
        }
        iVar1 = (**(code **)(PTR_PTR_ram_4ff53080 + 4))();
      }
    }
  }
  return iVar1;
}


