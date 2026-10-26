/* Firmware entry: 0x48169d8e */

undefined4 FUN_ram_48169d8e(int param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = thunk_FUN_ram_4800f7b0(*(undefined4 *)(param_1 + 8));
    return uVar1;
  }
  return 0x102;
}


