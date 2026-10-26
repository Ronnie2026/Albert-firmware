/* Firmware entry: 0x4812e20a */

undefined4 FUN_ram_4812e20a(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("partition.c",0x17b,"esp_partition_get","iterator != NULL");
}


