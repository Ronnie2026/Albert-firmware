/* Firmware entry: 0x48156db8 */

undefined4 FUN_ram_48156db8(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return 0x102;
  }
  if (*(int *)(iVar1 + 0x40) == 1) {
    iVar2 = FUN_ram_4818cd8a(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x10));
    if (iVar2 != 0) {
      return 0x5002;
    }
  }
  else if (*(int *)(iVar1 + 0x40) == 2) {
    return 0x5005;
  }
  *(undefined4 *)(iVar1 + 0x40) = 2;
  return 0;
}


