/* Firmware entry: 0x4803e624 */

void FUN_ram_4803e624(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(undefined4 *)(param_2 + 4);
  FUN_ram_4802f022(param_1,"format");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  FUN_ram_4802f022(param_1,"bootSequence");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  FUN_ram_4802f022(param_1,"faultReason");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  FUN_ram_4802f022(param_1,"fatalCore");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  FUN_ram_4802f022(param_1,"sourceCore");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  FUN_ram_4802f022(param_1,"sourceKind");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  FUN_ram_4802f022(param_1,"publicationSequence");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  FUN_ram_4802f022(param_1,"publicationTick");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  FUN_ram_4802f022(param_1,"observedTick");
  FUN_ram_4802aa44(auStack_20,uVar2,10);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  iVar3 = *(int *)(param_2 + 0x30);
  FUN_ram_4802f022(param_1,"ageKnown");
  if (iVar3 == 0) {
    FUN_ram_4802af2c(param_1,"false");
    iVar3 = *(int *)(param_2 + 0x30);
  }
  else {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    iVar3 = *(int *)(param_2 + 0x30);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 0x34);
    FUN_ram_4802f022(param_1,"contextValid");
  }
  else {
    FUN_ram_4802f278(param_1,"ageTicks",*(undefined4 *)(param_2 + 0x2c));
    iVar3 = *(int *)(param_2 + 0x34);
    FUN_ram_4802f022(param_1,"contextValid");
  }
  if (iVar3 == 0) {
    pcVar1 = "false";
  }
  else {
    pcVar1 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar1);
  FUN_ram_480306a2(param_1,param_2 + 0x38);
  if (*(int *)(param_2 + 0x34) == 0) {
    return;
  }
  FUN_ram_4802f022(param_1,"context");
  FUN_ram_4802a8a8(auStack_20,&DAT_ram_481c4164);
  FUN_ram_4803df22(auStack_20,param_2 + 0x58);
  FUN_ram_4802af5a(auStack_20,0x7d);
  FUN_ram_4802ae48(param_1,auStack_20);
  FUN_ram_4802a59e(auStack_20);
  return;
}


