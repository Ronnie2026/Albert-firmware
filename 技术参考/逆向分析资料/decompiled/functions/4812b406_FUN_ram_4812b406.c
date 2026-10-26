/* Firmware entry: 0x4812b406 */

void FUN_ram_4812b406(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff4b97c,0xffffffff);
  uVar2 = DAT_ram_4ff4b98c;
  iVar1 = DAT_ram_4ff4b988;
  if (DAT_ram_4ff4b988 != 0) {
    DAT_ram_4ff4b988 = 0;
    DAT_ram_4ff4b984 = 3;
    DAT_ram_4ff4b98c = 0;
    FUN_ram_4ff3ee10();
    FUN_ram_48003514(uVar2);
    thunk_FUN_ram_4ff209c6(iVar1);
    return;
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff4b97c);
  return;
}


