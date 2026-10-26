/* Firmware entry: 0x48165f26 */

undefined4 FUN_ram_48165f26(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_ram_4ff4ba24;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("sdmmc_host.c",0x48c,"sdmmc_host_io_int_wait","slot == 0 || slot == 1");
  }
  uVar1 = (&DAT_ram_4ff4ba48)[param_1 * 0x12];
  if (param_1 == 0) {
    *(uint *)(DAT_ram_4ff4ba24 + 0x24) = *(uint *)(DAT_ram_4ff4ba24 + 0x24) & 0xfffeffff;
    uVar3 = 0x10000;
    *(undefined4 *)(iVar2 + 0x44) = 0x10000;
    iVar2 = FUN_ram_4812ab3e(uVar1);
  }
  else {
    *(uint *)(DAT_ram_4ff4ba24 + 0x24) = *(uint *)(DAT_ram_4ff4ba24 + 0x24) & 0xfffdffff;
    uVar3 = 0x20000;
    *(undefined4 *)(iVar2 + 0x44) = 0x20000;
    iVar2 = FUN_ram_4812ab3e(uVar1);
  }
  if (iVar2 != 0) {
    FUN_ram_4ff3b5f0(DAT_ram_4ff4ba20,0);
    uVar1 = DAT_ram_4ff4ba20;
    *(uint *)(DAT_ram_4ff4ba24 + 0x24) = *(uint *)(DAT_ram_4ff4ba24 + 0x24) | uVar3;
    iVar2 = FUN_ram_4ff3b5f0(uVar1,param_2);
    if (iVar2 != 1) {
      return 0x107;
    }
  }
  return 0;
}


