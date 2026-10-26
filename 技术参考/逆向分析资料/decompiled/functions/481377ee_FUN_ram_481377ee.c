/* Firmware entry: 0x481377ee */

undefined4 FUN_ram_481377ee(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e188 != 0) {
    puVar1 = (undefined4 *)FUN_ram_4813956e(8);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      puVar1[1] = param_1;
      puVar1[2] = param_2;
      *puVar1 = 3;
      FUN_ram_4814e4f2(&DAT_ram_4ff6e188);
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x13e,"tcpip_callback","Invalid mbox"
                  );
}


