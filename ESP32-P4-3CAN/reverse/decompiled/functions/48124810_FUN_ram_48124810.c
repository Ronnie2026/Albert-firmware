/* Firmware entry: 0x48124810 */

void FUN_ram_48124810(void)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_481246fe();
  if ((uVar1 & 1) == 0) {
    return;
  }
  thunk_FUN_ram_4800f834(&DAT_ram_4ff6e05c);
  if (DAT_ram_4ff6e058 != 0) {
    thunk_FUN_ram_4ff209c6();
    DAT_ram_4ff6e058 = 0;
  }
  if (DAT_ram_4ff6e05c != 0) {
    DAT_ram_4ff6e058 = FUN_ram_4ff45080(DAT_ram_4ff6e05c,0x5c);
    if (DAT_ram_4ff6e058 != 0) {
      iVar2 = thunk_FUN_ram_4800f876(&DAT_ram_4ff6e05c,DAT_ram_4ff6e058);
      if (iVar2 == 0) goto LAB_ram_4812484e;
      thunk_FUN_ram_4ff209c6(DAT_ram_4ff6e058);
      DAT_ram_4ff6e058 = 0;
    }
    DAT_ram_4ff6e05c = 0;
  }
LAB_ram_4812484e:
  FUN_ram_481246e2(2);
  FUN_ram_481246f0(1);
  return;
}


