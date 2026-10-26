/* Firmware entry: 0x48039320 */

void FUN_ram_48039320(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 auStack_42 [2];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_40,&DAT_ram_481c4164);
  uVar3 = *param_2;
  FUN_ram_4802f022(auStack_40,"token");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[1];
  FUN_ram_4802f022(auStack_40,"epoch");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[2];
  FUN_ram_4802f022(auStack_40,"sourceGeneration");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[3];
  FUN_ram_4802f022(auStack_40,"configGeneration");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[4];
  FUN_ram_4802f022(auStack_40,"sourceAtUs");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[5];
  FUN_ram_4802f022(auStack_40,"requestAtUs");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[6];
  FUN_ram_4802f022(auStack_40,"submittedAtUs");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[7];
  FUN_ram_4802f022(auStack_40,"completedAtUs");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar3 = param_2[8];
  FUN_ram_4802f022(auStack_40,"errorFlags");
  FUN_ram_4802aa44(auStack_30,uVar3,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  uVar1 = *(undefined1 *)(param_2 + 9);
  FUN_ram_4802f022(auStack_40,"targetMask");
  FUN_ram_4802a928(auStack_30,uVar1,10);
  FUN_ram_4802ae48(auStack_40,auStack_30);
  FUN_ram_4802a59e(auStack_30);
  puVar2 = (undefined1 *)((int)param_2 + 0x25);
  FUN_ram_4802a8a8(auStack_30,(&PTR_DAT_ram_481c787c_ram_481f562c)[*(byte *)(param_2 + 0xb)]);
  FUN_ram_4802f236(auStack_40,"outcome",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  auStack_42[0] = 0;
  puVar4 = &local_50;
  do {
    puVar5 = (undefined1 *)((int)puVar4 + 2);
    FUN_ram_4819ad74(puVar4,3,&DAT_ram_481c3b70,*puVar2);
    puVar2 = puVar2 + 1;
    puVar4 = (undefined4 *)puVar5;
  } while (puVar5 != auStack_42);
  FUN_ram_4802a8a8(auStack_30,&local_50);
  FUN_ram_4802f236(auStack_40,"data",auStack_30);
  FUN_ram_4802a59e(auStack_30);
  FUN_ram_4802af5a(auStack_40,0x7d);
  FUN_ram_4802ae48(param_1,auStack_40);
  FUN_ram_4802a59e(auStack_40);
  return;
}


