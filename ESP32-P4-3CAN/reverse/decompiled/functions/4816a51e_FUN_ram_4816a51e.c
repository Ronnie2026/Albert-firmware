/* Firmware entry: 0x4816a51e */

undefined4 FUN_ram_4816a51e(int param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (char *)0x0) {
    pcVar4 = *(char **)(param_1 + 200);
    if ((pcVar4 != (char *)0x0) && (pcVar4 != "")) {
      sVar1 = strlen(pcVar4);
      FUN_ram_48178b14(pcVar4,sVar1);
    }
    *(undefined1 **)(param_1 + 200) = &DAT_ram_481df390;
  }
  else {
    sVar1 = strlen(param_2);
    if (0xff < sVar1) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffff8f00;
    }
    pcVar4 = *(char **)(param_1 + 200);
    if (pcVar4 != (char *)0x0) {
      if (pcVar4 != "") {
        sVar2 = strlen(pcVar4);
        FUN_ram_48178b14(pcVar4,sVar2);
      }
      *(undefined4 *)(param_1 + 200) = 0;
    }
    iVar3 = thunk_FUN_ram_4817b126(1,sVar1 + 1);
    *(int *)(param_1 + 200) = iVar3;
    if (iVar3 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffff8100;
    }
    FUN_ram_4ff45158(iVar3,param_2,sVar1);
    *(undefined1 *)(*(int *)(param_1 + 200) + sVar1) = 0;
  }
  return 0;
}


