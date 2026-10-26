/* Firmware entry: 0x48156a56 */

undefined4 FUN_ram_48156a56(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  uVar2 = FUN_ram_48156848(*(undefined4 *)(param_1 + 0x10));
  *puVar1 = uVar2;
  return 0;
}


