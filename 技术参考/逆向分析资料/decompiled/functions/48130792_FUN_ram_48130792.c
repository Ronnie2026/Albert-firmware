/* Firmware entry: 0x48130792 */

void FUN_ram_48130792(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  if (DAT_ram_4ff47dac != 0) {
    uVar1 = FUN_ram_4ff44d14();
    ets_printf("E (%lu) %s: Aborting.\n",uVar1,"task_wdt");
  }
  FUN_ram_4ff38020(6);
  uVar1 = FUN_ram_4ff3d9a8();
  iVar2 = FUN_ram_4ff3ea14(uVar1,&uStack_1c);
  uVar1 = uStack_18;
  if (iVar2 == 1) {
    DAT_ram_4ff6e11c = 1;
    DAT_ram_4ff6d95c = 1;
    if (param_1 == 0) {
      if (DAT_ram_4ff47dac != 0) {
        uVar3 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Print CPU %d registers\n",uVar3,"task_wdt",mhartid);
        FUN_ram_4ff205e0(uVar1);
        return;
      }
    }
    else if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Print CPU %d (current core) registers\n",uVar3,"task_wdt",mhartid);
      FUN_ram_4ff205e0(uVar1);
      return;
    }
    FUN_ram_4ff205e0(uStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("task_wdt.c",0x17e,"task_wdt_timeout_abort","ret == pdTRUE");
}


