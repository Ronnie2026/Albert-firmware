/* Firmware entry: 0x48023fbc */

void FUN_ram_48023fbc(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(param_1,0xffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port_esp_hosted_host_os.c",0x261,"hosted_lock_mempool","lock_handle");
}


