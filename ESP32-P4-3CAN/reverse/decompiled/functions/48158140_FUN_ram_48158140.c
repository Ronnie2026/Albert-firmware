/* Firmware entry: 0x48158140 */

int FUN_ram_48158140(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  pcVar3 = *(char **)(iVar1 + 0x20);
  if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) && (*(int *)(pcVar3 + 4) == 1)) {
    iVar2 = FUN_ram_48159c82();
    if (iVar2 == 0) {
      FUN_ram_48157d0e(iVar1,3);
    }
    return iVar2;
  }
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 0xe7) & 1) != 0) {
      if ((*(uint *)(iVar1 + 0x54) & 2) == 0) {
        if ((*(uint *)(iVar1 + 0x54) & 1) != 0) {
          FUN_ram_481457a6(iVar2);
          thunk_FUN_ram_481451e8(iVar2);
          FUN_ram_48144df4(iVar2);
          puVar5 = *(undefined4 **)(iVar1 + 8);
          *(undefined4 *)(iVar1 + 0x3c) = 0;
          *puVar5 = 0;
          puVar5[2] = 0;
          puVar5[1] = 0;
        }
      }
      else {
        iVar4 = FUN_ram_4818cd8a(*(undefined4 *)(iVar1 + 0x24),iVar2);
        if (iVar4 == 0) {
          if (*(int *)(iVar1 + 0x40) != 2) {
            *(undefined4 *)(iVar1 + 0x40) = 0;
          }
        }
        else {
          *(undefined4 *)(iVar1 + 0x40) = 0;
        }
      }
      FUN_ram_48139dfe(iVar2);
      FUN_ram_48156f80(iVar1);
      FUN_ram_48157d0e(iVar1,3);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    FUN_ram_48156f80(iVar1);
  }
  return 0x5002;
}


