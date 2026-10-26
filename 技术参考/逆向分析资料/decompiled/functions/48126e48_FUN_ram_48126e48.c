/* Firmware entry: 0x48126e48 */

uint FUN_ram_48126e48(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_ram_4ff3fc30(*(int *)(param_1 + 8),param_2,0,1,param_3);
    return uVar1 & param_2;
  }
  return 0;
}


