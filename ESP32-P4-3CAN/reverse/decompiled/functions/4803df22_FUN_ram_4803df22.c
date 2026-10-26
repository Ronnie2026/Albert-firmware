/* Firmware entry: 0x4803df22 */

void FUN_ram_4803df22(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *param_2;
  FUN_ram_4802f022(param_1,"format");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = *param_2;
  FUN_ram_4802f022(param_1,"traceCoreKnown");
  if (iVar3 - 1U < 2) {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    FUN_ram_4802f2aa(param_1,"traceCore",*param_2 != 1);
  }
  else {
    FUN_ram_4802af2c(param_1,"false");
  }
  iVar3 = param_2[1];
  FUN_ram_4802f022(param_1,"size");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[2];
  FUN_ram_4802f022(param_1,"sequence");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[3];
  FUN_ram_4802f022(param_1,"bootSequence");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[4];
  FUN_ram_4802f022(param_1,"captureKind");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[5];
  FUN_ram_4802f022(param_1,"captureCycles");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[6];
  FUN_ram_4802f022(param_1,"faultReason");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_480306a2(param_1,param_2 + 7);
  FUN_ram_4802f022(param_1,"event");
  FUN_ram_4802a8a8(auStack_70,&DAT_ram_481c4164);
  FUN_ram_4803957e(auStack_70,param_2 + 0xf);
  FUN_ram_4802af5a(auStack_70,0x7d);
  FUN_ram_4802ae48(param_1,auStack_70);
  iVar3 = param_2[0x19];
  FUN_ram_4802f022(param_1,"taskCount");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x1a];
  FUN_ram_4802f022(param_1,"taskEvents");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x1b];
  FUN_ram_4802f022(param_1,"taskOmitted");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802f022(param_1,"tasks");
  FUN_ram_4802af5a(param_1,0x5b);
  uVar6 = param_2[0x19];
  uVar7 = uVar6;
  if (0xc < uVar6) {
    uVar7 = 0xc;
  }
  if (uVar6 != 0) {
    piVar4 = param_2 + 0x28;
    uVar6 = 0;
    while( true ) {
      FUN_ram_4802a8a8(auStack_60,&DAT_ram_481c4164);
      iVar3 = piVar4[-5];
      FUN_ram_4802f022(auStack_60,"cycles");
      FUN_ram_4802aa44(auStack_50,iVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      cVar1 = *(char *)((int)piVar4 + -3);
      FUN_ram_4802f022(auStack_60,"cyclesValid");
      pcVar5 = "false";
      if (cVar1 != '\x06') {
        pcVar5 = "true";
      }
      FUN_ram_4802af2c(auStack_60,pcVar5);
      iVar3 = piVar4[-4];
      FUN_ram_4802f022(auStack_60,"taskAddress");
      FUN_ram_4802aa44(auStack_50,iVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      iVar3 = piVar4[-3];
      FUN_ram_4802f022(auStack_60,&DAT_ram_481c4204);
      FUN_ram_4802aa44(auStack_50,iVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      iVar3 = piVar4[-2];
      FUN_ram_4802f022(auStack_60,"detail");
      FUN_ram_4802aa44(auStack_50,iVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      iVar3 = piVar4[-1];
      FUN_ram_4802f022(auStack_60,"priority");
      FUN_ram_4802a928(auStack_50,(char)iVar3,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar2 = *(undefined1 *)((int)piVar4 + -3);
      FUN_ram_4802f022(auStack_60,&DAT_ram_481c425c);
      FUN_ram_4802a928(auStack_50,uVar2,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar2 = *(undefined1 *)((int)piVar4 + -2);
      FUN_ram_4802f022(auStack_60,"actor");
      FUN_ram_4802a928(auStack_50,uVar2,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar2 = *(undefined1 *)((int)piVar4 + -1);
      FUN_ram_4802f022(auStack_60,"waitType");
      FUN_ram_4802a928(auStack_50,uVar2,10);
      FUN_ram_4802ae48(auStack_60,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      FUN_ram_4802a8a8(auStack_50,piVar4);
      FUN_ram_4802f236(auStack_60,"name",auStack_50);
      FUN_ram_4802a59e(auStack_50);
      FUN_ram_4802af5a(auStack_60,0x7d);
      FUN_ram_4802ae48(param_1,auStack_60);
      uVar6 = uVar6 + 1;
      FUN_ram_4802a59e(auStack_60);
      piVar4 = piVar4 + 9;
      if (uVar7 <= uVar6) break;
      FUN_ram_4802af5a(param_1,0x2c);
    }
  }
  FUN_ram_4802af5a(param_1,0x5d);
  iVar3 = param_2[0x1c];
  FUN_ram_4802f022(param_1,"evidenceCount");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x1d];
  FUN_ram_4802f022(param_1,"evidenceEvents");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x1e];
  FUN_ram_4802f022(param_1,"evidenceOverwrites");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x1f];
  FUN_ram_4802f022(param_1,"evidenceOmitted");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x20];
  FUN_ram_4802f022(param_1,"correlation");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802f022(param_1,"evidence");
  FUN_ram_4802af5a(param_1,0x5b);
  uVar6 = param_2[0x1c];
  uVar7 = uVar6;
  if (8 < uVar6) {
    uVar7 = 8;
  }
  if (uVar6 != 0) {
    piVar4 = param_2 + 0x8f;
    uVar6 = 0;
    while( true ) {
      FUN_ram_4802a8a8(auStack_50,&DAT_ram_481c4164);
      FUN_ram_4803803a(auStack_50,piVar4);
      FUN_ram_4802af5a(auStack_50,0x7d);
      FUN_ram_4802ae48(param_1,auStack_50);
      FUN_ram_4802a59e(auStack_50);
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 6;
      if (uVar7 <= uVar6) break;
      FUN_ram_4802af5a(param_1,0x2c);
    }
  }
  FUN_ram_4802af5a(param_1,0x5d);
  iVar3 = param_2[0x21];
  FUN_ram_4802f022(param_1,"callbackCount");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0x22];
  FUN_ram_4802f022(param_1,"callbackMaxCycles");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0xbf];
  FUN_ram_4802f022(param_1,"checksum");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  iVar3 = param_2[0xc0];
  FUN_ram_4802f022(param_1,"commit");
  FUN_ram_4802aa44(auStack_50,iVar3,10);
  FUN_ram_4802ae48(param_1,auStack_50);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802a59e(auStack_70);
  return;
}


