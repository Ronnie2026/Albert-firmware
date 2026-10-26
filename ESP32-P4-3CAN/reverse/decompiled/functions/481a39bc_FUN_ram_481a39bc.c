/* Firmware entry: 0x481a39bc */

int FUN_ram_481a39bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) == 1) {
      *(int *)(param_1 + 0x2c) = 0;
      if ((*(int *)(param_1 + 0x34) == 0) || (iVar1 = FUN_ram_4ff20d60(), iVar1 == 0)) {
        iVar1 = 0;
        if ((*(int *)(param_1 + 0x4c) != 0) && (iVar1 = FUN_ram_4ff2d68e(), iVar1 != 0)) {
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): release pm_lock failed\n",uVar2,
                           "gptimer","gptimer_disable",0x17e);
        }
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): disable interrupt service failed\n",uVar2,
                         "gptimer","gptimer_disable",0x179);
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): timer not in enable state\n",uVar2,"gptimer"
                       ,"gptimer_disable",0x174);
      iVar1 = 0x103;
    }
    return iVar1;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): invalid argument\n",uVar2,"gptimer",
                   "gptimer_disable",0x171);
  return 0x102;
}


