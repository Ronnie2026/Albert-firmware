/* Firmware entry: 0x48191f3e */

int FUN_ram_48191f3e(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45080(1,0x6e4);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_481921ba();
    *(int *)(iVar1 + 0x6e0) = iVar2;
    if (iVar2 != 0) {
      FUN_ram_48194188(iVar1 + 0x378);
      *(undefined4 *)(iVar1 + 0x6b8) = 0xffffffff;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    thunk_FUN_ram_4ff209c6(iVar1);
  }
  return 0;
}


