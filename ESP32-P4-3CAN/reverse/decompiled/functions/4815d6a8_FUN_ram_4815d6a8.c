/* Firmware entry: 0x4815d6a8 */

void FUN_ram_4815d6a8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
  }
  crc32_le(uVar1,param_1,param_2);
  return;
}


