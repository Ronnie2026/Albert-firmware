/* Firmware entry: 0x481948c4 */

void FUN_ram_481948c4(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_5 != 0) {
    iVar3 = 0;
    do {
      uVar1 = param_3 - 1U;
      if (0 < (int)(param_3 - 1U)) {
        do {
          while (uVar2 = uVar1 - 1, (1 << (uVar1 & 0x1f) & param_4) == 0) {
            uVar1 = uVar2;
            if (uVar2 == 0) goto LAB_ram_48194914;
          }
          uVar1 = uVar2;
        } while (uVar2 != 0);
      }
LAB_ram_48194914:
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}


