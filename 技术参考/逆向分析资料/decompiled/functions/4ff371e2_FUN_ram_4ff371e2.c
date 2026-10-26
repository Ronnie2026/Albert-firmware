/* Firmware entry: 0x4ff371e2 */

void FUN_ram_4ff371e2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_ram_4ff6d948;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = DAT_ram_4ff6d94c;
    *param_2 = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_system_port_ram_4ff53f28 + 0x21,0xd5,
                   s_image_process_get_flash_segments_ram_4ff581d8,
                   s_out_drom_paddr_start____out_irom_ram_4ff53ff0);
}


