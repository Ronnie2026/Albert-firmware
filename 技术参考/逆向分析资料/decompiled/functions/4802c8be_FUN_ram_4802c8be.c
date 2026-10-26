/* Firmware entry: 0x4802c8be */

undefined2 FUN_ram_4802c8be(int param_1)

{
  undefined2 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0xb48,0xffffffff);
  uVar1 = *(undefined2 *)(param_1 + 0xb60);
  FUN_ram_4ff3ee10(param_1 + 0xb48);
  return uVar1;
}


