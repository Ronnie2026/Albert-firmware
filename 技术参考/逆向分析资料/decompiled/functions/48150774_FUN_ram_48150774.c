/* Firmware entry: 0x48150774 */

undefined4 FUN_ram_48150774(undefined *param_1,undefined1 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x85,"lwip_netconn_is_err_msg",
                     "err != NULL");
  }
  if (param_1 == &DAT_ram_48237592) {
    *param_2 = 0xf3;
    return 1;
  }
  if (param_1 == &DAT_ram_48237591) {
    *param_2 = 0xf2;
    return 1;
  }
  if (param_1 != &DAT_ram_48237590) {
    return 0;
  }
  *param_2 = 0xf1;
  return 1;
}


