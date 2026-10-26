/* Firmware entry: 0x4819e516 */

void FUN_ram_4819e516(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iStack_38;
  int aiStack_34 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = FUN_ram_4819e36a(param_1,&iStack_38);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  uVar5 = FUN_ram_4819e36a(param_2,aiStack_34);
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  iVar2 = (*(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10)) * 0x20 + (iStack_38 - aiStack_34[0])
  ;
  if (iVar2 < 1) {
    iVar1 = iVar2 * -0x100000 + iVar1;
  }
  else {
    iVar3 = iVar2 * 0x100000 + iVar3;
  }
  __divdf3((int)uVar4,iVar3,(int)uVar5,iVar1);
  return;
}


