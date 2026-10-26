/* Firmware entry: 0x4802aa44 */

void FUN_ram_4802aa44(undefined4 *param_1,undefined4 param_2)

{
  size_t sVar1;
  char acStack_34 [44];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_ram_4802c0f6(param_2,acStack_34);
  sVar1 = strlen(acStack_34);
  FUN_ram_4802a7f4(param_1,acStack_34,sVar1);
  return;
}


