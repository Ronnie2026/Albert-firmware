/* Firmware entry: 0x481a95e2 */

void FUN_ram_481a95e2(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[1] = param_1[1] & 0xffffffdf | 2;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
  return;
}


