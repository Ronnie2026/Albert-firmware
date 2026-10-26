/* Firmware entry: 0x48178db6 */

undefined4 FUN_ram_48178db6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1 + 8;
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = FUN_ram_48180076(iVar2);
  if (iVar3 != iVar1) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffbf80;
  }
  if (0x400 < *(uint *)(param_1 + 4)) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffbf80;
  }
  iVar1 = FUN_ram_481802e8(iVar2,0);
  if (iVar1 < 1) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffbf80;
  }
  iVar1 = FUN_ram_4817ffaa(iVar2,0);
  if (iVar1 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0xffffbf80;
  }
  if (param_2 == 0) {
    iVar1 = FUN_ram_481802e8(param_1 + 0x10,0);
  }
  else {
    iVar1 = FUN_ram_481802e8(param_1 + 0x20,0);
    if (iVar1 < 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_4817ffaa(param_1 + 0x20,0);
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_481802e8(param_1 + 0x28,0);
    if (iVar1 < 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_4817ffaa(param_1 + 0x28,0);
    if (iVar1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_481802e8(param_1 + 0x10,0);
    if (iVar1 < 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_481802e8(param_1 + 0x30,0);
    if (iVar1 < 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_481802e8(param_1 + 0x38,0);
    if (iVar1 < 1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffbf80;
    }
    iVar1 = FUN_ram_481802e8(param_1 + 0x40,0);
  }
  if (iVar1 < 1) {
    return 0xffffbf80;
  }
  return 0;
}


