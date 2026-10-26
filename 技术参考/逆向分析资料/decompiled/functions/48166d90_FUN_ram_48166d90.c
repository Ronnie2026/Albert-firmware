/* Firmware entry: 0x48166d90 */

undefined4 FUN_ram_48166d90(int param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_1 != 0) && (*(int **)(param_1 + 0x20) != (int *)0x0)) &&
      (**(int **)(param_1 + 0x20) != 0)) && (param_2 != 0)) {
    uVar1 = FUN_ram_4816901a();
    return uVar1;
  }
  return 0x102;
}


