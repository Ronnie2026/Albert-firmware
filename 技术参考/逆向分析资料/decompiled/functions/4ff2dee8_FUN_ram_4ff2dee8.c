/* Firmware entry: 0x4ff2dee8 */

undefined4 FUN_ram_4ff2dee8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0xffffffff) {
    param_2 = (param_2 * 1000) / 1000;
  }
  fence();
  fence();
  if (*(int *)(param_1 + 0x7c) != 3) {
    fence();
    fence();
    if (((*(char *)(param_1 + 0x84) != '\0') ||
        (iVar1 = FUN_ram_4ff3b9c2(*(undefined4 *)(param_1 + 0x4c)), iVar1 != 0)) &&
       (iVar1 = FUN_ram_4ff3fc30(*(undefined4 *)(param_1 + 0x50),1,0,0,param_2), iVar1 != 1)) {
      return 0x107;
    }
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,s_esp_twai_ram_4ff57310,s_E___lu___s___s__d___node_is_bus_o_ram_4ff5760c,uVar2,
                   s_esp_twai_ram_4ff57310,s__node_wait_tx_all_done_ram_4ff53708,0x299);
  return 0x103;
}


