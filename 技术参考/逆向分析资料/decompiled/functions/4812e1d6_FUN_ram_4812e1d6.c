/* Firmware entry: 0x4812e1d6 */

undefined4 FUN_ram_4812e1d6(void)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4812e16a();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
    thunk_FUN_ram_4ff209c6();
    return uVar1;
  }
  return 0;
}


