/* Firmware entry: 0x480726d6 */

void FUN_ram_480726d6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_53c;
  undefined1 auStack_538 [4];
  undefined4 uStack_534;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_538,0,0x528);
  uStack_53c = 0;
  uStack_534 = 1;
  FUN_ram_48071b5e(param_1,param_2,auStack_538,&uStack_53c);
  return;
}


