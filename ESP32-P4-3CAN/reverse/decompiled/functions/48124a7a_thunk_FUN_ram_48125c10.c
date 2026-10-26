/* Firmware entry: 0x48124a7a */

int thunk_FUN_ram_48125c10(void)

{
  int iVar1;
  undefined1 auStack_6c [44];
  char cStack_40;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481270c0();
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_ram_4800f8b8(auStack_6c), iVar1 == 0)) {
    return (int)cStack_40;
  }
  return 0;
}


