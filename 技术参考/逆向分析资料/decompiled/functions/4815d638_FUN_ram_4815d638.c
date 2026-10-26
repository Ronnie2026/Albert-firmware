/* Firmware entry: 0x4815d638 */

void FUN_ram_4815d638(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = crc32_le(0xffffffff,param_1,4);
  uVar1 = crc32_le(uVar1,param_1 + 8,0x10);
  crc32_le(uVar1,param_1 + 0x18,8);
  return;
}


