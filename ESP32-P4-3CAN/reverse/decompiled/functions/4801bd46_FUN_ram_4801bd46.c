/* Firmware entry: 0x4801bd46 */

undefined4 FUN_ram_4801bd46(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  if (param_1 < 3) {
    *(uint *)(iVar1 + 0x10) = param_1;
    FUN_ram_4801a5f2();
    uVar2 = FUN_ram_4801af88();
    return uVar2;
  }
  return 0xffffffff;
}


