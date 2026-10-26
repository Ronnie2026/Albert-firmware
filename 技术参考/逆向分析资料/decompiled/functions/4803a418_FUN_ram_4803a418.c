/* Firmware entry: 0x4803a418 */

void FUN_ram_4803a418(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *param_2;
  FUN_ram_4802f022(param_1,"source");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[1];
  FUN_ram_4802f022(param_1,"eligible");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[2];
  FUN_ram_4802f022(param_1,"noChange");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[3];
  FUN_ram_4802f022(param_1,"offered");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[4];
  FUN_ram_4802f022(param_1,"superseded");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[5];
  FUN_ram_4802f022(param_1,"expired");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[6];
  FUN_ram_4802f022(param_1,"rejected");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[7];
  FUN_ram_4802f022(param_1,"accepted");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[8];
  FUN_ram_4802f022(param_1,"terminalOk");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[9];
  FUN_ram_4802f022(param_1,"terminalFail");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[10];
  FUN_ram_4802f022(param_1,"terminalUnknown");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[0xb];
  FUN_ram_4802f022(param_1,"lastSourceUs");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[0xd];
  FUN_ram_4802f022(param_1,"lastOfferUs");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[0xe];
  FUN_ram_4802f022(param_1,"lastAcceptanceObservedUs");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar3 = param_2[0xf];
  FUN_ram_4802f022(param_1,"lastAcceptedUs");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  cVar1 = *(char *)(param_2 + 0x11);
  FUN_ram_4802f022(param_1,"lastAcceptedUsValid");
  if (cVar1 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar2);
  uVar3 = param_2[0x10];
  FUN_ram_4802f022(param_1,"lastTerminalUs");
  FUN_ram_4802aa44(auStack_20,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  return;
}


