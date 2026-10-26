/* Firmware entry: 0x4812e68a */

int FUN_ram_4812e68a(int *param_1,uint param_2,uint param_3,undefined4 param_4,int *param_5,
                    undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("partition_target.c",0x9e,"esp_partition_mmap","partition != NULL");
  }
  iVar2 = 0x102;
  if (((param_2 <= (uint)param_1[4]) && (iVar2 = 0x104, param_3 <= param_1[4] - param_2)) &&
     (iVar2 = 0x106, *param_1 == DAT_ram_4ff6e0b8)) {
    uVar1 = param_2 + param_1[3] & 0xffff;
    iVar2 = FUN_ram_4812fa26(param_2 + param_1[3] & 0xffff0000,param_3 + uVar1,param_4,param_5,
                             param_6);
    if (iVar2 != 0) {
      return iVar2;
    }
    *param_5 = *param_5 + uVar1;
    return 0;
  }
  return iVar2;
}


