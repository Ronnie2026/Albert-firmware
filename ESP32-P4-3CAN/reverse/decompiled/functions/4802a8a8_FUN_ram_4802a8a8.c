/* Firmware entry: 0x4802a8a8 */

void FUN_ram_4802a8a8(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_ram_4802a7f4(param_1,param_2,sVar1);
    return;
  }
  return;
}


