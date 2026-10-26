/* Firmware entry: 0x4812e4d6 */

undefined4 FUN_ram_4812e4d6(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("partition_target.c",0x42,"esp_partition_write","partition != NULL");
  }
  if (*(char *)((int)param_1 + 0x2a) != '\0') {
    return 0x10d;
  }
  if ((uint)param_1[4] < param_2) {
    return 0x102;
  }
  if (param_4 <= param_1[4] - param_2) {
    iVar2 = *param_1;
    if (*(char *)((int)param_1 + 0x29) == '\0') {
      uVar1 = FUN_ram_4ff45eb4(iVar2,param_3,param_2 + param_1[3]);
      return uVar1;
    }
    if (iVar2 != DAT_ram_4ff6e0b8) {
      return 0x106;
    }
    uVar1 = FUN_ram_4ff46126(iVar2);
    return uVar1;
  }
  return 0x104;
}


