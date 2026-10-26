/* Firmware entry: 0x4802b08e */

undefined4 FUN_ram_4802b08e(undefined4 param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  char acStack_14 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  utoa(param_2,acStack_14,10);
  sVar1 = strlen(acStack_14);
  iVar2 = FUN_ram_4802ad72(param_1,acStack_14,sVar1);
  if (iVar2 != 0) {
    return param_1;
  }
  FUN_ram_4802a5b4(param_1);
  return param_1;
}


