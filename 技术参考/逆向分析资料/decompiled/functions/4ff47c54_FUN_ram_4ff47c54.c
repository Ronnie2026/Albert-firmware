/* Firmware entry: 0x4ff47c54 */

undefined4 FUN_ram_4ff47c54(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_spi_flash_spi_f_ram_4ff56f38 + 0x1b,200,
                     "spi_flash_os_check_yield",s_chip_status____0_ram_4ff56f24);
  }
  iVar2 = FUN_ram_4ff219c4();
  if ((uint)(iVar2 - *(int *)(param_1 + 0xc)) < 1000) {
    if (19999 < (uint)(iVar2 - *(int *)(param_1 + 8))) {
      uVar1 = 1;
      uVar3 = 0;
      goto LAB_ram_4ff47c7e;
    }
  }
  else {
    *(int *)(param_1 + 8) = iVar2;
  }
  uVar3 = 0x107;
  uVar1 = 0;
LAB_ram_4ff47c7e:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
  }
  return uVar3;
}


