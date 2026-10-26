/* Firmware entry: 0x480b320a */

void FUN_ram_480b320a(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_480b2068(param_1,"id",*param_2);
  FUN_ram_480b2068(param_1,"startUnix",param_2[1]);
  FUN_ram_480b2068(param_1,"endUnix",param_2[2]);
  FUN_ram_480b2068(param_1,"durationSec",param_2[3]);
  iVar2 = FUN_ram_4808c696(param_1,"totalMeters");
  if (iVar2 == 0) {
LAB_ram_480b3272:
    iVar2 = FUN_ram_4808c696(param_1,"classifiedMeters");
    if (iVar2 == 0) goto LAB_ram_480b328c;
LAB_ram_480b33c0:
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar3 = FUN_ram_4819ad74(&local_40,0x20,&DAT_ram_481c48f4);
    if ((char)param_1[10] != '\0') {
      uVar6 = param_1[2];
      if ((uVar6 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar6)) {
        FUN_ram_4ff45158(*param_1 + uVar6,&local_40,uVar3);
        iVar2 = param_1[2];
        param_1[2] = uVar3 + iVar2;
        *(undefined1 *)(*param_1 + uVar3 + iVar2) = 0;
        goto LAB_ram_480b328c;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar2 = FUN_ram_4808c696(param_1,"fsdMeters");
    if (iVar2 != 0) goto LAB_ram_480b341a;
LAB_ram_480b32a6:
    iVar2 = FUN_ram_4808c696(param_1,"longestFsdMeters");
  }
  else {
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar3 = FUN_ram_4819ad74(&local_40,0x20,&DAT_ram_481c48f4);
    if ((char)param_1[10] != '\0') {
      uVar6 = param_1[2];
      if ((uVar6 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar6)) {
        FUN_ram_4ff45158(*param_1 + uVar6,&local_40,uVar3);
        iVar2 = param_1[2];
        param_1[2] = uVar3 + iVar2;
        *(undefined1 *)(*param_1 + uVar3 + iVar2) = 0;
        goto LAB_ram_480b3272;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar2 = FUN_ram_4808c696(param_1,"classifiedMeters");
    if (iVar2 != 0) goto LAB_ram_480b33c0;
LAB_ram_480b328c:
    iVar2 = FUN_ram_4808c696(param_1,"fsdMeters");
    if (iVar2 == 0) goto LAB_ram_480b32a6;
LAB_ram_480b341a:
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar3 = FUN_ram_4819ad74(&local_40,0x20,&DAT_ram_481c48f4);
    if ((char)param_1[10] != '\0') {
      uVar6 = param_1[2];
      if ((uVar6 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar6)) {
        FUN_ram_4ff45158(*param_1 + uVar6,&local_40,uVar3);
        iVar2 = param_1[2];
        param_1[2] = uVar3 + iVar2;
        *(undefined1 *)(*param_1 + uVar3 + iVar2) = 0;
        goto LAB_ram_480b32a6;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    iVar2 = FUN_ram_4808c696(param_1,"longestFsdMeters");
  }
  if (iVar2 != 0) {
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar3 = FUN_ram_4819ad74(&local_40,0x20,&DAT_ram_481c48f4);
    if ((char)param_1[10] != '\0') {
      uVar6 = param_1[2];
      if ((uVar6 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar6)) {
        FUN_ram_4ff45158(*param_1 + uVar6,&local_40,uVar3);
        iVar2 = param_1[2];
        param_1[2] = uVar3 + iVar2;
        *(undefined1 *)(*param_1 + uVar3 + iVar2) = 0;
        goto LAB_ram_480b32c0;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480b32c0:
  FUN_ram_4808c2dc(param_1,"incomplete",*(undefined1 *)(param_2 + 10));
  cVar1 = *(char *)((int)param_2 + 0x29);
  if (cVar1 == '\x01') {
    pcVar4 = "parked";
    uVar5 = 6;
  }
  else {
    if (cVar1 == '\x02') {
      FUN_ram_4808c96e(param_1,"state","ended",5);
      cVar1 = *(char *)((int)param_2 + 0x2a);
      goto joined_r0x480b3304;
    }
    if (cVar1 == '\0') {
      pcVar4 = "driving";
      uVar5 = 7;
    }
    else {
      pcVar4 = "interrupted";
      uVar5 = 0xb;
    }
  }
  FUN_ram_4808c96e(param_1,"state",pcVar4,uVar5);
  cVar1 = *(char *)((int)param_2 + 0x2a);
joined_r0x480b3304:
  if (cVar1 == '\x02') {
    pcVar4 = "reboot";
    uVar5 = 6;
  }
  else if (cVar1 == '\x03') {
    pcVar4 = "signal_gap";
    uVar5 = 10;
  }
  else if (cVar1 == '\x01') {
    pcVar4 = "parked";
    uVar5 = 6;
  }
  else {
    pcVar4 = "";
    uVar5 = 0;
  }
  FUN_ram_4808c96e(param_1,"endReason",pcVar4,uVar5);
  return;
}


