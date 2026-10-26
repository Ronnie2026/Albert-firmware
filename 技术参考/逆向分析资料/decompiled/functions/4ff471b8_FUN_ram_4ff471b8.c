/* Firmware entry: 0x4ff471b8 */

void FUN_ram_4ff471b8(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  uint auStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (byte *)0x0) {
    pcVar2 = *(code **)(*(int *)(param_1 + 4) + 100);
    iVar1 = (*pcVar2)(param_1,1,auStack_14,param_4,param_5,pcVar2);
    if (iVar1 == 0) {
      *param_2 = (byte)(auStack_14[0] >> 1) & 1 ^ 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_spi_flash_spi_f_ram_4ff57008 + 0x1b,0x181,
                   s_spi_flash_chip_generic_get_write_ram_4ff58890,
                   s_out_write_protect__NULL_ram_4ff56ff0);
}


