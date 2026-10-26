/* Firmware entry: 0x4819b6d0 */

undefined1 *
switchD_ram:4819b3b8::caseD_f
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    param_3 = param_5;
  }
  puVar1 = (undefined1 *)FUN_ram_4819b710(param_1,param_2,param_3);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_ram_481df390;
  }
  return puVar1;
}


