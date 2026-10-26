/* Firmware entry: 0x48054344 */

undefined4 FUN_ram_48054344(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cStack_10c;
  char cStack_10b;
  char cStack_10a;
  char cStack_109;
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [120];
  char cStack_7c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_4803165c();
  uVar1 = FUN_ram_48025ba6();
  FUN_ram_48053f2a(auStack_f4,&DAT_ram_4ff6983c,uVar1);
  FUN_ram_4802a8a8(param_1,&DAT_ram_481c4164);
  cStack_10c = (char)uVar3;
  FUN_ram_4802f022(param_1,"enabled");
  if (cStack_10c == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar2);
  cStack_10b = (char)((ulonglong)uVar3 >> 8);
  FUN_ram_4802f022(param_1,"reverseWarningEnabled");
  if (cStack_10b == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar2);
  cStack_10a = (char)((ulonglong)uVar3 >> 0x10);
  FUN_ram_4802f022(param_1,"rearFogPilotEnabled");
  if (cStack_10a == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar2);
  cStack_109 = (char)((ulonglong)uVar3 >> 0x18);
  FUN_ram_4802f022(param_1,"reverseRearFogSteadyEnabled");
  if (cStack_109 == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar2);
  FUN_ram_4802f022(param_1,"mildDecelCx100");
  FUN_ram_4802a970(auStack_104,(uint)((ulonglong)uVar3 >> 0x20) & 0xffff,10);
  FUN_ram_4802ae48(param_1,auStack_104);
  FUN_ram_4802a59e(auStack_104);
  FUN_ram_4802f022(param_1,"hardDecelCx100");
  FUN_ram_4802a970(auStack_104,(short)((ulonglong)uVar3 >> 0x30),10);
  FUN_ram_4802ae48(param_1,auStack_104);
  FUN_ram_4802a59e(auStack_104);
  FUN_ram_4802f022(param_1,"rearFogPilotActive");
  if (cStack_7c == '\0') {
    pcVar2 = "false";
  }
  else {
    pcVar2 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar2);
  FUN_ram_4802af5a(param_1,0x7d);
  return param_1;
}


