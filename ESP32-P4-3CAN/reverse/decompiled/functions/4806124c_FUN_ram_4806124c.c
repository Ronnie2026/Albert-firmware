/* Firmware entry: 0x4806124c */

undefined4 FUN_ram_4806124c(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x65920080) {
    return 0;
  }
  if ((DAT_ram_4ff6df88 != 0) && (iVar1 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0), iVar1 == 1)) {
    DAT_ram_4ff6df40 = param_2;
    DAT_ram_4ff6df44 = param_1;
    if (param_3 != 0) {
      FUN_ram_48060e82(DAT_ram_4ff6df8c,param_1,param_2);
    }
    FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
    return 1;
  }
  return 0;
}


