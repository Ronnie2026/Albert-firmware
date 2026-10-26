/* Firmware entry: 0x48124896 */

int FUN_ram_48124896(void)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_481246fe();
  if ((uVar1 & 2) != 0) {
    return (int)DAT_ram_4ff6e05c;
  }
  uVar1 = FUN_ram_481246fe();
  if ((uVar1 & 1) != 0) {
    iVar2 = FUN_ram_48025ba6();
    if ((uint)(iVar2 - DAT_ram_4ff6e060) <= DAT_ram_4ff47ef8) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return -1;
    }
    FUN_ram_481246f0(1);
  }
  return -2;
}


