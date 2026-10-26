/* Firmware entry: 0x48183d90 */

void FUN_ram_48183d90(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset((void *)(param_1 + 0x14),0,400);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_ram_481769e8(param_1);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0x14) {
    iVar2 = iVar1 * 0x14 + param_1;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(code **)(iVar2 + 0x14) = FUN_ram_481876c4;
    *(undefined4 *)(iVar2 + 0x20) = 0x20;
    *(undefined4 *)(iVar2 + 0x24) = 1;
    *(int *)(param_1 + 0x10) = iVar1 + 1;
  }
  return;
}


