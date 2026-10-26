/* Firmware entry: 0x481331ea */

void FUN_ram_481331ea(undefined4 param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48000386(&PTR_DAT_ram_481e39c4_ram_4ff47fcc);
  if ((uVar1 & 7) == 0) {
    FUN_ram_48000378(&PTR_DAT_ram_481e39c4_ram_4ff47fcc,param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("mac_addr.c",0x110,"get_efuse_factory_mac","(size_bits % 8) == 0");
}


