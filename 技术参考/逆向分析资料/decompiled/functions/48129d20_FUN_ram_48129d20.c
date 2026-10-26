/* Firmware entry: 0x48129d20 */

void FUN_ram_48129d20(int param_1,int param_2)

{
  uint *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)((param_1 + 0x8200410) * 4);
  *puVar1 = *puVar1 & 0xfffeffff | param_2 << 0x10;
  return;
}


