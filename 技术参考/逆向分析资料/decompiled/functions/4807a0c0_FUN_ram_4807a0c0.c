/* Firmware entry: 0x4807a0c0 */

void FUN_ram_4807a0c0(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    uVar1 = param_1[2];
    if ((uVar1 <= (uint)param_1[1]) && (param_3 <= param_1[1] - uVar1)) {
      if ((char)param_1[3] == '\0') {
        FUN_ram_4ff45158(*param_1 + uVar1);
      }
      else {
        FUN_ram_4ff45158(param_2,*param_1 + uVar1);
      }
      param_1[2] = param_1[2] + param_3;
      return;
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}


