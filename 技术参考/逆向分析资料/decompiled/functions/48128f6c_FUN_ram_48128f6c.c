/* Firmware entry: 0x48128f6c */

int FUN_ram_48128f6c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  iVar3 = 0;
  iVar2 = param_2;
  do {
    iVar2 = FUN_ram_48126a38(iVar1,iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
      uVar4 = FUN_ram_4802bf2e(param_2);
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      iVar3 = iVar3 + (int)uVar4;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return iVar3;
}


