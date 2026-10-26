/* Firmware entry: 0x48139392 */

uint FUN_ram_48139392(undefined4 param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff20824(param_1,2,0x1400,0x1800);
  if (uVar1 == 0) {
    FUN_ram_4814e762();
    FUN_ram_4814e79e();
    return 0;
  }
  if (uVar1 == (uVar1 + 3 & 0xfffffffc)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/mem.c",0xd5,"mem_malloc",
                   "malloc() must return aligned memory");
}


