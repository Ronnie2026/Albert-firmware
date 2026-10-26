/* Firmware entry: 0x480357d6 */

/* WARNING: Removing unreachable block (ram,0x480358d8) */

bool FUN_ram_480357d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 auStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48025b94();
  fence();
  fence();
  if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar1 - DAT_ram_4ff6deec))) ||
     (2000000 < (uint)(iVar1 - DAT_ram_4ff6def0))) {
    fence();
    DAT_ram_4ff6def0 = iVar1;
  }
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
  DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data",param_1,1,auStack_34);
  bVar2 = false;
  if (DAT_ram_4ff6dd64 == 0) {
    DAT_ram_4ff6dd64 = FUN_ram_4815a218(auStack_34[0],param_2,param_3,param_4);
    if (DAT_ram_4ff6dd64 == 0) {
      DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(auStack_34[0]);
    }
    FUN_ram_4815a050(auStack_34[0]);
    bVar2 = DAT_ram_4ff6dd64 == 0;
  }
  DAT_ram_4ff6deec = FUN_ram_48025b94();
  fence();
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
  DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
  if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar1)) {
    DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar1;
  }
  return bVar2;
}


