/* Firmware entry: 0x4815d670 */

void FUN_ram_4815d670(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = crc32_le(0xffffffff,param_1,1);
  uVar1 = crc32_le(uVar1,param_1 + 8,0x10);
  crc32_le(uVar1,param_1 + 3,1);
  return;
}


