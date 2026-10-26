/* Firmware entry: 0x4ff2c886 */

undefined4 FUN_ram_4ff2c886(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff216e2(&DAT_ram_4ff6e0bc);
  uVar1 = FUN_ram_4ff219c4();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 0;
}


