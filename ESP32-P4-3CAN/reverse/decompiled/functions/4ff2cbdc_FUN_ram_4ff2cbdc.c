/* Firmware entry: 0x4ff2cbdc */

undefined8 FUN_ram_4ff2cbdc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0x18;
  if (mhartid != 0) {
    iVar1 = 0x1c;
  }
  *(undefined4 *)(iVar1 + 0x500e5000) = 0;
  DAT_ram_4ff6d984 = &DAT_ram_4ff6d984;
  (*DAT_ram_4ff6d980)(DAT_ram_4ff6d97c,DAT_ram_4ff6d980);
  DAT_ram_4ff47da0 = &DAT_ram_4ff47da0;
  return CONCAT44(param_2,param_1);
}


