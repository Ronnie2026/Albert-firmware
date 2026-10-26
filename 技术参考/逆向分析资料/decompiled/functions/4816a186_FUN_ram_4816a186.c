/* Firmware entry: 0x4816a186 */

int FUN_ram_4816a186(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_3c [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_481769e8(auStack_3c);
  iVar5 = *(int *)(param_1 + 0x3c);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x38);
  }
  if (param_6 == 0) {
    pcVar4 = "client finished";
  }
  else {
    pcVar4 = "server finished";
  }
  uVar1 = FUN_ram_48176d62(param_2);
  iVar2 = FUN_ram_48176b18(auStack_3c,uVar1,0);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_48176aa0(auStack_3c,param_2), iVar2 == 0)) &&
     (iVar2 = FUN_ram_48176caa(auStack_3c,param_3), iVar2 == 0)) {
    pcVar3 = *(code **)(*(int *)(param_1 + 0x40) + 0x20);
    (*pcVar3)(iVar5 + 0x38,0x30,pcVar4,param_3,param_4,param_5,0xc,pcVar3);
    FUN_ram_48178af2(param_3,param_4);
  }
  FUN_ram_48176a1a(auStack_3c);
  return iVar2;
}


