/* Firmware entry: 0x4ff20570 */

void FUN_ram_4ff20570(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48001710(1);
  while (DAT_ram_4ff6d95d == '\0') {
    ets_delay_us(100);
  }
  uVar2 = FUN_ram_481a7940();
  uVar1 = mhartid;
  iVar3 = FUN_ram_4ff2c6b0();
  if (iVar3 == 0) {
    FUN_ram_4ff2061c();
    thunk_FUN_ram_4ff2c472(uVar1);
    FUN_ram_4ff37df0(uVar2,1);
    return;
  }
  FUN_ram_4ff37df0(uVar2,1);
  return;
}


