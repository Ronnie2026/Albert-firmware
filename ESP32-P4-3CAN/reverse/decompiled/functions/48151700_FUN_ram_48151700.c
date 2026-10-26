/* Firmware entry: 0x48151700 */

void FUN_ram_48151700(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4813a81c((char)param_1[4]);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 1) = 0xf5;
    if (((uint *)*param_1)[2] != 0) {
      uVar3 = *(uint *)*param_1;
      if ((uVar3 & 0xf0) == 0x20) {
        if ((uVar3 & 8) == 0) {
          if (param_1[5] == 0) {
            uVar1 = FUN_ram_48146cf6();
            *(undefined1 *)(param_1 + 1) = uVar1;
          }
          else {
            uVar1 = FUN_ram_48146e52(iVar2,param_1[2]);
            *(undefined1 *)(param_1 + 1) = uVar1;
          }
        }
        else if (param_1[5] == 0) {
          uVar1 = FUN_ram_48149e44();
          *(undefined1 *)(param_1 + 1) = uVar1;
        }
        else {
          uVar1 = FUN_ram_48149f9a();
          *(undefined1 *)(param_1 + 1) = uVar1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0xfa;
      }
    }
    FUN_ram_4814e3a4(param_1[9]);
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0xf4;
  FUN_ram_4814e3a4(param_1[9]);
  return;
}


