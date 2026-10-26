/* Firmware entry: 0x48065e9c */

void FUN_ram_48065e9c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_430 [1044];
  undefined1 uStack_1c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)*param_1;
  pcVar2 = *(code **)(*piVar3 + 0x10);
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(char *)((int)param_1 + 0x431) = (char)param_2;
  if (pcVar2 == FUN_ram_48064fb4) {
    if ((-1 < piVar3[1]) && ((char)piVar3[2] == '\0')) {
      *(undefined1 *)(piVar3 + 2) = 1;
      uVar4 = FUN_ram_4ff21a0a();
      iVar1 = __divdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
      piVar3[3] = iVar1;
    }
    FUN_ram_48065718(piVar3);
  }
  else {
    (*pcVar2)(piVar3);
  }
  (**(code **)(*(int *)param_1[1] + 0x14))((int *)param_1[1],param_1,param_2);
  (*(code *)param_1[3])(param_1[0x10d]);
  (*(code *)param_1[3])(param_1[0x10e]);
  (*(code *)param_1[3])(param_1[0x10f]);
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  memset(auStack_430,0,0x420);
  uStack_1c = 7;
  FUN_ram_4ff45158(param_1 + 4,auStack_430,0x41d);
  return;
}


