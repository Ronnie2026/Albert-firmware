/* Firmware entry: 0x48037e9c */

void FUN_ram_48037e9c(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802f022(param_1,"publication");
  FUN_ram_4802a8a8(auStack_30,&DAT_ram_481c4164);
  iVar2 = *param_2;
  FUN_ram_4802f022(auStack_30,"available");
  if (iVar2 == 0) {
    pcVar1 = "false";
  }
  else {
    pcVar1 = "true";
  }
  FUN_ram_4802af2c(auStack_30,pcVar1);
  iVar2 = param_2[1];
  FUN_ram_4802f022(auStack_30,"sequence");
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar2 = param_2[2];
  FUN_ram_4802f022(auStack_30,&DAT_ram_481c4204);
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar2 = param_2[3];
  FUN_ram_4802f022(auStack_30,"ageTicks");
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar2 = param_2[4];
  FUN_ram_4802f022(auStack_30,"traceCore");
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar2 = param_2[5];
  FUN_ram_4802f022(auStack_30,"scope");
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar2 = param_2[6];
  FUN_ram_4802f022(auStack_30,"skipped");
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar2 = param_2[7];
  FUN_ram_4802f022(auStack_30,"maskedBodyMaxCycles");
  FUN_ram_4802aa44(auStack_20,iVar2,10);
  FUN_ram_4802ae48(auStack_30,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  FUN_ram_4802af5a(auStack_30,0x7d);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  return;
}


