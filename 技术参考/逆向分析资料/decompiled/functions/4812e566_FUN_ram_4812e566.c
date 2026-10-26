/* Firmware entry: 0x4812e566 */

undefined4 FUN_ram_4812e566(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("partition_target.c",0x5e,"esp_partition_read_raw","partition != NULL");
  }
  if (param_2 <= (uint)param_1[4]) {
    if (param_4 <= param_1[4] - param_2) {
      uVar1 = FUN_ram_4ff45d50(*param_1,param_3,param_2 + param_1[3]);
      return uVar1;
    }
    return 0x104;
  }
  return 0x102;
}


