/* Firmware entry: 0x4ff2bc94 */

void FUN_ram_4ff2bc94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = FUN_ram_4ff21a0a();
  uVar1 = __divdi3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  FUN_ram_4ff2bbcc(param_1,param_2,uVar1);
  return;
}


