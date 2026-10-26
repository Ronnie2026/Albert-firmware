/* Firmware entry: 0x4ff2d5ae */

undefined4 FUN_ram_4ff2d5ae(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  if (DAT_ram_4ff6e168 != 0) {
    bVar1 = *(byte *)((int)param_1 + 0xf);
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f68 + (bVar1 & 1) * 8,0xffffffff);
    uVar2 = 0x103;
    if (*param_1 != 0 || param_1[1] != 0) {
      FUN_ram_4ff2d384(param_1);
      uVar2 = 0;
    }
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f68 + (bVar1 & 1) * 8);
    return uVar2;
  }
  return 0x103;
}


