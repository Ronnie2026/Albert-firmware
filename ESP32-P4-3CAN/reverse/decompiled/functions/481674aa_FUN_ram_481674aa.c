/* Firmware entry: 0x481674aa */

undefined4 FUN_ram_481674aa(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  FUN_ram_4816725c();
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_ram_4819324c();
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    FUN_ram_48168ec0(**(undefined4 **)(param_1 + 0x20));
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
    uVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      thunk_FUN_ram_4ff209c6(*puVar2);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
    }
    thunk_FUN_ram_4ff209c6(uVar3);
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(undefined4 **)(param_1 + 0x24) == (undefined4 *)0x0) goto LAB_ram_4816754c;
  FUN_ram_48168ec0(**(undefined4 **)(param_1 + 0x24));
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 4);
  if (puVar2 == (undefined4 *)0x0) {
LAB_ram_48167620:
    iVar1 = 0;
  }
  else {
    thunk_FUN_ram_4ff209c6(*puVar2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 4);
    if (iVar1 == 0) goto LAB_ram_48167620;
    if (*(int *)(iVar1 + 0xc) != 0) {
      thunk_FUN_ram_4ff209c6();
      iVar4 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar4 + 4));
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x24));
      goto LAB_ram_4816754c;
    }
  }
  thunk_FUN_ram_4ff209c6(iVar1);
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x24));
LAB_ram_4816754c:
  if (*(int *)(param_1 + 0xd8) != 0) {
    thunk_FUN_ram_4ff209c6();
  }
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x14));
  FUN_ram_48166c24(param_1);
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    thunk_FUN_ram_4ff209c6(**(undefined4 **)(param_1 + 0x2c));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 8));
    memset(*(void **)(param_1 + 0x2c),0,0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
  }
  thunk_FUN_ram_4ff209c6(uVar3);
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x3c));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x40));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x34));
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x38));
  thunk_FUN_ram_4ff209c6(param_1);
  return 0;
}


