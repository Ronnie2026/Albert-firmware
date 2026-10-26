/* Firmware entry: 0x48199fae */

undefined4 FUN_ram_48199fae(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_ram_4819a644();
    *(undefined4 *)(param_3 + 8) = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  return uVar1;
}


