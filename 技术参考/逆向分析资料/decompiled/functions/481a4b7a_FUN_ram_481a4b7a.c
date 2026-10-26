/* Firmware entry: 0x481a4b7a */

undefined4 FUN_ram_481a4b7a(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_event.c",0x393,"esp_event_post_to","event_loop");
  }
  if ((param_2 != 0) && (param_3 != -1)) {
    uVar1 = FUN_ram_481a4146();
    return uVar1;
  }
  return 0x102;
}


