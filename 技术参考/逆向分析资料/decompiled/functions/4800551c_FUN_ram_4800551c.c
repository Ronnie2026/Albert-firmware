/* Firmware entry: 0x4800551c */

uint * FUN_ram_4800551c(uint *param_1)

{
  uint uVar1;
  uint *apuStack_30 [11];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  apuStack_30[0] = param_1 + -2;
  uVar1 = *param_1 >> 0x1a & 4 | *param_1 >> 0x10 & 0xf;
  apuStack_30[1] = apuStack_30[0];
  apuStack_30[2] = apuStack_30[0];
  apuStack_30[3] = apuStack_30[0];
  apuStack_30[4] = apuStack_30[0];
  apuStack_30[5] = apuStack_30[0];
  apuStack_30[6] = apuStack_30[0];
  apuStack_30[7] = apuStack_30[0];
  if (uVar1 < 8) {
    return apuStack_30[uVar1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("regdma_link.c",0x1a8,"regdma_link_get_instance",
                   "it < ARRAY_SIZE(container_memaddr)");
}


