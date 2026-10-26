/* Firmware entry: 0x4812e734 */

int FUN_ram_4812e734(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("partition_target.c",0x1d,"esp_partition_read","partition != NULL");
  }
  if ((uint)param_1[4] < param_2) {
    return 0x102;
  }
  if (param_1[4] - param_2 < param_4) {
    return 0x104;
  }
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    iVar1 = FUN_ram_4ff45d50(*param_1,param_3,param_1[3] + param_2);
    return iVar1;
  }
  iVar1 = 0x106;
  if ((*param_1 == DAT_ram_4ff6e0b8) &&
     (iVar1 = FUN_ram_4812e68a(param_1,param_2,param_4,0,&uStack_18,&uStack_14), iVar1 == 0)) {
    FUN_ram_4ff45158(param_3,uStack_18,param_4);
    FUN_ram_4812fb50(uStack_14);
  }
  return iVar1;
}


