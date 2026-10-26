/* Firmware entry: 0x4801bc52 */

undefined4 FUN_ram_4801bc52(undefined2 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4801af3a();
  if (param_1 != (undefined2 *)0x0) {
    iVar1 = FUN_ram_4801ab1a();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
      *param_1 = (short)*(undefined4 *)(iVar1 + 0x10);
    }
    uVar2 = FUN_ram_4801af88();
    return uVar2;
  }
  return 0xffffffff;
}


