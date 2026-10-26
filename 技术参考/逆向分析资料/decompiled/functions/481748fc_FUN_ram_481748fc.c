/* Firmware entry: 0x481748fc */

undefined4 FUN_ram_481748fc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0xffffb080;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_ram_4817ffaa(param_2,0);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4817ffaa(param_2,1), iVar1 == 0)) {
      iVar1 = FUN_ram_4818006c(param_2);
      if ((iVar1 == *(int *)(param_1 + 0x40) + 1) &&
         ((*(int *)(param_1 + 0x40) != 0xfe || (iVar1 = FUN_ram_4817ffaa(param_2,2), iVar1 == 0))))
      goto LAB_ram_4817492c;
    }
  }
  else {
    iVar1 = FUN_ram_481802e8(param_2,1);
    if ((-1 < iVar1) && (iVar1 = FUN_ram_4818023e(param_2,param_1 + 0x34), iVar1 < 0)) {
LAB_ram_4817492c:
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  return 0xffffb380;
}


