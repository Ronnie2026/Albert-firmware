/* Firmware entry: 0x481a3876 */

int FUN_ram_481a3876(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): invalid argument\n",uVar2,"gptimer",
                     "gptimer_enable",0x15c);
    return 0x102;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(int *)(param_1 + 0x2c) = 1;
    if ((*(int *)(param_1 + 0x4c) == 0) || (iVar1 = FUN_ram_4ff2d688(), iVar1 == 0)) {
      iVar1 = 0;
      if ((*(int *)(param_1 + 0x34) != 0) && (iVar1 = FUN_ram_4ff20cba(), iVar1 != 0)) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): enable interrupt service failed\n",uVar2,
                         "gptimer","gptimer_enable",0x169);
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): acquire pm_lock failed\n",uVar2,"gptimer",
                       "gptimer_enable",0x164);
    }
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): timer not in init state\n",uVar2,"gptimer",
                     "gptimer_enable",0x15f);
    iVar1 = 0x103;
  }
  return iVar1;
}


