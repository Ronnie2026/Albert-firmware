/* Firmware entry: 0x48139476 */

uint FUN_ram_48139476(ushort *param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (ushort *)&DAT_ram_482367d4) {
    if (0xf < DAT_ram_4ff6e1a0) {
      return 0;
    }
    uVar1 = FUN_ram_48139392(0xf0);
    FUN_ram_4814e762();
    if (uVar1 == 0) goto LAB_ram_481394e0;
    DAT_ram_4ff6e1a0 = DAT_ram_4ff6e1a0 + 1;
  }
  else {
    uVar1 = FUN_ram_48139392(*param_1 + 3 & 0xfffffffc);
    FUN_ram_4814e762();
    if (uVar1 == 0) {
LAB_ram_481394e0:
      FUN_ram_4814e79e();
      return 0;
    }
  }
  if ((uVar1 & 3) == 0) {
    FUN_ram_4814e79e();
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/memp.c",300,"do_memp_malloc_pool",
                   "memp_malloc: memp properly aligned");
}


