/* Firmware entry: 0x48037d22 */

undefined4 FUN_ram_48037d22(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(param_1,&DAT_ram_481c4164);
  uVar1 = DAT_ram_4ff48984;
  FUN_ram_4802f022(param_1,"gearUssDistancePreset");
  FUN_ram_4802a928(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar2 = DAT_ram_4ff48986;
  FUN_ram_4802f022(param_1,"gearUssSdiBlockMax");
  FUN_ram_4802a970(auStack_30,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar2 = DAT_ram_4ff48988;
  FUN_ram_4802f022(param_1,"gearUssSdiCautionMax");
  FUN_ram_4802a970(auStack_30,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = (undefined1)DAT_ram_4ff4898a;
  FUN_ram_4802f022(param_1,"gearUssMinValidSdi");
  FUN_ram_4802a928(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = DAT_ram_4ff4898a._1_1_;
  FUN_ram_4802f022(param_1,"gearUssRadarBlockMaxRaw");
  FUN_ram_4802a928(auStack_30,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = DAT_ram_4ff4898c;
  FUN_ram_4802f022(param_1,"revision");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(param_1,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802a8a8(auStack_30,param_2);
  FUN_ram_4802f236(param_1,"persistence",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  if (param_3 != 0) {
    FUN_ram_4802a8a8(auStack_30,param_3);
    FUN_ram_4802f236(param_1,"error",auStack_30);
    FUN_ram_4802a59e(auStack_30);
  }
  FUN_ram_4802af5a(param_1,0x7d);
  return param_1;
}


