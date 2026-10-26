/* Firmware entry: 0x48151358 */

void FUN_ram_48151358(int *param_1)

{
  int iVar1;
  uint *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4814f574(*param_1);
  if (iVar1 == 0) {
    puVar2 = (uint *)*param_1;
    iVar1 = -6;
    if ((*puVar2 & 0xf0) == 0x10) {
      if (puVar2[1] != 0) {
        *(undefined1 *)(param_1 + 1) = 0xfb;
        FUN_ram_4814e3a4(param_1[9]);
        return;
      }
      if (puVar2[2] != 0) {
        puVar2[1] = 1;
        if (puVar2[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x776,
                           "lwip_netconn_do_write","already writing or closing");
        }
        if (param_1[5] != 0) {
          puVar2[0xd] = (uint)param_1;
          FUN_ram_4814fee2();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x777,"lwip_netconn_do_write"
                         ,"msg->msg.w.len != 0");
      }
      iVar1 = -0xb;
    }
  }
  *(char *)(param_1 + 1) = (char)iVar1;
  FUN_ram_4814e3a4(param_1[9]);
  return;
}


