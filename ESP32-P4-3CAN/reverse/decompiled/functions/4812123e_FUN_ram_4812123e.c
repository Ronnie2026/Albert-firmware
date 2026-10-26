/* Firmware entry: 0x4812123e */

undefined4 FUN_ram_4812123e(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4ff2070c(((uint)(param_3 << 2) / 3 + 3 & 0xfffffffc) + 1);
  if (iVar1 == 0) {
    FUN_ram_4802a8a8(param_1,"-FAIL-");
  }
  else {
    FUN_ram_48121c4a(auStack_2c);
    iVar2 = FUN_ram_48121c54(param_2,param_3,iVar1,auStack_2c);
    FUN_ram_48121d8c(iVar2 + iVar1,auStack_2c);
    FUN_ram_4802a8a8(param_1,iVar1);
    thunk_FUN_ram_4ff209c6(iVar1);
  }
  return param_1;
}


