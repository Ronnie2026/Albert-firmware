/* Firmware entry: 0x48060b1c */

undefined4 FUN_ram_48060b1c(undefined4 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6df88 != 0) && (iVar1 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar1 == 1)) {
    FUN_ram_480608e8(DAT_ram_4ff6df8c,param_1);
    FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
    return 1;
  }
  return 0;
}


