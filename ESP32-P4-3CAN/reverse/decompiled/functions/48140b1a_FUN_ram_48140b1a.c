/* Firmware entry: 0x48140b1a */

void FUN_ram_48140b1a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     int param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x7c4,"tcp_rst_common",
                     "tcp_rst: invalid local_ip");
  }
  if (param_5 != 0) {
    uVar1 = FUN_ram_48137fd6(param_2);
    FUN_ram_48140908(param_3,0,0,uVar1,param_6,param_7,0x14,0xfeff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x7c5,"tcp_rst_common",
                   "tcp_rst: invalid remote_ip");
}


