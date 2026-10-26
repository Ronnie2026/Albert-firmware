/* Firmware entry: 0x4803957e */

void FUN_ram_4803957e(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *param_2;
  FUN_ram_4802f022(param_1,"sequence");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar4 = param_2[1];
  FUN_ram_4802f022(param_1,"cycles");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)(param_2 + 8);
  FUN_ram_4802f022(param_1,"bus");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar4 = param_2[7];
  FUN_ram_4802f022(param_1,"id");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)((int)param_2 + 0x21);
  FUN_ram_4802f022(param_1,&DAT_ram_481c4478);
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  cVar2 = *(char *)((int)param_2 + 0x22);
  FUN_ram_4802f022(param_1,"sourceValid");
  if (cVar2 == '\0') {
    pcVar3 = "false";
  }
  else {
    pcVar3 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar3);
  uVar4 = param_2[2];
  FUN_ram_4802f022(param_1,"sourceUs");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar4 = param_2[3];
  FUN_ram_4802f022(param_1,"checkedAtUs");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar4 = param_2[4];
  FUN_ram_4802f022(param_1,"ageUs");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar4 = param_2[5];
  FUN_ram_4802f022(param_1,"windowUs");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar4 = param_2[6];
  FUN_ram_4802f022(param_1,"queueDepth");
  FUN_ram_4802aa44(auStack_20,uVar4,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)((int)param_2 + 0x23);
  FUN_ram_4802f022(param_1,"reason");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)(param_2 + 9);
  FUN_ram_4802f022(param_1,"stage");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)((int)param_2 + 0x25);
  FUN_ram_4802f022(param_1,"rxPriority");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  return;
}


