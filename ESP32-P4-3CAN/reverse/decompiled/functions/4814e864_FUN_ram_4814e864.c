/* Firmware entry: 0x4814e864 */

bool FUN_ram_4814e864(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 3) {
    if (DAT_ram_4ff6e23c == 0) {
      DAT_ram_4ff6e23c = FUN_ram_4ff3d9a8();
      return true;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0x22a,"sys_thread_tcpip",
                     "LWIP_CORE_MARK_TCPIP_TASK: lwip_task == NULL");
  }
  if (param_1 == 4) {
    return DAT_ram_4ff6e23c != 0;
  }
  if (param_1 != 0) {
    return false;
  }
  if (DAT_ram_4ff6e23c != 0) {
    iVar1 = FUN_ram_4ff3d9a8(1);
    return DAT_ram_4ff6e23c == iVar1;
  }
  return true;
}


