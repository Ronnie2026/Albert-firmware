/* Firmware entry: 0x48153820 */

void FUN_ram_48153820(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 0x12b8) & 1) == 0) {
    *(undefined4 *)(iVar1 + 0x12c4) = *(undefined4 *)(iVar1 + 0x1288);
    *(undefined4 *)(iVar1 + 0x12c8) = *(undefined4 *)(iVar1 + 0x128c);
  }
  if (*(int *)(iVar1 + 0x12c4) != 0 || *(int *)(iVar1 + 0x12c8) != 0) {
    if (*(int *)(iVar1 + 0x1294) == 0 && *(int *)(iVar1 + 0x1298) == 0) {
      FUN_ram_481561ee(iVar1 + 0x1260,"Could not determine local LL address");
      return;
    }
    if ((*(int *)(iVar1 + 0x12c4) == *(int *)(iVar1 + 0x1294)) &&
       (*(int *)(iVar1 + 0x12c8) == *(int *)(iVar1 + 0x1298))) {
      pcVar3 = "local and remote LL addresses are equal";
    }
    else {
      iVar2 = FUN_ram_4814d084(iVar1,*(undefined4 *)(iVar1 + 0x1294),*(undefined4 *)(iVar1 + 0x1298)
                               ,*(undefined4 *)(iVar1 + 0x12c4),*(undefined4 *)(iVar1 + 0x12c8));
      iVar4 = *param_1;
      if (iVar2 != 0) {
        iVar2 = FUN_ram_4814d0ea(iVar4);
        iVar4 = *param_1;
        if (iVar2 != 0) {
          FUN_ram_48151cd0(iVar4,0x57);
          *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | 0x10;
          return;
        }
      }
      pcVar3 = "Interface configuration failed";
      iVar1 = iVar4;
    }
    FUN_ram_481561ee(iVar1 + 0x1260,pcVar3);
    return;
  }
  FUN_ram_481561ee(iVar1 + 0x1260,"Could not determine remote LL address");
  return;
}


