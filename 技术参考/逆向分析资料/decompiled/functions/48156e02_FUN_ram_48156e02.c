/* Firmware entry: 0x48156e02 */

undefined4 FUN_ram_48156e02(int param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  pcVar2 = *(char **)(param_1 + 0x10);
  if (iVar1 != 0) {
    sVar3 = strlen(pcVar2);
    uVar4 = 0x5001;
    if (sVar3 < 0x21) {
      iVar5 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        uVar4 = 0x5002;
      }
      else {
        if (*(int *)(iVar1 + 0x58) != 0) {
          thunk_FUN_ram_4ff209c6();
        }
        pcVar2 = strdup(pcVar2);
        *(char **)(iVar1 + 0x58) = pcVar2;
        if (pcVar2 == (char *)0x0) {
          *(char **)(iVar5 + 0xd8) = "espressif";
          uVar4 = 0x101;
        }
        else {
          *(char **)(iVar5 + 0xd8) = pcVar2;
          uVar4 = 0;
        }
      }
    }
    return uVar4;
  }
  return 0x102;
}


