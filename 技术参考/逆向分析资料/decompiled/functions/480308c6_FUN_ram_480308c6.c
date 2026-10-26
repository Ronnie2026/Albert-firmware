/* Firmware entry: 0x480308c6 */

void FUN_ram_480308c6(undefined4 *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(*(int *)*param_1 + 0xb20,0xffffffff);
  iVar1 = *(int *)*param_1;
  *(int *)(param_1[1] + 0x18) = *(int *)(param_1[1] + 0x18) + 1;
  FUN_ram_4ff3ee10(iVar1 + 0xb20);
  return;
}


