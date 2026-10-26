/* Firmware entry: 0x4ff20c76 */

void FUN_ram_4ff20c76(int param_1)

{
  uint *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = *(uint **)(param_1 + 8);
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc8,0xffffffff);
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[5]) {
    if (((*puVar1 & 1) == 0) &&
       (((uint *)puVar1[1] == (uint *)0x0 || ((*(uint *)puVar1[1] & puVar1[2]) != 0)))) {
      (*(code *)puVar1[3])(puVar1[4]);
    }
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dc8);
  return;
}


