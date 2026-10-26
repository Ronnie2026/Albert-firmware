/* Firmware entry: 0x481a31d6 */

int FUN_ram_481a31d6(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1[0x12] == 0) || (iVar1 = FUN_ram_4ff2ff60(param_1[0x12],0), iVar1 == 0)) {
    if ((param_1[0x13] == 0) || (iVar1 = FUN_ram_4818ac44(), iVar1 == 0)) {
      if ((param_1[0xd] == 0) || (iVar1 = FUN_ram_48003514(), iVar1 == 0)) {
        iVar1 = *param_1;
        if (iVar1 != 0) {
          iVar3 = param_1[1];
          FUN_ram_4ff3ec14(iVar1 + 4,0xffffffff);
          *(undefined4 *)(iVar3 * 4 + iVar1 + 0xc) = 0;
          FUN_ram_4ff3ee10(iVar1 + 4);
          FUN_ram_48133b10(iVar1);
        }
        thunk_FUN_ram_4ff209c6(param_1);
        iVar1 = 0;
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): delete interrupt service failed\n",uVar2,
                         "gptimer","gptimer_destroy",0x76);
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): delete pm_lock failed\n",uVar2,"gptimer",
                       "gptimer_destroy",0x73);
    }
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"gptimer","E (%lu) %s: %s(%d): clock source disable failed\n",uVar2,"gptimer"
                     ,"gptimer_destroy",0x70);
  }
  return iVar1;
}


