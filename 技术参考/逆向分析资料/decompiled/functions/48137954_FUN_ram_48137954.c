/* Firmware entry: 0x48137954 */

int FUN_ram_48137954(undefined4 param_1,char *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e188 != 0) {
    local_20 = 1;
    uStack_1c = param_1;
    pcStack_18 = param_2;
    uStack_14 = FUN_ram_4814e840();
    FUN_ram_4814e4f2(&DAT_ram_4ff6e188,&local_20);
    FUN_ram_4814e408(uStack_14,0);
    return (int)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x1f0,"tcpip_api_call","Invalid mbox"
                  );
}


