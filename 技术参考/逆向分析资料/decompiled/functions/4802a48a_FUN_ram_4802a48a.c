/* Firmware entry: 0x4802a48a */

undefined4 FUN_ram_4802a48a(undefined4 param_1,int *param_2)

{
  undefined1 auStack_34 [40];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(code **)(*param_2 + 0x1c) == (code *)&LAB_ram_4802a394) {
    FUN_ram_4802b98e(auStack_34,0x21,param_2 + 0x17,0x10);
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_2,auStack_34);
  }
  FUN_ram_4802a8a8(param_1,auStack_34);
  return param_1;
}


