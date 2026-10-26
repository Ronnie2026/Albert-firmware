/* Firmware entry: 0x4802afda */

undefined4 FUN_ram_4802afda(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_2 + 0xf) < '\0') {
    iVar1 = FUN_ram_4802ad72(param_1,param_2,*(byte *)((int)param_2 + 0xf) & 0x7f);
  }
  else {
    iVar1 = FUN_ram_4802ad72(param_1,*param_2,param_2[2]);
  }
  if (iVar1 != 0) {
    return param_1;
  }
  FUN_ram_4802a5b4(param_1);
  return param_1;
}


