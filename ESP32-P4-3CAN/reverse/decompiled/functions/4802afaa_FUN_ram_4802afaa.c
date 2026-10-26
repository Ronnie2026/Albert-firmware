/* Firmware entry: 0x4802afaa */

void FUN_ram_4802afaa(undefined4 param_1,undefined4 param_2)

{
  size_t sVar1;
  char acStack_20 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802c0f6(param_2,acStack_20,10);
  sVar1 = strlen(acStack_20);
  FUN_ram_4802ad72(param_1,acStack_20,sVar1);
  return;
}


