/* Firmware entry: 0x4802de1e */

void FUN_ram_4802de1e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48025b94();
  iVar1 = DAT_ram_4ff6ddb0;
  DAT_ram_4ff6ddb0 = iVar3;
  if (iVar1 != 0) {
    uVar2 = iVar3 - iVar1;
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e84,0xffffffff);
    DAT_ram_4ff6dda8 = DAT_ram_4ff6dda8 + 1;
    DAT_ram_4ff6dda4 = DAT_ram_4ff6dda4 + uVar2;
    if (DAT_ram_4ff6dda0 < uVar2) {
      DAT_ram_4ff6dda0 = uVar2;
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e84);
    return;
  }
  return;
}


