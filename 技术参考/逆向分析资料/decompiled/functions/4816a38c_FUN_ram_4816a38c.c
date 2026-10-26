/* Firmware entry: 0x4816a38c */

void FUN_ram_4816a38c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48176a1a(*(int *)(param_1 + 0x40) + 0x150);
  FUN_ram_481769e8(*(int *)(param_1 + 0x40) + 0x150);
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = FUN_ram_4817697e(9);
  iVar1 = FUN_ram_48176b18(iVar1 + 0x150,uVar2,0);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_48176bfe(*(int *)(param_1 + 0x40) + 0x150), iVar1 == 0)) {
    FUN_ram_48176a1a(*(int *)(param_1 + 0x40) + 0x15c);
    FUN_ram_481769e8(*(int *)(param_1 + 0x40) + 0x15c);
    iVar1 = *(int *)(param_1 + 0x40);
    uVar2 = FUN_ram_4817697e(10);
    iVar1 = FUN_ram_48176b18(iVar1 + 0x15c,uVar2,0);
    if (iVar1 == 0) {
      FUN_ram_48176bfe(*(int *)(param_1 + 0x40) + 0x15c);
      return;
    }
  }
  return;
}


