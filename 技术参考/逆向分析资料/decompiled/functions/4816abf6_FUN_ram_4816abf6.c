/* Firmware entry: 0x4816abf6 */

void FUN_ram_4816abf6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__s;
  size_t sVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_ram_48178b14(*(int *)(param_1 + 0x9c),0x114d);
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      FUN_ram_48178b14(*(int *)(param_1 + 0x60),0x414d);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_ram_48171410();
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_ram_4816a834(param_1);
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x40));
      FUN_ram_48171410(*(undefined4 *)(param_1 + 0x50));
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x50));
      iVar1 = *(int *)(param_1 + 0x3c);
      uVar2 = 0;
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x68) != 0) {
          FUN_ram_48189290();
          thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x68));
          *(undefined4 *)(iVar1 + 0x68) = 0;
        }
        thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x70));
        FUN_ram_48178af2(iVar1,0x90);
        *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
        uVar2 = *(undefined4 *)(param_1 + 0x3c);
      }
      thunk_FUN_ram_4ff209c6(uVar2);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x68) != 0) {
        FUN_ram_48189290();
        thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x68));
        *(undefined4 *)(iVar1 + 0x68) = 0;
      }
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar1 + 0x70));
      FUN_ram_48178af2(iVar1,0x90);
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
      thunk_FUN_ram_4ff209c6(uVar2);
    }
    __s = *(char **)(param_1 + 200);
    if ((__s != (char *)0x0) && (__s != "")) {
      sVar3 = strlen(__s);
      FUN_ram_48178b14(__s,sVar3);
    }
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_ram_48178af2(param_1,0xfc);
    return;
  }
  return;
}


