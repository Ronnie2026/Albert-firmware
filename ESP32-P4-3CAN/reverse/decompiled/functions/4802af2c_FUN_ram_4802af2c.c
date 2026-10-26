/* Firmware entry: 0x4802af2c */

undefined4 FUN_ram_4802af2c(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    uVar2 = FUN_ram_4802ad72(param_1,param_2,sVar1);
    return uVar2;
  }
  return 0;
}


