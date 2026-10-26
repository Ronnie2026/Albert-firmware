/* Firmware entry: 0x480b21d6 */

void FUN_ram_480b21d6(int *param_1,undefined4 param_2,char *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar4 = 0;
  if (((param_4 != 0) && (bVar4 = 0, *param_3 != '\0')) && (bVar4 = 0, param_3[1] != '\0')) {
    if (param_3[2] == '\0') {
      bVar4 = 0;
      if (param_3[3] == '\0') {
        bVar4 = param_5 < 0x9c5 & (param_3[5] ^ 1U);
      }
    }
    else {
      bVar4 = 0;
    }
  }
  if ((char)param_1[10] != '\0') {
    if (((param_1[3] - 1U < 0xb) && (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) &&
       ((iVar2 = FUN_ram_4808c696(param_1), iVar2 != 0 && ((char)param_1[10] != '\0')))) {
      uVar1 = param_1[2];
      if ((uVar1 <= (uint)param_1[1]) && (1 < param_1[1] - uVar1)) {
        *(undefined1 *)(*param_1 + uVar1) = 0x7b;
        iVar2 = param_1[2];
        param_1[2] = iVar2 + 1;
        *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
        iVar2 = param_1[3];
        *(undefined1 *)((int)param_1 + iVar2 + 0x10) = 1;
        *(undefined1 *)((int)param_1 + iVar2 + 0x1c) = 1;
        param_1[3] = iVar2 + 1;
        goto LAB_ram_480b2216;
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_480b2216:
  FUN_ram_4808c2dc(param_1,"known",param_4);
  FUN_ram_4808c2dc(param_1,"connected",bVar4);
  if (param_4 == 0) {
    FUN_ram_4808c2dc(param_1,"available",0);
    FUN_ram_4808c2dc(param_1,"running",0);
    FUN_ram_4808c2dc(param_1,"recovering",0);
    FUN_ram_4808c2dc(param_1,"busOff",0);
    cVar3 = '\0';
  }
  else {
    FUN_ram_4808c2dc(param_1,"available",*param_3);
    FUN_ram_4808c2dc(param_1,"running",param_3[1]);
    FUN_ram_4808c2dc(param_1,"recovering",param_3[2]);
    FUN_ram_4808c2dc(param_1,"busOff",param_3[3]);
    cVar3 = param_3[5];
  }
  FUN_ram_4808c2dc(param_1,"userDisabled",cVar3);
  FUN_ram_480b2068(param_1,"inputAgeMs",param_5);
  FUN_ram_480b2068(param_1,"rawRxAgeMs",param_5);
  FUN_ram_480b2068(param_1,"activationQueueDepth",*(undefined4 *)(param_3 + 0x68));
  FUN_ram_480b2068(param_1,"activationMissed",*(undefined4 *)(param_3 + 100));
  FUN_ram_480b2068(param_1,"criticalMissed",*(undefined4 *)(param_3 + 0x70));
  FUN_ram_480b2068(param_1,"realtimeMissed",*(undefined4 *)(param_3 + 0x7c));
  FUN_ram_480b2068(param_1,"controlMissed",*(undefined4 *)(param_3 + 0xa0));
  FUN_ram_480b2068(param_1,"rxMissed",*(undefined4 *)(param_3 + 0xb4));
  FUN_ram_480b2068(param_1,"rxOverrun",*(undefined4 *)(param_3 + 0xb8));
  FUN_ram_480b2068(param_1,"terminalDrop",*(undefined4 *)(param_3 + 0x44));
  FUN_ram_480b2068(param_1,"p1SubmitReject",*(undefined4 *)(param_3 + 0x50));
  FUN_ram_480b2068(param_1,"p1SubmitBusy",*(undefined4 *)(param_3 + 0x54));
  FUN_ram_480b2068(param_1,"p1DeadlineExpired",*(undefined4 *)(param_3 + 0x58));
  FUN_ram_480b2068(param_1,"p1SourceStale",*(undefined4 *)(param_3 + 0x5c));
  FUN_ram_480b2068(param_1,"p1OverTarget",*(undefined4 *)(param_3 + 0x60));
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar1 = param_1[2];
    if ((uVar1 <= (uint)param_1[1]) && (1 < param_1[1] - uVar1)) {
      *(undefined1 *)(*param_1 + uVar1) = 0x7d;
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 1;
      *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


