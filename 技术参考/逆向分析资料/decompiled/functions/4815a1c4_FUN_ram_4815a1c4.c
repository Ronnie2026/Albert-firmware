/* Firmware entry: 0x4815a1c4 */

undefined4 FUN_ram_4815a1c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_14 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_14);
  iVar2 = DAT_ram_4ff6d418;
  while( true ) {
    if (iVar2 == 0) {
      FUN_ram_4815d7f0(auStack_14);
      return 0x1107;
    }
    if (param_1 == *(int *)(iVar2 + 0xc)) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  uVar1 = (**(code **)(**(int **)(iVar2 + 8) + 0x28))();
  FUN_ram_4815d7f0(auStack_14);
  return uVar1;
}


