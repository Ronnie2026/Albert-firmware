/* Firmware entry: 0x4816911a */

undefined4 FUN_ram_4816911a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_34 = 0;
  uVar1 = FUN_ram_4819b370(&iStack_34,param_3);
  if (iStack_34 != 0) {
    FUN_ram_4816901a(param_1,param_2);
    thunk_FUN_ram_4ff209c6(iStack_34);
    return uVar1;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"HTTP_HEADER","E (%lu) %s: %s(%d): Memory exhausted\n",uVar1,"HTTP_HEADER",
                   "http_header_set_format",0x9f);
  return 0;
}


