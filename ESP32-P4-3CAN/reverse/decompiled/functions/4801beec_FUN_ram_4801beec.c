/* Firmware entry: 0x4801beec */

undefined4 FUN_ram_4801beec(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined1 *)0x0) {
    FUN_ram_4801af3a();
    iVar1 = FUN_ram_4801ae32();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
      *param_2 = *(undefined1 *)(iVar1 + 0x14);
    }
    uVar2 = FUN_ram_4801af88();
    return uVar2;
  }
  return 0xffffffff;
}


