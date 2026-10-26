/* Firmware entry: 0x481a95be */

void FUN_ram_481a95be(undefined4 *param_1)

{
  uint *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (uint *)*param_1;
  *puVar1 = *puVar1 | 1;
  *puVar1 = *puVar1 | 2;
  *puVar1 = *puVar1 & 0xfffffffb;
  param_1[1] = param_1[1] & 0xffffffde;
  return;
}


