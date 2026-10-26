/* Firmware entry: 0x48125bcc */

undefined4 FUN_ram_48125bcc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_6c [6];
  undefined1 auStack_66 [94];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481270c0(param_2);
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_ram_4800f8b8(auStack_6c), iVar1 == 0)) {
    FUN_ram_4802a8a8(param_1,auStack_66);
    return param_1;
  }
  FUN_ram_4802a8a8(param_1,&DAT_ram_481df390);
  return param_1;
}


