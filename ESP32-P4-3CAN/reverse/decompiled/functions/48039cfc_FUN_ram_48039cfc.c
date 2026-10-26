/* Firmware entry: 0x48039cfc */

bool FUN_ram_48039cfc(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_e30 [16];
  undefined4 local_e20 [483];
  undefined4 uStack_694;
  undefined1 uStack_654;
  undefined1 local_62c;
  int local_628;
  undefined1 local_624;
  undefined1 local_623;
  undefined1 local_622;
  undefined1 local_621;
  undefined1 local_620;
  undefined1 local_61f;
  undefined1 local_61e;
  undefined1 local_61d;
  uint local_36c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff61940,0xffffffff);
  puVar8 = &DAT_ram_4ff61a00;
  puVar7 = local_e20;
  do {
    uVar2 = puVar8[1];
    uVar4 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar2;
    puVar7[2] = uVar4;
    puVar7[3] = uVar6;
    puVar8 = puVar8 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar8 != (undefined4 *)&DAT_ram_4ff62800);
  FUN_ram_4ff3ee10(&DAT_ram_4ff61940);
  FUN_ram_4802b80a(param_1,0);
  FUN_ram_4802ad46(param_1,&DAT_ram_481c4164);
  FUN_ram_4802a8a8(auStack_e30,"P1.6.4");
  FUN_ram_4802f236(param_1,"firmwareVersion",auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"uptime");
  FUN_ram_4802aa44(auStack_e30,uStack_694,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"dasAutopilotState");
  FUN_ram_4802a928(auStack_e30,uStack_654,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"dasStatusFresh");
  if (local_36c < 0x1f5) {
    pcVar5 = "true";
  }
  else {
    pcVar5 = "false";
  }
  FUN_ram_4802af2c(param_1,pcVar5);
  if ((local_628 == 0) || (iVar3 = FUN_ram_48025ba6(), 0x9c4 < (uint)(iVar3 - local_628))) {
    local_62c = 0xff;
  }
  FUN_ram_4802f022(param_1,"gatewayAutopilotConfig");
  FUN_ram_4802a9b8(auStack_e30,local_62c,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"handsOnState");
  FUN_ram_4802a928(auStack_e30,local_624,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"hw3FollowDistance");
  FUN_ram_4802a928(auStack_e30,local_623,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"hw3EffectiveStrategy");
  FUN_ram_4802a928(auStack_e30,local_622,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"hw3AutomaticStrategy");
  FUN_ram_4802a928(auStack_e30,local_621,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"hw3StrategySource");
  FUN_ram_4802a928(auStack_e30,local_620,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"v14AutomaticDrivingProfile");
  FUN_ram_4802a928(auStack_e30,local_61f,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"v14EffectiveDrivingProfile");
  FUN_ram_4802a928(auStack_e30,local_61e,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802f022(param_1,"v14DrivingProfileSource");
  FUN_ram_4802a928(auStack_e30,local_61d,10);
  FUN_ram_4802ae48(param_1,auStack_e30);
  FUN_ram_4802a59e(auStack_e30);
  FUN_ram_4802af5a(param_1,0x7d);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    return 2 < (*(byte *)((int)param_1 + 0xf) & 0x7f);
  }
  bVar1 = false;
  if (*param_1 != 0) {
    bVar1 = 2 < (uint)param_1[2];
  }
  return bVar1;
}


