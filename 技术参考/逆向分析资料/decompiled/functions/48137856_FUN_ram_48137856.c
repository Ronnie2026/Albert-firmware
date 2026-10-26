/* Firmware entry: 0x48137856 */

undefined4 FUN_ram_48137856(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e188 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x162,"tcpip_try_callback",
                     "Invalid mbox");
  }
  puVar1 = (undefined4 *)FUN_ram_4813956e(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    *puVar1 = 3;
    iVar2 = FUN_ram_4814e53a(&DAT_ram_4ff6e188,puVar1);
    if (iVar2 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    FUN_ram_48139604(8,puVar1);
  }
  return 0xffffffff;
}


