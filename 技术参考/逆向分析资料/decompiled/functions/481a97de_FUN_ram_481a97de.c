/* Firmware entry: 0x481a97de */

undefined4 FUN_ram_481a97de(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 == 0) {
    pcVar1 = "free";
  }
  else {
    pcVar1 = "used";
  }
  FUN_ram_4819aaa0("\t%p %s size: %x (%p)\n",param_1,pcVar1,param_2,param_1 + -8);
  return 1;
}


