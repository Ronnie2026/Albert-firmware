/* Firmware entry: 0x4803e59c */

void FUN_ram_4803e59c(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_2;
  FUN_ram_4802f022(param_1,"valid");
  if (iVar2 == 0) {
    pcVar1 = "false";
  }
  else {
    pcVar1 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar1);
  if (*param_2 != 0) {
    FUN_ram_4802f022(param_1,"record");
    FUN_ram_4802a8a8(auStack_20,&DAT_ram_481c4164);
    FUN_ram_4803df22(auStack_20,param_2 + 1);
    FUN_ram_4802af5a(auStack_20,0x7d);
    FUN_ram_4802ae48(param_1,auStack_20);
    FUN_ram_4802a59e(auStack_20);
  }
  return;
}


