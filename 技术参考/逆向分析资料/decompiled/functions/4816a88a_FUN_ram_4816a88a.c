/* Firmware entry: 0x4816a88a */

undefined4 FUN_ram_4816a88a(int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_ram_48171410();
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x68) != 0) {
      FUN_ram_48189290();
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x68));
      *(undefined4 *)(iVar1 + 0x68) = 0;
    }
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x70));
    FUN_ram_48178af2(iVar1,0x90);
    *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_ram_4816a834(param_1);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar4 = thunk_FUN_ram_4817b126(1,0xdc);
    iVar1 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if (iVar1 == 0) {
    uVar4 = thunk_FUN_ram_4817b126(1,0x90);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar1 = thunk_FUN_ram_4817b126(1,0x248);
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 == 0) goto LAB_ram_4816a984;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (*(void **)(param_1 + 0x3c) != (void *)0x0)) {
    pvVar3 = memset(*(void **)(param_1 + 0x3c),0,0x90);
    pvVar2 = *(void **)(param_1 + 0x40);
    *(undefined4 *)((int)pvVar3 + 0x6c) = 0xffffffff;
    memset(pvVar2,0,0x248);
    FUN_ram_481769e8((int)pvVar2 + 0x150);
    FUN_ram_481769e8((int)pvVar2 + 0x15c);
    *(code **)((int)pvVar2 + 0x14) = FUN_ram_4816a27a;
    FUN_ram_481725c6((int)pvVar2 + 0x4c);
    *(undefined1 *)((int)pvVar2 + 2) = 3;
    pvVar2 = *(void **)(param_1 + 0x50);
    memset(pvVar2,0,0xdc);
    FUN_ram_4817190e((int)pvVar2 + 0x54);
    FUN_ram_4817190e((int)pvVar2 + 0x98);
    FUN_ram_481769e8((int)pvVar2 + 0x34);
    FUN_ram_481769e8((int)pvVar2 + 0x40);
    uVar4 = FUN_ram_4816a38c(param_1);
    return uVar4;
  }
LAB_ram_4816a984:
  thunk_FUN_ram_4ff209c6();
  *(undefined4 *)(param_1 + 0x40) = 0;
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 0xffff8100;
}


