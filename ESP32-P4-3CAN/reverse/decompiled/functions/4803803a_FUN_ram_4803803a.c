/* Firmware entry: 0x4803803a */

void FUN_ram_4803803a(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *param_2;
  FUN_ram_4802f022(param_1,"sequence");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = param_2[1];
  FUN_ram_4802f022(param_1,"cycles");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = param_2[2];
  FUN_ram_4802f022(param_1,"sourceUs");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = param_2[3];
  FUN_ram_4802f022(param_1,"detail");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = param_2[4];
  FUN_ram_4802f022(param_1,"id");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)(param_2 + 5);
  FUN_ram_4802f022(param_1,"bus");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)((int)param_2 + 0x15);
  FUN_ram_4802f022(param_1,&DAT_ram_481c425c);
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)((int)param_2 + 0x16);
  FUN_ram_4802f022(param_1,"actor");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar1 = *(undefined1 *)((int)param_2 + 0x17);
  FUN_ram_4802f022(param_1,"flags");
  FUN_ram_4802a928(auStack_20,uVar1,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  return;
}


