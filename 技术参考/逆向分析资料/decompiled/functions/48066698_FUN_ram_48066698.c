/* Firmware entry: 0x48066698 */

void FUN_ram_48066698(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x4c);
  cVar1 = *(char *)(iVar2 * 0x1d40 + iVar5 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    iStack_3c = param_5;
    uStack_38 = param_4;
    auStack_34[0] = param_2;
    if ((*(code **)(param_1 + 0x28) != (code *)0x0) && (*(char *)(param_1 + 0x2c) == '\0')) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      (**(code **)(param_1 + 0x28))(auStack_34,&uStack_38,&iStack_3c);
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    iVar3 = iStack_3c;
    if (iStack_3c == 0) {
      iVar3 = 1;
    }
    iVar3 = FUN_ram_4ff206d8(iVar3,0x404);
    iVar2 = iVar2 * 0x1d40;
    iVar4 = iVar5 + iVar2;
    *(int *)(iVar4 + 0x1cdc) = iVar3;
    if (iVar3 == 0) {
      if (*(char *)(iVar4 + 0x44c) == '\0') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_48065e9c(iVar5 + iVar2 + 0x1c,7);
    }
    else {
      if (iStack_3c != 0) {
        FUN_ram_4ff45158(iVar3,uStack_38,iStack_3c);
        iVar3 = *(int *)(iVar4 + 0x1cdc);
      }
      iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40) * 0x1d40;
      if ((*(char *)(iVar2 + 0x44c) == '\0') || (*(char *)(iVar2 + 0x44c) == '\x06')) {
        return;
      }
      *(int *)(iVar2 + 0x1ce0) = iVar3;
      *(int *)(iVar2 + 0x1ce4) = iStack_3c;
      *(undefined4 *)(iVar2 + 0x1ce8) = 0;
      FUN_ram_48066484(param_1,auStack_34[0],param_3,iVar2,&LAB_ram_4802d3f2);
    }
  }
  return;
}


