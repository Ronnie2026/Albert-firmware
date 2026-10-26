/* Firmware entry: 0x4802b058 */

undefined4 FUN_ram_4802b058(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_13 = 0;
  uStack_14 = param_2;
  iVar1 = FUN_ram_4802ad72(param_1,&uStack_14,1);
  if (iVar1 != 0) {
    return param_1;
  }
  FUN_ram_4802a5b4(param_1);
  return param_1;
}


