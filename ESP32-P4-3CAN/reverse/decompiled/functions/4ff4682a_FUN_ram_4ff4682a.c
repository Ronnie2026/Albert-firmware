/* Firmware entry: 0x4ff4682a */

void FUN_ram_4ff4682a(int *param_1,uint param_2)

{
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 < 0x1000000) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_14 = 0;
    uStack_2c = 0x18000000;
    uStack_18 = 0x20;
    uStack_28 = param_2;
    (**(code **)(*param_1 + 4))(param_1,&uStack_2c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_spi_flash_memsp_ram_4ff57074 + 0x1b,0x98,
                   s_memspi_host_erase_sector_ram_4ff58794,s_start_address_<_0x1000000_ram_4ff57058)
  ;
}


