/* Firmware entry: 0x4817ca28 */

undefined4 FUN_ram_4817ca28(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != param_1 + 0xe0);
  *(uint *)(param_1 + 0xd4) = (param_2 == 0) + 3;
  return 0;
}


