/* Firmware entry: 0x4ff3f0aa */

void FUN_ram_4ff3f0aa(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar1 = FUN_ram_4ff30526();
    if (iVar1 == 0) {
      if (DAT_ram_4ff47dac != 0) {
        uVar2 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Fatal error: TLSP deletion callback at index %d overwritten with non-excutable pointer %p\n"
                   ,uVar2,"FreeRTOS",0,*(undefined4 *)(param_1 + 0x60));
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    (**(code **)(param_1 + 0x60))(0,*(undefined4 *)(param_1 + 0x5c));
  }
  uVar4 = *(int *)(param_1 + 0x48) - 0x18U & 0xfffffff0;
  if (*(int *)(uVar4 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(uVar4 + 4);
    if (iVar1 != 0x7fffffff) {
      iVar3 = 0;
      do {
        if (param_1 == *(int *)(&DAT_ram_4ff59e80 + (iVar1 * 3 + iVar3) * 4)) {
          *(int *)(&DAT_ram_4ff59e80 + (iVar1 * 3 + iVar3) * 4) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 3);
    }
  }
  return;
}


