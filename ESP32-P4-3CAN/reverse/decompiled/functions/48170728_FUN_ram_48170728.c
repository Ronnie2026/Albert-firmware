/* Firmware entry: 0x48170728 */

undefined4 FUN_ram_48170728(int param_1,undefined1 param_2,int *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_3 = *(int *)(param_1 + 0xb0) + 4;
  puVar1 = *(undefined1 **)(param_1 + 0xb0);
  *param_4 = 0xffc;
  *(undefined4 *)(param_1 + 0xb4) = 0x16;
  *puVar1 = param_2;
  return 0;
}


