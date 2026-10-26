/* Firmware entry: 0x4803e89c */

void FUN_ram_4803e89c(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"canFaultContext");
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  FUN_ram_4802f022(auStack_40,"previous");
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_481c4164);
  iVar2 = *param_2;
  FUN_ram_4802f022(auStack_30,"valid");
  if (iVar2 == 0) {
    pcVar1 = "false";
  }
  else {
    pcVar1 = "true";
  }
  FUN_ram_4802af2c(auStack_30,pcVar1);
  if (*param_2 != 0) {
    FUN_ram_4803e624(auStack_30,param_2);
  }
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802f022(auStack_40,"current");
  FUN_ram_4802ad46(auStack_30,&DAT_ram_481c4164);
  iVar2 = param_2[0xd9];
  FUN_ram_4802f022(auStack_30,"valid");
  if (iVar2 == 0) {
    pcVar1 = "false";
  }
  else {
    pcVar1 = "true";
  }
  FUN_ram_4802af2c(auStack_30,pcVar1);
  if (param_2[0xd9] != 0) {
    FUN_ram_4803e624(auStack_30,param_2 + 0xd9);
  }
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a59e(auStack_40);
  return;
}


